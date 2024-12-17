
/**************************************************************************************************
    Filename:       prop_protocol.c
    Revised:
    Revision:

    Description:    This file contains the prop protocol sample application


**************************************************************************************************/

/*********************************************************************
    INCLUDES
*/
#include "rom_sym_def.h"
#include "rf_phy_driver.h"
#include "global_config.h"
#include "OSAL.h"
#include "OSAL_PwrMgr.h"
#include "log.h"
#include "timer.h"
#include "prop_protocol.h"
#include "ll.h"
#include "ll_hw_drv.h"
#include "clock.h"
#include "gpio.h"
#include "pwrmgr.h"
/*********************************************************************
    MACROS
*/
#define PPP_SET_SYNCWORD(x)                 PHY_REG_WT(0x4003004c,(x))
#define PPP_SET_CRC_SEED(x)                 subWriteReg(0x40030048,23,0,(x))
#define PPP_SET_WHITEN_SEED(x)              subWriteReg(0x40030048,31,24,(x))
#define PPP_GET_NEEDACK_BIT(x)              (x & 0x04)
#define PPP_GET_ACK_BIT(x)                  (x & 0x08)
#define PPP_GET_PID(x)                      (x & 0x03)


/*********************************************************************
    CONSTANTS
*/
#define PPP_RFPHY_TX_ONLY                   (0x00)
#define PPP_RFPHY_RX_ONLY                   (0x01)
#define PPP_RFPHY_TRX_ONLY                  (0x02)
#define PPP_RFPHY_RX_TXACK                  (0x03)
#define PPP_RFPHY_IDLE                      (0xFF)

#define LL_HW_MODE_STX                          (0x00)
#define LL_HW_MODE_SRX                          (0x01)
#define LL_HW_MODE_TRX                          (0x02)


#define PPP_HW_SCAN_DELAY                   (80)
#define PPP_HW_BB_DELAY                     (90)
#define PPP_HW_AFE_DELAY                    ( 8)
#define PPP_HW_PLL_DELAY                    (60)

#define DEFAULT_CRC_SEED                        (0x555555)

#define DEFAULT_WHITEN_SEED                     (0x37)
#define WHITEN_SEED_CH37                        (0x53)
#define WHITEN_SEED_CH38                        (0x33)
#define WHITEN_SEED_CH39                        (0x73)
#define WHITEN_OFF                              (0x00)

#define BLE_ADV_CHN37                           (02)
#define BLE_ADV_CHN38                           (26)
#define BLE_ADV_CHN39                           (80)


#define DEFAULT_SYNCWORD                        (0xed31d942)//(0x8e89bed6)

#define PPP_PKT_FMT_1M                      (0x01)
#define PPP_PKT_FMT_2M                      (0x02)

#define PPP_PKT_FMT_125K                    (0x21)
#define PPP_PKT_FMT_62K                     (0x41)
#define PPP_PKT_FMT_31K                     (0x81)



#define PPP_HW_MAX_RX_TO                    (20000)
#define DEF_PPP_SCAN_WINDOW                 (150000)

#define PPP_DATA_MAX_LENGTH                 (31)
#define PPP_RF_MAX_LENGTH                   (PPP_DATA_MAX_LENGTH+12)
#define PPP_RF_TXACK_PKT_LEN                (6)

#ifndef DEF_PPP_AUTOACK_SUPPORT
#define DEF_PPP_AUTOACK_SUPPORT 1
#endif

extern uint8 ll_hw_get_tr_mode(void);
extern volatile uint32 llWaitingIrq;

extern void rf_phy_get_pktFoot_fromPkt(uint32 pktFoot0, uint32 pktFoot1,
                                uint8* rssi, uint16* foff,uint8* carrSens);
extern void rf_phy_get_pktFoot_patch(uint8* rssi, uint16* foff,uint8* carrSens);
extern volatile uint8_t g_same_rf_channel_flag;

/*********************************************************************
    TYPE Define
*/
typedef struct pktCfg_s
{
    uint8_t     pktFmt;
    uint8_t     pduLen;
    uint8_t     wtSeed;
    uint8_t     crcFmt;
    uint32_t    crcSeed;
    uint32_t    syncWord;
} pktCfg_t;

typedef struct phyCtx_s
{
    uint8_t     Status;
    uint32_t    txIntv;
    uint32_t    rxIntv;
    uint8_t     rfChn;
    uint16_t    rxOnlyTO;
    uint16_t    rxAckTO;
    uint32_t    rxScanT0;
} phyCtx_t;


/*********************************************************************
    LOCAL VARIABLES
*/
uint8 PPP_TaskID; // Task ID for internal task/event processing
//volatile uint32 phyWaitingIrq = FALSE;
uint32 PHY_ISR_entry_time = 0;

uint8_t  phyBufRx[PPP_RF_MAX_LENGTH]__attribute__ ((aligned(4))) ;
uint8_t  phyBufTx[PPP_RF_MAX_LENGTH]__attribute__ ((aligned(4))) ;
static uint8_t s_pubAddr[6]= {0x03,0x76,0x00,0x88,0x62,0x36};
static uint8_t peer_addr[6]= {0x04,0x76,0x00,0x88,0x62,0x36};
uint8_t adv_buffer[PPP_DATA_MAX_LENGTH];
static uint32_t s_rf_crc=0xFFFFFFFF;
static uint32_t s_rf_lastcrc=0xFFFFFFFF;
static uint8_t s_rf_pid=0xFF;
static uint8_t s_rf_lastpid=0xFF;
static uint8_t advHead[2];
uint16 phyFoff=0;
uint8  phyCarrSens=0;
uint8  phyRssi=0;

static pktCfg_t s_pktCfg;
static phyCtx_t s_phy;
static uint8_t s_txOkFlag=0;
/*********************************************************************
    LOCAL FUNCTIONS
*/
void phy_rx_data_process(void);
int nos_timer_set(User_Timer_e timeId, uint32_t us);

static uint8_t phy_rx_data_check(void)
{
    if(s_phy.Status==PPP_RFPHY_RX_TXACK)
    {
        //process data check
        return TRUE;
    }
#if 0
    osal_set_event(PPP_TaskID,PPP_RX_DATA_PROCESS_EVT);
#else
    phy_rx_data_process();
#endif
    return 0;
}

void phy_set_channel(uint8 rfChnIdx)
{
    if(g_rfPhyFreqOffSet>=0)
	{
        PHY_REG_WT(0x400300b4, (g_rfPhyFreqOffSet<<16)+(g_rfPhyFreqOffSet<<8)+rfChnIdx);
	}
    else
	{
        PHY_REG_WT(0x400300b4, ((255+g_rfPhyFreqOffSet)<<16)+((255+g_rfPhyFreqOffSet)<<8)+(rfChnIdx-1) );
	}
}

void phy_hw_go(void)
{
    pcr_sw_reset2_srst_bbrx_n_setf(0);
    pcr_sw_reset2_srst_bbrx_n_setf(1);

    g_same_rf_channel_flag = TRUE;
    ll_hw_go0();
    g_same_rf_channel_flag = FALSE;
}


void phy_hw_stop(void)
{
    uint8_t cnt=0;
    ll_hw_set_rx_timeout(33);//will trigger ll_hw_irq=RTO

    while(llWaitingIrq)
    {
        WaitRTCCount(3);
        cnt++;

        if(cnt>10)
        {
            LOG("[PHY STOP ERR]\n");
            break;
        }
    };
}

void phy_hw_set_srx(uint16 rxTimeOutUs)
{
    ll_hw_set_rx_timeout(rxTimeOutUs);
    ll_hw_set_srx();
    // ll_hw_set_trx_settle(   PPP_HW_BB_DELAY,         // set BB delay
    //                         PPP_HW_AFE_DELAY,
    //                         PPP_HW_PLL_DELAY);        //RxAFE,PLL
}

void phy_hw_set_stx(void)
{
    ll_hw_set_stx();
    // ll_hw_set_trx_settle(   PPP_HW_BB_DELAY,         // set BB delay
    //                         PPP_HW_AFE_DELAY,
    //                         PPP_HW_PLL_DELAY);        //RxAFE,PLL
}

void phy_hw_set_trx(uint16 rxTimeOutUs)
{
    ll_hw_set_rx_timeout(rxTimeOutUs);
    ll_hw_set_trx();
    // ll_hw_set_trx_settle(   PPP_HW_BB_DELAY,         // set BB delay
    //                         PPP_HW_AFE_DELAY,
    //                         PPP_HW_PLL_DELAY);        //RxAFE,PLL
}

void phy_hw_timing_setting(void)
{
    ll_hw_set_tx_rx_release (10,     1);
    ll_hw_set_rx_tx_interval(       60);        //T_IFS=150us for BLE 1M
    ll_hw_set_tx_rx_interval(       66);        //T_IFS=150us for BLE 1M
    ll_hw_set_trx_settle    (57, 8, 52);        //TxBB,RxAFE,PL
}

void phy_hw_pktFmt_Config(pktCfg_t cfg)
{
    //baseband cfg
    rf_phy_bb_cfg(0x03&cfg.pktFmt);

    uint8_t lowrate =0;
    if(cfg.pktFmt>0x10)
        lowrate = 0x10|(cfg.pktFmt>>4);

    subWriteReg(0x40030120,20,16,lowrate);
    
    //pktfmt
    //crc
    ll_hw_set_crc_fmt(cfg.crcFmt,cfg.crcFmt);
    PPP_SET_CRC_SEED(cfg.crcSeed);
    ll_hw_ign_rfifo(LL_HW_IGN_CRC);

    //whiten
    PPP_SET_WHITEN_SEED(cfg.wtSeed);
    //syncword
    PPP_SET_SYNCWORD(cfg.syncWord);
}

void phy_rf_tx(void)
{
    phy_hw_stop();
    _HAL_CS_ALLOC_();HAL_ENTER_CRITICAL_SECTION();
    phy_hw_pktFmt_Config(s_pktCfg);
    phy_hw_timing_setting();
    phy_set_channel(s_phy.rfChn);

    if(s_phy.Status==PPP_RFPHY_TRX_ONLY)
        phy_hw_set_trx(s_phy.rxAckTO);
    else
        phy_hw_set_stx();

    ll_hw_rst_tfifo();
    ll_hw_rst_rfifo();
    set_max_length(PPP_RF_MAX_LENGTH);
    //need updata phyBufTx
    ll_hw_write_tfifo(phyBufTx,phyBufTx[1]+2);
    phy_hw_go();
    llWaitingIrq=TRUE;
    HAL_EXIT_CRITICAL_SECTION();
}
void phy_rf_rx(void)
{
    phy_hw_stop();
    _HAL_CS_ALLOC_();HAL_ENTER_CRITICAL_SECTION();
    phy_hw_pktFmt_Config(s_pktCfg);
    phy_hw_timing_setting();
    phy_set_channel(s_phy.rfChn);
    phy_hw_set_srx(s_phy.rxOnlyTO);
    ll_hw_rst_tfifo();
    ll_hw_rst_rfifo();
    set_max_length(PPP_RF_MAX_LENGTH);
    phy_hw_go();
    llWaitingIrq=TRUE;
    HAL_EXIT_CRITICAL_SECTION();
}
void phy_rx_data_process(void)
{
    uint8_t pduLen=0;

    pduLen=phyBufRx[1];
    
    if(osal_memcmp(&(phyBufRx[2]),peer_addr,6))
    {
        PRINT("-------------------------\n");
        PRINT("[PHY RX] [-%03ddbm %4dKHz %02d CH] ",phyRssi,phyFoff-512,s_phy.rfChn);

        for(uint8_t i=0; i<pduLen+2; i++)
            PRINT("%02x ",phyBufRx[i]);

        PRINT("\n");
    }
    osal_memset(&(phyBufRx[0]),0,8);
}

void phy_tx_buf_updata(uint8_t* adva,uint8_t* txHead,uint8_t* txPayload,uint8_t dlen)
{
    osal_memcpy(&(phyBufTx[0]),&(txHead[0]),2);          //copy tx header
    osal_memcpy(&(phyBufTx[2]),&(adva[0]),6);              //copy AdvA
    osal_memcpy(&(phyBufTx[8]),&(txPayload[0]),dlen);      //copy payload
    LOG("\n-----------------------------------------------\n");
    LOG("PHY BUF Tx Dump\n");

    for(uint8_t i=0; i<phyBufTx[1]+2; i++)
        LOG("%02x ",phyBufTx[i]);

    LOG("\n-----------------------------------------------\n");
}

void phy_rf_txack(void)
{
    uint32_t t0,t1,T2,delay;
    uint8_t dLen;
    uint8_t trigger=1;
    
    ll_hw_set_stx();


    t0=ll_sch_get_current_time();
    T2 = LL_SCH_TIME_DELTA(t0,PHY_ISR_entry_time);
    delay = 127-T2;
    trigger = (delay > 50 && delay < 127) ? 1:0; 
    ll_hw_set_trx_settle(   ((trigger) ? delay:60),         // set BB delay
                        PPP_HW_AFE_DELAY,
                        PPP_HW_PLL_DELAY);        //RxAFE,PLL
                        
                   
    if(trigger)                    
        phy_hw_go();
       
    ll_hw_rst_tfifo();
    {
        uint8_t rfRxPID;
        uint8_t rfTxAckBuf[PPP_RF_MAX_LENGTH];
        //setup RF AutoAck Pkt
        rfRxPID = PPP_GET_PID(phyBufRx[0]); //get PID
        rfTxAckBuf[0]= 0x08 | rfRxPID;    //pack type-flag and PID into 1st byte
        rfTxAckBuf[1]= PPP_RF_TXACK_PKT_LEN;
        osal_memcpy(&rfTxAckBuf[2],s_pubAddr,6);//20221020 ZONG: turn to send own addr
        dLen=rfTxAckBuf[1];
        ll_hw_write_tfifo(rfTxAckBuf,dLen+2);
    }
    if(trigger==0)
        phy_hw_go();
        
    t1=ll_sch_get_current_time();
    llWaitingIrq=TRUE;


    // s_phy.Status=PPP_RFPHY_RX_TXACK;

}

/*******************************************************************************
    @fn          PLUSPHY_IRQHandler

    @brief      Interrupt Request Handler for Link Layer

    input parameters

    @param       None.

    output parameters

    @param       None.

    @return      None
*/
void __ATTR_FUNC_RAM__(PLUSPHY_IRQHandler)(void);
void PLUSPHY_IRQHandler(void)
{
    uint8         mode;
    uint32_t      irq_status;
    //uint32_t      T2, delay;
    PHY_ISR_entry_time = ll_sch_get_current_time();
    irq_status = ll_hw_get_irq_status();

    if (!(irq_status & LIRQ_MD))          // only process IRQ of MODE DONE
    {
        ll_hw_clr_irq();                  // clear irq status
        return;
    }

    llWaitingIrq = FALSE;
    _HAL_CS_ALLOC_();HAL_ENTER_CRITICAL_SECTION();
    mode = ll_hw_get_tr_mode();

    // ===================   mode TRX process 1
    if (mode == LL_HW_MODE_STX  &&
            (s_phy.Status == PPP_RFPHY_TX_ONLY)
       )
    {
        //osal_set_event(PPP_TaskID,PPP_TX_DONE_EVT);
    }
    else if(mode == LL_HW_MODE_SRX  &&
            (s_phy.Status == PPP_RFPHY_RX_ONLY)
           )
    {
        rf_phy_get_pktFoot_patch(&phyRssi,&phyFoff,&phyCarrSens);

        if(irq_status & LIRQ_COK)
        {
            uint16_t pktLen;
            uint32_t pktFoot0, pktFoot1;
            ll_hw_read_rfifo(phyBufRx, &pktLen,&pktFoot0,&pktFoot1);
            rf_phy_get_pktFoot_fromPkt(pktFoot0,pktFoot1,
                                        &phyRssi,&phyFoff,&phyCarrSens);
            if(osal_memcmp(phyBufRx+2,peer_addr,6))    //20221020 ZONG: move addr check here, and check remote addr instead of local addr
            {
                if(DEF_PPP_AUTOACK_SUPPORT == 1)       //SRX:RX->TXACK
                {
                    if(!(PPP_GET_ACK_BIT(phyBufRx[0])) && (PPP_GET_NEEDACK_BIT(phyBufRx[0])))
                    {
                          phy_rf_txack();
                    }
                }
                else
                    phy_rx_data_check();
            }
        }

    }
    else if(mode == LL_HW_MODE_TRX  &&
            (s_phy.Status == PPP_RFPHY_TRX_ONLY)
           )
    {
        rf_phy_get_pktFoot_patch(&phyRssi,&phyFoff,&phyCarrSens);

        if(irq_status & LIRQ_COK)
        {
            uint16_t pktLen;
            uint32_t pktFoot0, pktFoot1;
            ll_hw_read_rfifo(phyBufRx, &pktLen,&pktFoot0,&pktFoot1);
            rf_phy_get_pktFoot_fromPkt(pktFoot0,pktFoot1,
                                        &phyRssi,&phyFoff,&phyCarrSens);

            if(osal_memcmp(phyBufRx+2,peer_addr,6))         //20221020 ZONG: move addr check here, and check remote addr instead of local addr
            {
                s_txOkFlag=1;
            }
            else
            {
                //wrong device, ignore
            }
        }
    }
    else if (mode == LL_HW_MODE_STX  &&
            (s_phy.Status == PPP_RFPHY_RX_ONLY)
       )
    {
        if(s_rf_lastpid != phyBufRx[0]&0x03)
        {
            //report rx data
            phy_rx_data_check();
        }
        
        s_rf_lastpid = phyBufRx[0]&0x03;
    }

    // post ISR process
    ll_hw_clr_irq();
    HAL_EXIT_CRITICAL_SECTION();
}

/*********************************************************************
    @fn      PropProtocol_Init

    @brief   Initialization function for the Simple BLE Peripheral App Task.
            This is called during initialization and should contain
            any application specific initialization (ie. hardware
            initialization/setup, table initialization, power up
            notificaiton ... ).

    @param   task_id - the ID assigned by OSAL.  This ID should be
                      used to send messages and set timers.

    @return  none
*/
void PropProtocol_Init(uint8 task_id)
{
    PPP_TaskID = task_id;
    //set phy irq handeler
    JUMP_FUNCTION_SET(V4_IRQ_HANDLER,(uint32_t)&PLUSPHY_IRQHandler);
    // read flash driectly becasue HW has do the address mapping for read Flash operation
    //uint8_t* p=(uint8*)0x11004000;
    // uint8_t p[6]={0x01,0x02,0x03,0x04,0x05,0x06};
    // s_pubAddr[3] = p[0];
    // s_pubAddr[2] = p[1];
    // s_pubAddr[1] = p[2];
    // s_pubAddr[0] = p[3];
    // s_pubAddr[5] = p[4];
    // s_pubAddr[4] = p[5];

    //init tx buf
    osal_memset(phyBufTx,0,PPP_RF_MAX_LENGTH);   
    osal_memset(adv_buffer,0,PPP_DATA_MAX_LENGTH);   

    // config tx buf
    //adv buffer init
    {
        adv_buffer[0] = 0x02;
        adv_buffer[1] = 0x01;
        adv_buffer[2] = 0x06;
        adv_buffer[3] = 0x1B;
        adv_buffer[4] = 0xFF;
        adv_buffer[5] = 0x04;
        adv_buffer[6] = 0x05;
        adv_buffer[7] = 0x01;
        adv_buffer[8] = 0x02;
        adv_buffer[9] = 0x03;
        adv_buffer[10] = 0xcc; //
        adv_buffer[11] = 0x00; //
        adv_buffer[12] = 0x03; //
        adv_buffer[13] = 0xaa; //
        adv_buffer[14] = 0x00; //
        adv_buffer[15] = 0x93; //
        adv_buffer[16] = 0xaa; //
        adv_buffer[17] = 0x67; //
        adv_buffer[18] = 0xF7;
        adv_buffer[19] = 0xDB;
        adv_buffer[20] = 0x34;
        adv_buffer[21] = 0xC4;
        adv_buffer[22] = 0x03;
        adv_buffer[23] = 0x8E;
        adv_buffer[24] = 0x5C;
        adv_buffer[25] = 0x0B;
        adv_buffer[26] = 0xAA;
        adv_buffer[27] = 0x97;
        adv_buffer[28] = 0x30;
        adv_buffer[29] = 0x56;
        adv_buffer[30] = 0xE6;
        advHead[0]= 0x00;
        advHead[1]= (PPP_DATA_MAX_LENGTH+6);
        //tx buf date update
        phy_tx_buf_updata(s_pubAddr,advHead,adv_buffer,PPP_DATA_MAX_LENGTH);
    }
    //phy pktfmt config
    s_phy.Status        =   PPP_RFPHY_IDLE;
    s_phy.txIntv        =   100;//ms
    s_phy.rxIntv        =   200;//ms
    s_phy.rxAckTO       =   500;//us
    s_phy.rxOnlyTO      =   50*1000;//us
    s_phy.rfChn         =   BLE_ADV_CHN37;//26;//
    s_pktCfg.pktFmt     =   PPP_PKT_FMT_1M;//PPP_PKT_FMT_125K;
    s_pktCfg.pduLen     =   PPP_DATA_MAX_LENGTH+6;
    s_pktCfg.crcFmt     =   LL_HW_CRC_BLE_FMT;
    s_pktCfg.crcSeed    =   DEFAULT_CRC_SEED;
    s_pktCfg.wtSeed     =   WHITEN_SEED_CH37;//DEFAULT_WHITEN_SEED;
    s_pktCfg.syncWord   =   DEFAULT_SYNCWORD;
    //VOID osal_start_timerEx(PPP_TaskID, PPP_PERIODIC_TX_EVT, 1000);
    //VOID osal_start_timerEx(PPP_TaskID, PPP_PERIODIC_RX_EVT, 2500);
    LOG("[PHY] init done %d rfchn%d SW[%8x] CRC[%d %8x] WT[%2x]\n"\
        ,s_phy.Status,s_phy.rfChn,s_pktCfg.syncWord,s_pktCfg.crcFmt, s_pktCfg.crcSeed,s_pktCfg.wtSeed);
}

#if 0
static void process_rx_done_evt(void)
{
    /**
        37->38->39 scan channel
    */
    uint32_t t0=ll_sch_get_current_time();

    if(LL_SCH_TIME_DELTA(t0, s_phy.rxScanT0)<s_phy.rxOnlyTO)
    {
        phy_rf_rx();
        return;
    }
    else
    {
        //update rx scan time stamp on next chn
        s_phy.rxScanT0 = t0;
    }

    if(s_phy.rfChn==BLE_ADV_CHN37)
    {
        s_phy.rfChn = BLE_ADV_CHN38;
        s_pktCfg.wtSeed = WHITEN_SEED_CH38;
        phy_rf_rx();
    }
    else if(s_phy.rfChn==BLE_ADV_CHN38)
    {
        s_phy.rfChn = BLE_ADV_CHN39;
        s_pktCfg.wtSeed = WHITEN_SEED_CH39;
        phy_rf_rx();
    }
    else if(s_phy.rfChn==BLE_ADV_CHN39)
    {
        s_phy.Status = PPP_RFPHY_IDLE;
    }
}

static void process_tx_done_evt(void)
{
    /**
        37->38->39 adv channel
    */
    if(s_phy.rfChn==BLE_ADV_CHN37)
    {
        s_phy.rfChn = BLE_ADV_CHN38;
        s_pktCfg.wtSeed = WHITEN_SEED_CH38;
        phy_rf_tx();
    }
    else if(s_phy.rfChn==BLE_ADV_CHN38)
    {
        s_phy.rfChn = BLE_ADV_CHN39;
        s_pktCfg.wtSeed = WHITEN_SEED_CH39;
        phy_rf_tx();
    }
    else if(s_phy.rfChn==BLE_ADV_CHN39)
    {
        s_phy.Status = PPP_RFPHY_IDLE;
    }
}


/*********************************************************************
    @fn      PPP_ProcessEvent

    @brief   Application Task event processor.  This function
            is called to process all events for the task.  Events
            include timers, messages and any other user defined events.

    @param   task_id  - The OSAL assigned task ID.
    @param   events - events to process.  This is a bit map and can
                     contain more than one event.

    @return  events not processed
*/
uint16 PPP_ProcessEvent(uint8 task_id, uint16 events)
{
    VOID task_id;

    if (events & PPP_PERIODIC_TX_EVT)
    {
        if(s_phy.Status==PPP_RFPHY_IDLE)
        {
            s_phy.Status = PPP_RFPHY_TX_ONLY;
            s_phy.rfChn = BLE_ADV_CHN37;
            s_pktCfg.wtSeed = WHITEN_SEED_CH37;
            phy_rf_tx();
            osal_start_timerEx(PPP_TaskID,PPP_PERIODIC_TX_EVT,s_phy.txIntv);
        }
        else
        {
            LOG("SKIP TX_EVT Current Stats %d\n",s_phy.Status);
            osal_start_timerEx(PPP_TaskID,PPP_PERIODIC_TX_EVT,20);
        }

        return(events ^ PPP_PERIODIC_TX_EVT);
    }

    if (events & PPP_PERIODIC_RX_EVT)
    {
        if(s_phy.Status==PPP_RFPHY_IDLE)
        {
            s_phy.Status = PPP_RFPHY_RX_ONLY;
            s_phy.rfChn = BLE_ADV_CHN37;
            s_phy.rxScanT0 = ll_sch_get_current_time();
            s_pktCfg.wtSeed = WHITEN_SEED_CH37;
            phy_rf_rx();
            osal_start_timerEx(PPP_TaskID,PPP_PERIODIC_RX_EVT,s_phy.rxIntv);
        }
        else
        {
            LOG("SKIP RX_EVT Current Stats %d\n",s_phy.Status);
            osal_start_timerEx(PPP_TaskID,PPP_PERIODIC_RX_EVT,20);
        }

        return(events ^ PPP_PERIODIC_RX_EVT);
    }

    if(events & PPP_RX_DATA_PROCESS_EVT)
    {
        phy_rx_data_process();
        return(events ^ PPP_RX_DATA_PROCESS_EVT);
    }

    if(events & PPP_TX_DONE_EVT)
    {
        process_tx_done_evt();
        return(events ^ PPP_TX_DONE_EVT);
    }

    if(events & PPP_RX_DONE_EVT)
    {
        process_rx_done_evt();
        return(events ^ PPP_RX_DONE_EVT);
    }

    if(events & PPP_TRX_DONE_EVT)
    {
        //TODO
        return(events ^ PPP_TRX_DONE_EVT);
    }

    return 0;
}
#endif
/*
    retry :  
        re try tx times, while not rx ack
    return cnt:
        0xFF -> tx fail
        other: retry time on last chan
*/
uint8_t phy_rf_tx_retry(uint8_t rfchn,uint8_t wtSeed,uint8_t retry)
{
    uint8_t cnt = 0;
    s_phy.rfChn = rfchn;
    s_pktCfg.wtSeed = wtSeed;
    while(1)
    {
        phy_rf_tx();
        while (llWaitingIrq == TRUE){};
        if(s_txOkFlag || cnt==retry)
            break;
        cnt++;
    } 
    
    if(s_txOkFlag==0)
        cnt = 0xff;

    s_txOkFlag=0;

    return cnt; 
}
void process_adv_event(void)
{
    if(DEF_PPP_AUTOACK_SUPPORT == 0)
        s_phy.Status = PPP_RFPHY_TX_ONLY;
    else
    {
        advHead[0] |= 0x04;  //needack bit
        s_phy.Status = PPP_RFPHY_TRX_ONLY;
        uint8_t lastpid = PPP_GET_PID(advHead[0]);
        s_rf_pid = (lastpid +1) & 0x03;
        advHead[0] = (advHead[0] & 0xFC) | s_rf_pid;
        osal_memcpy(&(phyBufTx[0]),&(advHead[0]),2);          //copy adv header
    }
    if(DEF_PPP_AUTOACK_SUPPORT == 0)
        s_phy.Status = PPP_RFPHY_TX_ONLY;
    else
        s_phy.Status = PPP_RFPHY_TRX_ONLY;

    uint8_t retry = 2;
    uint8_t ret = 0;

    uint8_t chanMap[]={BLE_ADV_CHN37,BLE_ADV_CHN38,BLE_ADV_CHN39};
    uint8_t wtSeed[] ={WHITEN_SEED_CH37,WHITEN_SEED_CH38,WHITEN_SEED_CH39};
    uint8_t i;
    for(i=0;i<sizeof(chanMap);i++)
    {
        ret=phy_rf_tx_retry(chanMap[i],wtSeed[i],retry);
        if(ret!=0xff)
            break;
    }
    LOG("tx ret %d i %d\n",ret,i);
    s_phy.Status = PPP_RFPHY_IDLE;
}

void process_scan_event(void)
{
    if(llWaitingIrq==TRUE){
        return;
    }
    
    if(s_phy.Status == PPP_RFPHY_IDLE )
    {
        return;
    }
    s_phy.Status = PPP_RFPHY_RX_ONLY;
    /**
        37->38->39 scan channel
    */
    uint32_t t0=ll_sch_get_current_time();

    if(LL_SCH_TIME_DELTA(t0, s_phy.rxScanT0)<DEF_PPP_SCAN_WINDOW)
    {
        phy_rf_rx();
        return;
    }
    else
    {
        //update rx scan time stamp on next chn
        s_phy.rxScanT0 = t0;
    }
    
    uint8_t chanMap[]={BLE_ADV_CHN37,BLE_ADV_CHN38,BLE_ADV_CHN39};
    uint8_t wtSeed[] ={WHITEN_SEED_CH37,WHITEN_SEED_CH38,WHITEN_SEED_CH39};
    uint8_t chanNum = sizeof(chanMap);
    static uint8_t chanIdx=0;
    
    s_phy.rfChn = chanMap[chanIdx];
    s_pktCfg.wtSeed = wtSeed[chanIdx];
    phy_rf_rx();
    chanIdx = (chanIdx+1)%chanNum;
    LOG("rx chn %d wt %x\n",chanMap[chanIdx],wtSeed[chanIdx]);
    
}

typedef enum
{	
	NOS_INIT        = 0,
	NOS_WAKEUP      = 1,
	NOS_SLEEP       = 2,
	NOS_EVT_ADV     = 3,
    NOS_EVT_SCAN    = 4,
    NOS_EVT_ID00    = 5
}NOS_STATS_e;

#define NOS_MSEC      (1000)
#define NOS_SEC       (1000000)
NOS_STATS_e nos_stats = NOS_INIT;

void nos_enter_sleep(uint32_t next)
{
    _HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();
    uint32_t temp1,temp2;
    if (llWaitingIrq) // Are all tasks in agreement to conserve
    {     // MCU sleep mode
        LOG_DEBUG("wait wfi return %d \n",llWaitingIrq);
        HAL_EXIT_CRITICAL_SECTION();
        __WFI();
        
        return;
    }
    else
    {
        nos_stats = NOS_WAKEUP;
        next = next - pGlobal_config[WAKEUP_ADVANCE]; // wakeup advance: consider HW delay, SW re-init time, ..., etc.
        if (next > pGlobal_config[MAX_SLEEP_TIME])    // consider slave latency, we may sleep up to 16s between 2 connection events
            next = pGlobal_config[MAX_SLEEP_TIME];

        // covert time to RTC ticks
        // RTC timer clock is 32768HZ, about 30.5us per tick
        // time / 30.5 = time * ( 1/32 + 1 / 512 - 1 / 2048 + 1/16384 - 1/65536 + 1/128K - 1/512K...)
        //             = time * ( 1/32 + 1 / 512 - 1 / 2048 + 1/16384 - 1/128K - 1/512K...) = 32766.3 * 10e-6
        temp1 = next >> 9;
        temp2 = next >> 11;
        next = next >> 5;
        next = next + temp1 - temp2 + (temp2 >> 3) - (temp2 >> 6) - (temp2 >> 8);
        // next = next + temp1 - temp2 + (temp2 >> 4);
        
        enterSleepProcess(next);
    }
}

// uint32 tcount;
// void Timer_1ms_ISR(uint8_t x)
// {
// 	tcount++;
// }
uint8_t mode;
void __ATTR_FUNC_RAM__(nos_loop)(void);
void nos_loop(void)
{
    mode = gpio_read(P12);
    static uint16_t txCnt = 0;
    if(nos_stats==NOS_INIT)
    {
        PropProtocol_Init(0);
        JUMP_FUNCTION_SET(APP_WAKEUP_PROCESS,(uint32_t)&nos_loop);
        nos_stats=NOS_WAKEUP;
    }
    else if(nos_stats == NOS_WAKEUP)
    {
        //call app wakeup process for HAL restore
        pwrmgr_wakeup_process();
    }
	
	// hal_timer_init(Timer_1ms_ISR);
	// int ret = nos_timer_set(AP_TIMER_ID_4,1000);
    while(1)
    {
        if (mode)
        {
            s_pubAddr[0] = 1;
            peer_addr[0] = 2;
            uint8_t dlen=8;
            adv_buffer[6] = txCnt&0xff;
            adv_buffer[7] = (txCnt>>8)&0xff;
            advHead[1]= dlen+6;
            phy_tx_buf_updata(s_pubAddr,advHead,adv_buffer,dlen);
            process_adv_event();
            txCnt++;
            // WaitMs(100);
            LOG_DEBUG("adv----cnt %d T %d \n", txCnt, rtc_get_counter());
            


            #if (1)
            if (txCnt > 10)
            {
                uint32_t tstFlg = aon_pm_pm_reg20_sleep_r1_getf();
                aon_pm_pm_reg20_sleep_r1_setf(tstFlg+1);
                if ((tstFlg&0x03) == 0x01)
                {
                pwroff_cfg_t pwr_wkp_cfg[] = {{P8, NEGEDGE}};
                    LOG_DEBUG("enter power off fast [%d]\n", tstFlg);
                    hal_pwrmgr_poweroff_warmup(pwr_wkp_cfg, sizeof(pwr_wkp_cfg) / sizeof(pwr_wkp_cfg[0]));
                }
                else if((tstFlg&0x03) == 0x02)
                {
                    pwroff_cfg_t pwr_wkp_cfg[] = {{P8, NEGEDGE}};
                    LOG_DEBUG("enter power off  [%d]\n", tstFlg);
                hal_pwrmgr_poweroff(pwr_wkp_cfg, sizeof(pwr_wkp_cfg) / sizeof(pwr_wkp_cfg[0]));
            }
                else
                {
                    LOG_DEBUG("hal sys rst [%d]\n", tstFlg);
                    hal_system_soft_reset();
                }
            }
            #endif

            nos_enter_sleep(100 * NOS_MSEC);
        }
        else
        {
            s_pubAddr[0] = 2;
            peer_addr[0] = 1;
            s_phy.Status = PPP_RFPHY_RX_ONLY;
            process_scan_event();
            // if(tcount >= 10000)
            // {
            //     tcount = 0;
            //     PRINT("R\n");
            // }
        }
    }


    LOG_DEBUG("nos_stats err stop!!!\n");
    while(1){};
    
}
/**************************************************************************************************
    @fn          main

    @brief       Start of application.

    @param       none

    @return      none
 **************************************************************************************************
*/
int app_main(void)
{
    nos_loop();
    return 0;
}
/*********************************************************************
*********************************************************************/

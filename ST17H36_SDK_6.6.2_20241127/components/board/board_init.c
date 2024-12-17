//#include <stdio.h>
#include "bus_dev.h"
#include "uart.h"
#include "gpio.h"
#include "clock.h"
#include "timer.h"
#include "ll.h"
#include "ll_def.h"
#include "rf_phy_driver.h"
#include "global_config.h"
#include "jump_function.h"

#include "ll_sleep.h"
#include "ll.h"
#include "ll_buf.h"
#include "ll_debug.h"
#include "ll_hw_drv.h"
#include "pwrmgr.h"
#include "mcu.h"
#include "OSAL_Tasks.h"
#include "gpio.h"
#include "spif.h"
#include "log.h"
#include "linkdb.h"
#include "version.h"
#include "watchdog.h"
#include "att.h"
#include "gattservapp.h"
#ifndef BLE_AT_ENABLE
#include "systick.h"
#endif

/*********************************************************************
   local variable
*/
__attribute__((aligned(4))) uint8_t bt_addr[6] = {0x35, 0x35, 0x35, 0x35, 0x71, 0x71};


/*********************************************************************
   extern
*/
extern void patch_slave(void);
extern void init_config(void);
extern void init_config_nos(void);
extern void ll_set_ble_mac_addr(uint32_t macAddr);
extern void _stack_bss_init(void);
extern void GATTServApp_InitContext(uint8 *attrValueBuf, attMsg_t *rspBuf);

/*********************************************************************
    OSAL LARGE HEAP CONFIG
*/
uint8      g_largeHeap[LARGE_HEAP_SIZE] __attribute__ ((aligned(4)));

#ifdef BLE_SIG
uint8 g_gatt_attrValue[ATT_MTU_SIZE-1];
attMsg_t g_gatt_rsp;
#define LINKDB_CBS	5
linkDBItem_t plinkDB[BLE_MAX_ALLOW_CONNECTION];
pfnLinkDBCB_t plinkCBs[LINKDB_CBS];
#endif

#ifdef BLE_ENABLE
extern void linkDB_InitContext( linkDBItem_t *linkDBs,pfnLinkDBCB_t *linkCB,uint8 cb_maxs);

#define   BLE_TX_PKT_BUFF_LEN                   (BLE_TX_PKT_LEN + 11)
					
#define   BLE_TX_PKT_BUF_SIZE                   (BLE_TX_PKT_BUFF_LEN + (sizeof(struct ll_pkt_desc) - 2))
					
					
#define   BLE_RX_PKT_BUFF_LEN                   (BLE_RX_PKT_LEN + 11)
					
#define   BLE_RX_PKT_BUF_SIZE                   (BLE_RX_PKT_BUFF_LEN + (sizeof(struct ll_pkt_desc) - 2))
					
#define   BLE_MAX_ALLOW_PER_CONNECTION          ( (BLE_MAX_ALLOW_PKT_PER_EVENT_TX * BLE_TX_PKT_BUF_SIZE*2) \
																	 +(BLE_MAX_ALLOW_PKT_PER_EVENT_RX * BLE_RX_PKT_BUF_SIZE)   \
																	 + BLE_TX_PKT_BUF_SIZE )
																	 
#define   BLE_CONN_BUF_SIZE                     (BLE_MAX_ALLOW_CONNECTION * BLE_MAX_ALLOW_PER_CONNECTION)

uint8	  g_pConnectionBuffer[BLE_CONN_BUF_SIZE] __attribute__ ((aligned(4)));
llConnState_t				pConnContext[BLE_MAX_ALLOW_CONNECTION];

#ifndef BLE_AT_ENABLE
#define   BLE_NONCONN_BUF_SIZE            (sizeof(struct buf_tx_desc) * 4)
#else
#define   BLE_NONCONN_BUF_SIZE            (sizeof(struct buf_tx_desc) * 3)
#endif
uint8            g_pNonConnBuffer[BLE_NONCONN_BUF_SIZE];




                        






#endif

static void hal_rfphy_init(void)
{
    //============config the txPower
    g_rfPhyTxPower  = RF_PHY_TX_POWER_0DBM ;
    //============config BLE_PHY TYPE
    g_rfPhyPktFmt   = PKT_FMT_BLE1M;
    //============config RF Frequency Offset
    g_rfPhyFreqOffSet   =RF_PHY_FREQ_FOFF_N180KHZ;
    //============config xtal 16M cap
    //XTAL16M_CAP_SETTING(0x09);
//    extern void hal_rfPhyFreqOff_Set(void);
//    hal_rfPhyFreqOff_Set();
//    XTAL16M_CURRENT_SETTING(0x03);

//	extern void hal_rom_code_ini(void);
//	hal_rom_code_ini();

	__ECLIC_EnableIRQ(r2_bb_sch_IRQn);
	__ECLIC_EnableIRQ(r2_bb_IRQn);
	
	NVIC_SetPriority(r2_bb_IRQn, IRQ_PRIO_REALTIME);
//	NVIC_SetPriority((IRQn_Type)TIM1_IRQn,  IRQ_PRIO_HIGH);     //ll_EVT
//	NVIC_SetPriority((IRQn_Type)TIM2_IRQn,  IRQ_PRIO_HIGH);     //OSAL_TICK
}

static void hal_flash_io_pull_up(void)
{
	// pull up flash io for low current
	extern spif_cfg_t g_spif_cfg;
    gpio_pull_set(g_spif_cfg.io0_pin,GPIO_PULL_UP);
    gpio_pull_set(g_spif_cfg.clk_pin,GPIO_PULL_UP);
    gpio_pull_set(g_spif_cfg.cs_pin,GPIO_PULL_UP);
}
static void hal_init(void)
{
    
	//========= low currernt setting IO init
	//========= pull all io to gnd by default, except P07,P15(keep floating)
//    aon_ioctl0_pack(3,0,3,0,/*p7*/0,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0); /*P0~P9*/
//	#warning "gpio ... "
//    aon_ioctl1_pack(3,0,3,0,3,0,3,0,/*p15*/0,0,3,0,3,0,3,0,3,0,3,0);/*P10~P19*/
	

//    DIG_LDO_CURRENT_SETTING(0x01);
//	pwrmgr_RAM_retention_set();
//    pwrmgr_LowCurrentLdo_enable();
#if(PMU_HIGH_LDO_DISABLE)
    // PMU_HIGH_LDO_ENABLE(0);
	uint32_t tmp = (*(volatile uint32_t *)(0x4000f0ec))&0xFFFFFF83;//[6:2]
	aon_pm_pm_reg21_set(tmp|((0x15)<<2));
#endif
 
	//clr io pending evt
 	aon_pm_pm_reg10_io_pending_clr_reg_setf(1);
    //P20 wakeup mask set 0 before sleep 
    aon_pm_pm_reg13_dig_ldo_trim_setf(0); 

	aon_pm_pm_reg15_retram0_en_setf(1);
	hal_pwrmgr_init();
	extern void otp_cache_init();
    otp_cache_init();

#ifdef DEF_HAS_FLASH 
	hal_flash_io_pull_up();
#endif

	clk_spif_ref_clk(SYS_CLK_DLL_32M);
    LOG_INIT();
	#if(PMU_HIGH_LDO_DISABLE)
	LOG("PMU_HIGH_LDO_DISENABLE")
	#endif
	// gpio_p6p20_patch(); //p6p20 wakeup source flag api, only use p6/p20 need use
	//gpio_init();
#ifndef BLE_AT_ENABLE
	gpio_init();
#if(CFG_SLEEP_MODE == PWR_MODE_SLEEP)
	systick_start(1, NULL);
#endif
#endif
}

static void hal_mem_init_config(void)
{
	#ifdef SLB_BOOT
	#else
    osal_mem_set_heap((osalMemHdr_t*)g_largeHeap, LARGE_HEAP_SIZE);
	#endif
    _stack_bss_init();
    #ifdef BLE_ENABLE
   	{
		LL_InitConnectContext(pConnContext, 
	                        g_pConnectionBuffer, 
	                        BLE_MAX_ALLOW_CONNECTION, 
	                        BLE_MAX_ALLOW_PKT_PER_EVENT_TX,
	                        BLE_MAX_ALLOW_PKT_PER_EVENT_RX,
	                        BLE_TX_PKT_BUFF_LEN,
	                        BLE_RX_PKT_BUFF_LEN);
		
	    
		struct buf_tx_desc *p;
	    p  = (struct buf_tx_desc *)g_pNonConnBuffer;
	    extern struct buf_tx_desc *g_tx_adv_buf;
	    extern struct buf_tx_desc *tx_scanRsp_desc;
	    extern struct buf_rx_desc *g_rx_adv_buf;
	    extern struct buf_tx_desc *g_tx_ci_buf;
	    g_tx_adv_buf        = p++;
	    tx_scanRsp_desc     = p++;
		#ifndef BLE_AT_ENABLE
		g_tx_ci_buf         = p++;
		#endif
	    g_rx_adv_buf        = (struct buf_rx_desc *)p;
#ifdef BLE_SIG		
        linkDB_InitContext( plinkDB,plinkCBs,LINKDB_CBS);
		GATTServApp_InitContext(&g_gatt_attrValue[0],&g_gatt_rsp);
#endif
    }
	#endif
    
}

void board_init()
{
	#if(1==CFG_WDT_ENABLE)
	hal_watchdog_config(WDG_4S);
	#endif
    #if (FLASH_PROTECT_FEATURE == 1)
    extern int hal_get_flash_info(void);
    hal_get_flash_info();
    #endif
	__enable_irq();

	extern void hal_rom_code_ini(void);
	

    hal_mem_init_config();

	init_config();

	#ifdef BLE_ENABLE
		
	#if ( HOST_CONFIG & CENTRAL_CFG ) 
		patch_master();
	#else
		#ifdef SMART_LINK
			patch_smartlink_slave();
		#else
		    patch_slave();
		#endif
	#endif
	#if (defined(BLE_AT_LONG_POCKET) && BLE_AT_LONG_POCKET)
	extern void patch_slave_at(void);
	patch_slave_at();
	#endif
	#endif
    hal_rfphy_init();
	hal_rom_code_ini();
    hal_init();
#ifdef DEF_HAS_FLASH
	ll_set_ble_mac_addr(0x11004000);
#else
	// ll_set_ble_mac_addr(  (uint32_t)bt_addr );
	ll_set_ble_mac_addr(0x200c0);
#endif
	
	#if(_DEF_DTM_BUILD_)
    rf_phy_dtm_ate();
	#endif
}
void board_init_nos()
{
	#if (1==CFG_WDT_ENABLE)
	hal_watchdog_config(WDG_4S);
	#endif
	__enable_irq();

	extern void hal_rom_code_ini(void);
	

    hal_mem_init_config();
	init_config_nos();
	hal_rfphy_init();
	hal_rom_code_ini();
    hal_init();
#ifdef DEF_HAS_FLASH
	ll_set_ble_mac_addr(0x11004000);
#else
	// ll_set_ble_mac_addr(  (uint32_t)bt_addr );
	ll_set_ble_mac_addr(0x200c0);
#endif

}




// this file define the call proxy of ROM function:
//

/*******************************************************************************
 * INCLUDES
 */
#include "bus_dev.h"

#include "otp.h"
//#include "efuse.h"
#include "OSAL_PwrMgr.h"
#include "ll_sleep.h"

#include "ll_def.h"
//#include "timer.h"
#include "ll_common.h"
#include "ll.h"
#include "hci_tl.h"
#include "pwrmgr.h"
#include "usb_hal_pcd.h"
#include "jump_function.h"
#include "rf_phy_driver.h"
#include "gap.h"
#include "att.h"
#include "mcu.h"
/*******************************************************************************
 * MACROS
 */



/*******************************************************************************
 * CONSTANTS
 */



/*******************************************************************************
 * Prototypes
 */


/*******************************************************************************
 * LOCAL VARIABLES
 */


/*********************************************************************
 * EXTERNAL VARIABLES

 */
extern bStatus_t GAPBondMgr_LinkEst0( uint16 connHandle, uint8 role );
extern uint8 GAPBondMgr_ProcessGAPMsg0( gapEventHdr_t *pMsg );
extern bStatus_t gattServerProcessMsgCB0( uint16 connHandle, attPacket_t *pPkt );
extern int xrand1(void);
extern int xsrand1(int seed);

/*******************************************************************************
 * Functions
 */

// ================= ll_hwItf.c
uint8 move_to_slave_function(void)
{
    typedef uint8 (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_MOVE_TO_SLAVE_FUNCTION));

	if (pFunc )
		return(pFunc());
    else
        return(move_to_slave_function0());
}

void LL_conn_event(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_CONN_EVENT));


	if (pFunc )
		pFunc();
    else
        LL_conn_event0();
}
llStatus_t llSetupAdv(void)
{
    typedef llStatus_t (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SETUP_ADV));

	if (pFunc )
		return pFunc();
    else
        return llSetupAdv0();
}


uint16 ll_generateTxBuffer(int txFifo_vacancy, uint16 *pSave_ptr)
{
    typedef uint16 (*my_function)(int, uint16 *);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_GENERATE_TX_BUFFER));

	if (pFunc )
		return pFunc(txFifo_vacancy, pSave_ptr);
    else
        return ll_generateTxBuffer0(txFifo_vacancy, pSave_ptr);
}

void ll_read_rxfifo(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_READ_RX_FIFO));

	if (pFunc )
		pFunc();
    else
        ll_read_rxfifo0();
}

//void ll_hw_read_tfifo_rtlp(void)
//{
//    typedef void (*my_function)(void);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_READ_TX_FIFO_RTLP));
//
//	if (pFunc )
//		pFunc();
//    else
//        ll_hw_read_tfifo_rtlp0();
//}

int ll_hw_read_tfifo_packet(uint8 *pkt)
{
    typedef int (*my_function)(uint8 *);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_READ_TX_FIFO_PKT));

	if (pFunc )
		return pFunc(pkt);
    else
        return ll_hw_read_tfifo_packet0(pkt);
}

void ll_hw_process_RTO(uint32 ack_num)
{
    typedef void (*my_function)(uint32);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_HW_PROCESS_RTO));

	if (pFunc )
		pFunc(ack_num);
    else
        ll_hw_process_RTO0(ack_num);
}

//void LL_set_default_conn_params(llConnState_t *connPtr)
//{
//    typedef void (*my_function)(llConnState_t *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_SET_DEFAULT_CONN_PARAM));
//
//	if (pFunc )
//		pFunc(connPtr);
//    else
//        LL_set_default_conn_params0(connPtr);
//}

//  ================== ll_sleep.c
void enterSleepProcess(uint32 time)
{
    typedef void (*my_function)(uint32);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(ENTER_SLEEP_PROCESS));

	if (pFunc )
		pFunc(time);
    else
        enterSleepProcess0(time);
}


void wakeupProcess(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;
//    extern int phy_sec_otp_lock(void);
//    phy_sec_otp_lock();
    //__disable_cache();//disable cache when wakeup move to wakeupProcess0
    pFunc = (my_function)(JUMP_FUNCTION_GET(WAKEUP_PROCESS));

	if (pFunc )
		pFunc();
    else
        wakeupProcess0();
}

void config_RTC(uint32 time)
{
    typedef void (*my_function)(uint32);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(CONFIG_RTC));

	if (pFunc )
		pFunc(time);
    else
        config_RTC0(time);
}

void enter_sleep_off_mode(Sleep_Mode mode)
{
    typedef void (*my_function)(Sleep_Mode);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(ENTER_SLEEP_OFF_MODE));

	if (pFunc )
		pFunc(mode);
    else
        enter_sleep_off_mode0(mode);
}
void osal_sys_tick_wakeup_restore(uint32_t sleep_total)
{
    typedef void (*my_function)(uint32_t);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(OSAL_SYSTICK_WKUP_RESTORE));

	if (pFunc)
		pFunc(sleep_total);
    else
        osal_sys_tick_wakeup_restore0(sleep_total);

}
void _io_pending_process(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(IO_PENDING_PROCESS));

	if (pFunc)
		pFunc();
    else
        _io_pending_process0();

}

uint8 llProcessSlaveControlProcedures( llConnState_t *connPtr )
{
    typedef uint8 (*my_function)(llConnState_t *);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_PROCESS_SLAVE_CTRL_PROC));

	if (pFunc )
		return pFunc(connPtr);
    else
        return llProcessSlaveControlProcedures0(connPtr);
}

void llProcessSlaveControlPacket( llConnState_t *connPtr,
                                  uint8         *pBuf )
{
    typedef void (*my_function)(llConnState_t *, uint8 *);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_PROCESS_SLAVE_CTRL_PKT));

	if (pFunc )
		pFunc(connPtr, pBuf);
    else
        llProcessSlaveControlPacket0(connPtr, pBuf);
}


//uint8 llSetupNextMasterEvent( void )
//{
//    typedef uint8 (*my_function)(void);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SETUP_NEXT_MASTER_EVT));
//
//	if (pFunc )
//		return pFunc();
//    else
//        return llSetupNextMasterEvent0();
//}

uint8 move_to_master_function( void )
{
    typedef uint8 (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_MOVE_TO_MASTER_FUNCTION));

	if (pFunc )
		return(pFunc());
    else
        return(move_to_master_function0());
}

llStatus_t LL_SetScanControl( uint8 scanMode,
                              uint8 filterReports )
{
    typedef llStatus_t (*my_function)(uint8, uint8);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SET_SCAN_CTRL));

	if (pFunc )
		return pFunc(scanMode, filterReports);
    else
        return LL_SetScanControl0(scanMode, filterReports);
}

llStatus_t LL_SetScanParam( uint8  scanType,
                            uint16 scanInterval,
                            uint16 scanWindow,
                            uint8  ownAddrType,
                            uint8  scanWlPolicy )
{
    typedef llStatus_t (*my_function)(uint8, uint16, uint16, uint8, uint8);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SET_SCAN_PARAM));

	if (pFunc )
		return pFunc(scanType, scanInterval, scanWindow, ownAddrType, scanWlPolicy);
    else
        return LL_SetScanParam0(scanType, scanInterval, scanWindow, ownAddrType, scanWlPolicy);
}

llStatus_t LL_CreateConn( uint16 scanInterval,
                          uint16 scanWindow,
                          uint8  initWlPolicy,
                          uint8  peerAddrType,
                          uint8  *peerAddr,
                          uint8  ownAddrType,
                          uint16 connIntervalMin,
                          uint16 connIntervalMax,
                          uint16 connLatency,
                          uint16 connTimeout,
                          uint16 minLength,
                          uint16 maxLength )
{
    typedef llStatus_t (*my_function)(uint16, uint16, uint8, uint8, uint8 *, uint8, uint16, uint16, uint16, uint16, uint16, uint16);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_CREATE_CONN));

	if (pFunc )
		return pFunc(scanInterval, scanWindow, initWlPolicy, peerAddrType, peerAddr, ownAddrType, connIntervalMin, connIntervalMax, connLatency, connTimeout, minLength, maxLength);
    else
        return LL_CreateConn0(scanInterval, scanWindow, initWlPolicy, peerAddrType, peerAddr, ownAddrType, connIntervalMin, connIntervalMax, connLatency, connTimeout, minLength, maxLength);
}

llStatus_t LL_CreateConnCancel( void )
{
    typedef llStatus_t (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_CREATE_CONN_CANCEL));

	if (pFunc )
		return pFunc();
    else
        return LL_CreateConnCancel0();
}

//llStatus_t LL_StartEncrypt( uint16 connId,
//                            uint8  *rand,
//                            uint8  *eDiv,
//                            uint8  *ltk )
//{
//    typedef llStatus_t (*my_function)(uint16, uint8 *, uint8 *, uint8 *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_START_ENCRYPT));
//
//	if (pFunc )
//		return pFunc(connId, rand, eDiv, ltk);
//    else
//        return LL_StartEncrypt0(connId, rand, eDiv, ltk);
//}

void llSetupScan( void )
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SETUP_SCAN));

	if (pFunc )
		pFunc();
    else
        llSetupScan0();
}

// ============================== ll.c
//void LL_Init( uint8 taskId )
//{
//    typedef void (*my_function)(uint8);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_INIT));
//
//	if (pFunc )
//		pFunc(taskId);
//    else
//        LL_Init0(taskId);
//}

//uint16 LL_ProcessEvent( uint8 task_id, uint16 events )
//{
//    typedef uint16 (*my_function)(uint8, uint16);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_PROCESS_EVENT));
//
//	if (pFunc )
//		return pFunc(task_id, events);
//    else
//        return LL_ProcessEvent0(task_id, events);
//}

llStatus_t LL_Reset( void )
{
    typedef llStatus_t (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_RESET));

	if (pFunc )
		return pFunc();
    else
        return LL_Reset0();
}

llStatus_t LL_TxData( uint16 connId,
                      uint8 *pBuf,
                      uint8  pktLen,
                      uint8  fragFlag )
{
    typedef llStatus_t (*my_function)(uint16 ,
                      uint8 *,
                      uint8  ,
                      uint8  );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_TXDATA));

	if (pFunc )
		return pFunc(connId, pBuf, pktLen, fragFlag);
    else
        return LL_TxData0(connId, pBuf, pktLen, fragFlag);
}

llStatus_t LL_Disconnect( uint16 connId, uint8  reason )
{
    typedef llStatus_t (*my_function)(uint16 , uint8  );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_DISCONNECT));

	if (pFunc )
		return pFunc(connId, reason);
    else
        return LL_Disconnect0(connId, reason);
}

llStatus_t LL_SetAdvParam( uint16 advIntervalMin,
                           uint16 advIntervalMax,
                           uint8  advEvtType,
                           uint8  ownAddrType,
                           uint8  directAddrType,
                           uint8  *directAddr,
                           uint8  advChanMap,
                           uint8  advWlPolicy )
{
    typedef llStatus_t (*my_function)(uint16, uint16, uint8, uint8, uint8, uint8*, uint8, uint8);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SET_ADV_PARAM));

	if (pFunc )
		return pFunc(advIntervalMin, advIntervalMax, advEvtType, ownAddrType, directAddrType, directAddr, advChanMap, advWlPolicy);
    else
        return LL_SetAdvParam0(advIntervalMin, advIntervalMax, advEvtType, ownAddrType, directAddrType, directAddr, advChanMap, advWlPolicy);
}

llStatus_t LL_SetAdvData( uint8  advDataLen, uint8 *advData )
{
    typedef llStatus_t (*my_function)(uint8 , uint8 *  );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SET_ADV_DATA));

	if (pFunc )
		return pFunc(advDataLen, advData);
    else
        return LL_SetAdvData0(advDataLen, advData);
}

llStatus_t LL_SetAdvControl( uint8 advMode )
{
    typedef llStatus_t (*my_function)(uint8);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SET_ADV_CONTROL));

	if (pFunc )
		return pFunc(advMode);
    else
        return LL_SetAdvControl0(advMode);
}

//llStatus_t LL_EXT_SetTxPower( uint8 txPower, uint8 *cmdComplete )
//{
//    typedef llStatus_t (*my_function)(uint8, uint8 *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_EXT_SET_TX_POWER));
//
//	if (pFunc )
//		return pFunc(txPower, cmdComplete);
//    else
//        return LL_EXT_SetTxPower0(txPower, cmdComplete);
//}


//llStatus_t LL_ReadAdvChanTxPower( int8 *txPower )
//{
//    typedef llStatus_t (*my_function)(int8  *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_READ_ADV_TX_PWR_LVL));
//
//	if (pFunc )
//		return pFunc(txPower);
//    else
//        return LL_ReadAdvChanTxPower0(txPower);
//}

//llStatus_t LL_ReadTxPowerLevel( uint8 connId,
//                                uint8 type,
//                                int8  *txPower )
//{
//    typedef llStatus_t (*my_function)(uint8, uint8, int8  *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_READ_TX_PWR_LVL));
//
//	if (pFunc )
//		return pFunc(connId, type, txPower);
//    else
//        return LL_ReadTxPowerLevel0(connId, type, txPower);
//}

//llStatus_t LL_SetTxPowerLevel(int8  txPower )
//{
//    typedef llStatus_t (*my_function)(int8  txPower);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_SET_TX_PWR_LVL));
//
//	if (pFunc )
//		return pFunc(txPower);
//    else
//        return LL_SetTxPowerLevel0(txPower);
//}

//llStatus_t LL_ReadRssi( uint16 connId,
//                        int8   *lastRssi )
//{
//    typedef llStatus_t (*my_function)(uint16, int8  *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_READ_RSSI));
//
//	if (pFunc )
//		return pFunc(connId, lastRssi);
//    else
//        return LL_ReadRssi0(connId, lastRssi);
//}

//llStatus_t LL_ReadRemoteUsedFeatures( uint16 connId )
//{
//    typedef llStatus_t (*my_function)(uint16);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_READ_REMOTE_USE_FEATURES));
//
//	if (pFunc )
//		return pFunc(connId);
//    else
//        return LL_ReadRemoteUsedFeatures0(connId);
//}

//llStatus_t LL_Encrypt( uint8 *key,
//                       uint8 *plaintextData,
//                       uint8 *encryptedData )
//{
//    typedef llStatus_t (*my_function)(uint8 *, uint8 *, uint8 *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_ENCRYPT));
//
//	if (pFunc )
//		return pFunc(key, plaintextData, encryptedData);
//    else
//        return LL_Encrypt0(key, plaintextData, encryptedData);
//}

// ============= ll_common.c
void llProcessTxData( llConnState_t *connPtr, uint8 context )
{
    typedef void (*my_function)(llConnState_t *, uint8);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_PROCESS_TX_DATA));

	if (pFunc )
		pFunc(connPtr, context);
    else
        llProcessTxData0(connPtr, context);
}

uint8 llProcessRxData( uint16 connId )
{
    typedef uint8 (*my_function)(uint16 connId);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_PROCESS_RX_DATA));

	if (pFunc )
		return pFunc( connId );
    else
        return llProcessRxData0( connId );
}

void llConnTerminate( llConnState_t *connPtr,
                      uint8          reason )
{
//    uart_tx0(" term ");
    typedef void (*my_function)(llConnState_t *, uint8);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_CONN_TERMINATE));

	if (pFunc )
		pFunc(connPtr, reason);
    else
        llConnTerminate0(connPtr, reason);
}

uint8 llWriteTxData ( llConnState_t *connPtr,
                      uint8          pktHdr,
                      uint8          pktLen,
                      uint8         *pBuf )
{
    typedef uint8 (*my_function)(llConnState_t * ,
                      uint8 ,
                      uint8 ,
                      uint8 * );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_WRITE_TX_DATA));

	if (pFunc )
		return pFunc(connPtr, pktHdr, pktLen, pBuf);
    else
        return llWriteTxData0(connPtr, pktHdr, pktLen, pBuf);
}

void llReleaseConnId( llConnState_t *connPtr )
{
    typedef void (*my_function)(llConnState_t *);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_RELEASE_CONN_ID));

	if (pFunc )
		pFunc(connPtr);
    else
        llReleaseConnId0(connPtr);
}

// ======================== ll_enc.c
//void LL_ENC_AES128_Encrypt( uint8 *key,
//                            uint8 *plaintext,
//                            uint8 *ciphertext )
//{
//    typedef void (*my_function)(uint8 *, uint8 *, uint8 *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_AES128_ENCRYPT));
//
//	if (pFunc )
//		pFunc(key, plaintext, ciphertext);
//    else
//        LL_ENC_AES128_Encrypt0(key, plaintext, ciphertext);
//}

//uint8 LL_ENC_GenerateTrueRandNum( uint8 *buf,
//                                  uint8 len )
//{
//    typedef uint8 (*my_function)(uint8 *, uint8);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_GEN_TRUE_RANDOM));
//
//	if (pFunc )
//		return pFunc(buf, len);
//    else
//        return LL_ENC_GenerateTrueRandNum0(buf, len);
//}

//void LL_ENC_GenDeviceSKD( uint8 *SKD )
//{
//    typedef void (*my_function)(uint8 *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_GEN_DEVICE_SKD));
//
//	if (pFunc )
//		pFunc(SKD);
//    else
//        LL_ENC_GenDeviceSKD0(SKD);
//}

//void LL_ENC_GenDeviceIV( uint8 *IV )
//{
//    typedef void (*my_function)(uint8 *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_GEN_DEVICE_IV));
//
//	if (pFunc )
//		pFunc(IV);
//    else
//        LL_ENC_GenDeviceIV0(IV);
//}
//
//void LL_ENC_GenerateNonce( uint32 pktCnt,
//                           uint8  direction,
//                           uint8  *nonce )
//{
//    typedef void (*my_function)(uint32, uint8, uint8 *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_GENERATE_NOUNCE));
//
//	if (pFunc )
//		pFunc(pktCnt, direction, nonce);
//    else
//        LL_ENC_GenerateNonce0(pktCnt, direction, nonce);
//}
//
//void LL_ENC_Encrypt( llConnState_t *connPtr,
//                     uint8          pktHdr,
//                     uint8          pktLen,
//                     uint8         *pBuf )
//{
//    typedef void (*my_function)(llConnState_t *, uint8, uint8, uint8 *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_ENC_ENCRYPT));
//
//	if (pFunc )
//		pFunc(connPtr, pktHdr, pktLen, pBuf);
//    else
//        LL_ENC_Encrypt0(connPtr, pktHdr, pktLen, pBuf);
//}
//
//uint8 LL_ENC_Decrypt( llConnState_t *connPtr,
//                      uint8          pktHdr,
//                      uint8          pktLen,
//                      uint8         *pBuf )
//{
//    typedef uint8 (*my_function)(llConnState_t *, uint8, uint8, uint8 *);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_ENC_DECRYPT));
//
//	if (pFunc )
//		return pFunc(connPtr, pktHdr, pktLen, pBuf);
//    else
//        return LL_ENC_Decrypt0(connPtr, pktHdr, pktLen, pBuf);
//}


void osal_pwrmgr_powerconserve( void )
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(OSAL_POWER_CONSERVE));

	if (pFunc )
		pFunc();
    else
        osal_pwrmgr_powerconserve0();
}

void osal_mem_init(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(OSAL_MEM_INIT));

	if (pFunc )
		pFunc();
    else
        osal_mem_init0();

}

// =============== ll_hw_drv.c
//void ll_hw_set_timing(uint8 pktFmt)
//{
//    typedef void (*my_function)(uint8);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_HW_SET_TIMING));
//
//	if (pFunc )
//		pFunc(pktFmt);
//    else
//        ll_hw_set_timing0(pktFmt);
//}

void ll_hw_go(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_HW_GO));

	if (pFunc )
		pFunc();
    else
        ll_hw_go0();
}

//void ll_hw_trigger(void)
//{
//    typedef void (*my_function)(void);
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION(LL_HW_TRIGGER));
//
//	if (pFunc )
//		pFunc();
//    else
//        ll_hw_trigger0();
//}

// ========================= call APP function
void app_sleep_process(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(APP_SLEEP_PROCESS));

	if (pFunc )
		pFunc();
    else
        pwrmgr_sleep_process();

}

void app_wakeup_process(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(APP_WAKEUP_PROCESS));

	if (pFunc )
		pFunc();
    else
        pwrmgr_wakeup_process();
}

void rf_init(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(RF_INIT));

	if (pFunc )
		pFunc();
    else
        rf_phy_ini();
}

void rf_phy_change_cfg(uint8 pktFmt)
{
    typedef void (*my_function)(uint8);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(RF_PHY_CHANGE));

	if (pFunc )
		pFunc(pktFmt);
    else
        rf_phy_change_cfg0(pktFmt);
}

void boot_init(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(BOOT_INIT));

	if (pFunc )
		pFunc();
    else
        boot_init0();
}

void wakeup_init(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(WAKEUP_INIT));

	if (pFunc )
		pFunc();
    else
        wakeup_init0();
}

void rf_calibrate(void)
{
    typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(RF_CALIBRATTE));

	if (pFunc )
		pFunc();
    else
        rf_calibrate0();
}

//#if __BUILD_INCLUDE_HOST__
//=============== gap_linkmgr.c
void gapProcessDisconnectCompleteEvt( hciEvt_DisconnComplete_t *pPkt )
{
    typedef void (*my_function)(hciEvt_DisconnComplete_t * );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(GAP_LINK_MGR_PROCESS_DISCONNECT_EVT));

	if (pFunc )
		pFunc(pPkt);
    else
        gapProcessDisconnectCompleteEvt0(pPkt);
}

void gapProcessConnectionCompleteEvt( hciEvt_BLEConnComplete_t *pPkt )
{
    typedef void (*my_function)(hciEvt_BLEConnComplete_t * );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(GAP_LINK_MGR_PROCESS_CONNECT_EVT));

	if (pFunc )
		pFunc(pPkt);
    else
        gapProcessConnectionCompleteEvt0(pPkt);
}

//=============== l2cap_util.c
uint8 l2capParsePacket( l2capPacket_t *pPkt, hciDataEvent_t *pHciMsg )
{
    typedef uint8 (*my_function)(l2capPacket_t* , hciDataEvent_t* );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(L2CAP_PARSE_PACKET));

	if (pFunc )
		return pFunc(pPkt, pHciMsg);
    else
        return l2capParsePacket0(pPkt, pHciMsg);

}


bStatus_t l2capEncapSendData( uint16 connHandle, l2capPacket_t *pPkt )
{
    typedef bStatus_t (*my_function)(uint16 , l2capPacket_t* );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(L2CAP_ENCAP_PACKET));

	if (pFunc )
		return pFunc(connHandle, pPkt);
    else
        return l2capEncapSendData0(connHandle, pPkt);

}

uint32 ll_adptive_adj_next_time(uint16 connId)
{
    typedef uint32 (*my_function)(uint16 connId );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_ADP_ADJ_NEXT_TIME));

	if (pFunc )
		return(pFunc(connId));
    else
        return(ll_adptive_adj_next_time0(connId));
}


void llSetNextDataChan( llConnState_t *connPtr )
{
    typedef void (*my_function)(llConnState_t * );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SET_NEXT_DATA_CHN));

	if (pFunc )
		pFunc(connPtr);
    else
        llSetNextDataChan0(connPtr);
}

llStatus_t LL_PLUS_DisableSlaveLatency(uint8 connId)
{
    typedef llStatus_t (*my_function)(uint8);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_PLUS_DISABLE_LATENCY));

	if (pFunc )
		return(pFunc(connId));
    else
        return(LL_PLUS_DisableSlaveLatency0(connId));
}

llStatus_t LL_PLUS_EnableSlaveLatency(uint8 connId)
{
    typedef llStatus_t (*my_function)(uint8);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_PLUS_ENABLE_LATENCY));

	if (pFunc )
        return (pFunc(connId));
    else
        return(LL_PLUS_EnableSlaveLatency0(connId));
}

void ll_schedule_update(uint8 immSch)
{
	typedef void (*my_function)( uint8 immSch );
    my_function pFunc = NULL;

	pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SCHEDULE_UPDATE));

	if (pFunc )
		pFunc( immSch );
	else
		ll_schedule_update0( immSch );
}

void ll_scheduler( void )
{
	typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SCHEDULER));

	if (pFunc )
		pFunc();
    else
        ll_scheduler0();
}

llScheduleInfo_t* ll_addTask(llschRole_t role, llschPriority_t pri,uint32 time,uint8 id)
{
    typedef llScheduleInfo_t* (*my_function)(llschRole_t role, llschPriority_t pri,uint32 time,uint8 id);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_ADD_TASK));

	if (pFunc )
		return pFunc(role,pri, time,id);
    else
        return ll_addTask0(role,pri, time,id);
}

void ll_deleteTask(llschRole_t role,uint8 index)
{
    typedef void (*my_function)(llschRole_t role,uint8 index);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_DEL_TASK));

	if (pFunc )
		pFunc(role,index);
    else
        ll_deleteTask0(role,index);

}

void LL_evt_schedule(void)
{
	typedef void (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_EVT_SCHEDULE));

	if (pFunc )
		pFunc(  );
    else
        LL_evt_schedule0();
}

//=============== OSAL
uint8 osal_set_event( uint8 task_id, uint16 event_flag )
{
    typedef uint8 (*my_function)(uint8,uint16);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(OSAL_SET_EVENT));

	if (pFunc )
		return pFunc(task_id,event_flag);
    else
        return osal_set_event0(task_id,event_flag);
}

uint8 osal_msg_send( uint8 destination_task, uint8 *msg_ptr )
{
    typedef uint8 (*my_function)(uint8,uint8*);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(OSAL_MSG_SEND));

	if (pFunc )
		return pFunc(destination_task,msg_ptr);
    else
        return osal_msg_send0(destination_task,msg_ptr);
}

//=============== _HAL_IRQ_
//void drv_irq_init(void)
//{
//    typedef void (*my_function)(void);
//    my_function pFunc = NULL;
//    pFunc = (my_function)(JUMP_FUNCTION_GET(HAL_DRV_IRQ_INIT));
//	if (pFunc != ((my_function)NULL))
//		pFunc();
//    else
//        drv_irq_init0();
//}

int drv_enable_irq(int cs)
{
    typedef int (*my_function)(int);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(HAL_DRV_IRQ_ENABLE));

	if (pFunc != ((my_function)NULL))
		return pFunc(cs);
    else
       return drv_enable_irq0(cs);
}

int drv_disable_irq(void)
{
    typedef int (*my_function)(void);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(HAL_DRV_IRQ_DISABLE));

	if (pFunc != ((my_function)NULL))
		return pFunc();
    else
        return drv_disable_irq0();
}

void __wdt_init(void)
{
    typedef void (*my_function)(void );
    my_function pFunc = NULL;
    pFunc = (my_function)(JUMP_FUNCTION_GET(HAL_WATCHDOG_INIT));

    if (pFunc )
        pFunc();
}

void set_channel(uint32_t  channel)
{
    typedef void (*my_function)(uint32_t );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SET_CHANNEL));

	if (pFunc )
		pFunc( channel );
    else
        set_channel0( channel );
}

void set_whiten_seed(uint32_t channel)
{
    typedef void (*my_function)(uint32_t );
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(LL_SET_WHITEN_SEED));

	if (pFunc)
		pFunc( channel );
    else
        set_whiten_seed0( channel );
}

//void _clk_apply_setting(uint32_t hclk_sel, uint32_t digi_clk_en, uint32_t digi32_sel,uint8_t wfi_sel)
//{
//    typedef void (*my_function)(uint32_t,uint32_t,uint32_t,uint8_t );
//    my_function pFunc = NULL;
//
//    pFunc = (my_function)(JUMP_FUNCTION_GET(CLK_APPLY_SETTING));
//
//	if (pFunc )
//		pFunc( hclk_sel,digi_clk_en,digi32_sel,wfi_sel);
//    else
//        _clk_apply_setting0( hclk_sel,digi_clk_en,digi32_sel,wfi_sel );
//}

void clk_apply(uint32_t en, uint8_t hclk_sel,uint8_t wfi_sel)
{
    extern void clk_apply0(uint32_t en, uint8_t hclk_sel);
    typedef void (*my_function)(uint32_t en, uint8_t hclk_sel);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION(CLK_APPLY));

	if (pFunc )
		pFunc(en, hclk_sel);
    else
        clk_apply0(en, hclk_sel);
}

bStatus_t GAPBondMgr_LinkEst( uint16 connHandle, uint8 role )
{
    typedef bStatus_t (*my_function)(uint16, uint8);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(GAPBONDMGR_LINKEST));

	if (pFunc )
		return pFunc( connHandle, role );
    else
        return GAPBondMgr_LinkEst0( connHandle, role );
}

uint8 GAPBondMgr_ProcessGAPMsg( gapEventHdr_t *pMsg )
{
    typedef uint8 (*my_function)(gapEventHdr_t *);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(GAPBONDMGR_GAPMSG));

	if (pFunc )
		return pFunc( pMsg );
    else
        return GAPBondMgr_ProcessGAPMsg0( pMsg );
}

bStatus_t gattServerProcessMsgCB( uint16 connHandle, attPacket_t *pPkt )
{
    typedef bStatus_t (*my_function)(uint16, attPacket_t *);
    my_function pFunc = NULL;

    pFunc = (my_function)(JUMP_FUNCTION_GET(GATTSERVER_PROCESSCB));

	if (pFunc )
		return pFunc( connHandle, pPkt );
    else
        return gattServerProcessMsgCB0( connHandle, pPkt );
}

/* MSKB FW JUMP FUNC */
#include "mskb_fw.h"

// extern uint8
// mskb_fw_hdl_slav_latency_intl(uint8 cfgs_flag);
extern void
mskb_fw_hdl_link_disc_intl(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 susp_tout, void(*link_disc)(void));
// void mskb_fw_hdl_link_tout(uint16 appl_task, uint16 susp_tout, void(*advt_cfgs)(void), char advt_flag, uint16 advt_tout);
extern void
mskb_fw_hdl_advt_cfgs_intl(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 advt_tout, void(*advt_cfgs)(void), uint8 advt_flag);
extern void
mskb_fw_hdl_advt_tout_intl(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 advt_tout, void(*advt_cfgs)(void), uint8(*tout_hdlr)(void));
extern void
mskb_fw_hdl_link_conn_intl(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 hook_dlay, void(*link_conn)(void));
extern void
mskb_fw_hdl_link_hook_intl(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 idle_tout, void(*data_hdlr)(void));
extern void
mskb_fw_hdl_idle_evnt_intl(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 hook_dlay, void(*idle_hdlr)(void));

// uint8
// mskb_fw_hdl_slav_latency(uint8 cfgs_flag)
// {
//     typedef void (*func)(uint8);

//     func user_func = (func)(JUMP_FUNCTION_GET(JUMP_MSKB_FW_HDL_SLAV_LATENCY));

// 	if ( user_func )
// 		user_func(cfgs_flag);
//     else
//         mskb_fw_hdl_slav_latency(cfgs_flag);
// }

/* LINK DISC */
void
mskb_fw_hdl_link_disc(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 susp_tout, void(*link_disc)(void))
{
    typedef void (*func)(mskb_fw_stat_t*, uint16, uint32, void(*)(void));

    func user_func = (func)(JUMP_FUNCTION_GET(JUMP_MSKB_FW_HDL_LINK_DISC));

	if ( user_func )
		user_func(mskb_stat, appl_task, susp_tout, link_disc);
    else
        mskb_fw_hdl_link_disc_intl(mskb_stat, appl_task, susp_tout, link_disc);
}

// void mskb_fw_hdl_link_tout(uint16 appl_task, uint16 susp_tout, void(*advt_cfgs)(void), char advt_flag, uint16 advt_tout);

void
mskb_fw_hdl_advt_cfgs(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 advt_tout, void(*advt_cfgs)(void), uint8 advt_flag)
{
    typedef void (*func)(mskb_fw_stat_t*, uint16, uint32, void(*)(void), uint8);

    func user_func = (func)(JUMP_FUNCTION_GET(JUMP_MSKB_FW_HDL_ADVT_CFGS));

	if ( user_func )
		user_func(mskb_stat, appl_task, advt_tout, advt_cfgs, advt_flag);
    else
        mskb_fw_hdl_advt_cfgs_intl(mskb_stat, appl_task, advt_tout, advt_cfgs, advt_flag);
}

void mskb_fw_hdl_advt_tout(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 advt_tout, void(*advt_cfgs)(void), uint8(*tout_hdlr)(void))
{
    typedef void (*func)(mskb_fw_stat_t*, uint16, uint32, void(*)(void), uint8(*)(void));

    func user_func = (func)(JUMP_FUNCTION_GET(JUMP_MSKB_FW_HDL_ADVT_TOUT));

	if ( user_func )
		user_func(mskb_stat, appl_task, advt_tout, advt_cfgs, tout_hdlr);
    else
        mskb_fw_hdl_advt_tout_intl(mskb_stat, appl_task, advt_tout, advt_cfgs, tout_hdlr);
}

void
mskb_fw_hdl_link_conn(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 hook_dlay, void(*link_conn)(void))
{
    typedef void (*func)(mskb_fw_stat_t*, uint16, uint32, void(*)(void));

    func user_func = (func)(JUMP_FUNCTION_GET(JUMP_MSKB_FW_HDL_LINK_CONN));

	if ( user_func )
		user_func(mskb_stat, appl_task, hook_dlay, link_conn);
    else
        mskb_fw_hdl_link_conn_intl(mskb_stat, appl_task, hook_dlay, link_conn);
}

void
mskb_fw_hdl_link_hook(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 idle_tout, void(*data_hdlr)(void))
{
    typedef void (*func)(mskb_fw_stat_t*, uint16, uint32, void(*)(void));

    func user_func = (func)(JUMP_FUNCTION_GET(JUMP_MSKB_FW_HDL_LINK_HOOK));

	if ( user_func )
		user_func(mskb_stat, appl_task, idle_tout, data_hdlr);
    else
        mskb_fw_hdl_link_hook_intl(mskb_stat, appl_task, idle_tout, data_hdlr);
}

void
mskb_fw_hdl_idle_evnt(mskb_fw_stat_t* mskb_stat, uint16 appl_task, uint32 hook_dlay, void(*idle_hdlr)(void))
{
    typedef void (*func)(mskb_fw_stat_t*, uint16, uint32, void(*)(void));

    func user_func = (func)(JUMP_FUNCTION_GET(JUMP_MSKB_FW_HDL_IDLE_EVNT));

	if ( user_func )
		user_func(mskb_stat, appl_task, hook_dlay, idle_hdlr);
    else
        mskb_fw_hdl_idle_evnt_intl(mskb_stat, appl_task, hook_dlay, idle_hdlr);
}


/*** USB driver patch***/
void usb_pcd_svc_tx_endp0(usb_hal_pcd_t * hpcd, int ep_num);
void usb_pcd_svc_tx_endp(usb_hal_pcd_t * hpcd, int ep_num)
{
    typedef void (*my_function)(usb_hal_pcd_t*, int);

    my_function pFunc = (my_function)(JUMP_FUNCTION_GET(JUMP_usb_pcd_svc_tx_endp));

	if (pFunc )
		pFunc(hpcd, ep_num);
    else
        usb_pcd_svc_tx_endp0(hpcd, ep_num);
}

void usb_pcd_svc_rx_endp0(usb_hal_pcd_t * hpcd, uint16_t ep_num);
void usb_pcd_svc_rx_endp(usb_hal_pcd_t * hpcd, uint16_t ep_num)
{
    typedef void (*my_function)(usb_hal_pcd_t * , uint16_t);

    my_function pFunc = (my_function)(JUMP_FUNCTION_GET(JUMP_usb_pcd_svc_rx_endp));

	if (pFunc )
		pFunc(hpcd, ep_num);
    else
        usb_pcd_svc_rx_endp0(hpcd, ep_num);
}

void usb_pcd_setup_proc0(usb_hal_pcd_t * hpcd, ureq_t req);
void usb_pcd_setup_proc(usb_hal_pcd_t * hpcd, ureq_t req)
{
    typedef void (*my_function)(usb_hal_pcd_t * , ureq_t );

    my_function pFunc = (my_function)(JUMP_FUNCTION_GET(JUMP_usb_pcd_setup_proc));

	if (pFunc )
		pFunc(hpcd,req);
    else
        usb_pcd_setup_proc0(hpcd, req);
}

void pcd_setup0(usb_hal_pcd_t * hpcd);
void pcd_setup(usb_hal_pcd_t * hpcd)
{
    typedef void (*my_function)(usb_hal_pcd_t * );

    my_function pFunc = (my_function)(JUMP_FUNCTION_GET(JUMP_pcd_setup));

	if (pFunc )
		pFunc(hpcd);
    else
        pcd_setup0(hpcd);
}


void pcd_set_config0(usb_hal_pcd_t * hpcd);
void pcd_set_config(usb_hal_pcd_t * hpcd)
{
    typedef void (*my_function)(usb_hal_pcd_t * );

    my_function pFunc = (my_function)(JUMP_FUNCTION_GET(JUMP_pcd_set_config));

	if (pFunc )
		pFunc(hpcd);
    else
        pcd_set_config0(hpcd);
}


int pcd_usr_init(usb_hal_pcd_t* handle)
{
    typedef int (*my_function)(usb_hal_pcd_t * );

    my_function pFunc = (my_function)(JUMP_FUNCTION_GET(JUMP_pcd_usr_init));

    if (pFunc )
        return pFunc(handle);
    return PPlus_ERR_NOT_REGISTED;
}


int xrand(void)
{
    typedef int (*my_function)(void);

    my_function pFunc = (my_function)(JUMP_FUNCTION_GET(JUMP_xrand));

    if (pFunc )
        return pFunc();
	else
	    return xrand1();
}

int xsrand(int seed)
{
    typedef int (*my_function)(int seed);

    my_function pFunc = (my_function)(JUMP_FUNCTION_GET(JUMP_xsrand));

    if (pFunc )
        return pFunc(seed);
	else
		xsrand1(seed);
    return PPlus_SUCCESS;
}


void JUMP_FUNCTION_SET(uint8 jidx,uint32 val)
{
	uint8 inValid = TRUE;
	uint16 JUMP_ADDR = 0;

	if( jidx > JUMP_FUNC_NUM)
	{
		while(1);
	}
	if((val>SRAM_BASE_ADDR) && (val<SRAM_END_ADDR))
		JUMP_ADDR = (uint16)((val-SRAM_BASE_ADDR)/2+JUMP_RAM_TWO_BYTE_ADDRING);
	else if((val>OTP_BASE_ADDR) && (val<OTP_END_ADDR))
		JUMP_ADDR = (uint16)((val-OTP_BASE_ADDR)/2+JUMP_OTP_TWO_BYTE_ADDRING);
	else if((val>ROM_BASE_ADDR) && (val<ROM_END_ADDR))
		JUMP_ADDR = (uint16)((val-ROM_BASE_ADDR)/2+JUMP_ROM_TWO_BYTE_ADDRING);

	((uint16 *)(SRAM_BASE_ADDR)) [jidx] = (uint16)(JUMP_ADDR & 0xffff);
}

uint32_t JUMP_FUNCTION_GET(uint8 jidx)
{
	uint32_t BASE_ADDR=0;
	uint32_t val = 0, addr = 0;

	addr = (((uint16 *)(JUMP_BASE_ADDR)) [jidx]);
	if(addr > JUMP_RAM_TWO_BYTE_ADDRING)
		val = ((uint16)(addr - JUMP_RAM_TWO_BYTE_ADDRING))*2 + SRAM_BASE_ADDR;
	else if(addr > JUMP_OTP_TWO_BYTE_ADDRING)
		val = ((uint16)(addr - JUMP_OTP_TWO_BYTE_ADDRING))*2 + OTP_BASE_ADDR;
	else if(addr > JUMP_ROM_TWO_BYTE_ADDRING)
		val = ((uint16)(addr - JUMP_ROM_TWO_BYTE_ADDRING))*2 + ROM_BASE_ADDR;

	return val;
}

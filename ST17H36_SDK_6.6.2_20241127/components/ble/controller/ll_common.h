#ifndef _LL_H_
#define _LL_H_

#include "types.h"
#include "mcu.h"
#include "ll.h"
#include "ll_def.h"

#define LL_DATA_PDU( pktHdr )     ((pktHdr) != LL_DATA_PDU_HDR_LLID_CONTROL_PKT)
#define LL_CTRL_PDU( pktHdr )     ((pktHdr) == LL_DATA_PDU_HDR_LLID_CONTROL_PKT)
#define LL_INVALID_LLID( pktHdr ) ((pktHdr) == LL_DATA_PDU_HDR_LLID_RESERVED)

#define LL_VERSION_NUM                0x06  	// BT Core Specification V5.0.0, refer to https://www.bluetooth.com/specifications/assigned-numbers/host-controller-interface
#define LL_COMPANY_ID                 0x0CEB

// Major Version (8 bits) . Minor Version (4 bits) . SubMinor Version (4 bits)
#define LL_SUBVERSION_NUM             0x0208    //  Controller v1.0.0. Definition not found in BLE spec


void LL_IRQHandler(void);

uint8 move_to_slave_function(void);

void LL_slave_conn_event(void);

void LL_set_default_conn_params(llConnState_t *connPtr);

//void ll_setMem(uint8_t  *buf, uint8_t v, int n);

//void ll_cpyMem(uint8_t *dst, uint8_t *src, int n);

void LL_evt_schedule(void);

llStatus_t llSetupAdv( void );

void llConvertLstoToEvent( llConnState_t *connPtr,
                           connParam_t   *connParams );

void llSlaveEvt_TaskEndOk( uint8 connid );


// Connection Management
extern llConnState_t      *llAllocConnId( void );
extern void               llReleaseConnId( llConnState_t *connPtr );
extern uint16             llGetMinCI( uint16 connInterval );
extern uint8              llGetNextConn( void );
extern void               llConnCleanup( llConnState_t *connPtr );
extern void               llConnTerminate( llConnState_t *connPtr, uint8 reason );
extern uint8              llPendingUpdateParam( void );
//extern void               llInitFeatureSet( void );
extern uint32             llGenerateValidAccessAddr( void );
extern uint32             llGenerateCRC( void );
extern  uint8             llEventInRange( uint16 curEvent, uint16 nextEvent, uint16 updateEvent );
extern  uint16            llEventDelta( uint16 eventA, uint16 eventB );
extern void               llConvertLstoToEvent( llConnState_t *connPtr, connParam_t *connParams );
extern void               llConvertCtrlProcTimeoutToEvent( llConnState_t *connPtr );

// Task Setup
extern llStatus_t         llSetupAdv( void );

void llRfConfig(uint8 pktFmt,uint32 crc_seed,uint32 AA,uint32 chn,uint32 len,uint32 rxTo);

extern void               llSetupScan( void );
//extern void               llSetupScanInit( void );
extern void               llSetupInit(  void  );
//extern void               llSetupConn( void );
extern uint32             ll_get_next_timer(uint8 current_conn_id);

extern void               ll_scheduler( void );

extern llScheduleInfo_t*  ll_addTask(llschRole_t role, llschPriority_t pri,uint32 time,uint8 id);
extern void               ll_deleteTask(llschRole_t role,uint8 index);

// Data Management
extern uint8              llEnqueueDataQ( llDataQ_t *pDataQ, txData_t *pTxData );
extern uint8              llEnqueueHeadDataQ( llDataQ_t *pDataQ, txData_t *pTxData );
extern txData_t          *llDequeueDataQ( llDataQ_t *pDataQ );
extern uint8              llDataQEmpty( llDataQ_t *pDataQ );
extern uint8              llWriteTxData ( llConnState_t *connPtr, uint8 pktHdr, uint8 pktLen, uint8 *pBuf );
extern uint8              *llMemCopySrc( uint8 *pDst, uint8 *pSrc, uint8 len );
extern uint8              *llMemCopyDst( uint8 *pDst, uint8 *pSrc, uint8 len );
extern void               llProcessMasterControlPacket( llConnState_t *connPtr, uint8 *pBuf );
extern void               llProcessSlaveControlPacket( llConnState_t *connPtr, uint8 *pBuf );
extern  void              llProcessTxData( llConnState_t *connPtr, uint8 context );
extern  uint8             llProcessRxData( uint16 connId );

// Control Procedure Setup
//extern uint8              llSetupUpdateParamReq( llConnState_t *connPtr );  // M
//extern uint8              llSetupUpdateChanReq( llConnState_t *connPtr );   // M
//extern uint8              llSetupEncReq( llConnState_t *connPtr );          // M
extern uint8              llSetupEncRsp( llConnState_t *connPtr );          // S
extern uint8              llSetupStartEncReq( llConnState_t *connPtr );     // S
extern uint8              llSetupStartEncRsp( llConnState_t *connPtr );     // M, S
//extern uint8              llSetupPauseEncReq( llConnState_t *connPtr );     // M
//extern uint8              llSetupPauseEncRsp( llConnState_t *connPtr );     // S
extern uint8              llSetupRejectInd( llConnState_t *connPtr ,uint8 errCode);       // S
extern uint8              llSetupFeatureSetReq( llConnState_t *connPtr );   // M, S
extern uint8              llSetupFeatureSetRsp( llConnState_t *connPtr );   // M, S
extern uint8              llSetupVersionIndReq( llConnState_t *connPtr );   // M
extern uint8              llSetupTermInd( llConnState_t *connPtr );         // M, S
extern uint8              llSetupUnknownRsp( llConnState_t *connPtr );      // M, S

extern uint8              llSetupDataLength( llConnState_t *connPtr ,uint8 type   );//M,S
//extern uint8              llSetupDataLenghtRsp( llConnState_t *connPtr );//M,S
//extern uint8              llSetupPhyReq( llConnState_t *connPtr );          //M,S
//extern uint8              llSetupPhyRsp( llConnState_t *connPtr );   //M,S
//extern uint8              llSetupPhyUpdateInd( llConnState_t *connPtr );//M
extern uint8              llSetupRejectExtInd( llConnState_t *connPtr ,uint8 errCode);

// Control Procedure Management
extern void               llEnqueueCtrlPkt( llConnState_t *connPtr, uint8 ctrlType );
extern void               llDequeueCtrlPkt( llConnState_t *connPtr );
extern void               llReplaceCtrlPkt( llConnState_t *connPtr, uint8 ctrlType );


// Data Channel Management
extern void               llProcessChanMap( llConnState_t *connPtr, uint8 *chanMap );
extern  uint8    llGetNextDataChan( llConnState_t *connPtr, uint16 numEvents );
extern  void     llSetNextDataChan( llConnState_t *connPtr );
//extern uint8              llAtLeastTwoChans( uint8 *chanMap );


uint8_t llTimeCompare(int base_time, int fine_time);
uint32_t calculateTimeDelta(int base_time, int  fine_time);

void llSetNextDataChan( llConnState_t *connPtr );


// function add by HZF
void llResetConnId( uint8 connId );
void llResetRfCounters(void);
//extern void               llInitFeatureSet( void );


//extern  uint16 llCalcScaFactor( uint8 masterSCA );


//extern void llCalcTimerDrift( uint32    connInterval,
//                                 uint16    slaveLatency,
//                                 uint32 *timerDrift );


// add by HZF
uint8 llGetNextAdvChn(uint8 cur_chn);

// Tx loop buffer process
void update_tx_write_ptr(llConnState_t *connPtr);

void update_tx_read_ptr(llConnState_t *connPtr);

uint8_t getTxBufferSize(llConnState_t *connPtr);
uint8_t getTxBufferFree(llConnState_t *connPtr);

uint8_t get_tx_read_ptr(llConnState_t *connPtr);

uint8_t get_tx_write_ptr(llConnState_t *connPtr);

// Rx loop buffer process
void update_rx_write_ptr(llConnState_t *connPtr);

void update_rx_read_ptr(llConnState_t *connPtr);

uint8_t getRxBufferSize(llConnState_t *connPtr);
uint8_t getRxBufferFree(llConnState_t *connPtr);

uint8_t get_rx_read_ptr(llConnState_t *connPtr);

uint8_t get_rx_write_ptr(llConnState_t *connPtr);

// reset buffer
void reset_conn_buf(uint8 index);


uint16 ll_generateTxBuffer(int txFifo_vacancy, uint16 *pSave_ptr);

void ll_read_rxfifo(void);
void ll_hw_read_tfifo_rtlp( uint8 );
int ll_hw_read_tfifo_packet(uint8 *pkt);

// function in ll_slaveEndCause.c
uint8 llSetupNextSlaveEvent( uint8 );
uint32 ll_miss_conn_event( uint32 cur, uint32 reminder, llConnState_t *connPtr );
uint8 llProcessSlaveControlProcedures( llConnState_t *connPtr );
//uint8 llCheckForLstoDuringSL( llConnState_t *connPtr );

// function in ll_hwItf.c
void ll_hw_process_RTO(uint32 ack_num);

void 	ll_hwSchTimer_ctrl(uint8 enable);
void 	ll_hwSchTimer_SetLoadCnt( uint32 cnt );
void 	ll_hwSchTimer_GenSchTargetIrqCnt( uint32 cnt );
void 	ll_hwSchTimer_GenEnSchTargetCnt( uint32 cnt );
uint32 	ll_hwSchTimer_GetCurrentCnt( void );


#endif


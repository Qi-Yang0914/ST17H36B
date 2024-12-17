
/**************************************************************************************************
    Filename:       prop_protocol.h
    Revised:
    Revision:

    Description:    This file contains the prop protocol sample application
                  definitions and prototypes.


**************************************************************************************************/

#ifndef PROPPROTOCOL_H
#define PROPPROTOCOL_H

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
    INCLUDES
*/

/*********************************************************************
    CONSTANTS
*/


// PROP PROTOCOL Task Events
#define PPP_PERIODIC_TX_EVT         0x0001
#define PPP_PERIODIC_RX_EVT         0x0002
#define PPP_TX_DONE_EVT             0x0004
#define PPP_RX_DONE_EVT             0x0008
#define PPP_TRX_DONE_EVT            0x0010
#define PPP_RX_DATA_PROCESS_EVT     0x0020

#define PPP_MSG_DATA_EVENT            0x01
#define PPP_MSG_ACK_EVENT             0x02



typedef struct
{
  osal_event_hdr_t hdr;                   // OSAL event header
  uint16 len;                             // length of data packet
  uint8  *pData;                          // data packet given by len
  uint8  rssi;
  uint16 foff;
  uint8_t rfChn;
} pppMsgEvent_t;

/*********************************************************************
    MACROS
*/

/*********************************************************************
    FUNCTIONS
*/

/*
    Task Initialization for the PROP PROTOCOL Application
*/
extern void PropProtocol_Init( uint8 task_id );

/*
    Task Event Processor for the PROP PROTOCOL Application
*/
extern uint16 PPP_ProcessEvent( uint8 task_id, uint16 events );

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* PROPPROTOCOL_H */

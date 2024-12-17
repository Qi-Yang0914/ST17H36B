
/******************************************************************************

 *****************************************************************************/

#ifndef HIDEMUKBD_H
#define HIDEMUKBD_H

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

// Task Events
#define START_DEVICE_EVT                              0x0001
#define SPP_DISABLE_LATENCY_EVT                       0x0002
#define SPP_PERIODIC_EVT                              0x0004
#define HID_KEY_STATE_CHANGE_EVT                      0x0008

#define HID_ADV_NOCONN_TIMEOUT_EVT                     0x0010
#define HID_CONN_NOKEY_TIMEOUT_EVT                     0x0020
#define HID_CONNTIMEOUT_POWEROFF_EVT                   0x0040
#define HID_CONNTIMEOUT_SLEEP_EVT                      0x0080
#define HID_ADV_NOCONN_POWEROFF_EVT                    0x0100


/*********************************************************************
    MACROS
*/

/*********************************************************************
    FUNCTIONS
*/

/*********************************************************************
    GLOBAL VARIABLES
*/

extern uint8 hidkbd_TaskID;


/*
    Task Initialization for the BLE Application
*/
extern void HidKbd_Init( uint8 task_id );

/*
    Task Event Processor for the BLE Application
*/
extern uint16 HidKbd_ProcessEvent( uint8 task_id, uint16 events );
extern uint8 hidKbdSendVoiceCMDtReport( uint8 keycode );
extern void hidCCSendReportKey( uint8 cmd, bool keyPressed);

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif /*HIDEMUKBD_H */

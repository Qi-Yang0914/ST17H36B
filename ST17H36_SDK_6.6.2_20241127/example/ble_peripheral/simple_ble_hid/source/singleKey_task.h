

/**************************************************************************************************
  Filename:       singleKey_task.h
  Revised:        $Date $
  Revision:       $Revision $


**************************************************************************************************/

#ifndef SINGLEKEY_TASK_H
#define SINGLEKEY_TASK_H

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
 * INCLUDES
 */

/*********************************************************************
 * CONSTANTS
 */



// Ink Task Events
#define SINGLEKEY_BTN_ONOFF_PRESS_EVT         0x0001
#define SINGLEKEY_BTN_ONOFF_RLS_EVT           0x0002
#define SINGLEKEY_BTN_ONOFF_LONG_PRESS_EVT    0x0004
#define SINGLEKEY_BTN_VOICE_UP_PRESS_EVT      0x0008
#define SINGLEKEY_BTN_VOICE_DN_PRESS_EVT      0x0010
#define SINGLEKEY_BTN_SEND_RLS_EVT            0x0020

extern  uint8 singleKey_TaskID;   // Task ID for internal task/event processing



/*********************************************************************
 * MACROS
 */





/*********************************************************************
 * FUNCTIONS
 */

/*
 * Task Initialization for the BLE Application
 */
extern void SingleKey_task_Init( uint8 task_id );

/*
 * Task Event Processor for the BLE Application
 */
extern uint16 SingleKey_task_ProcessEvent( uint8 task_id, uint16 events );

extern void singlekey_triggle_poweroff(void);

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif 


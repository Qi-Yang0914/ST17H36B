

/**************************************************************************************************
  Filename:       simpleLight.h
  Revised:         
  Revision:        

  Description:    This file contains the Simple BLE Peripheral sample application
                  definitions and prototypes.

 
**************************************************************************************************/

#ifndef _SIMPLELIGHT_H_
#define _SIMPLELIGHT_H_

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
 * INCLUDES
 */
#include "bcomdef.h"
/*********************************************************************
 * CONSTANTS
 */


/*********************************************************************
 * MACROS
 */
#define SIMPLELIGHT_PAINT_LIGHTBAR_EVT           0x0001
#define SIMPLELIGHT_FRESH_COLORBUF_EVT           0x0002

#define SIMPLELIGHT_GATT_MESSAGE_EVT            0x0004

#define  SBP_TEST_NRZ_AUTORELOAD_EVT            0x0008


#define  SBP_PWM_CHANGE_EVT                      0x0010


extern uint8 simpleLight_TaskID;   // Task ID for internal task/event processing


/*********************************************************************
 * FUNCTIONS
 */

/*
 * Task Initialization for the BLE Application
 */

extern void SimpleLight_Init( uint8 task_id );

/*
 * Task Event Processor for the BLE Application
 */
extern uint16 SimpleLight_ProcessEvent( uint8 task_id, uint16 events );

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* _SIMPLELIGHT_H_ */

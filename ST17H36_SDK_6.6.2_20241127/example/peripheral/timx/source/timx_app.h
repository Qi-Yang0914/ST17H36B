

/**************************************************************************************************
  Filename:       gpio_demo.h
  Revised:         
  Revision:        

  Description:    This file contains the GPIO sample application
                  definitions and prototypes.

 
**************************************************************************************************/

#ifndef _GPIO_DEMO_H_
#define _GPIO_DEMO_H_

#include "types.h"

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


// GPIO Task Events
#define OSAL_SET_EVENT_EVT                                  0x0001
#define OSAL_ONCE_TIMER_EVT                           		0x0002
#define OSAL_RELOAY_TIMER_EVT                         		0x0004

/*********************************************************************
 * MACROS
 */

/*********************************************************************
 * FUNCTIONS
 */
void gpio_Init( uint8 task_id );
uint16 gpio_ProcessEvent( uint8 task_id, uint16 events);

void Osal_Time_Init(uint8 task_id);
uint16 Osal_Time_ProcessEvent( uint8 task_id, uint16 events);
extern void timx_demo_Init( uint8 task_id );

extern uint16 timx_demo_ProcessEvent( uint8 task_id, uint16 events );


/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif

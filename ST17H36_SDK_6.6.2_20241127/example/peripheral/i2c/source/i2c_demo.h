/**************************************************************************************************
  Filename:       i2c_demo.h
  Revised:         
  Revision:        

  Description:    This file contains the i2c sample application
                  definitions and prototypes.

 
**************************************************************************************************/

#ifndef _i2c_DEMO_H_
#define _i2c_DEMO_H_

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


// I2C Task Events
#define OSAL_SET_EVENT_EVT                                  0x0001
#define OSAL_ONCE_TIMER_EVT                           		0x0002
#define OSAL_RELOAY_TIMER_EVT                         		0x0004

/*********************************************************************
 * MACROS
 */

/*********************************************************************
 * FUNCTIONS
 */
void i2c_Init( uint8 task_id );
uint16 i2c_ProcessEvent( uint8 task_id, uint16 events);


/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif

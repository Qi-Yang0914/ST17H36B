

/**************************************************************************************************
  Filename:       gpio_demo.h
  Revised:         
  Revision:        

  Description:    This file contains the GPIO sample application
                  definitions and prototypes.

 
**************************************************************************************************/

#ifndef _TIMX_PWM_H_
#define _TIMX_PWM_H_

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




/*********************************************************************
 * MACROS
 */

/*********************************************************************
 * FUNCTIONS
 */
void timx_pwm_sys_init(void);
void timx_pwm_instant_init(uint8 hclk_div,uint16 pwmfreq);
void timx_pwm_shift_pwmDuty(uint8 chn, uint8 duty);

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif

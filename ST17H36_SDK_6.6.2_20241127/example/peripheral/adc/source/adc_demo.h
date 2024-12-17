

/**************************************************************************************************
    Filename:       adc_demo.h
    Revised:        $Date $
    Revision:       $Revision $


**************************************************************************************************/

#ifndef ADCDEMO_H
#define ADCDEMO_H

#ifdef __cplusplus
extern "C"
{
#endif
#include "adc.h"
/*********************************************************************
    INCLUDES
*/

/*********************************************************************
    CONSTANTS
*/


#define START_DEVICE_EVT                                0x0001
#define OSAL_RELOAY_TIMER_EVT                       0x0002

void voice_cb(adc_evt_t* pev);

extern void adc_demo_Init( uint8 task_id );

extern uint16 adc_demo_ProcessEvent( uint8 task_id, uint16 events );

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* ADCDEMO_H */



/**************************************************************************************************
  Filename:       simpleBLEPeripheral.c
  Revised:        
  Revision:       

  Description:    This file contains the Simple BLE Peripheral sample application
                  

**************************************************************************************************/
/*********************************************************************
 * INCLUDES
 */
#include "rom_sym_def.h"
//#include "rf_phy_driver.h"
//#include "global_config.h"
#include "OSAL.h"
#include "ir_demo.h"
#include "log.h"
#include "gpio.h"
#include "clock.h"
#include "pwrmgr.h"
#include "error.h"
#include "nrz.h"

//#include "jump_function.h"
/*********************************************************************
 * MACROS
 */
/*********************************************************************
 * CONSTANTS
 */

/*********************************************************************
 * TYPEDEFS
 */

/*********************************a************************************
 * GLOBAL VARIABLES
 */

/*********************************************************************
 * EXTERNAL VARIABLES
 */

/*********************************************************************
 * EXTERNAL FUNCTIONS
 */


/*********************************************************************
 * LOCAL VARIABLES
 */
uint8 application_TaskID;   // Task ID for internal task/event processing

/*********************************************************************
 * LOCAL FUNCTIONS
 */

/*********************************************************************
 * PROFILE CALLBACKS
 */

/*********************************************************************
 * PUBLIC FUNCTIONS
 */


 __attribute__ ((aligned(4)))  uint8_t ir_code[4]={
0x55,0x01,0x01,0x55,
};

int pin[1][2] = {
	{P14,  FMUX_NRZ_DATA0},
};

//T0|T1
//ir carry hclk 16M, 16M/425=38k
//ir code0,code 1,prem all setting hclk 1M
//ir MSB first
NRZ_CH_CFG_t ch_cfg = {
	//.carr_cnt = 0x0118008c,//38K
	.carr_cnt = 0x00BE005F,//56K
	.prem_cnt = 0X11942328,
	.code0_cnt = 0x02300230,
	.code1_cnt = 0x069a0230,
	.wave_ctrl = 0x02448902,//16M carry, 1M code, HL mode
};

uint32 ir_calc_cararyWave_cnt(uint32 carry_freq)
{
  uint32 carary_ret=0;
  uint32 freq=0; //38K /56K
  uint16 carry_cnt=0; //16000/38K=425
  uint16 t0_cnt=0;
  uint16 t1_cnt=0;

   freq=carry_freq/1000; //38K /56K
   carry_cnt=16000/freq; //16M/38K=425
   t0_cnt=carry_cnt/3;
   t1_cnt=carry_cnt-t0_cnt;

    carary_ret=((t1_cnt<<16)|(t0_cnt));
	return carary_ret;
}

void ir_Init(uint8 task_id)
{
	volatile int ret;

	application_TaskID = task_id;
	LOG("ir_demo\n");

//	osal_set_event(application_TaskID,OSAL_SET_EVENT_EVT);
//	osal_start_timerEx(application_TaskID, OSAL_ONCE_TIMER_EVT, 1000);

	osal_start_timerEx(application_TaskID, OSAL_RELOAY_TIMER_EVT, 1000);
}


uint16 ir_ProcessEvent( uint8 task_id, uint16 events )
{
	static uint32_t once_timer_counter = 0;
	static uint32_t cycle_timer_counter = 0;
	static int g_val = 0, r_val = 0;
//	LOG("gpio_ProcessEvent %x\n", events);
	if(task_id != application_TaskID){
		return 0;
	}

	if ( events & OSAL_SET_EVENT_EVT )
	{
		LOG("osal_set_event runs ok\n");
		return ( events ^ OSAL_SET_EVENT_EVT );
	}
	
	if ( events & OSAL_ONCE_TIMER_EVT )
	{
		LOG("once_timer_counter:%d\n", once_timer_counter++);	//100ms*100
		osal_start_timerEx(application_TaskID, OSAL_ONCE_TIMER_EVT, 1000);

		return ( events ^ OSAL_ONCE_TIMER_EVT );
	}
	
	if ( events & OSAL_RELOAY_TIMER_EVT )
	{

			hal_nrz_init();
			hal_nrz_config_channel(P14, FMUX_NRZ_DATA0, 0);
			ch_cfg.tx_bits_count = 4*8+1;	//tx bit counts
			hal_nrz_config_set(ch_cfg);
      nrz_ctrl_frame_ctrl_setf(0x03);// carrier, frame
      nrz_ctrl_tx_ctrl_endian_setf(0x1);// big endian
			hal_nrz_dma_config((uint32)ir_code);
			hal_nrz_start();
       
	   osal_start_timerEx(application_TaskID, OSAL_RELOAY_TIMER_EVT, 5000);
		return ( events ^ OSAL_RELOAY_TIMER_EVT );
	}

  // Discard unknown events
  return 0;
}

/*********************************************************************
*********************************************************************/

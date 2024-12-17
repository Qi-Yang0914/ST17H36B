

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
#include "gpio_demo.h"
#include "log.h"
#include "gpio.h"
#include "clock.h"
#include "pwrmgr.h"
#include "error.h"
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
#define GPIO_TEST_NUM 		4

gpioin_t pin_test[GPIO_TEST_NUM];
gpio_pin_e pin_o[3] = {P0,P1,P19};
gpio_pin_e pin_i[4] = {P9,P10,P7,P8};

volatile unsigned int wakeup_cnt = 0;
volatile unsigned int int_cnt = 0;

/*********************************************************************
 * LOCAL FUNCTIONS
 */
void pos_cb(gpio_pin_e pin,gpio_polarity_e type)
{
//	uint8_t pin_idx = pin;
  _HAL_CS_ALLOC_();
  HAL_ENTER_CRITICAL_SECTION();

	if(s_gpio_wakeup_src)
	{
    LOG("WWWWWWWWWWWWWWWWWWW: pin:%d (pos) 0x%x, %d\n",pin,s_gpio_wakeup_src,wakeup_cnt);
		wakeup_cnt++;
	}
	else
	{
		LOG("IIIIIIIIIIIIIIIIIII: pin:%d (pos)    %d\n",pin,int_cnt);
		int_cnt++;
	}
	s_gpio_wakeup_src = 0;
	HAL_EXIT_CRITICAL_SECTION();
}

void neg_cb(gpio_pin_e pin,gpio_polarity_e type)
{
//	uint8_t pin_idx = pin;
  _HAL_CS_ALLOC_();
	HAL_ENTER_CRITICAL_SECTION();

	if(s_gpio_wakeup_src)
	{
    LOG("WWWWWWWWWWWWWWWWWWW: pin:%d (neg) 0x%x, %d\n",pin,s_gpio_wakeup_src,wakeup_cnt);
		wakeup_cnt++;
	}
	else
	{
		LOG("IIIIIIIIIIIIIIIIIII: pin:%d (neg)   %d\n",pin,int_cnt);
		int_cnt++;
	}
	s_gpio_wakeup_src = 0;
	HAL_EXIT_CRITICAL_SECTION();
}

/*********************************************************************
 * PROFILE CALLBACKS
 */

/*********************************************************************
 * PUBLIC FUNCTIONS
 */

#define GPIO_TEST_SLEEP 0

#if (GPIO_TEST_SLEEP == 1)
void gpio_wakeup_cfg(gpio_polarity_e type)
{		
//		aon_pm_pm_reg13_slp_en_xt32k_setf(1);
		aon_pm_pm_reg13_slp_en_rc32k_setf(1);

		aon_pm_pm_reg13_ovr_io_pending_setf(1);//pending overwrite

		gpio_dir(P7, GPIO_INPUT);
		gpio_wakeup_set(P7, type);
		PRINT("pin=%d, \n",gpio_read(P7));
}

#endif

void gpio_Init(uint8 task_id)
{
	volatile int ret;
	static bool gpioin_state[GPIO_TEST_NUM];
	
	gpio_pupd_e type = GPIO_PULL_DOWN;	//GPIO_PULL_UP;	//

	application_TaskID = task_id;
	LOG("GPIO_demo\n");
//	LOG("io_wu_mask0 = %d\n", 	(* (volatile int *) 0x4000F0A0));
#if 0
	ret = gpioin_init(pin_test, sizeof(pin_test)/sizeof(pin_test[0]));
	if(ret != PPlus_SUCCESS)
	{
		LOG("error:%d,stop,line:%d\n",ret,__LINE__);
		while(1);
	}

	for(int i=0; i < GPIO_TEST_NUM; i++)
	{
		gpio_dir(pin_i[i], GPIO_INPUT);
		gpio_pull_set(pin_i[i], type);
		
		ret = gpioin_register(pin_i[i], pos_cb, neg_cb);
		if(PPlus_SUCCESS != ret)
		{
			LOG("error detect,please check:%d\n", __LINE__);
		}

		gpioin_state[i] = gpio_read(pin_i[i]);
		LOG("gpioin_state:%d %d\n",i,gpioin_state[i]);
	}
#endif

#if (GPIO_TEST_SLEEP == 1)	
	PRINT("enter sleep \n");
	gpio_wakeup_cfg(POL_FALLING);				//2 POL_RISING
	aon_pm_pm_reg1_power_slp_i_setf(0xA); 		//SLEEP_MODE
	PRINT("out sleep \n");
//	aon_pm_pm_reg0_power_off_i_setf(0x5); 		//OFF_MODE
#endif


#if 0
/***************retretion**********************/
	for(int i=0;i<3;i++)
	{
		gpio_dir(pin_o[i],GPIO_OUTPUT);
		gpio_write(pin_o[i], TRUE);
		gpio_retention(pin_o[i],TRUE);
	}

/***************off retention enable**********************/
	for(int i=0; i<3; i++)
	{
		gpio_retention_enable(pin_o[i], TRUE);
	}
#endif
/***************power off**********************/
#if 0
	LOG("sleep off! \n");
//
	gpio_dir(P10,GPIO_INPUT);
	gpio_pull_set(P10,GPIO_PULL_UP);
	pwroff_cfg_t pcfg[1] ={0};
	pcfg[0].pin = P10;
	pcfg[0].type = POL_FALLING;
	pcfg[0].on_time = 300;

	hal_pwrmgr_poweroff(pcfg,1);
#endif

//	osal_set_event(application_TaskID,OSAL_SET_EVENT_EVT);
//	osal_start_timerEx(application_TaskID, OSAL_ONCE_TIMER_EVT, 1000);

	osal_start_reload_timer(application_TaskID, OSAL_RELOAY_TIMER_EVT, 1000);
}


uint16 gpio_ProcessEvent( uint8 task_id, uint16 events )
{
	static uint32_t once_timer_counter = 0;
	static uint32_t cycle_timer_counter = 0;
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
		
		if(once_timer_counter%2)
		{
			gpio_write(pin_o[0],1);
		}
		else
		{
			gpio_write(pin_o[0],0);
		}
		
		return ( events ^ OSAL_ONCE_TIMER_EVT );
	}
	
	if ( events & OSAL_RELOAY_TIMER_EVT )
	{
		LOG("cycle_timer_counter:%d\n",cycle_timer_counter++);

		if(cycle_timer_counter%2)
		{
			for(int i= 0; i<3; i++)
			{
//				LOG("0\n");
				gpio_write(pin_o[i], 1);
			}

		}
		else
		{
			for(int i= 0; i<3; i++)
			{
//				LOG("1\n");
				gpio_write(pin_o[i], 0);
			}
		}
		return ( events ^ OSAL_RELOAY_TIMER_EVT );
	}

  // Discard unknown events
  return 0;
}

/*********************************************************************
*********************************************************************/

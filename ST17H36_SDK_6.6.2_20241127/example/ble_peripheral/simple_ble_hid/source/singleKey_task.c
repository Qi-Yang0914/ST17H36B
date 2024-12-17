

/**************************************************************************************************
  Filename:       singleKey_task.c
  Revised:        $20191217 $
  Revision:       $0.1 $


**************************************************************************************************/

/*********************************************************************
 * INCLUDES
 */
#include "rom_sym_def.h"

#include "bcomdef.h"
#include "OSAL.h"
#include "log.h"
#include "error.h"
#include "stdio.h"
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "gpio.h"
#include "clock.h"
#include "gatt.h"
#include "peripheral.h"
#include "pwrmgr.h"

#include "hiddev.h"
#include "hidkbd.h"

#include "singleKey_task.h"

// globle
uint8 singleKey_TaskID;

#define ONFF_LONG_TIMEOUT 2000			 // 2000ms
#define SIIMPLE_BTN_DEBOUNCE_TIME 40 // ms

#define GPIO_TEST_NUM 3
#define GPIO_KEY_NUM 3

#define BTN_ONOFF_UP_IO_INDEX 0
#define BTN_VOICE_UP_IO_INDEX 1
#define BTN_VOICE_DN_IO_INDEX 2



gpioin_t pin_tab[GPIO_TEST_NUM];
gpio_pin_e singleKey_tab[GPIO_KEY_NUM]={P11,P12,P13};



extern gaprole_States_t hidDev_PeripheralState;


void gpio_wakeup_cfg(gpio_pin_e wakeup_io,gpio_polarity_e type)
{		
//		aon_pm_pm_reg13_slp_en_xt32k_setf(1);

		aon_pm_pm_reg13_slp_en_rc32k_setf(1);
		aon_pm_pm_reg13_ovr_io_pending_setf(1);//pending overwrite

		gpio_dir(wakeup_io, GPIO_INPUT);
		gpio_wakeup_set(wakeup_io, type);
	
}

void singlekey_triggle_poweroff(void)
{
	/***************power off**********************/
	LOG("sleep off! \n");

	 gpio_wakeup_cfg(singleKey_tab[BTN_ONOFF_UP_IO_INDEX],POL_FALLING);				//2 POL_RISING POL_FALLING

	 aon_pm_pm_reg0_power_off_i_setf(0x5); 		//OFF_MODE
}

void __attribute__((section("._func_ram_."))) pos_cb(gpio_pin_e pin, gpio_polarity_e type)
{
	//	uint8_t key_def_tabdx = pin;
	_HAL_CS_ALLOC_();
	HAL_ENTER_CRITICAL_SECTION();

	if (type == POSEDGE)
	{
		// LOG("RUN RLS 111: pin:%d (pos) 0x%x\n",pin,s_gpio_wakeup_src);
		if (pin == singleKey_tab[BTN_ONOFF_UP_IO_INDEX])
		{
			osal_start_timerEx(singleKey_TaskID, SINGLEKEY_BTN_ONOFF_RLS_EVT,SIIMPLE_BTN_DEBOUNCE_TIME);
		}
		// LOG("s_wake0:%d\n",s_gpio_wakeup_src
	}
	else
	{
		// LOG("III 111: pin:%d (pos)    %d\n",pin);
	}
	s_gpio_wakeup_src = 0;
	HAL_EXIT_CRITICAL_SECTION();
}

void __attribute__((section("._func_ram_."))) neg_cb(gpio_pin_e pin, gpio_polarity_e type)
{
	//	uint8_t key_def_tabdx = pin;
	_HAL_CS_ALLOC_();
	HAL_ENTER_CRITICAL_SECTION();

	if (type == NEGEDGE)
	{
		// LOG("RUN PRESS 222: pin:%d (neg) 0x%x, %d\n",pin,s_gpio_wakeup_src);
		if (pin == singleKey_tab[BTN_ONOFF_UP_IO_INDEX])
		{
			osal_start_timerEx(singleKey_TaskID, SINGLEKEY_BTN_ONOFF_PRESS_EVT, SIIMPLE_BTN_DEBOUNCE_TIME);
		}
		else if (pin == singleKey_tab[BTN_VOICE_UP_IO_INDEX])
		{
			osal_start_timerEx(singleKey_TaskID, SINGLEKEY_BTN_VOICE_UP_PRESS_EVT, SIIMPLE_BTN_DEBOUNCE_TIME);
		}
		else if (pin == singleKey_tab[BTN_VOICE_DN_IO_INDEX])
		{
			osal_start_timerEx(singleKey_TaskID, SINGLEKEY_BTN_VOICE_DN_PRESS_EVT, SIIMPLE_BTN_DEBOUNCE_TIME);
		}
		// LOG("s_wake0:%d\n",s_gpio_wakeup_src
	}
	else
	{
		// LOG("III 222: pin:%d (neg)   %d\n",pin);
	}
	s_gpio_wakeup_src = 0;
	HAL_EXIT_CRITICAL_SECTION();
}

static int touch_init(void)
{

	volatile int ret;
	static bool gpioin_state[GPIO_TEST_NUM];
    gpio_init();
	ret = gpioin_init(pin_tab, sizeof(pin_tab) / sizeof(pin_tab[0]));

	if (ret != PPlus_SUCCESS)
	{
		LOG("error:%d,stop,line:%d\n", ret, __LINE__);
		while (1)
			;
	}

	for (int i = 0; i < GPIO_KEY_NUM; i++)
	{
		gpio_fmux_control(singleKey_tab[i], Bit_DISABLE);
		gpio_dir(singleKey_tab[i], GPIO_INPUT);
		gpio_pull_set(singleKey_tab[i], GPIO_PULL_UP);
		// LOG("s_wake0:%d\n",s_gpio_wakeup_src);
		ret = gpioin_register(singleKey_tab[i], pos_cb, neg_cb);
		// LOG("s_wake:%d\n",s_gpio_wakeup_src);
		if (PPlus_SUCCESS != ret)
		{
			LOG("error detect,please check:%d\n", __LINE__);
		}

		gpioin_state[i] = gpio_read(singleKey_tab[i]);
		LOG("gpioin_state:%d %d\n", i, gpioin_state[i]);
	}
}

static void SingleKey_Task_ProcessOSALMsg(osal_event_hdr_t *pMsg);

/*
 * Task Initialization for the BLE Application
 */
void SingleKey_task_Init(uint8 task_id)
{
	LOG("single key task init\n\r");
	singleKey_TaskID = task_id;

	touch_init();
}

uint16 SingleKey_task_ProcessEvent(uint8 task_id, uint16 events)
{

	VOID task_id; // OSAL required parameter that isn't used in this function
	uint8 hid_valueBuf[2];

	if (events & SYS_EVENT_MSG)
	{
		uint8 *pMsg;

		if ((pMsg = osal_msg_receive(singleKey_TaskID)) != NULL)
		{
			SingleKey_Task_ProcessOSALMsg((osal_event_hdr_t *)pMsg);

			// Release the OSAL message
			VOID osal_msg_deallocate(pMsg);
		}

		// return unprocessed events
		return (events ^ SYS_EVENT_MSG);
	}

	if (events & SINGLEKEY_BTN_ONOFF_PRESS_EVT)
	{ 		
		if (gpio_read(singleKey_tab[BTN_ONOFF_UP_IO_INDEX]) == 0)
		{
			LOG("btn 1 press\n");
			if(hidDev_PeripheralState==GAPROLE_CONNECTED)
			{
			hid_valueBuf[0]=0xE9;
			hid_valueBuf[1]=0x0;
			HidDev_send_consumer_report(hid_valueBuf,2);
			osal_start_timerEx(singleKey_TaskID, SINGLEKEY_BTN_SEND_RLS_EVT, 50);
            }
			osal_start_timerEx(singleKey_TaskID, SINGLEKEY_BTN_ONOFF_LONG_PRESS_EVT, ONFF_LONG_TIMEOUT);
		}
		return (events ^ SINGLEKEY_BTN_ONOFF_PRESS_EVT);
	}

	if (events & SINGLEKEY_BTN_ONOFF_RLS_EVT)
	{
		if (gpio_read(singleKey_tab[BTN_ONOFF_UP_IO_INDEX]) == 1)
		{
			LOG("btn 1 rls\n");
			osal_stop_timerEx(singleKey_TaskID, SINGLEKEY_BTN_ONOFF_LONG_PRESS_EVT);
		}
		return (events ^ SINGLEKEY_BTN_ONOFF_RLS_EVT);
	}

	if (events & SINGLEKEY_BTN_ONOFF_LONG_PRESS_EVT)
	{
		if (gpio_read(singleKey_tab[BTN_ONOFF_UP_IO_INDEX]) == 0)
		{
			LOG("btn 1 long press\n");
			singlekey_triggle_poweroff();
		}
		return (events ^ SINGLEKEY_BTN_ONOFF_LONG_PRESS_EVT);
	}

	if (events & SINGLEKEY_BTN_VOICE_UP_PRESS_EVT)
	{
		if (gpio_read(singleKey_tab[BTN_VOICE_UP_IO_INDEX]) == 0)
		{
			LOG("btn 2 press\n");
			if(hidDev_PeripheralState==GAPROLE_CONNECTED)
			{
			hid_valueBuf[0]=0xE9;
			hid_valueBuf[1]=0x0;
			HidDev_send_consumer_report(hid_valueBuf,2);
			osal_start_timerEx(singleKey_TaskID, SINGLEKEY_BTN_SEND_RLS_EVT, 50);			
			}
		}

		return (events ^ SINGLEKEY_BTN_VOICE_UP_PRESS_EVT);
	}

	if (events & SINGLEKEY_BTN_VOICE_DN_PRESS_EVT)
	{
		if (gpio_read(singleKey_tab[BTN_VOICE_DN_IO_INDEX]) == 0)
		{  
			LOG("btn 3 press\n");
			if(hidDev_PeripheralState==GAPROLE_CONNECTED)
			{
			hid_valueBuf[0]=0xEA;
			hid_valueBuf[1]=0x0;
			HidDev_send_consumer_report(hid_valueBuf,2);
			}

		}
		return (events ^ SINGLEKEY_BTN_VOICE_DN_PRESS_EVT);
	}
	if (events & SINGLEKEY_BTN_SEND_RLS_EVT)
	{
		uint8 t_ret=SUCCESS;
		hid_valueBuf[0]=0x0;
		hid_valueBuf[1]=0x0;
		t_ret=HidDev_send_consumer_report(hid_valueBuf,2);

		if (t_ret!=SUCCESS)
		{
			WaitMs(20);
			LOG("hid rls again\n");
			HidDev_send_consumer_report(hid_valueBuf,2);
		}
		
		return (events ^ SINGLEKEY_BTN_SEND_RLS_EVT); 
	}

	

	return 0;
}

static void SingleKey_Task_ProcessOSALMsg(osal_event_hdr_t *pMsg)
{
	switch (pMsg->event)
	{

	default:
		break;
	}
}

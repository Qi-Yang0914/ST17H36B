

/**************************************************************************************************
    Filename:       adc_demo.c
    Revised:        $Date $
    Revision:       $Revision $


**************************************************************************************************/

/*********************************************************************
    INCLUDES
*/
#include <stdlib.h>
#include <string.h>
#include "OSAL.h"
#include "adc_demo.h"
#include "log.h"
#include "gpio.h"
#include "clock.h"
#include "error.h"
#include "pwrmgr.h"
#include "uart.h"
#include "dma.h"
#include "adc.h"
#include "jump_function.h"

uint16_t adc_dma_addr[DMA_TRANSF_SIZE]={0};
uint8 adc_TaskID;

static adc_cfg_t adc_cfg = {
    .channel = ADC_CH_4,
    .is_differential_mode = FALSE,
    .channel_negetive = 0x0,//only support CH1-5 in diff mode
    .irq_enable = FALSE,
};

/**************************************************************************************************
    FUNCTIONS
 **************************************************************************************************/
static void adcPoilling_MeasureTask( void );

void adc_demo_Init(uint8 task_id)
{
    adc_TaskID = task_id;

    //LOG("adc_demo_Init \n");

    uart_init(1500000,P4,P5,NULL);
	// memset(adc_dma_addr,0,DMA_TRANSF_SIZE*2);

	adcPoilling_MeasureTask();

    //osal_start_reload_timer(adc_TaskID, OSAL_RELOAY_TIMER_EVT, 5);
}

uint16 adc_demo_ProcessEvent(uint8 task_id, uint16 events)
{	
    if (events & START_DEVICE_EVT) {
    	//LOG("start eve \n");
        return (events ^ START_DEVICE_EVT);
    }
    if (events & OSAL_RELOAY_TIMER_EVT) {
    	//LOG("eve \n");
        if (adc_cfg.is_differential_mode)
        {
            s_channel_full();
        }
        else
        {
            s_channel_filter();
        }
        return (events ^ OSAL_RELOAY_TIMER_EVT);
    }

    return 0;
}

void voice_cb(adc_evt_t* pev)
{
	uart_send_buff((uint8_t *)pev->data,pev->size);
}

static void adcPoilling_MeasureTask( void )
{
	uint32_t adc_samp=0;
	
#if 0 //diff mode
	adc_cfg.is_differential_mode = TRUE;
	adc_cfg.channel = ADC_CH_8;
	adc_cfg.channel_negetive = ADC_CH_2;
#endif

    /* test1: single sample  */
	adc_samp = adc_sample(adc_cfg);
    LOG("ADC=%#x \n",adc_samp);

	/* test2: systick timer sample  */
	adc_voice_start(adc_cfg, adc_dma_addr, ADC_SAMPLE_PERIOD, voice_cb);
	wait_hclk_cycle_us(1000*1000);
    adc_voice_stop();
    LOG("systick end \n");

	/* test3: osal timer sample  */
	adc_voice_start_osal(adc_cfg, adc_dma_addr, adc_TaskID, OSAL_RELOAY_TIMER_EVT, ADC_SAMPLE_PERIOD, voice_cb);
	wait_hclk_cycle_us(1000*1000);
    //adc_voice_stop_osal(adc_TaskID, OSAL_RELOAY_TIMER_EVT);
    LOG("osal timer end \n");
}



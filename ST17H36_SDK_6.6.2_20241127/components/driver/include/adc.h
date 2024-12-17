
#ifndef __ADC__H__
#define __ADC__H__

#include "types.h"
#include "bus_dev.h"
#include "gpio.h"
#include "systick.h"

#define ADC_SAMPLE_PERIOD 2//ms
#define DMA_TRANSF_SIZE  (0x100) 
#define ADC_DATA_ADDR    (0x40050000)
#define ADC_CACHE_SIZE  (0x40) //buffer for 5ms interval

typedef enum {
    ADC_CH_VDD =0,
    ADC_CH_1 = 1,
    ADC_CH_2 = 2,
    ADC_CH_3 = 3,
    ADC_CH_4 = 4,
    ADC_CH_5 = 5,
    ADC_CH_VBAT = 6,
    ADC_CH_7 = 7,
    ADC_CH_8 = 8,
    ADC_CH_9 = 9,
    ADC_CH_10 = 10,
    ADC_CH_11 = 11,
    ADC_CH_MUX = 13,
}adc_CH_t;

typedef enum{
  HAL_ADC_DATA_IRQ = 0,
  HAL_ADC_CMP_IRQ = 1,
}IRQ_TYPE_t;
  
 typedef struct _adc_cvt_t{
  uint8_t* data;
  uint8_t   size; 
}adc_evt_t;

typedef void (*adc_cb_t)(adc_evt_t* pev);

typedef struct _adc_Cfg_t{
  uint8_t  channel;
  uint8_t  is_differential_mode;
  uint8_t  channel_negetive; //only used in diff mode
  uint8_t  irq_enable; 
}adc_cfg_t;

typedef struct {
    uint8_t adc_pin;
    uint8_t adc_ch;
	uint16_t aio_det_ctrl;
} adc_pinmap_t;


/**************************************************************************************
 * @fn          hal_adc_init
 *
 * @brief       This function process for adc initial 
 *
 * input parameters
 *
 * @param       ADC_CH_e adc_pin: adc pin select;ADC_CH0~ADC_CH7 and ADC_CH_VOICE
 *              ADC_SEMODE_e semode: single-end mode and diff mode select; 1:SINGLE_END(single-end mode) 0:DIFF(Diff mode)
 *              IO_CONTROL_e amplitude: input signal amplitude, 0:BELOW_1V,1:UP_1V
 *
 * output parameters
 *
 * @param       None.
 *
 * @return      None.
 **************************************************************************************/

int hal_adc_config_channel(adc_cfg_t cfg);

int hal_adc_start(void);

int hal_adc_stop(void);

void s_channel_full(void);

void s_channel_filter(void);

int adc_voice_start(adc_cfg_t cfg, uint16_t* dma_addr, uint32_t adc_interval,adc_cb_t adc_voice_cb);

void adc_voice_stop(void);

int adc_voice_start_osal(adc_cfg_t cfg, uint16_t* dma_addr, uint8_t adc_task_id, uint16_t adc_evt_id, uint32_t adc_interval,adc_cb_t adc_voice_cb);

void adc_voice_stop_osal(uint8_t adc_task_id, uint16_t adc_evt_id);

int adc_sample(adc_cfg_t cfg);

#endif

#include "rom_sym_def.h"
#include "error.h"
#include "gpio.h"
#include "pwrmgr.h"
#include "clock.h"
#include <string.h>
#include "log.h"
#include "dma.h"
#include "systick.h"
#include "adc.h"
#include "jump_function.h"
#include "dma.h"

adc_cb_t s_voice_cb = NULL;
uint32_t dma_store_addr;
static uint8 last_drop_byte; // unused data size ahead of the adc data we need to take

adc_pinmap_t s_pinmap[ADC_CH_MUX] = {	
    {P4,ADC_CH_1, 8},
    {P6,ADC_CH_2, 10},
    {P10,ADC_CH_3, 12},
    {P12,ADC_CH_4, 14},
    {P14,ADC_CH_5, 16},
    {P5,ADC_CH_7, 9},
    {P9,ADC_CH_8, 11},
    {P11,ADC_CH_9, 13},
    {P13,ADC_CH_10, 15},
    {P15,ADC_CH_11, 17},
    {GPIO_DUMMY,ADC_CH_VDD, 18}, 
    {GPIO_DUMMY,ADC_CH_VBAT, 19},
    {GPIO_DUMMY,ADC_CH_MUX,GPIO_DUMMY}
};
int hal_gpio_cfg_analog_io(gpio_pin_e pin, bit_action_e value)
{
    if (value)
        iomux_r_analog_io_r_analog_io_en_setf(iomux_r_analog_io_r_analog_io_en_getf() | BIT(pin));
    else
        iomux_r_analog_io_r_analog_io_en_setf(iomux_r_analog_io_r_analog_io_en_getf() & ~BIT(pin));

    return PPlus_SUCCESS;
}

static void adc_wakeup_hdl(void)
{
    NVIC_SetPriority((IRQn_Type)adcc_IRQn, IRQ_PRIO_HAL);
}

/**************************************************************************************
 * @fn          hal_adc_init
 *
 * @brief       This function process for adc initial
 *
 * input parameters
 *
 * @param       ADC_MODE_e mode: adc sample mode select;1:SAM_MANNUAL(mannual mode),0:SAM_AUTO(auto mode)
 *              ADC_CH_e adc_pin: adc pin select;ADC_CH0~ADC_CH7 and ADC_CH_VOICE
 *              ADC_SEMODE_e semode: signle-ended mode negative side enable; 1:SINGLE_END(single-ended mode) 0:DIFF(Differentail mode)
 *              IO_CONTROL_e amplitude: input signal amplitude, 0:BELOW_1V,1:UP_1V
 *
 * output parameters
 *
 * @param       None.
 *
 * @return      None.
 **************************************************************************************/

void hal_adc_irq(void)
{
    int status = adcc_adcc_reg2_adc_int_src_getf();
    LOG("ADC IRQ  \n");
}

void hal_adc_irq_enable(IRQ_TYPE_t irq)
{
	NVIC_SetPriority((IRQn_Type)adcc_IRQn, IRQ_PRIO_HAL);
    NVIC_EnableIRQ((IRQn_Type)adcc_IRQn);
    JUMP_FUNCTION_SET(V29_IRQ_HANDLER,(uint32_t)&hal_adc_irq);
	
	adcc_aes_reg5_adc_int_mask_setf(1<<irq);
	pwrmgr_register(MOD_ADCC, NULL, NULL);
}

int hal_adc_config_channel(adc_cfg_t cfg)
{
    uint8_t i;

    /* open adc_gate_clk*/
    pcr_sw_reset0_srst_adcc_n_setf(0);
    pcr_sw_reset0_srst_adcc_n_setf(1);
    pcr_sw_clk0_clkg_adcc_setf(1);

    /* eanble adc irq */
	if(cfg.irq_enable == TRUE)
	{
	  hal_adc_irq_enable(HAL_ADC_DATA_IRQ);
	}

    //pcrm_clkhf_ctl1_dig_clk_32m_sel_setf(0);
    pcrm_clkhf_ctl1_rxadc_clk_sel_setf(1); 

    pcrm_adc_ctrl_adc12_pu_setf(1);
    pcrm_adc_ctrl_sar12b_auto_sweep_en_setf(1);//1:only support single,not support diff
    pcrm_clksel_clk_1p28m_en_setf(1);
	pcrm_clk32_div_para_clk32_div_para_setf(0xf);

    pcrm_adc_ctrl_sar12b_ch_config_setf(0); //clear channel;
    iomux_r_analog_io_set(0); //clear ana_io

	/* sample voltage  3V */
	pcrm_adc_ctrl_sar12b_ref_sel_setf(0xC);
	pcrm_adc_ctrl_sar12b_ref_res_tune_setf(0);//0:120K:1:100K
	pcrm_i_analog_ctrl1_set(0);

  	if(cfg.is_differential_mode == TRUE)
  	{
  	  pcrm_adc_ctrl_sar12b_auto_sweep_en_setf(0);//1:only support single,not support diff
  	}

	/* channel_positive only support ch7~11
	 * channel_negetive only support ch1~5	
	 */
	for(i=0; i<ADC_CH_MUX; i++)
	{	
	   if ((s_pinmap[i].adc_ch == cfg.channel)||((s_pinmap[i].adc_ch == cfg.channel_negetive)&&(cfg.channel_negetive != 0)) )
		{
		   if(s_pinmap[i].adc_pin < GPIO_NUM)
		   	{
			   hal_gpio_cfg_analog_io(s_pinmap[i].adc_pin, Bit_ENABLE);
		   	}
			pcrm_adc_ctrl_sar12b_ch_config_setf(pcrm_adc_ctrl_sar12b_ch_config_getf() | (0x1<<(s_pinmap[i].adc_ch)));
			pcrm_i_analog_ctrl1_set(pcrm_i_analog_ctrl1_get() | (0x1<<(s_pinmap[i].aio_det_ctrl)));
		}
	}

	last_drop_byte = 0Xff;
    return PPlus_SUCCESS;
}

int hal_adc_start(void)
{
    pwrmgr_lock(MOD_ADCC);
	
	adcc_adcc_reg1_adc12_pu_setf(1);
    adcc_adcc_reg0_adc_en_setf(1);
}

int hal_adc_stop(void)
{
    int i;

    NVIC_DisableIRQ((IRQn_Type)adcc_IRQn);

	iomux_r_analog_io_set(0);//clear ana_io
	pcrm_adc_ctrl_sar12b_ch_config_setf(0);//clear channel;
	pcrm_i_analog_ctrl1_set(0);

	pcrm_adc_ctrl_adc12_pu_setf(0);

	adcc_adcc_reg1_adc12_pu_setf(0);
	adcc_adcc_reg1_adc_clk_sel_setf(0);
    adcc_adcc_reg0_adc_en_setf(1);

    pcr_sw_clk0_clkg_adcc_setf(0);
    pwrmgr_unlock(MOD_ADCC);

    return PPlus_SUCCESS;
}

void adc_dma_start(void)
{
	HAL_DMA_t ch_cfg;
    DMA_CH_CFG_t adc_dma_cfg = {
        .transf_size = DMA_TRANSF_SIZE, /**< Length/Size of transfer */
        .src_addr = ADC_DATA_ADDR,
        .sinc = DMA_INC_NCHG,
        .src_tr_width = DMA_WIDTH_HALFWORD,
        .src_msize = DMA_BSIZE_1,
        .src_reload_en = TRUE,

        .dst_addr = dma_store_addr,
        .dinc = DMA_INC_INC,
        .dst_tr_width = DMA_WIDTH_HALFWORD,
        .dst_msize = DMA_BSIZE_1,

        .dst_reload_en = TRUE,
        .enable_int = FALSE,
    };
    hal_dma_init();
    ch_cfg.dma_channel = DMA_CH_0;
    ch_cfg.evt_handler = NULL;
    hal_dma_init_channel(ch_cfg);
    hal_dma_config_channel(DMA_CH_0,&adc_dma_cfg);
    hal_dma_start_channel(DMA_CH_0);
}

void adc_dma_stop(void)
{
	hal_dma_stop_channel(DMA_CH_0);
}

// for take all 12 channel data when sweep en is open and differential mode, 100k rate
void s_channel_full(void)
{
  adc_evt_t evt;
  uint16_t adc_data[ADC_CACHE_SIZE*2];
  uint16_t adc_data_len = 0,dma_data_len = 0;
  uint32_t new_dma_addr = 0;
  static  uint32_t uart_send_addr=0;
  uint32_t dma_end_addr = dma_store_addr + (DMA_TRANSF_SIZE*2);

  uart_send_addr = (uart_send_addr == 0) ? dma_store_addr : uart_send_addr;
	
  new_dma_addr = dmac_dar0_get();

  do{
	  uart_send_addr = (uart_send_addr>= dma_end_addr) ? dma_store_addr : uart_send_addr;

	  if(new_dma_addr < uart_send_addr)
	  {
		  dma_data_len = dma_end_addr - uart_send_addr;
	  }
	  else
	  {
	      dma_data_len = new_dma_addr - uart_send_addr;
	  }
	  adc_data_len = (dma_data_len > ADC_CACHE_SIZE*4) ? ADC_CACHE_SIZE*4 : dma_data_len;
	  
	  memcpy(adc_data,(void *)uart_send_addr,adc_data_len);

 	 evt.data = (uint8_t *)&adc_data[0];
     evt.size = adc_data_len;
     s_voice_cb(&evt);

	 uart_send_addr += adc_data_len;
  }while(uart_send_addr != new_dma_addr);
    
}

// change to only take one channel(1/12 data) when sweep en is open, for 8k rate (120/12)
void s_channel_filter(void)
{
  adc_evt_t evt;
  uint8_t adc_data[ADC_CACHE_SIZE*12];
  uint16_t adc_data_len = 0,dma_data_len = 0;
  uint32_t new_dma_addr = 0;
  static  uint32_t uart_send_addr=0;
  uint32_t dma_end_addr = dma_store_addr + (DMA_TRANSF_SIZE*2);
  uint8 skip = 0;

  uart_send_addr = (uart_send_addr == 0) ? dma_store_addr : uart_send_addr;
	
  new_dma_addr = dmac_dar0_get();

  do{
	  evt.size = 0;
	  uart_send_addr = (uart_send_addr>= dma_end_addr) ? dma_store_addr : uart_send_addr;

	  if(new_dma_addr < uart_send_addr)
	  {
		  dma_data_len = dma_end_addr - uart_send_addr;
	  }
	  else
	  {
	      dma_data_len = new_dma_addr - uart_send_addr;
	  }
	  adc_data_len = (dma_data_len > ADC_CACHE_SIZE*12) ? ADC_CACHE_SIZE*12 : dma_data_len;
	  
	  memcpy(adc_data,(void *)uart_send_addr,adc_data_len);

	if (last_drop_byte == 23)
	{
		evt.size += 1;
		skip = 1;
	}
	else
	{
		skip = 0;
	}

	if (last_drop_byte == 0xff)
	{
		last_drop_byte = 0;
		while (adc_data[last_drop_byte] == 0)
		{
			last_drop_byte += 1;
		}
	}
	if(adc_data_len <= last_drop_byte)
	{
		last_drop_byte = last_drop_byte - adc_data_len;
	}
	else
	{
		for (int i =0;i < (adc_data_len - last_drop_byte)/24;i++)
		{
			adc_data[2*i + skip] = adc_data[last_drop_byte + i*24];
			adc_data[2*i + 1 + skip] = adc_data[last_drop_byte + i*24 + 1];
			evt.size += 2;
		}

		if ((adc_data_len - last_drop_byte)%24 == 1)
		{
			adc_data[evt.size] = adc_data[last_drop_byte + (evt.size)/2*24];
			evt.size += 1;
			last_drop_byte = 23; // for half data status
		}
		else if ((adc_data_len - last_drop_byte)%24 > 1)
		{
			adc_data[evt.size] = adc_data[last_drop_byte + (evt.size)/2*24];
			adc_data[evt.size + 1] = adc_data[last_drop_byte + (evt.size)/2*24 + 1];
			evt.size += 2;
			last_drop_byte = 24 - (adc_data_len - last_drop_byte)%24;
		}
		else if((adc_data_len - last_drop_byte)%24 == 0)
		{
			last_drop_byte = 0;
		}
	}

 	 evt.data = (uint8_t *)&adc_data[0];
     s_voice_cb(&evt);

	 uart_send_addr += adc_data_len;
  }while(uart_send_addr != new_dma_addr);
    
}
int adc_voice_start(adc_cfg_t cfg, uint16_t* dma_addr, uint32_t adc_interval,adc_cb_t adc_voice_cb)
{	
	s_voice_cb = adc_voice_cb;

	dma_store_addr = (uint32_t)&dma_addr[0];
	if(dma_store_addr & 3)  return 1;

	hal_adc_config_channel(cfg);
	hal_adc_start();
	adc_dma_start();
	if (cfg.is_differential_mode)
	{
		systick_start(adc_interval,s_channel_full);
	}
	else
	{
		systick_start(adc_interval,s_channel_filter);
	}
	return 0;
}

void adc_voice_stop(void)
{
	hal_adc_stop();
	adc_dma_stop();
	systick_stop();
}

int adc_voice_start_osal(adc_cfg_t cfg, uint16_t* dma_addr, uint8_t adc_task_id, uint16_t adc_evt_id, uint32_t adc_interval,adc_cb_t adc_voice_cb)
{
	s_voice_cb = adc_voice_cb;
	
	dma_store_addr = (uint32_t)&dma_addr[0];
	if(dma_store_addr & 3)  return 1;

	hal_adc_config_channel(cfg);
	hal_adc_start();
	adc_dma_start();

	osal_start_reload_timer(adc_task_id, adc_evt_id, adc_interval);
	return 0;
}

void adc_voice_stop_osal(uint8_t adc_task_id, uint16_t adc_evt_id)
{
	hal_adc_stop();
	adc_dma_stop();
	osal_stop_timerEx(adc_task_id, adc_evt_id);
}


int adc_sample(adc_cfg_t cfg)
{
	uint32_t adc_data = 0, adc_sum = 0;
	int i=0;
	
	hal_adc_config_channel(cfg);
	pcrm_adc_ctrl_sar12b_auto_sweep_en_setf(0);
	hal_adc_start();

	do{
	   wait_hclk_cycle_us(125);
	   adc_data = (adcc_adcc_data_get())&0xFFFF;
	   //LOG("=%#x ",adc_data);
	   adc_sum += adc_data;
	   i++;
	}while(i<10);

	hal_adc_stop();

	return (adc_sum/10);
}



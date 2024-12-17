
#include "timx.h"
#include "error.h"
#include "jump_function.h"
#include "gpio.h"
#if DMAC_USE
#include "dma.h"
#endif

typedef struct Timx_Context
{
  Timx_Channel_Pin_e pin;
  Timx_Channel_e ch;
  Timx_Hdl_t evt_handler;
  #if DMAC_USE
  uint32_t dma_buff_addr;
  uint16_t  dma_buff_size;
  #endif
} Timx_Ctx_t;

static Timx_Ctx_t m_timx_Ctx =
{
  .evt_handler = NULL,
};

timx_cb_t s_timx_cb = NULL;

int hal_timx_clock_init(Timx_Clock_e clk)
{
  pcrm_timer_clk_ctl_timerx_clk_sel_setf(clk);
  return PPlus_SUCCESS;
}

static void timx_io_fmux_fun(gpio_pin_e pin, bit_action_e value, gpio_fmux_e fmux_function)
{
  if (value)
  {
    gpio_fmux_set(pin, fmux_function);
  }
  else
  {
    gpio_fmux_control(pin, Bit_DISABLE);
  }
}

/**
  * @brief  Configure the TIMx output channel 1.
  * @param  TIMx Timer Instance
  * @param  TIM_OCInitStruct pointer to the the TIMx output channel 1 configuration data structure
  * @retval An int enumeration value:
  *          - PPlus_SUCCESS: TIMx registers are de-initialized
  *          - ERROR: not applicable
  */
static int oc1_cfg(timx_oc_init_t* oc_init)
{
  /* Disable the Channel 1: Reset the CC1E Bit */
  //CLEAR_BIT(TIMx->CCER, TIM_CCER_CC1E);
  timx1_timx_ccer_cc1e_setf(0);

  //CLEAR_BIT(tmpccmr1, TIM_CCMR1_CC1S);
  timx1_timx_ccmr1_cc1s_setf(0);


  /* Write to TIMx CR2 */
  //LL_TIM_WriteReg(TIMx, CR2, tmpcr2);
  timx1_timx_cr2_ois1_setf(oc_init->idle_state);
  timx1_timx_cr2_ois1n_setf(oc_init->n_idle_state);

  /* Write to TIMx CCMR1 */
  //LL_TIM_WriteReg(TIMx, CCMR1, tmpccmr1);
  timx1_timx_ccmr1_oc1m_setf(oc_init->mode);

  /* Set the Capture Compare Register value */
  //LL_TIM_OC_SetCompareCH1(TIMx, TIM_OCInitStruct->CompareValue);
  timx1_timx_ccr1_set(oc_init->cmp_val);

  /* Write to TIMx CCER */
  //LL_TIM_WriteReg(TIMx, CCER, tmpccer);
  timx1_timx_ccer_cc1p_setf(oc_init->polarity);
  timx1_timx_ccer_cc1e_setf(oc_init->state);
  timx1_timx_ccer_cc1np_setf(oc_init->n_polarity);
  timx1_timx_ccer_cc1ne_setf(oc_init->n_state);
  return PPlus_SUCCESS;
}

/**
  * @brief  Configure the TIMx output channel 2.
  * @param  TIMx Timer Instance
  * @param  TIM_OCInitStruct pointer to the the TIMx output channel 2 configuration data structure
  * @retval An int enumeration value:
  *          - PPlus_SUCCESS: TIMx registers are de-initialized
  *          - ERROR: not applicable
  */
static int oc2_cfg( timx_oc_init_t* oc_init)
{
  /* Disable the Channel 1: Reset the CC1E Bit */
  //CLEAR_BIT(TIMx->CCER, TIM_CCER_CC1E);
  timx1_timx_ccer_cc2e_setf(0);

  //CLEAR_BIT(tmpccmr1, TIM_CCMR1_CC1S);
  timx1_timx_ccmr1_cc2s_setf(0);


  /* Write to TIMx CR2 */
  //LL_TIM_WriteReg(TIMx, CR2, tmpcr2);
  timx1_timx_cr2_ois2_setf(oc_init->idle_state);
  timx1_timx_cr2_ois2n_setf(oc_init->n_idle_state);

  /* Write to TIMx CCMR1 */
  //LL_TIM_WriteReg(TIMx, CCMR1, tmpccmr1);
  timx1_timx_ccmr1_oc2m_setf(oc_init->mode);

  /* Set the Capture Compare Register value */
  //LL_TIM_OC_SetCompareCH1(TIMx, TIM_OCInitStruct->CompareValue);
  timx1_timx_ccr2_set(oc_init->cmp_val);

  /* Write to TIMx CCER */
  //LL_TIM_WriteReg(TIMx, CCER, tmpccer);
  timx1_timx_ccer_cc2p_setf(oc_init->polarity);
  timx1_timx_ccer_cc2e_setf(oc_init->state);
  timx1_timx_ccer_cc2np_setf(oc_init->n_polarity);
  timx1_timx_ccer_cc2ne_setf(oc_init->n_state);
  return PPlus_SUCCESS;

}

/**
  * @brief  Configure the TIMx output channel 3.
  * @param  TIMx Timer Instance
  * @param  TIM_OCInitStruct pointer to the the TIMx output channel 3 configuration data structure
  * @retval An int enumeration value:
  *          - PPlus_SUCCESS: TIMx registers are de-initialized
  *          - ERROR: not applicable
  */
static int oc3_cfg( timx_oc_init_t* oc_init)
{
  /* Disable the Channel 1: Reset the CC1E Bit */
  //CLEAR_BIT(TIMx->CCER, TIM_CCER_CC1E);
  timx1_timx_ccer_cc3e_setf(0);

  //CLEAR_BIT(tmpccmr1, TIM_CCMR1_CC1S);
  timx1_timx_ccmr2_cc3s_setf(0);


  /* Write to TIMx CR2 */
  //LL_TIM_WriteReg(TIMx, CR2, tmpcr2);
  timx1_timx_cr2_ois3_setf(oc_init->idle_state);
  timx1_timx_cr2_ois3n_setf(oc_init->n_idle_state);

  /* Write to TIMx CCMR1 */
  //LL_TIM_WriteReg(TIMx, CCMR1, tmpccmr1);
  timx1_timx_ccmr2_oc3m_setf(oc_init->mode);

  /* Set the Capture Compare Register value */
  //LL_TIM_OC_SetCompareCH1(TIMx, TIM_OCInitStruct->CompareValue);
  timx1_timx_ccr3_set(oc_init->cmp_val);

  /* Write to TIMx CCER */
  //LL_TIM_WriteReg(TIMx, CCER, tmpccer);
  timx1_timx_ccer_cc3p_setf(oc_init->polarity);
  timx1_timx_ccer_cc3e_setf(oc_init->state);
  timx1_timx_ccer_cc3np_setf(oc_init->n_polarity);
  timx1_timx_ccer_cc3ne_setf(oc_init->n_state);

  return PPlus_SUCCESS;
}

/**
  * @brief  Configure the TIMx output channel 4.
  * @param  TIMx Timer Instance
  * @param  TIM_OCInitStruct pointer to the the TIMx output channel 4 configuration data structure
  * @retval An int enumeration value:
  *          - PPlus_SUCCESS: TIMx registers are de-initialized
  *          - ERROR: not applicable
  */
static int oc4_cfg( timx_oc_init_t* oc_init)
{
  /* Disable the Channel 1: Reset the CC1E Bit */
  //CLEAR_BIT(TIMx->CCER, TIM_CCER_CC1E);
  timx1_timx_ccer_cc4e_setf(0);

  //CLEAR_BIT(tmpccmr1, TIM_CCMR1_CC1S);
  timx1_timx_ccmr2_cc4s_setf(0);


  /* Write to TIMx CR2 */
  //LL_TIM_WriteReg(TIMx, CR2, tmpcr2);
  timx1_timx_cr2_ois4_setf(oc_init->idle_state);
  //timx1_timx_cr2_ois1n_setf(oc_init->n_idle_state);

  /* Write to TIMx CCMR1 */
  //LL_TIM_WriteReg(TIMx, CCMR1, tmpccmr1);
  timx1_timx_ccmr2_oc4m_setf(oc_init->mode);

  /* Set the Capture Compare Register value */
  //LL_TIM_OC_SetCompareCH1(TIMx, TIM_OCInitStruct->CompareValue);
  timx1_timx_ccr4_set(oc_init->cmp_val);

  /* Write to TIMx CCER */
  //LL_TIM_WriteReg(TIMx, CCER, tmpccer);
  timx1_timx_ccer_cc4p_setf(oc_init->polarity);
  timx1_timx_ccer_cc4e_setf(oc_init->state);
  timx1_timx_ccer_cc4np_setf(oc_init->n_polarity);
  timx1_timx_ccer_cc4ne_setf(oc_init->n_state);


  return PPlus_SUCCESS;
}


int timx_init(timx_init_t* init)
{
  //uint32_t tmpcr1;


  //tmpcr1 = LL_TIM_ReadReg(TIMx, CR1);

  /* Select the Counter Mode */
  //MODIFY_REG(tmpcr1, (TIM_CR1_DIR | TIM_CR1_CMS), TIM_InitStruct->CounterMode);

  /* Set the clock division */
  //MODIFY_REG(tmpcr1, TIM_CR1_CKD, TIM_InitStruct->ClockDivision);

  /* Write to TIMx CR1 */
  //LL_TIM_WriteReg(TIMx, CR1, tmpcr1);
  timx1_timx_cr1_dir_setf(init->dir);
  timx1_timx_cr1_cms_setf(init->cms);
  timx1_timx_cr1_ckd_setf(init->clock_div);

  /* Set the Autoreload value */
  timx1_timx_arr_set(init->autoreload);

  /* Set the Prescaler value */
  timx1_timx_psc_set(init->prescaler);

  /* Set the Repetition Counter value */
  timx1_timx_rcr_set(init->repetition_cnt);

  /* Generate an update event to reload the Prescaler
     and the repetition counter value (if applicable) immediately */
  timx1_timx_egr_ug_setf(1);

  return PPlus_SUCCESS;
}

/*out channel init*/
int timx_oc_init(uint8_t channel_map, timx_oc_init_t* oc_init)
{
  if(channel_map & BIT(0)){
    oc1_cfg(oc_init);
  }
  if(channel_map & BIT(1)){
    oc2_cfg(oc_init);
  }
  if(channel_map & BIT(2)){
    oc3_cfg(oc_init);
  }
  if(channel_map & BIT(3)){
    oc4_cfg(oc_init);
  }

  return PPlus_SUCCESS;

}

/**
  * @brief  Configure the TIMx intput channel 1.
  * @param  TIMx Timer Instance
  * @param  TIM_OCInitStruct pointer to the the TIMx output channel 1 configuration data structure
  * @retval An int enumeration value:
  *          - PPlus_SUCCESS: TIMx registers are de-initialized
  *          - ERROR: not applicable
  */
static int ic1_cfg(TIMx_IC_Init_t* ic_init)
{
  timx1_timx_ccer_cc1e_setf(0);
  timx1_timx_ccmr1_ic_cc1s_setf(ic_init->selection);
  timx1_timx_ccmr1_ic_ic1f_setf(ic_init->filter);
  timx1_timx_ccer_cc1p_setf(ic_init->polarity);
  timx1_timx_ccmr1_ic_ic1psc_setf(ic_init->prescaler);
  return PPlus_SUCCESS;
}

/**
  * @brief  Configure the TIMx intput channel 2.
  * @param  TIMx Timer Instance
  * @param  TIM_OCInitStruct pointer to the the TIMx output channel 2 configuration data structure
  * @retval An int enumeration value:
  *          - PPlus_SUCCESS: TIMx registers are de-initialized
  *          - ERROR: not applicable
  */
static int ic2_cfg(TIMx_IC_Init_t* ic_init)
{
  timx1_timx_ccer_cc2e_setf(0);
  timx1_timx_ccmr1_ic_cc2s_setf(ic_init->selection);
  timx1_timx_ccmr1_ic_ic2f_setf(ic_init->filter);
  timx1_timx_ccer_cc2p_setf(ic_init->polarity);
  timx1_timx_ccmr1_ic_ic2psc_setf(ic_init->prescaler);
  return PPlus_SUCCESS;
}

/**
  * @brief  Configure the TIMx intput channel 3.
  * @param  TIMx Timer Instance
  * @param  TIM_OCInitStruct pointer to the the TIMx output channel 3 configuration data structure
  * @retval An int enumeration value:
  *          - PPlus_SUCCESS: TIMx registers are de-initialized
  *          - ERROR: not applicable
  */
static int ic3_cfg(TIMx_IC_Init_t* ic_init)
{
  timx1_timx_ccer_cc3e_setf(0);
  timx1_timx_ccmr2_ic_cc3s_setf(ic_init->selection);
  timx1_timx_ccmr2_ic_ic3f_setf(ic_init->filter);
  timx1_timx_ccer_cc3p_setf(ic_init->polarity);
  timx1_timx_ccmr2_ic_ic3psc_setf(ic_init->prescaler);
  return PPlus_SUCCESS;
}

/**
  * @brief  Configure the TIMx intput channel 4.
  * @param  TIMx Timer Instance
  * @param  TIM_OCInitStruct pointer to the the TIMx output channel 4 configuration data structure
  * @retval An int enumeration value:
  *          - PPlus_SUCCESS: TIMx registers are de-initialized
  *          - ERROR: not applicable
  */
static int ic4_cfg(TIMx_IC_Init_t* ic_init)
{
  timx1_timx_ccer_cc4e_setf(0);
  timx1_timx_ccmr2_ic_cc4s_setf(ic_init->selection);
  timx1_timx_ccmr2_ic_ic4f_setf(ic_init->filter);
  timx1_timx_ccer_cc4p_setf(ic_init->polarity);
  timx1_timx_ccmr2_ic_ic4psc_setf(ic_init->prescaler);
  return PPlus_SUCCESS;
}

#if DMAC_USE
static void capture_dma_config(uint32_t *rx_buf, uint16_t rx_len, Timx_Channel_e ch)
{
  DMA_CH_CFG_t ic_dma_cfg = {
      .transf_size = rx_len, /**< Length/Size of transfer */
      .sinc = DMA_INC_NCHG,
      .src_tr_width = DMA_WIDTH_WORD,
      .src_msize = DMA_BSIZE_1,
      .src_reload_en = TRUE,

      .dst_addr = (uint32_t)rx_buf,
      .dinc = DMA_INC_INC,
      .dst_tr_width = DMA_WIDTH_WORD,
      .dst_msize = DMA_BSIZE_1,

      .dst_reload_en = TRUE,
      .enable_int = FALSE,
  };

  if (ch == TIM_CHANNEL_1)
  {
    ic_dma_cfg.src_addr = (FEMTO_REG_TIMX1_TIMX_CCR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
  }
  else if (ch == TIM_CHANNEL_2)
  {
    ic_dma_cfg.src_addr = (FEMTO_REG_TIMX1_TIMX_CCR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
  }
  else if (ch == TIM_CHANNEL_3)
  {
    ic_dma_cfg.src_addr = (FEMTO_REG_TIMX1_TIMX_CCR3_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
  }
  else if (ch == TIM_CHANNEL_4)
  {
    ic_dma_cfg.src_addr = (FEMTO_REG_TIMX1_TIMX_CCR4_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
  }

  hal_dma_config_channel(DMA_CH_0,&ic_dma_cfg);
}

static void compare_dma_config(uint32_t *rx_buf, uint16_t rx_len, Timx_Channel_e ch)
{
  DMA_CH_CFG_t oc_dma_cfg = {
      .transf_size = rx_len, /**< Length/Size of transfer */
      .sinc = DMA_INC_INC,
      .src_tr_width = DMA_WIDTH_WORD,
      .src_msize = DMA_BSIZE_1,
      .src_reload_en = TRUE,

      .src_addr = (uint32_t)rx_buf,
      .dinc = DMA_INC_NCHG,
      .dst_tr_width = DMA_WIDTH_WORD,
      .dst_msize = DMA_BSIZE_1,

      .dst_reload_en = TRUE,
      .enable_int = FALSE,
  };

  if (ch == TIM_CHANNEL_1)
  {
    oc_dma_cfg.dst_addr = (FEMTO_REG_TIMX1_TIMX_CCR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
  }
  else if (ch == TIM_CHANNEL_2)
  {
    oc_dma_cfg.dst_addr = (FEMTO_REG_TIMX1_TIMX_CCR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
  }
  else if (ch == TIM_CHANNEL_3)
  {
    oc_dma_cfg.dst_addr = (FEMTO_REG_TIMX1_TIMX_CCR3_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
  }
  else if (ch == TIM_CHANNEL_4)
  {
    oc_dma_cfg.dst_addr = (FEMTO_REG_TIMX1_TIMX_CCR4_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
  }

  hal_dma_config_channel(DMA_CH_0,&oc_dma_cfg);
}

void s_timx(void)
{
  timx_evt_t evt;
  uint32_t timx_data[m_timx_Ctx.dma_buff_size];
  uint16_t timx_data_len = 0,dma_data_len = 0;
  uint32_t new_dma_addr = 0;
  static  uint32_t uart_send_addr=0;
  uint32_t dma_end_addr = m_timx_Ctx.dma_buff_addr + (uint32_t)(m_timx_Ctx.dma_buff_size*4);

  uart_send_addr = (uart_send_addr == 0) ? m_timx_Ctx.dma_buff_addr : uart_send_addr;
	
  new_dma_addr = dmac_dar0_get();

  do{
	  uart_send_addr = (uart_send_addr>= dma_end_addr) ? m_timx_Ctx.dma_buff_addr : uart_send_addr;

	  if(new_dma_addr < uart_send_addr)
	  {
		  dma_data_len = dma_end_addr - uart_send_addr;
	  }
	  else
	  {
	      dma_data_len = new_dma_addr - uart_send_addr;
	  }
	  timx_data_len = (dma_data_len > m_timx_Ctx.dma_buff_size*4) ? m_timx_Ctx.dma_buff_size*4 : dma_data_len;
	  memcpy(timx_data,(void *)uart_send_addr,timx_data_len);

 	  evt.data = (uint32_t *)&timx_data[0];
    evt.size = timx_data_len;
    s_timx_cb(&evt);

	  uart_send_addr += timx_data_len;
  }while(uart_send_addr != new_dma_addr);
    
}
#endif

void  __ATTR_FUNC_RAM__(hal_TIM1_IRQHandler)(void)
{
  Timx_Evt_t IRQ_Data;
  uint16_t IRQ_FLAG = timx1_timx_sr_get() & 0xffff;
  uint16_t IRQ_IS_ENABLE = timx1_timx_dier_get() & 0xffff;
  timx1_timx_sr_set(0);
  for (uint8_t flag = 0; flag < IRQ_FLAG_NUM; flag++)
  {
    if ((IRQ_FLAG & BIT(flag)) && (IRQ_IS_ENABLE & BIT(flag)))
    {
      if ((flag <= CAP_CMP4_INTERRUPT_FLAG) && (flag >= CAP_CMP1_INTERRUPT_FLAG))
      {
        switch (flag - CAP_CMP1_INTERRUPT_FLAG)
        {
          case TIM_CHANNEL_1:
            IRQ_Data.cnt = timx1_timx_ccr1_get();
            break;
          case TIM_CHANNEL_2:
            IRQ_Data.cnt = timx1_timx_ccr2_get();;
            break;
          case TIM_CHANNEL_3:
            IRQ_Data.cnt = timx1_timx_ccr3_get();;
            break;
          case TIM_CHANNEL_4:
            IRQ_Data.cnt = timx1_timx_ccr4_get();;
            break;
        }
      }
      IRQ_Data.irq_flag = (Timx_IRQ_Flag_e)flag;
      m_timx_Ctx.evt_handler(&IRQ_Data);
    }
  }
}

int hal_timx_base_init(TIMx_Init_t *cfg)
{
  timx1_timx_cr1_dir_setf(cfg->parameters.CounterMode & 0xf);
  timx1_timx_cr1_cms_setf(cfg->parameters.CounterMode >> 4);
  timx1_timx_cr1_ckd_setf(cfg->parameters.ClockDivision);
  timx1_timx_cr1_arpe_setf(cfg->parameters.AutoReloadPreload);
  timx1_timx_arr_set(cfg->parameters.Period);
  timx1_timx_psc_set(cfg->parameters.Prescaler);
  timx1_timx_rcr_set(cfg->parameters.RepetitionCounter);
  if (cfg->evt_handler != NULL)
  {
    m_timx_Ctx.evt_handler = cfg->evt_handler;
    JUMP_FUNCTION_SET(TIMX1_IRQ_HANDLER, (uint32_t)&hal_TIM1_IRQHandler);
    NVIC_SetPriority((IRQn_Type)timerx_IRQn, IRQ_PRIO_HAL);
    NVIC_EnableIRQ(timerx_IRQn);
  }
  else
  {
    JUMP_FUNCTION_SET(TIMX1_IRQ_HANDLER, 0);
    NVIC_DisableIRQ(timerx_IRQn);
  }
  // timx1_timx_egr_set(1);
  timx1_timx_egr_ug_setf(1);
  return PPlus_SUCCESS;
}

/*in channel init*/
int hal_timx_ic_init(TIMx_Init_t *timx_cfg, TIMx_IC_Init_t *capture_cfg)
{
  #if DMAC_USE
  HAL_DMA_t ch_cfg;
  m_timx_Ctx.dma_buff_addr = (uint32_t)capture_cfg->rx_buf;
  m_timx_Ctx.dma_buff_size = capture_cfg->rx_len;
  s_timx_cb = capture_cfg->evt_handler;
  #endif
  m_timx_Ctx.pin = capture_cfg->pin;
  m_timx_Ctx.ch = capture_cfg->channel;
  hal_timx_base_init(timx_cfg);
  timx_io_fmux_fun((gpio_pin_e)(capture_cfg->pin), Bit_ENABLE, FMUX_TIMX_RX);
  if ((capture_cfg->channel == TIM_CHANNEL_1))
  {
    ic1_cfg(capture_cfg);
  }
  if ((capture_cfg->channel == TIM_CHANNEL_2))
  {
    ic2_cfg(capture_cfg);
  }
  if ((capture_cfg->channel == TIM_CHANNEL_3))
  {
    ic3_cfg(capture_cfg);
  }
  if ((capture_cfg->channel == TIM_CHANNEL_4))
  {
    ic4_cfg(capture_cfg);
  }

  #if DMAC_USE
  hal_dma_init();
  if (capture_cfg->evt_handler != NULL)
  {
    ch_cfg.dma_channel = DMA_CH_0;
    ch_cfg.evt_handler = NULL;
    hal_dma_init_channel(ch_cfg);
  }
  capture_dma_config(capture_cfg->rx_buf, capture_cfg->rx_len, capture_cfg->channel);
  #endif

  return PPlus_SUCCESS;
}

#if 0
/*in channel init*/
int hal_timx_oc_init(TIMx_Init_t *timx_cfg, TIMx_OC_Init_t *compare_cfg)
{
  #if DMAC_USE
  HAL_DMA_t ch_cfg;
  #endif
  m_timx_Ctx.pin = compare_cfg->pin;
  m_timx_Ctx.ch = compare_cfg->channel;
  hal_timx_base_init(timx_cfg);
  timx_io_fmux_fun((gpio_pin_e)(compare_cfg->pin), Bit_ENABLE, FMUX_TIMX_TX);
  if ((compare_cfg->channel == TIM_CHANNEL_1))
  {
    oc1_cfg(compare_cfg);
  }
  if ((compare_cfg->channel == TIM_CHANNEL_2))
  {
    oc2_cfg(compare_cfg);
  }
  if ((compare_cfg->channel == TIM_CHANNEL_3))
  {
    oc3_cfg(compare_cfg);
  }
  if ((compare_cfg->channel == TIM_CHANNEL_4))
  {
    oc4_cfg(compare_cfg);
  }

  #if DMAC_USE
  hal_dma_init();
  if (compare_cfg->evt_handler != NULL)
  {
    ch_cfg.dma_channel = DMA_CH_0;
    ch_cfg.evt_handler = NULL;
    hal_dma_init_channel(ch_cfg);
  }
  compare_dma_config(compare_cfg->tx_buf, compare_cfg->tx_len, compare_cfg->channel);
  #endif

  return PPlus_SUCCESS;
}
#endif

int hal_timx_start(Timx_Channel_e channel)
{
  #if DMAC_USE
  hal_dma_start_channel(DMA_CH_0);
  #endif
  if (m_timx_Ctx.evt_handler != NULL)
  {
    timx1_timx_sr_set(0);
  }
  if ((m_timx_Ctx.ch == TIM_CHANNEL_1))
  {
    #if DMAC_USE
    timx1_timx_dier_cc1de_setf(1);
    #endif
    if (m_timx_Ctx.evt_handler != NULL)
    {
      timx1_timx_dier_cc1ie_setf(1);
    }
    timx1_timx_ccer_cc1e_setf(1);
  }
  else if ((m_timx_Ctx.ch == TIM_CHANNEL_2))
  {
    #if DMAC_USE
    timx1_timx_dier_cc2de_setf(1);
    #endif
    if (m_timx_Ctx.evt_handler != NULL)
    {
      timx1_timx_dier_cc2ie_setf(1);
    }
    timx1_timx_ccer_cc2e_setf(1);
  }
  else if ((m_timx_Ctx.ch == TIM_CHANNEL_3))
  {
    #if DMAC_USE
    timx1_timx_dier_cc3de_setf(1);
    #endif
    if (m_timx_Ctx.evt_handler != NULL)
    {
      timx1_timx_dier_cc3ie_setf(1);
    }
    timx1_timx_ccer_cc3e_setf(1);
  }
  else if ((m_timx_Ctx.ch == TIM_CHANNEL_4))
  {
    #if DMAC_USE
    timx1_timx_dier_cc4de_setf(1);
    #endif
    if (m_timx_Ctx.evt_handler != NULL)
    {
      timx1_timx_dier_cc4ie_setf(1);
    }
    timx1_timx_ccer_cc4e_setf(1);
  }

  if ((timx1_timx_smcr_sms_getf() & TIM_SLAVEMODE) != TIM_SLAVEMODE_TRIGGER)
  {
    timx1_timx_cr1_cen_setf(1);
  }
  return PPlus_SUCCESS;
}

int hal_timx_stop(Timx_Channel_e channel)
{
  #if DMAC_USE
  hal_dma_stop_channel(DMA_CH_0);
  #endif

  if ((m_timx_Ctx.ch == TIM_CHANNEL_1))
  {
    if (m_timx_Ctx.evt_handler != NULL)
    {
      timx1_timx_dier_cc1ie_setf(0);
    }
    timx1_timx_ccer_cc1e_setf(0);
  }
  else if ((m_timx_Ctx.ch == TIM_CHANNEL_2))
  {
    if (m_timx_Ctx.evt_handler != NULL)
    {
      timx1_timx_dier_cc2ie_setf(0);
    }
    timx1_timx_ccer_cc2e_setf(0);
  }
  else if ((m_timx_Ctx.ch == TIM_CHANNEL_3))
  {
    if (m_timx_Ctx.evt_handler != NULL)
    {
      timx1_timx_dier_cc3ie_setf(0);
    }
    timx1_timx_ccer_cc3e_setf(0);
  }
  else if ((m_timx_Ctx.ch == TIM_CHANNEL_4))
  {
    if (m_timx_Ctx.evt_handler != NULL)
    {
      timx1_timx_dier_cc4ie_setf(0);
    }
    timx1_timx_ccer_cc4e_setf(0);
  }


  timx1_timx_cr1_cen_setf(0);

  return PPlus_SUCCESS;
}
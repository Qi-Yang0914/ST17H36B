

/**************************************************************************************************
  Filename:       simpleBLEPeripheral.c
  Revised:        
  Revision:       

  Description:    This file contains the Simple BLE Peripheral sample application
                  

**************************************************************************************************/
/*********************************************************************
 * INCLUDES
 */
#include "OSAL.h"
#include "OSAL_tasks.h"
#include "timx_app.h"
#include "ll.h"
#include "log.h"
#include "gpio.h"
#include "timx.h"
#include "systick.h"
#include "clock.h"
#include "error.h"
#include "jump_function.h"

#define PWM_DEMO (1)
#define CAPTURE_DEMO (2)

#define CURRENT_DEMO (CAPTURE_DEMO)

#define PERIOD_VALUE (0xffff - 1) /* Period Value  */ // 0xffff

#if DMAC_USE
#define CC_VALUE_NUM  (0x80)
uint32_t aCCValue[CC_VALUE_NUM] = {0};
#endif

/* Measured frequency */
volatile uint32_t uwMeasuredFrequency = 0;

uint8 timx_TaskID;

uint32_t g_cmp_val = 0;

/**************************************************************************************************
    FUNCTIONS
 **************************************************************************************************/
void timx_irq_handler(void);
void timx_capture_demo(void);
void timx_pwm_demo(void);
void timx_demo_Init(uint8 task_id)
{
  timx_TaskID = task_id;

  #if (CURRENT_DEMO == PWM_DEMO)
  JUMP_FUNCTION_SET(V24_IRQ_HANDLER, (uint32_t)timx_irq_handler);
  pcrm_timer_clk_ctl_timerx_clk_sel_setf(6); // set timer clock 16MHz
  timx_pwm_demo();
  #elif (CURRENT_DEMO == CAPTURE_DEMO)
  timx_capture_demo();
  #endif

}

uint16 timx_demo_ProcessEvent(uint8 task_id, uint16 events)
{	
    if (events & OSAL_RELOAY_TIMER_EVT) {
    	//LOG("eve \n");
      #if DMAC_USE
    	s_timx(); // handle timx dma buffer
      #endif
      return (events ^ OSAL_RELOAY_TIMER_EVT);
    }

    return 0;
}

void __ATTR_FUNC_RAM__(timx_irq_handler)(void)
{
  gpio_write(P10 , 1);
  gpio_write(P10 , 0);
  timx1_timx_sr_set(0);

  
	g_cmp_val +=20;
	if(g_cmp_val > timx1_timx_arr_get() + 1 ) g_cmp_val = 0;
    timx1_timx_ccr1_set(g_cmp_val);
}

void timx_pwm_demo(void)
{

  timx_init_t    tim_initstruct;
  timx_oc_init_t tim_oc_initstruct;

  NVIC_EnableIRQ(timerx_IRQn);

  /*************************/
  /* GPIO AF configuration */
  /*************************/
  gpio_fmux_control(P12, Bit_ENABLE);
  gpio_fmux_set(P12, FMUX_TIMX_TX);//ch1

  gpio_fmux_control(P13, Bit_ENABLE);
  gpio_fmux_set(P13, FMUX_TIMX_TX);//ch2
  gpio_fmux_control(P11, Bit_ENABLE);
  gpio_fmux_set(P11, FMUX_TIMX_TX);//ch2n


  gpio_fmux_control(P8, Bit_ENABLE);
  gpio_fmux_set(P8, FMUX_TIMX_TX);//ch3
  gpio_fmux_control(P9, Bit_ENABLE);
  gpio_fmux_set(P9, FMUX_TIMX_TX);//ch4  

  //enable clk
  pcr_sw_clk1_clkg_timx1_setf(1);
  
  
  /***********************************************/
  /* Configure the NVIC to handle TIM2 interrupt */
  /***********************************************/
  //NVIC_SetPriority(TIM2_IRQn, 0);
  //NVIC_EnableIRQ(TIM2_IRQn);
  
  /******************************/
  /* Peripheral clocks enabling */
  /******************************/
  /* Enable the timer peripheral clock */
  //LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM2); 
  
  /***************************/
  /* Time base configuration */
  /***************************/
  /* Set fields of initialization structure */
  /* - Set the pre-scaler value to have TIM2 counter clock equal to 10 kHz  */
  /* - Set the auto-reload value to have a counter frequency of 100 Hz        */
  /* TIM2CLK = SystemCoreClock / (APB prescaler & multiplier)               */
  //TimOutClock = SystemCoreClock/1;
  uint16 div = 16;
  tim_initstruct.prescaler         = div -1;
  tim_initstruct.dir               = 0;//LL_TIM_COUNTERMODE_UP;
  tim_initstruct.cms               = 0;
  tim_initstruct.autoreload        = 1000 -1; //__LL_TIM_CALC_ARR(TimOutClock, tim_initstruct.Prescaler, 100);
  tim_initstruct.clock_div         = 0;//LL_TIM_CLOCKDIVISION_DIV1;
  tim_initstruct.repetition_cnt    = 0;
  
  /* Initialize TIM instance according to parameters defined in               */
  /* initialization structure.                                                */
  timx_init(&tim_initstruct);
  
  /* Enable TIM2_ARR register preload. Writing to or reading from the         */
  /* auto-reload register accesses the preload register. The content of the   */
  /* preload register are transferred into the shadow register at each update */
  /* event (UEV).                                                             */  
  //LL_TIM_EnableARRPreload(TIM2);
  timx1_timx_cr1_arpe_setf(1);
  
  /*********************************/
  /* Output waveform configuration */
  /*********************************/
  /* Set fields of initialization structure */
  /*  - Set compare value to half of the counter period (50% duty cycle ) */
  tim_oc_initstruct.mode         = 6;//LL_TIM_OCMODE_PWM1;
  tim_oc_initstruct.state        = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.n_state      = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.cmp_val      = ( (timx1_timx_arr_get() + 1 )*3 / 4);
  tim_oc_initstruct.polarity     = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.n_polarity   = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.idle_state   = 0;//LL_TIM_OCIDLESTATE_LOW;
  tim_oc_initstruct.n_idle_state = 0;//LL_TIM_OCIDLESTATE_LOW;
  /* Initialize TIM instance according to parameters defined in               */
  /* initialization structure.                                                */
  timx_oc_init(BIT(0)/*ch1*/, &tim_oc_initstruct);
  
  tim_oc_initstruct.mode         = 6;//LL_TIM_OCMODE_PWM1;
  tim_oc_initstruct.state        = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.n_state      = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.cmp_val      = ( (timx1_timx_arr_get() + 1 ) / 2);
  tim_oc_initstruct.polarity     = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.n_polarity   = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.idle_state   = 0;//LL_TIM_OCIDLESTATE_LOW;
  tim_oc_initstruct.n_idle_state = 0;//LL_TIM_OCIDLESTATE_LOW;
  /* Initialize TIM instance according to parameters defined in               */
  /* initialization structure.                                                */
  timx_oc_init(BIT(1)/*ch2*/, &tim_oc_initstruct);

  tim_oc_initstruct.mode         = 6;//LL_TIM_OCMODE_PWM1;
  tim_oc_initstruct.state        = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.n_state      = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.cmp_val      = ( (timx1_timx_arr_get() + 1 ) / 4);
  tim_oc_initstruct.polarity     = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.n_polarity   = 1;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.idle_state   = 0;//LL_TIM_OCIDLESTATE_LOW;
  tim_oc_initstruct.n_idle_state = 0;//LL_TIM_OCIDLESTATE_LOW;
  /* Initialize TIM instance according to parameters defined in               */
  /* initialization structure.                                                */
  timx_oc_init(BIT(2)/*ch3*/, &tim_oc_initstruct);
  
  tim_oc_initstruct.mode         = 6;//LL_TIM_OCMODE_PWM1;
  tim_oc_initstruct.state        = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.n_state      = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.cmp_val      = ( (timx1_timx_arr_get() + 1 ) / 8);
  tim_oc_initstruct.polarity     = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.n_polarity   = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.idle_state   = 0;//LL_TIM_OCIDLESTATE_LOW;
  tim_oc_initstruct.n_idle_state = 0;//LL_TIM_OCIDLESTATE_LOW;
  /* Initialize TIM instance according to parameters defined in               */
  /* initialization structure.                                                */
  timx_oc_init(BIT(3)/*ch4*/, &tim_oc_initstruct);

  
  /* Enable TIM2_CCR1 register preload. Read/Write operations access the      */
  /* preload register. TIM2_CCR1 preload value is loaded in the active        */
  /* at each update event.                                                    */
  //LL_TIM_OC_EnablePreload(TIM2, LL_TIM_CHANNEL_CH1);
  timx1_timx_ccmr1_oc1pe_setf(1);
  timx1_timx_ccmr1_oc2pe_setf(1);
  timx1_timx_ccmr2_oc3pe_setf(1);
  timx1_timx_ccmr2_oc4pe_setf(1);
  
  /**************************/
  /* TIM2 interrupts set-up */
  /**************************/
  /* Enable the capture/compare interrupt for channel 1*/
  //LL_TIM_EnableIT_CC1(TIM2);
  timx1_timx_dier_cc1ie_setf(1);//enable

  //set dead zone
  //timx1_timx_bdtr_dtg_setf(40);
  
  /**********************************/
  /* Start output signal generation */
  /**********************************/
  /* Enable output channel 1 */
  //LL_TIM_CC_EnableChannel(TIM2, LL_TIM_CHANNEL_CH1);
  timx1_timx_ccer_cc1ne_setf(1);
  timx1_timx_ccer_cc2ne_setf(1);
  timx1_timx_ccer_cc3ne_setf(1);
  timx1_timx_ccer_cc4ne_setf(1);
  timx1_timx_ccer_cc1e_setf(1);
  timx1_timx_ccer_cc2e_setf(1);
  timx1_timx_ccer_cc3e_setf(1);
  timx1_timx_ccer_cc4e_setf(1);
  
  /* Enable counter */
  //LL_TIM_EnableCounter(TIM2);
  timx1_timx_cr1_cen_setf(1);
  
  /* Force update generation */
  //LL_TIM_GenerateEvent_UPDATE(TIM2);
  timx1_timx_egr_ug_setf(1);
	timx1_timx_bdtr_moe_setf(1);


	//adjust pwm changes dynamically for ch0 
	g_cmp_val = ( (timx1_timx_arr_get() + 1 )*3 / 4);
	//while(1){
	//  cmp_val +=20;
	//  if(cmp_val > timx1_timx_arr_get() + 1 ) cmp_val = 0;
  //  timx1_timx_ccr1_set(cmp_val);
  //  WaitMs(200);
  //}

  while(1);
}

void Capture_calculate(uint32_t cnt)
{
  /* Capture index */
  static uint16_t uhCaptureIndex = 0;

  /* Captured Values */
  static uint32_t uwICValue1 = 0;
  static uint32_t uwICValue2 = 0;
  static uint32_t uwDiffCapture = 0;

  uint32_t TIM1CLK;
  uint32_t PSC;
  uint32_t IC1PSC;
  uint32_t IC1Polarity;

  if(uhCaptureIndex == 0)
  {
    /* Get the 1st Input Capture value */
    uwICValue1 = cnt;
    uhCaptureIndex = 1;
  }
  else if(uhCaptureIndex == 1)
  {
    /* Get the 2nd Input Capture value */
    uwICValue2 = cnt;

    /* Capture computation */
    if (uwICValue2 > uwICValue1)
    {
      uwDiffCapture = (uwICValue2 - uwICValue1);
    }
    else if (uwICValue2 < uwICValue1)
    {
      uwDiffCapture = ((0xffff - uwICValue1) + uwICValue2) + 1;
    }
    else
    {
      /* If capture values are equal, we have reached the limit of frequency  */
      /* measures.                                                            */
      LOG("capture error\n");
    }

    /* The signal frequency is calculated as follows:                         */
    /* Frequency = (TIM1*IC1PSC) / (Capture*(PSC+1)*IC1Polarity)           */
    /* where:                                                                 */
    /*  Capture is the difference between two consecutive captures            */
    /*  TIM1CLK is the timer counter clock frequency                           */
    /*  PSC is the timer prescaler value                                      */
    /*  IC1PSC is the input capture prescaler value                           */
    /*  IC1Polarity value depends on the capture sensitivity:                 */
    /*    1 if the input is sensitive to rising or falling edges              */
    /*    2 if the input is sensitive to both rising and falling edges        */

    /* Retrieve actual TIM1 counter clock frequency */
    TIM1CLK = SysClock;

    /* Retrieve actual TIM1 prescaler value */
    PSC = timx1_timx_psc_get();

    /* Retrieve actual IC1 prescaler ratio */
    IC1PSC = ((uint32_t)(0x01U << (((timx1_timx_ccmr1_ic_ic1psc_getf()) >> 16U) >> 2U)));

    /* Retrieve actual IC1 polarity setting */
    if (timx1_timx_ccer_cc1p_getf() && timx1_timx_ccer_cc1np_getf())
      IC1Polarity = 2;
    else
      IC1Polarity = 1;

    /* Calculate input signal frequency */
    uwMeasuredFrequency = (TIM1CLK *IC1PSC) / (uwDiffCapture*(PSC+1)*IC1Polarity);

    LOG("Measured Frequency:%x\n", uwMeasuredFrequency);
    /* reset capture index */
    uhCaptureIndex = 0;
  }
}

void timx_irq_evt(Timx_Evt_t *pev)
{
  // static uint32_t last_cnt = 0;
  // LOG("cnt:%x, cnt:different:%x\n", pev->cnt, pev->cnt - last_cnt);
  // last_cnt = pev->cnt;
  Capture_calculate(pev->cnt);
}

#if DMAC_USE
// uint32_t last_cnt = 0;
void timx_capture_cb(timx_evt_t* pev)
{
  // last_cnt = 0;
  for (uint8_t i = 0; i < pev->size/4; i++)
  {
    // LOG("cnt:%x, cnt:different:%x\n", pev->data[i], pev->data[i] - last_cnt);
    // last_cnt = pev->data[i];

    Capture_calculate(pev->data[i]);
  }
}
#endif

void timx_capture_demo(void)
{
  TIMx_Init_t tim_cfg = {
      .parameters.ClockDivision = TIM_CLOCK_1CKINT,
      .parameters.CounterMode = TIM_COUNTMODE_UP,
      .parameters.RepetitionCounter = 0,
      .parameters.AutoReloadPreload = FALSE,
      .parameters.Prescaler = TIMX_CAL_PSC(100000),
      .parameters.Period = PERIOD_VALUE,
      #if DMAC_USE
      .evt_handler = NULL,
      #else
      .evt_handler = timx_irq_evt,
      #endif
  };
  TIMx_IC_Init_t cap_cfg = {
      .channel = TIM_CHANNEL_1,
      .filter = TIM_CAP_FILTER_NONE,
      .pin = TIM_CH1_IN1,
      .polarity = TIM_CC_POLARITY_RISING,
      .prescaler = TIM_CAP_PRESCALER_DIV1,
      .selection = TIM_CAP_SELECTION_DIRECTTI,
      #if DMAC_USE
      .rx_buf = aCCValue,
      .rx_len = CC_VALUE_NUM,
      .evt_handler = timx_capture_cb,
      #endif
  };
  gpio_pull_set(cap_cfg.pin,WEAK_PULL_UP);
  hal_timx_clock_init(TIM_CLK_XTAL_16M);
  hal_timx_ic_init(&tim_cfg, &cap_cfg);
  hal_timx_start(cap_cfg.channel);
  #if DMAC_USE
  LOG("timx_capture_demo dma start\n");
  // osal timer
  // osal_start_reload_timer(timx_TaskID, OSAL_RELOAY_TIMER_EVT, TIMX_SAMPLE_PERIOD);
  // hal_timx_stop(TIM_CHANNEL_1);
  // osal_stop_timerEx(timx_TaskID, OSAL_RELOAY_TIMER_EVT);

  // systick timer
  systick_start(TIMX_SAMPLE_PERIOD,s_timx);
  wait_hclk_cycle_us(1000*1000);
  hal_timx_stop(TIM_CHANNEL_1);
  systick_stop();
  #else
  LOG("timx_capture_demo interrupt start\n");
  while(1);
  #endif
  
}


/*********************************************************************
*********************************************************************/

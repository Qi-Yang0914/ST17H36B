

/**************************************************************************************************
  Filename:       timx_pwm.c
  Revised:        
  Revision:       

  Description:    This file contains the Simple BLE Peripheral sample application
                  

**************************************************************************************************/
/*********************************************************************
 * INCLUDES
 */
#include "rom_sym_def.h"
#include "jump_function.h"
#include "OSAL.h"
#include "OSAL_tasks.h"
#include "timx_pwm.h"
#include "ll.h"
#include "log.h"
#include "gpio.h"
#include "timx.h"
#include "error.h"



#define LED_GREEN_PIN P12
#define LED_BLUE_PIN  P13
#define LED_RED_PIN   P9

uint32_t g_cmp_val = 0;

typedef struct pwm_assign_t
{
  uint8_t led_pin;
  uint8_t duty;
  uint8_t pwm_chn;

}pwm_assign_str;

 pwm_assign_str  pwm_assign[3] = {
  {LED_GREEN_PIN,50,BIT(0)},
  {LED_BLUE_PIN,50,BIT(1)},
  {LED_RED_PIN,50,BIT(3)}     
};


void __ATTR_FUNC_RAM__(timx_irq_handler)(void);

#if 0
void timx_irq_handler(void)
{
  static  uint16 i=0;

  timx1_timx_sr_set(0);

   i++;

   if(i==30)
   {
     i=0;
     g_cmp_val +=5;
	   if(g_cmp_val > timx1_timx_arr_get() + 1 ) g_cmp_val = 0;
    timx1_timx_ccr1_set(g_cmp_val);
   }
	
}
#else
void timx_irq_handler(void)
{
  timx1_timx_sr_set(0); //clear irq
}

#endif

static void __attribute__(( section("._func_ram_."))) timx_pwm_init_freq(uint8 hclk_div,uint16 pwmfreq)
{
   timx_init_t    tim_initstruct;

   uint16 div = 16;
   uint32 autoload=0;

   div=hclk_div;
   div=(div>16?16:div);

   pwmfreq = (pwmfreq<1?1:pwmfreq);

   autoload=16000000/pwmfreq/div;
   autoload=(autoload<2?2:autoload);


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
  
  tim_initstruct.prescaler         = div -1;
  tim_initstruct.dir               = 1;//LL_TIM_COUNTERMODE_UP;
  tim_initstruct.cms               = 0;
  tim_initstruct.autoreload        = autoload -1; //__LL_TIM_CALC_ARR(TimOutClock, tim_initstruct.Prescaler, 100);
  tim_initstruct.clock_div         = 0;//LL_TIM_CLOCKDIVISION_DIV1;
  tim_initstruct.repetition_cnt    = 0;
  
  //enable clk
  pcr_sw_clk1_clkg_timx1_setf(1);

  /* Initialize TIM instance according to parameters defined in               */
  /* initialization structure.                                                */
  timx_init(&tim_initstruct);

}

static void __attribute__(( section("._func_ram_."))) timx_pwm_gpio_init(pwm_assign_str pwm_st[],uint8 num)
{
   timx_oc_init_t tim_oc_initstruct;

    /*************************/
  /* GPIO AF configuration */
  /*************************/
   for(uint8 i=0;i<num;i++)
   {
     gpio_fmux_control(pwm_st[i].led_pin, Bit_ENABLE);
     gpio_fmux_set(pwm_st[i].led_pin, FMUX_TIMX_TX);//ch1 

   }

}

static __attribute__(( section("._func_ram_."))) void  timx_pwm_init_duty(pwm_assign_str pwm_st[],uint8 num)
{
  timx_oc_init_t tim_oc_initstruct;

   /* Enable TIM2_ARR register preload. Writing to or reading from the         */
  /* auto-reload register accesses the preload register. The content of the   */
  /* preload register are transferred into the shadow register at each update */
  /* event (UEV).                                                             */  
  //LL_TIM_EnableARRPreload(TIM2);
  timx1_timx_cr1_arpe_setf(1);

  for(uint8 i=0;i<num;i++)
  {
   /*********************************/
  /* Output waveform configuration */
  /*********************************/
  /* Set fields of initialization structure */
  /*  - Set compare value to half of the counter period (50% duty cycle ) */
  tim_oc_initstruct.mode         = 6;//LL_TIM_OCMODE_PWM1;
  tim_oc_initstruct.state        = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.n_state      = 0;//LL_TIM_OCSTATE_DISABLE;

 // tim_oc_initstruct.cmp_val      = ( (timx1_timx_arr_get() + 1 )*3 / 4);
 tim_oc_initstruct.cmp_val  = (timx1_timx_arr_get() + 1 )*pwm_st[i].duty/100;

  tim_oc_initstruct.polarity     = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.n_polarity   = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.idle_state   = 0;//LL_TIM_OCIDLESTATE_LOW;
  tim_oc_initstruct.n_idle_state = 0;//LL_TIM_OCIDLESTATE_LOW;

  /* Initialize TIM instance according to parameters defined in               */
  /* initialization structure.                                                */
  //timx_oc_init(BIT(0)/*ch1*/, &tim_oc_initstruct);
  timx_oc_init(pwm_st[i].pwm_chn, &tim_oc_initstruct);
 }



  /* Enable TIM2_CCR1 register preload. Read/Write operations access the      */
  /* preload register. TIM2_CCR1 preload value is loaded in the active        */
  /* at each update event.                                                    */
  //LL_TIM_OC_EnablePreload(TIM2, LL_TIM_CHANNEL_CH1);
  for(uint8 i=0;i<num;i++)
  {

  if(pwm_st[i].pwm_chn == BIT(0))
  timx1_timx_ccmr1_oc1pe_setf(1);

  else if(pwm_st[i].pwm_chn == BIT(1))
  timx1_timx_ccmr1_oc2pe_setf(1);

  else if(pwm_st[i].pwm_chn == BIT(2))
  timx1_timx_ccmr2_oc3pe_setf(1);

  else if(pwm_st[i].pwm_chn == BIT(3))
  timx1_timx_ccmr2_oc4pe_setf(1);
  }

}

static void __attribute__(( section("._func_ram_.")))  timx_pwm_chn_start(pwm_assign_str pwm_st[],uint8 num)
{

   /**************************/
  /* TIM2 interrupts set-up */
  /**************************/
  /* Enable the capture/compare interrupt for channel 1*/
  //LL_TIM_EnableIT_CC1(TIM2);
  timx1_timx_dier_cc1ie_setf(1);//enable

  for(uint8 i=0;i<num;i++)
  {
    if(pwm_st[i].pwm_chn == BIT(0))
    {
       timx1_timx_ccer_cc1ne_setf(1);
       timx1_timx_ccer_cc1e_setf(1);

    }
    else if(pwm_st[i].pwm_chn == BIT(1))
    {
      timx1_timx_ccer_cc2ne_setf(1);
      timx1_timx_ccer_cc2e_setf(1);
    }
    else if(pwm_st[i].pwm_chn == BIT(2))
    {
      timx1_timx_ccer_cc3ne_setf(1);
      timx1_timx_ccer_cc3e_setf(1);
    }
    else if(pwm_st[i].pwm_chn == BIT(3))
    {
      timx1_timx_ccer_cc4ne_setf(1);
      timx1_timx_ccer_cc4e_setf(1);
    }
  
  }  



    /* Enable counter */
  //LL_TIM_EnableCounter(TIM2);
  timx1_timx_cr1_cen_setf(1);
  
  /* Force update generation */
  //LL_TIM_GenerateEvent_UPDATE(TIM2);
  timx1_timx_egr_ug_setf(1);
	timx1_timx_bdtr_moe_setf(1);
}





void __attribute__(( section("._func_ram_."))) timx_pwm_instant_init(uint8 hclk_div,uint16 pwmfreq)
{
   NVIC_EnableIRQ(timerx_IRQn);
  

  //init pwm io
  timx_pwm_gpio_init(pwm_assign,3);

 //init freq
  timx_pwm_init_freq(hclk_div,pwmfreq);
 //duty
  timx_pwm_init_duty(pwm_assign,3);

//start
  timx_pwm_chn_start(pwm_assign,3);

}

void timx_pwm_sys_init(void)
{
    JUMP_FUNCTION_SET(V24_IRQ_HANDLER,(uint32_t)timx_irq_handler);
	  pcrm_timer_clk_ctl_timerx_clk_sel_setf(6);//set timer clock 16MHz
}


void timx_pwm_shift_pwmDuty(uint8 chn, uint8 duty)
{
    uint32 cmp_val=0;
  

    if(chn==BIT(0))
    {
        cmp_val =duty*(timx1_timx_arr_get() + 1)/100;
        timx1_timx_ccr1_set(cmp_val);
    }
    else if(chn==BIT(1))
    {
        cmp_val =duty*(timx1_timx_arr_get() + 1)/100;
        timx1_timx_ccr2_set(cmp_val);
    }
    else if(chn==BIT(2))
    {
        cmp_val =duty*(timx1_timx_arr_get() + 1)/100;
        timx1_timx_ccr3_set(cmp_val);
    }
    else if(chn==BIT(3))
    {
        cmp_val =duty*(timx1_timx_arr_get() + 1)/100;
        timx1_timx_ccr4_set(cmp_val);
    }

    

}
#if  0  //for test
void timx_pwm_init(void)
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
  
  // gpio_fmux_control(P11, Bit_ENABLE);
  // gpio_fmux_set(P11, FMUX_TIMX_TX);//ch2n


  // gpio_fmux_control(P8, Bit_ENABLE);
  // gpio_fmux_set(P8, FMUX_TIMX_TX);//ch3

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
  uint16 div = 1;
  tim_initstruct.prescaler         = div -1;
  tim_initstruct.dir               = 1;//LL_TIM_COUNTERMODE_UP;
  tim_initstruct.cms               = 0;
  tim_initstruct.autoreload        = 256 -1; //__LL_TIM_CALC_ARR(TimOutClock, tim_initstruct.Prescaler, 100);
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
  tim_oc_initstruct.cmp_val      = ( (timx1_timx_arr_get() + 1 )*pwm_assign[0].duty / 100);

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
  tim_oc_initstruct.cmp_val      = ( (timx1_timx_arr_get() + 1 ) *pwm_assign[1].duty / 100);
  tim_oc_initstruct.polarity     = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.n_polarity   = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.idle_state   = 0;//LL_TIM_OCIDLESTATE_LOW;
  tim_oc_initstruct.n_idle_state = 0;//LL_TIM_OCIDLESTATE_LOW;
  /* Initialize TIM instance according to parameters defined in               */
  /* initialization structure.                                                */
  timx_oc_init(BIT(1)/*ch2*/, &tim_oc_initstruct);
#if 0
  tim_oc_initstruct.mode         = 6;//LL_TIM_OCMODE_PWM1;
  tim_oc_initstruct.state        = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.n_state      = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.cmp_val      = ( (timx1_timx_arr_get() + 1 ) / 4);
  tim_oc_initstruct.polarity     = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.n_polarity   = 0;//LL_TIM_OCPOLARITY_HIGH;
  tim_oc_initstruct.idle_state   = 0;//LL_TIM_OCIDLESTATE_LOW;
  tim_oc_initstruct.n_idle_state = 0;//LL_TIM_OCIDLESTATE_LOW;
  /* Initialize TIM instance according to parameters defined in               */
  /* initialization structure.                                                */
  timx_oc_init(BIT(2)/*ch3*/, &tim_oc_initstruct);
#endif
  tim_oc_initstruct.mode         = 6;//LL_TIM_OCMODE_PWM1;
  tim_oc_initstruct.state        = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.n_state      = 0;//LL_TIM_OCSTATE_DISABLE;
  tim_oc_initstruct.cmp_val      =  (timx1_timx_arr_get() + 1 )*pwm_assign[2].duty / 100;


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

}
#endif


/*********************************************************************
*********************************************************************/

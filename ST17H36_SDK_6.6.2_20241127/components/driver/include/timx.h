
#ifndef __TIMX_DRV_H
#define __TIMX_DRV_H

#include "bus_dev.h"
#include "dma.h"

#define TIM_MODE_UP 0x0000U             /*Counter used as up-counter   */
#define TIM_MODE_DOWN 0x0001U           /*Counter used as down-counter */
#define TIM_MODE_CENTERALIGNED1 0x0010U /*Center-aligned mode 1        */
#define TIM_MODE_CENTERALIGNED2 0x0020U /*Center-aligned mode 2        */
#define TIM_MODE_CENTERALIGNED3 0x0030U /*Center-aligned mode 3        */

#define TIM_SLAVEMODE (BIT(0) | BIT(1) | BIT(2))
#define TIM_SLAVEMODE_TRIGGER (BIT(1) | BIT(2))

#define SysClock  16000000  //according to Timx_Clock_e selection

#define TIMX_SAMPLE_PERIOD 5//ms
#define TIMX_DMA_TRANSF_SIZE  (0x80)

/**
  * @brief  HELPER macro calculating the prescaler value to achieve the required counter clock frequency.
  * @param  CNTCLK counter clock frequency (in Hz)
  * @retval Prescaler value  (between Min_Data=0 and Max_Data=65535)
  */
#define TIMX_CAL_PSC(CNTCLK)        (((SysClock) >= (CNTCLK)) ? (uint32_t)((((SysClock) + (CNTCLK)/2U)/(CNTCLK)) - 1U) : 0U)

/**
  * @brief  HELPER macro calculating the auto-reload value to achieve the required output signal frequency.
  * @param  PSC prescaler
  * @param  FREQ output signal frequency (in Hz)
  * @retval  Auto-reload value  (between Min_Data=0 and Max_Data=65535)
  */
#define TIMX_CAL_ARR(PSC, FREQ)     ((((SysClock)/((PSC) + 1U)) >= (FREQ)) ? (((SysClock)/((FREQ) * ((PSC) + 1U))) - 1U) : 0U)

/**
  * @brief  HELPER macro calculating the compare value required to achieve the required timer output compare
  *         active/inactive delay.
  * @param  PSC prescaler
  * @param  DELAY timer output compare active/inactive delay (in us)
  * @retval Compare value  (between Min_Data=0 and Max_Data=65535)
  */
#define TIMX_CAL_DELAY(PSC, DELAY)   \
  ((uint32_t)(((uint64_t)(SysClock) * (uint64_t)(DELAY)) \
              / ((uint64_t)1000000U * (uint64_t)((PSC) + 1U))))

/**
  * @brief  HELPER macro calculating the auto-reload value to achieve the required pulse duration
  *         (when the timer operates in one pulse mode).
  * @param  PSC prescaler
  * @param  DELAY timer output compare active/inactive delay (in us)
  * @param  PULSE pulse duration (in us)
  * @retval Auto-reload value  (between Min_Data=0 and Max_Data=65535)
  */
#define TIMX_CAL_PULSE(PSC, DELAY, PULSE)   \
  ((uint32_t)(TIMX_CAL_DELAY((PSC), (PULSE)) \
              + TIMX_CAL_DELAY((PSC), (DELAY))))

#ifndef DMAC_USE
#define DMAC_USE (0)
#endif

typedef enum
{
  TIM_CH1_OUT1  = 0,          TIM_CH1_IN1 = 0,      //P0
  TIM_CH2_OUT1  = 1,          TIM_CH2_IN1 = 1,      //P1
  TIM_CH3_OUT1  = 2,          TIM_CH3_IN1 = 2,      //P2
  TIM_CH4_OUT1  = 3,          TIM_CH4_IN1 = 3,      //P3
  TIM_CH1N_OUT1 = 4,          TIM_CH1_IN2 = 4,      //P4
  TIM_CH2N_OUT1 = 5,          TIM_CH2_IN2 = 5,      //P5
  TIM_CH1_OUT2  = 6,          TIM_CH3_IN2 = 6,      //P6
  TIM_CH2_OUT2  = 7,          TIM_CH4_IN2 = 7,      //P7
  TIM_CH3_OUT2  = 8,          TIM_CH1_IN3 = 8,      //P8
  TIM_CH4_OUT2  = 9,          TIM_CH2_IN3 = 9,      //P9
  TIM_CH1N_OUT2 = 10,         TIM_CH3_IN3 = 10,     //P10
  TIM_CH2N_OUT2 = 11,         TIM_CH4_IN3 = 11,     //P11
  TIM_CH1_OUT3  = 12,         TIM_CH1_IN4 = 12,     //P12
  TIM_CH2_OUT3  = 13,         TIM_CH2_IN4 = 13,     //P13
  TIM_CH3_OUT3  = 14,         TIM_CH3_IN4 = 14,     //P14
  TIM_CH4_OUT3  = 15,         TIM_CH4_IN4 = 15,     //P15
  TIM_CH1N_OUT3 = 16,         TIM_CH1_IN5 = 16,     //P16
  TIM_CH2N_OUT3 = 17,         TIM_CH2_IN5 = 17,     //P17
  TIM_CH1_OUT4  = 18,         TIM_CH3_IN5 = 18,     //P18
  TIM_CH2_OUT4  = 19,         TIM_CH4_IN5 = 19,     //P19
  TIM_CH3_OUT4  = 20,         TIM_CH1_IN6 = 20,     //P20
} Timx_Channel_Pin_e;

typedef enum
{
  TIM_INTERRUPT_MODE = 1,
  TIM_DMA_MODE = 2,
} Timx_mode_e;

typedef enum
{
  TIM_CC_POLARITY_RISING = 0,
  TIM_CC_POLARITY_FALLING = 1,
} Timx_Polarity_e;

typedef enum
{
  TIM_CAP_SELECTION_DIRECTTI = 1,   /* TIM Input 1, 2, 3 or 4 is selected to be connected to IC1, IC2, IC3 or IC4, respectively */
  TIM_CAP_SELECTION_INDIRECTTI = 2, /* TIM Input 1, 2, 3 or 4 is selected to be connected to IC2, IC1, IC4 or IC3, respectively */
  TIM_CAP_SELECTION_TRC = 3,        /* TIM Input 1, 2, 3 or 4 is selected to be connected to TRC */
} Timx_IC_Selection_e;

typedef enum
{
  TIM_CAP_PRESCALER_DIV1 = 0,
  TIM_CAP_PRESCALER_DIV2 = 1,
  TIM_CAP_PRESCALER_DIV4 = 2,
  TIM_CAP_PRESCALER_DIV8 = 3,
} Timx_IC_Prescaler_e;

/*
  These bits define the sampling frequency of the TI1 input
  and the length of the digital filter.
  The digital filter consists of an event counter
  that generates an output transition after recording N events.
*/
typedef enum
{
  TIM_CAP_FILTER_NONE = 0,    /*Fsampling=Fdts,N=NONE*/
  TIM_CAP_FILTER2_CKINT = 1,  /*Fsampling=Fck_int，N=2 */
  TIM_CAP_FILTER4_CKINT = 2,  /*Fsampling=Fck_int，N=4 */
  TIM_CAP_FILTER8_CKINT = 3,  /*Fsampling=Fck_int，N=8 */
  TIM_CAP_FILTER6_DTS2 = 4,   /*Fsampling=Fdts/2，N=6 */
  TIM_CAP_FILTER8_DTS2 = 5,   /*Fsampling=Fdts/2，N=8 */
  TIM_CAP_FILTER6_DTS4 = 6,   /*Fsampling=Fdts/4，N=6 */
  TIM_CAP_FILTER8_DTS4 = 7,   /*Fsampling=Fdts/4，N=8 */
  TIM_CAP_FILTER6_DTS8 = 8,   /*Fsampling=Fdts/8，N=6 */
  TIM_CAP_FILTER8_DTS8 = 9,   /*Fsampling=Fdts/8，N=8 */
  TIM_CAP_FILTER5_DTS16 = 10, /*Fsampling=Fdts/16，N=5 */
  TIM_CAP_FILTER6_DTS16 = 11, /*Fsampling=Fdts/16，N=6 */
  TIM_CAP_FILTER8_DTS16 = 12, /*Fsampling=Fdts/16，N=8 */
  TIM_CAP_FILTER5_DTS32 = 13, /*Fsampling=Fdts/32，N=5 */
  TIM_CAP_FILTER6_DTS32 = 14, /*Fsampling=Fdts/32，N=6 */
  TIM_CAP_FILTER8_DTS32 = 15, /*Fsampling=Fdts/32，N=8 */
} Timx_IC_Filter_e;

typedef enum
{
  TIM_OCMODE_FROZEN = 0,            /*!<The comparison between the output compare register TIMx_CCRy and the counter TIMx_CNT has no effect on the output channel level */
  TIM_OCMODE_ACTIVE = 1,            /*!<OCyREF is forced high on compare match*/
  TIM_OCMODE_INACTIVE = 2,          /*!<OCyREF is forced low on compare match*/
  TIM_OCMODE_TOGGLE = 3,            /*!<OCyREF toggles on compare match*/
  TIM_OCMODE_FORCED_INACTIVE = 4,   /*!<OCyREF is forced low*/
  TIM_OCMODE_FORCED_ACTIVE = 5,     /*!<OCyREF is forced high*/
  TIM_OCMODE_PWM1 = 6,              /*!<In upcounting, channel y is active as long as TIMx_CNT<TIMx_CCRy else inactive.  In downcounting, channel y is inactive as long as TIMx_CNT>TIMx_CCRy else active.*/
  TIM_OCMODE_PWM2 = 7,              /*!<In upcounting, channel y is inactive as long as TIMx_CNT<TIMx_CCRy else active.  In downcounting, channel y is active as long as TIMx_CNT>TIMx_CCRy else inactive*/
} Timx_OCMode_e;

typedef enum
{
  TIM_CHANNEL_1 = 0,
  TIM_CHANNEL_2 = 1,
  TIM_CHANNEL_3 = 2,
  TIM_CHANNEL_4 = 3,
  TIM_CHANNEL_ALL = 4,
} Timx_Channel_e;

typedef enum
{
  UPDATA_INTERRUPT_FLAG = 0,      /*uif*/
  CAP_CMP1_INTERRUPT_FLAG = 1,    /*cc1if*/
  CAP_CMP2_INTERRUPT_FLAG = 2,    /*cc2if*/
  CAP_CMP3_INTERRUPT_FLAG = 3,    /*cc3if*/
  CAP_CMP4_INTERRUPT_FLAG = 4,    /*cc4if*/
  COM_INTERRUPT_FLAG = 5,         /*comif*/
  TRIGGER_INTERRUPT_FLAG = 6,     /*tif*/
  BREAK_INTERRUPT_FLAG = 7,       /*bif*/
  CAP_CMP1_OVERCAPTURE_FLAG = 9,  /*cc1of*/
  CAP_CMP2_OVERCAPTURE_FLAG = 10, /*cc2of*/
  CAP_CMP3_OVERCAPTURE_FLAG = 11, /*cc3of*/
  CAP_CMP4_OVERCAPTURE_FLAG = 12, /*cc4of*/
  IRQ_FLAG_NUM = 13,
} Timx_IRQ_Flag_e;

typedef enum
{
  TIM_CLK_RC_32K      = 0,
  TIM_CLK_PCLK        = 1,  //Always 16M when greater than 16M and follow pclk when less than 16M
  TIM_CLK_XTAL_1M     = 2,
  TIM_CLK_XTAL_2M     = 3,
  TIM_CLK_XTAL_4M     = 4,
  TIM_CLK_XTAL_8M     = 5,
  TIM_CLK_XTAL_16M    = 6,
  TIM_CLK_PCLK_4M     = 7,
  TIM_CLK_NONE        = 0xff,
} Timx_Clock_e;
typedef enum
{
  TIM_CLOCK_1CKINT = 0,
  TIM_CLOCK_2CKINT = 1,
  TIM_CLOCK_4CKINT = 2,
} Timx_Clock_div_e;

typedef enum
{
  TIM_COUNTMODE_UP = TIM_MODE_UP,
  TIM_COUNTMODE_DOWN = TIM_MODE_DOWN,
  TIM_COUNTMODE_CENTERALIGNED1 = TIM_MODE_CENTERALIGNED1,
  TIM_COUNTMODE_CENTERALIGNED2 = TIM_MODE_CENTERALIGNED2,
  TIM_COUNTMODE_CENTERALIGNED3 = TIM_MODE_CENTERALIGNED3,
} Timx_Count_mode_e;

typedef enum
{
  LL_TIM_TS_ITR0    = 0,
  LL_TIM_TS_ITR1    = 1,
  LL_TIM_TS_ITR2    = 2,
  LL_TIM_TS_ITR3    = 3,
  LL_TIM_TS_TI1F_ED = 4,
  LL_TIM_TS_TI1FP1  = 5,
  LL_TIM_TS_TI2FP2  = 6,
  LL_TIM_TS_ETRF    = 7,
} Timx_Trigger_Selection_e;

typedef struct
{
  uint32_t cnt;
  Timx_IRQ_Flag_e irq_flag;
} Timx_Evt_t;

typedef void (*Timx_Hdl_t)(Timx_Evt_t *pev);

typedef struct _timx_cvt_t{
  uint32_t* data;
  uint16_t  size; 
}timx_evt_t;

typedef void (*timx_cb_t)(timx_evt_t* pev);
typedef struct
{
  uint16_t prescaler;       /*!< Specifies the prescaler value used to divide the TIM clock.
                                   This parameter can be a number between Min_Data=0x0000 and Max_Data=0xFFFF.

                                   This feature can be modified afterwards using unitary function @ref LL_TIM_SetPrescaler().*/

  uint32_t dir;             /*Direction  0: Counter used as upcounter 1: Counter used as downcounter*/

  uint32_t cms;             /*Center-aligned mode selection
                            00: Edge-aligned mode. The counter counts up or down depending on the direction bit (DIR).
                            01: Center-aligned mode 1.
                            10: Center-aligned mode 2.
                            11: Center-aligned mode 3.*/
                            
  uint32_t autoreload;        /*!< Specifies the auto reload value to be loaded into the active
                                   Auto-Reload Register at the next update event.
                                   This parameter must be a number between Min_Data=0x0000 and Max_Data=0xFFFF.
                                   Some timer instances may support 32 bits counters. In that case this parameter must be a number between 0x0000 and 0xFFFFFFFF.

                                   This feature can be modified afterwards using unitary function @ref LL_TIM_SetAutoReload().*/

  uint32_t clock_div;     /*!< Specifies the clock division.
                                   This parameter can be a value of @ref TIM_LL_EC_CLOCKDIVISION.

                                   This feature can be modified afterwards using unitary function @ref LL_TIM_SetClockDivision().*/

  uint8_t repetition_cnt;  /*!< Specifies the repetition counter value. Each time the RCR downcounter
                                   reaches zero, an update event is generated and counting restarts
                                   from the RCR value (N).
                                   This means in PWM mode that (N+1) corresponds to:
                                      - the number of PWM periods in edge-aligned mode
                                      - the number of half PWM period in center-aligned mode
                                   This parameter must be a number between 0x00 and 0xFF.
                                   This feature can be modified afterwards using unitary function @ref LL_TIM_SetRepetitionCounter().*/
}timx_init_t;



typedef struct{

  uint32_t mode;        /*!< Specifies the output mode.
                               This parameter can be a value of @ref TIM_LL_EC_OCMODE.

                               This feature can be modified afterwards using unitary function @ref LL_TIM_OC_SetMode().*/

  uint32_t state;       /*!< Specifies the TIM Output Compare state.
                               This parameter can be a value of @ref TIM_LL_EC_OCSTATE.

                               This feature can be modified afterwards using unitary functions @ref LL_TIM_CC_EnableChannel() or @ref LL_TIM_CC_DisableChannel().*/

  uint32_t n_state;      /*!< Specifies the TIM complementary Output Compare state.
                               This parameter can be a value of @ref TIM_LL_EC_OCSTATE.

                               This feature can be modified afterwards using unitary functions @ref LL_TIM_CC_EnableChannel() or @ref LL_TIM_CC_DisableChannel().*/

  uint32_t cmp_val;  /*!< Specifies the Compare value to be loaded into the Capture Compare Register.
                               This parameter can be a number between Min_Data=0x0000 and Max_Data=0xFFFF.

                               This feature can be modified afterwards using unitary function LL_TIM_OC_SetCompareCHx (x=1..6).*/

  uint32_t polarity;    /*!< Specifies the output polarity.
                               This parameter can be a value of @ref TIM_LL_EC_OCPOLARITY.

                               This feature can be modified afterwards using unitary function @ref LL_TIM_OC_SetPolarity().*/

  uint32_t n_polarity;   /*!< Specifies the complementary output polarity.
                               This parameter can be a value of @ref TIM_LL_EC_OCPOLARITY.

                               This feature can be modified afterwards using unitary function @ref LL_TIM_OC_SetPolarity().*/


  uint32_t idle_state;   /*!< Specifies the TIM Output Compare pin state during Idle state.
                               This parameter can be a value of @ref TIM_LL_EC_OCIDLESTATE.

                               This feature can be modified afterwards using unitary function @ref LL_TIM_OC_SetIdleState().*/

  uint32_t n_idle_state;  /*!< Specifies the TIM Output Compare pin state during Idle state.
                               This parameter can be a value of @ref TIM_LL_EC_OCIDLESTATE.

                               This feature can be modified afterwards using unitary function @ref LL_TIM_OC_SetIdleState().*/


}timx_oc_init_t ; /*output channel init*/



// typedef struct
// {

//   uint32_t polarity;    /*!< Specifies the active edge of the input signal.
//                                This parameter can be a value of @ref TIM_LL_EC_IC_POLARITY.

//                                This feature can be modified afterwards using unitary function @ref LL_TIM_IC_SetPolarity().*/

//   uint32_t active_input; /*!< Specifies the input.
//                                This parameter can be a value of @ref TIM_LL_EC_ACTIVEINPUT.

//                                This feature can be modified afterwards using unitary function @ref LL_TIM_IC_SetActiveInput().*/

//   uint32_t prescaler;   /*!< Specifies the Input Capture Prescaler.
//                                This parameter can be a value of @ref TIM_LL_EC_ICPSC.

//                                This feature can be modified afterwards using unitary function @ref LL_TIM_IC_SetPrescaler().*/

//   uint32_t filter;      /*!< Specifies the input capture filter.
//                                This parameter can be a value of @ref TIM_LL_EC_IC_FILTER.

//                                This feature can be modified afterwards using unitary function @ref LL_TIM_IC_SetFilter().*/
// } timx_ic_init_t;

typedef struct
{
  uint16_t Prescaler;
  uint32_t Period;
  uint8_t RepetitionCounter;
  Timx_Count_mode_e CounterMode;
  Timx_Clock_div_e ClockDivision;
  bool AutoReloadPreload;
} Timx_Base_InitTypeDef_t;

typedef struct
{
  Timx_Base_InitTypeDef_t parameters;
  Timx_Hdl_t evt_handler;
} TIMx_Init_t;

typedef struct
{
  Timx_Polarity_e polarity;    /*!< Specifies the active edge of the input signal.*/
  Timx_IC_Selection_e selection;  /*!< Specifies the input.*/
  Timx_IC_Prescaler_e prescaler;  /*!< Specifies the Input Capture Prescaler.*/
  Timx_IC_Filter_e filter;        /*!< Specifies the input capture filter.*/
  Timx_Channel_e channel;
  Timx_Channel_Pin_e pin;
  #if DMAC_USE
  uint32_t *rx_buf;
  uint16_t rx_len;
  timx_cb_t evt_handler;
  #endif
} TIMx_IC_Init_t;

typedef struct
{
  Timx_OCMode_e OCMode;        /*!< Specifies the output mode.*/
  uint32_t OCState;  /*!< Specifies the input.*/
  uint32_t OCNState;  /*!< Specifies the Input Capture Prescaler.*/
  uint32_t CompareValue;        /*!< Specifies the input capture filter.*/
  Timx_Polarity_e OCPolarity;
  Timx_Polarity_e OCNPolarity;
  uint32_t OCIdleState;
  uint32_t OCNIdleState;
  Timx_Channel_e channel;
  Timx_Channel_Pin_e pin;
  #if DMAC_USE
  uint32_t *tx_buf;
  uint16_t tx_len;
  timx_cb_t evt_handler;
  #endif
} TIMx_OC_Init_t;

int hal_timx_clock_init(Timx_Clock_e clk);
int hal_timx_base_init(TIMx_Init_t *cfg);
int hal_timx_ic_init(TIMx_Init_t *timx_cfg, TIMx_IC_Init_t *capture_cfg);
int hal_timx_oc_init(TIMx_Init_t *timx_cfg, TIMx_OC_Init_t *compare_cfg);
int hal_timx_start(Timx_Channel_e channel);
int hal_timx_deinit(void);
int timx_init(timx_init_t* init);
int timx_oc_init(uint8_t channel_map, timx_oc_init_t* oc_init);
int hal_timx_stop(Timx_Channel_e channel);
void s_timx(void);

#endif

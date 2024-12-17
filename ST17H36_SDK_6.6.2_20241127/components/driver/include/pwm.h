
#ifndef __PWM_ROM_H__
#define __PWM_ROM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "types.h"
#include "bus_dev.h"
#include "gpio.h"


#define    PWM_CH_BASE              (AP_PWM_BASE + 4)
#define    PWM_CTL0_ADDR(n)        	(PWM_CH_BASE + n*12)
#define    PWM_CTL1_ADDR(n)        	(PWM_CH_BASE + n*12 + 4)

#define    PWM_ENABLE_ALL          	do{\
                                        AP_PWM->PWMEN |= BIT(0);\
                                        AP_PWM->PWMEN |= BIT(4);\
									}while(0)
#define    PWM_DISABLE_ALL 			do{\
                                        AP_PWM->PWMEN &= ~BIT(0);\
                                        AP_PWM->PWMEN &= ~BIT(4);\
									}while(0)

#define    PWM_ENABLE_CH_012      	do{\
										AP_PWM->PWMEN |= BIT(8);\
										AP_PWM->PWMEN |= BIT(9);\
									}while(0)
#define    PWM_DISABLE_CH_012       do{\
										AP_PWM->PWMEN &= ~BIT(8);\
										AP_PWM->PWMEN &= ~BIT(9);\
									}while(0)
#define    PWM_ENABLE_CH_345    	do{\
										AP_PWM->PWMEN |= BIT(10);\
										AP_PWM->PWMEN |= BIT(11);\
									}while(0)
#define    PWM_DISABLE_CH_345      	do{\
										AP_PWM->PWMEN &= ~BIT(10);\
										AP_PWM->PWMEN &= ~BIT(11);\
									}while(0)
#define    PWM_ENABLE_CH_01        	do{\
										AP_PWM->PWMEN |= BIT(12);\
										AP_PWM->PWMEN |= BIT(13);\
									}while(0)
#define    PWM_DISABLE_CH_01       	do{\
										AP_PWM->PWMEN &= ~BIT(12);\
										AP_PWM->PWMEN &= ~BIT(13);\
									}while(0)
#define    PWM_ENABLE_CH_23        	do{\
										AP_PWM->PWMEN |= BIT(14);\
										AP_PWM->PWMEN |= BIT(15);\
									}while(0)
#define    PWM_DISABLE_CH_23       	do{\
										AP_PWM->PWMEN &= ~BIT(14);\
										AP_PWM->PWMEN &= ~BIT(15);\
									}while(0)
#define    PWM_ENABLE_CH_45        	do{\
										AP_PWM->PWMEN |= BIT(16);\
										AP_PWM->PWMEN |= BIT(17);\
									}while(0)
#define    PWM_DISABLE_CH_45    	do{\
										AP_PWM->PWMEN &= ~BIT(16);\
										AP_PWM->PWMEN &= ~BIT(17);\
									}while(0)

						
#define    PWM_INSTANT_LOAD_CH(n)  	 subWriteReg(PWM_CTL0_ADDR(n),31,31,1)
#define    PWM_NO_INSTANT_LOAD_CH(n) subWriteReg(PWM_CTL0_ADDR(n),31,31,0)
#define    PWM_LOAD_CH(n) 			 subWriteReg(PWM_CTL0_ADDR(n),16,16,1)
#define    PWM_NO_LOAD_CH(n) 		 subWriteReg(PWM_CTL0_ADDR(n),16,16,0)																 
#define    PWM_SET_DIV(n,v) 		 subWriteReg(PWM_CTL0_ADDR(n),14,12,v)
#define    PWM_SET_MODE(n,v) 	   	 subWriteReg(PWM_CTL0_ADDR(n),8,8,v)
#define    PWM_SET_POL(n,v) 		 subWriteReg(PWM_CTL0_ADDR(n),4,4,v)
#define    PWM_ENABLE_CH(n)        	 subWriteReg(PWM_CTL0_ADDR(n),0,0,1)
#define    PWM_DISABLE_CH(n)       	 subWriteReg(PWM_CTL0_ADDR(n),0,0,0)
									
#define    PWM_SET_CMP_VAL(n,v) 	 subWriteReg(PWM_CTL1_ADDR(n),31,16,v)					
#define    PWM_SET_TOP_VAL(n,v) 	 subWriteReg(PWM_CTL1_ADDR(n),15,0,v)
#define    PWM_GET_CMP_VAL(n) 	   	 ((read_reg(PWM_CTL1_ADDR(n)) & 0xFFFF0000) >> 8)
#define    PWM_GET_TOP_VAL(n) 	   	 read_reg(PWM_CTL1_ADDR(n)) & 0x0000FFFF


/*************************************************************
*	@brief		enum variable, the number of PWM channels supported
*
*/

/*************************************************************
*	@brief		enum variable used for PWM clock prescaler
*
*/
typedef enum
{
    PWM_CLK_NO_DIV = 0,
    PWM_CLK_DIV_2 = 1,
    PWM_CLK_DIV_4 = 2,
    PWM_CLK_DIV_8 = 3,
    PWM_CLK_DIV_16 = 4,
    PWM_CLK_DIV_32 = 5,
    PWM_CLK_DIV_64 = 6,
    PWM_CLK_DIV_128 = 7
} PWM_CLK_DIV_e;

/*************************************************************
*	@brief		enum variable used for PWM work mode setting
*
*/
typedef enum
{
    PWM_CNT_UP = 0,
    PWM_CNT_UP_AND_DOWN = 1
} PWM_CNT_MODE_e;

/*************************************************************
*	@brief		enum variable used for PWM output polarity setting
*
*/
typedef enum
{
    PWM_POLARITY_RISING = 0,
    PWM_POLARITY_FALLING = 1
} PWM_POLARITY_e;

typedef struct
{	
	uint8_t state;
	gpio_pin_e pwmPin;
    uint8_t pwmDiv:3;//3bit,0(no div)~7(128 div)
    uint8_t pwmMode:1;//1bit,PWM_CNT_UP=0,PWM_CNT_UP_AND_DOWN=1
    uint8_t pwmPolarity:1;//1bit,PWM_POLARITY_RISING=0,PWM_POLARITY_FALLING=1	
    uint16_t cmpVal;
    uint16_t cntTopVal;
	void (*pwm_start)(void *ptr);
	void (*pwm_stop)(void *ptr);
	bool (*pwm_state)(void *ptr);
} pwm_Cfg_t;

bool pwm_start_contronl(void *ptr);
void pwm_stop_contronl(void *ptr);
bool pwm_state_contronl(void *ptr);
bool pwm_change_parameter(void *ptr);

extern const uint8_t pwmmap[14][2];
uint8_t pwm_channel_get(uint8_t pwm_in);
#ifdef __cplusplus
}
#endif

#endif

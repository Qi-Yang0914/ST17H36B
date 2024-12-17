
//#include "rom_sym_def.h"
#include "gpio.h"
#include "clock.h"
#include "pwm.h"
#include "pwrmgr.h"

/*simple pwm,for fpga test*/
const uint8_t pwmmap[14][2]=
{
	{P0,FMUX_P0_PWM0},
	{P1,FMUX_P1_PWM1},
	{P2,FMUX_P2_PWM0},
	{P3,FMUX_P3_PWM1},
	{P6,FMUX_P6_PWM2},
	{P7,FMUX_P7_PWM3},
	{P8,FMUX_P8_PWM4},
	{P11,FMUX_P11_PWM5},
	{P12,FMUX_P12_PWM2},
	{P13,FMUX_P13_PWM3},
	{P14,FMUX_P14_PWM4},
	{P15,FMUX_P15_PWM5},
	{P18,FMUX_P18_PWM0},
	{P19,FMUX_P19_PWM1},
};

uint8_t pwm_channel_get(uint8_t pwm_in)
{
	int ch = 0xFF;
	switch(pwm_in)
	{	
		case P0: 
		case P2:
		case P18:
			ch=0;
			break;

		case P1:
		case P3:
		case P19:
			ch=1;
			break;

		case P6:
		case P12:
			ch=2;
			break;

		case P7:
		case P13:
			ch=3;
			break;

		case P8:
		case P14:
			ch=4;
			break;
	
		case P11:
		case P15:
			ch=5;
			break;
	}

	return ch;
}

bool pwm_start_contronl(void *ptr)
{
	bool ret = FALSE;
	uint8_t pwm_channel;
	pwm_Cfg_t* p =  (pwm_Cfg_t*)ptr;
	int i=0;
	
	for(i=0;i<14;i++)
	{
		if(p->pwmPin == pwmmap[i][0])
		{
			ret = TRUE;
			pwm_channel =  pwm_channel_get(pwmmap[i][0]);
			break;
		}	
	}
	if(ret == FALSE)
	{
		return ret;
	}
		
    clk_gate_enable(MOD_PWM);
    PWM_DISABLE_CH(pwm_channel);
    PWM_SET_DIV(pwm_channel, p->pwmDiv);
    PWM_SET_MODE(pwm_channel, p->pwmMode);
    PWM_SET_POL(pwm_channel, p->pwmPolarity);
    PWM_INSTANT_LOAD_CH(pwm_channel);
    //hal_pwrmgr_register(MOD_PWM, NULL, NULL);
	
	PWM_NO_LOAD_CH(pwm_channel);
    PWM_SET_CMP_VAL(pwm_channel, p->cmpVal);
    PWM_SET_TOP_VAL(pwm_channel, p->cntTopVal);
    PWM_LOAD_CH(pwm_channel);
	
	gpio_fmux_set(p->pwmPin, pwmmap[i][1]);
	
    PWM_ENABLE_CH(pwm_channel);
    //pwm_gpio_map[pwmN] = pwmPin;
	
	pwrmgr_lock(MOD_PWM);
	PWM_ENABLE_ALL;
	
	p->state = TRUE;
	
	return ret;
}

void pwm_stop_contronl(void *ptr)
{
	pwm_Cfg_t* p =  (pwm_Cfg_t*)ptr;
	uint8_t pwm_channel;

	pwm_channel =  pwm_channel_get(p->pwmPin);
	PWM_DISABLE_CH(pwm_channel);
	PWM_NO_LOAD_CH(pwm_channel);
	PWM_NO_INSTANT_LOAD_CH(pwm_channel);
	PWM_SET_DIV(pwm_channel, 0);
	PWM_SET_MODE(pwm_channel, 0);
	PWM_SET_POL(pwm_channel, 0);
	PWM_SET_TOP_VAL(pwm_channel, 0);
	PWM_SET_CMP_VAL(pwm_channel, 0);

	if((p->pwmPin != P2) && (p->pwmPin != P3))
	{
		gpio_fmux_set(p->pwmPin,FMUX_GPIO);
	}
	else
	{
		gpio_fmux_set(p->pwmPin,FMUX_P2_GPIO);
	}
	PWM_DISABLE_CH(pwm_channel);

	p->state = FALSE;	
		
	//hal_pwrmgr_lock(MOD_PWM);  
	//PWM_DISABLE_ALL
}

bool pwm_state_contronl(void *ptr)
{
	pwm_Cfg_t* p =  (pwm_Cfg_t*)ptr;
	return p->state;
}

bool pwm_change_parameter(void *ptr)
{
	pwm_Cfg_t* p =  (pwm_Cfg_t*)ptr;
	uint8_t pwm_channel;

	if(pwm_state_contronl(ptr) == TRUE)
	{
		pwm_channel =  pwm_channel_get(p->pwmPin);
		PWM_NO_LOAD_CH(pwm_channel);
		PWM_SET_CMP_VAL(pwm_channel, p->cmpVal);
		PWM_SET_TOP_VAL(pwm_channel, p->cntTopVal);
		PWM_LOAD_CH(pwm_channel);

		PWM_SET_DIV(pwm_channel,p->pwmDiv);
		return TRUE;
	}
	
	return FALSE;
}



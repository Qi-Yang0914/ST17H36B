﻿
#include "jump_function.h"
#include "mcu.h"
#include "gpio.h"
#include "adc.h" 
#include <string.h>
#include "error.h"
#include "pwrmgr.h"
#include "clock.h"
#include "log.h"

/*
 * rom use
 * */
void adc_init_r(ADC_MODE_e mode,ADC_CH_e adc_pin,ADC_SEMODE_e semode,IO_CONTROL_e amplitude)
{

    ENABLE_XTAL_OUTPUT;         //enable xtal 16M output,generate the 32M dll clock
	ENABLE_DLL;                  //enable DLL
	ADC_DBLE_CLOCK_DISABLE;      //disable double 32M clock,we are now use 32M clock,should enable bit<13>
	ADC_CLOCK_ENABLE;            //adc clock enbale,always use clk_32M
    
	write_reg(0x4000f07c,0);    //?reset time and clksel and max rate,80k sample 

	subWriteReg(0x4000f07c,4,4,mode);    //set adc mode,1:mannual,0:auto mode
    
    if(mode == SAM_MANNUAL)
    {     //mannual mode
		if(adc_pin == 0)
        {     //pga mode
            subWriteReg(0x4000f048,7,5,adc_pin);
        }
        else if(adc_pin == 1)
        {  //tempsensor mode
			subWriteReg(0x4000f048,7,5,adc_pin);
			POWER_UP_TEMPSENSOR;    //power up temperature sensor
			subWriteReg(0x4000f048,8,8,0);     //use diff mode
			subWriteReg(0x4000f048,11,11,0);    //use diff mode
		}
        else
        {                                //normal adcpin            
            subWriteReg(0x4000f048,7,5,((adc_pin>>1)+1)); // 100 for p20 ; 100 for p15 aio4            
		}
		POWER_UP_ADC;              //enable power up
        subWriteReg(0x4000f048,0,0,1);   //AP_PCRM->ANA_CTL  //Power up analog LDO
	}
    else
    {                       //auto mode
		
	}         
}


/*
 * sdk use
 * */
bool mAdc_init_flg = FALSE;
adc_Ctx_t mAdc_Ctx;
//uint8_t  adc_cal_read_flag = 0;
uint16_t adc_cal_postive = 0x0fff;
uint16_t adc_cal_negtive = 0x0fff;

const gpio_pin_e s_pinmap[ADC_CH_NUM] =
{
    GPIO_DUMMY, //ADC_CH0 =0,
    GPIO_DUMMY, //ADC_CH1 =1,
    P4, //ADC_CH1N =2,
    P5, //ADC_CH1P =3,  ADC_CH1DIFF = 3,
    P6, //ADC_CH2N =4,
    P7, //ADC_CH2P =5,  ADC_CH2DIFF = 5,
    P8, //ADC_CH3N =6,
    P11, //ADC_CH3P =7,  ADC_CH3DIFF = 7,
    GPIO_DUMMY,  //ADC_CH_VOICE =8,
};



bool      adc_timeout_en = FALSE;
uint16_t  adc_op_timeout = 100; //100ms for an Byte operation
uint32_t  adc_to;

void ADC_INIT_TOUT(void)
{
	if(adc_timeout_en == TRUE)
	{
		adc_to = get_systick();	
	}
}

int ADC_CHECK_TOUT(int timeout, char* loginfo)
{
	if(adc_timeout_en == TRUE)
	{
		if(get_ms_intv(adc_to) > timeout)
		{
			LOG(loginfo);
			return PPlus_ERR_TIMEOUT;
		}
	}
	return PPlus_SUCCESS;
}


static void set_sampling_resolution(adc_CH_t channel, bool is_high_resolution,bool is_differential_mode)
{
    uint8_t aio = 0;
    uint8_t diff_aio = 0;

    switch(channel)
    {
    case ADC_CH1N_P11:
        aio = 0;
        diff_aio = 1;
        break;

    case ADC_CH1P_P23:
        aio = 1;
        diff_aio = 0;
        break;

    case ADC_CH2N_P24:
        aio = 2;
        diff_aio = 3;
        break;

    case ADC_CH2P_P14:
        aio = 3;
        diff_aio = 2;
        break;

    case ADC_CH3N_P15:
        aio = 4;
        diff_aio = 7;
        break;

    case ADC_CH3P_P20:
        aio = 7;
        diff_aio = 4;
        break;

    default:
        return;
    }

    if(is_high_resolution)
    {
        if(is_differential_mode)
        {
            subWriteReg(&(AP_AON->PMCTL2_1),(diff_aio+8),(diff_aio+8),0);
            subWriteReg(&(AP_AON->PMCTL2_1),diff_aio,diff_aio,1);
        }

        subWriteReg(&(AP_AON->PMCTL2_1),(aio+8),(aio+8),0);
        subWriteReg(&(AP_AON->PMCTL2_1),aio,aio,1);
    }
    else
    {
        if(is_differential_mode)
        {
            subWriteReg(&(AP_AON->PMCTL2_1),(diff_aio+8),(diff_aio+8),1);
            subWriteReg(&(AP_AON->PMCTL2_1),diff_aio,diff_aio,0);
        }

        subWriteReg(&(AP_AON->PMCTL2_1),(aio+8),(aio+8),1);
        subWriteReg(&(AP_AON->PMCTL2_1),aio,aio,0);
    }
}

static void set_sampling_resolution_auto(uint8_t channel, uint8_t is_high_resolution,uint8_t is_differential_mode)
{
    uint8_t i_channel;
    adc_CH_t a_channel;
    AP_AON->PMCTL2_1 = 0x00;

    for(i_channel =2; i_channel<(ADC_CH_NUM-1); i_channel++)
    {
        if(channel & BIT(i_channel))
        {
            a_channel = (adc_CH_t)i_channel;
            set_sampling_resolution(a_channel,
                                    (is_high_resolution & BIT(i_channel)),
                                    (is_differential_mode & BIT(i_channel)));
        }
    }
}

static void set_differential_mode(void)
{
    subWriteReg(&( AP_PCRM->ANA_CTL),8,8,0);
    subWriteReg(&( AP_PCRM->ANA_CTL),11,11,0);
}

static void disable_analog_pin(adc_CH_t channel)
{
    int index = (int)channel;
    gpio_pin_e pin = s_pinmap[index];

    if(pin == GPIO_DUMMY)
        return;

    gpio_cfg_analog_io(pin,Bit_DISABLE);
    gpio_dir_r(pin,GPIO_INPUT);       //ie=0,oen=1 set to imput
    gpio_pull_set(pin,FLOATING);    //
}

static void clear_adcc_cfg(void)
{
    memset(&mAdc_Ctx, 0, sizeof(mAdc_Ctx));
}

/////////////// adc ////////////////////////////
/**************************************************************************************
    @fn          hal_ADC_IRQHandler

    @brief       This function process for adc interrupt

    input parameters

    @param       None.

    output parameters

    @param       None.

    @return      None.
 **************************************************************************************/
void __attribute__((used)) hal_ADC_IRQHandler(void)
{
    int ch,status,ch2,n;
    uint16_t adc_data[MAX_ADC_SAMPLE_SIZE-3];
    status = GET_IRQ_STATUS;
    MASK_ADC_INT;

    if(status == mAdc_Ctx.all_channel)
    {
        for (ch = 2; ch <= ADC_CH9; ch++)
        {
            if (status & BIT(ch))
            {
                AP_ADCC->intr_mask &= ~BIT(ch);

                for (n = 0; n < (MAX_ADC_SAMPLE_SIZE-3); n++)
                {
                    adc_data[n] = (read_half_word(ADC_CH_BASE + (ch * 0x80) + ((n+2) * 4)) & 0xfff);
                }

                AP_ADCC->intr_clear = BIT(ch);

                if(mAdc_Ctx.enable == FALSE)
                    continue;

                ch2=(ch%2)?(ch-1):(ch+1);

                if (mAdc_Ctx.evt_handler[ch2])
                {
                    adc_Evt_t evt;
                    evt.type = HAL_ADC_EVT_DATA;
                    evt.ch = (adc_CH_t)ch2;
                    evt.data = adc_data;
                    evt.size = MAX_ADC_SAMPLE_SIZE-3;
                    mAdc_Ctx.evt_handler[ch2](&evt);
                }

                AP_ADCC->intr_mask |= BIT(ch);
            }
        }

        if(mAdc_Ctx.continue_mode == FALSE)
        {
            hal_adc_stop();
        }
    }

    ENABLE_ADC_INT;
}


static void adc_wakeup_hdl(void)
{
    NVIC_SetPriority((IRQn_Type)ADCC_IRQn, IRQ_PRIO_HAL);
}

/**************************************************************************************
    @fn          hal_adc_init

    @brief       This function process for adc initial

    input parameters

    @param       ADC_MODE_e mode: adc sample mode select;1:SAM_MANNUAL(mannual mode),0:SAM_AUTO(auto mode)
                ADC_CH_e adc_pin: adc pin select;ADC_CH0~ADC_CH7 and ADC_CH_VOICE
                ADC_SEMODE_e semode: signle-ended mode negative side enable; 1:SINGLE_END(single-ended mode) 0:DIFF(Differentail mode)
                IO_CONTROL_e amplitude: input signal amplitude, 0:BELOW_1V,1:UP_1V

    output parameters

    @param       None.

    @return      None.
 **************************************************************************************/
void hal_adc_init(void)
{
    mAdc_init_flg = TRUE;
    pwrmgr_register(MOD_ADCC,NULL,adc_wakeup_hdl);
    clear_adcc_cfg();
}

int hal_adc_clock_config(adc_CLOCK_SEL_t clk)
{
    if(!mAdc_init_flg)
    {
        return PPlus_ERR_NOT_REGISTED;
    }

    subWriteReg(0x4000F000 + 0x7c,2,1,clk);
    return PPlus_SUCCESS;
}

unsigned int adc_Lambda[ADC_CH_NUM-3] =
 {
	//0, //ADC_CH0 =0,
	//0, //ADC_CH1 =1,		
	0,//P11	
    0,//0,//P23,
    0,//0,//P24,
	0,//P14	
	0,//P15	
	0,//P20		
	//0,//GPIO_DUMMY,  //ADC_CH_VOICE =8,	
 };
 
void hal_adc_set_lambda(uint32_t* buf)
{
	adc_Lambda[0] = *(buf + 0);
	adc_Lambda[1] = *(buf + 1);
	adc_Lambda[2] = *(buf + 2);
	adc_Lambda[3] = *(buf + 3);
	adc_Lambda[4] = *(buf + 4);
	adc_Lambda[5] = *(buf + 5);
}

int hal_adc_start(void)
{
    if(!mAdc_init_flg)
    {
        return PPlus_ERR_NOT_REGISTED;
    }

    mAdc_Ctx.enable = TRUE;
    pwrmgr_lock(MOD_ADCC);
    
    //JUMP_FUNCTION(ADCC_IRQ_HANDLER)                  =   (uint16_t)&hal_ADC_IRQHandler;
    //JUMP_FUNCTION_SET(ADCC_IRQ_HANDLER,(uint32_t)&hal_ADC_IRQHandler);
	  //JUMP_FUNCTION_SET(ADCC_IRQ_HANDLER,0);

	
    //ENABLE_ADC;
    AP_PCRM->ANA_CTL |= BIT(3);
    AP_PCRM->ANA_CTL |= BIT(0);//new
    //ADC_IRQ_ENABLE;
    NVIC_EnableIRQ((IRQn_Type)ADCC_IRQn);
    //ENABLE_ADC_INT;
    AP_ADCC->intr_mask = 0x1ff;
    //disableSleep();
    return PPlus_SUCCESS;
}

int hal_adc_config_channel(adc_Cfg_t cfg, adc_Hdl_t evt_handler)
{
    uint8_t i;
    uint8_t chn_sel = 0,evt_index = 0;
    gpio_pin_e pin = GPIO_DUMMY,pin_neg = GPIO_DUMMY;

    if(!mAdc_init_flg)
    {
        return PPlus_ERR_NOT_REGISTED;
    }

    if(mAdc_Ctx.enable)
    {
        return PPlus_ERR_BUSY;
    }

    if(evt_handler == NULL)
    {
        return PPlus_ERR_INVALID_PARAM;
    }

    if(cfg.channel & BIT(0)/*||channel == ADC_CH1*/ )
    {
        return PPlus_ERR_NOT_SUPPORTED;
    }

    if((!cfg.channel & BIT(1))&&(cfg.is_differential_mode && (cfg.channel & BIT(1))))
    {
        return PPlus_ERR_INVALID_PARAM;
    }

    if(cfg.is_differential_mode != 0)
    {
        if((cfg.is_differential_mode != 0x80) && (cfg.is_differential_mode != 0x20) && (cfg.is_differential_mode != 0x08))
        {
            return PPlus_ERR_INVALID_PARAM;
        }
    }

    mAdc_Ctx.continue_mode = cfg.is_continue_mode;
    mAdc_Ctx.all_channel = cfg.channel & 0x03;

    for(i=2; i<8; i++)
    {
        if(cfg.channel & BIT(i))
        {
            if(i%2)
            {
                mAdc_Ctx.all_channel |= BIT(i-1);
            }
            else
            {
                mAdc_Ctx.all_channel |= BIT(i+1);
            }
        }
    }

    if((AP_PCR->SW_CLK & BIT(MOD_ADCC)) == 0)
    {
        clk_gate_enable(MOD_ADCC);
    }

    //CLK_1P28M_ENABLE;
    AP_PCRM->CLKSEL |= BIT(6);
    //ENABLE_XTAL_OUTPUT;         //enable xtal 16M output,generate the 32M dll clock
    AP_PCRM->CLKHF_CTL0 |= BIT(18);
    //ENABLE_DLL;                  //enable DLL
    AP_PCRM->CLKHF_CTL1 |= BIT(7);
    //ADC_DBLE_CLOCK_DISABLE;      //disable double 32M clock,we are now use 32M clock,should enable bit<13>, diable bit<21>
    AP_PCRM->CLKHF_CTL1 &= ~BIT(21);//check
    //subWriteReg(0x4000F044,21,20,3);
    //ADC_CLOCK_ENABLE;            //adc clock enbale,always use clk_32M
    AP_PCRM->CLKHF_CTL1 |= BIT(13);
    //subWriteReg(0x4000f07c,4,4,1);    //set adc mode,1:mannual,0:auto mode
    AP_PCRM->ADC_CTL4 |= BIT(4);
    AP_PCRM->ADC_CTL4 |= BIT(0);
    set_sampling_resolution_auto(cfg.channel, cfg.is_high_resolution,cfg.is_differential_mode);
    AP_PCRM->ADC_CTL0 &= ~BIT(20);
    AP_PCRM->ADC_CTL0 &= ~BIT(4);
    AP_PCRM->ADC_CTL1 &= ~BIT(20);
    AP_PCRM->ADC_CTL1 &= ~BIT(4);
    AP_PCRM->ADC_CTL2 &= ~BIT(20);
    AP_PCRM->ADC_CTL2 &= ~BIT(4);
    AP_PCRM->ADC_CTL3 &= ~BIT(20);
    AP_PCRM->ADC_CTL3 &= ~BIT(4);
    AP_PCRM->ANA_CTL &= ~BIT(23);//disable micbias

    if(cfg.is_differential_mode == 0)
    {
        AP_PCRM->ADC_CTL4 &= ~BIT(4); //enable auto mode

        for(i=2; i<8; i++)
        {
            if(cfg.channel & BIT(i))
            {
                gpio_pin_e pin = s_pinmap[i];
                gpio_pull_set(pin,FLOATING);
                gpio_ds_control(pin, Bit_ENABLE);
                gpio_cfg_analog_io(pin, Bit_ENABLE);

                switch (i)
                {
                case 0:
                    AP_PCRM->ADC_CTL0 |= BIT(20);
                    break;

                case 1:
                    AP_PCRM->ADC_CTL0 |= BIT(4);
                    break;

                case 2:
                    AP_PCRM->ADC_CTL1 |= BIT(20);
                    break;

                case 3:
                    AP_PCRM->ADC_CTL1 |= BIT(4);
                    break;

                case 4:
                    AP_PCRM->ADC_CTL2 |= BIT(20);
                    break;

                case 5:
                    AP_PCRM->ADC_CTL2 |= BIT(4);
                    break;

                case 6:
                    AP_PCRM->ADC_CTL3 |= BIT(20);
                    break;

                case 7:
                    AP_PCRM->ADC_CTL3 |= BIT(4);
                    break;

                default:
                    break;
                }

                mAdc_Ctx.evt_handler[i] = evt_handler;
            }
        }
    }
    else
    {
        switch(cfg.is_differential_mode)
        {
//			case 0x80:
//				pin = P20;
//				pin_neg = P15;
//				chn_sel = 0x04;
//				evt_index = 7;
//				break;
//
//			case 0x20:
//				pin = P14;
//				pin_neg = P24;
//				chn_sel = 0x03;
//				evt_index = 5;
//				break;
//
//			case 0x08:
//				pin = P23;
//				pin_neg = P11;
//				chn_sel = 0x02;
//				evt_index = 3;
//				break;
//
//			case 0x02:
//				pin = P18;
//				pin_neg = P25;
//				chn_sel = 0x01;
//				evt_index = 1;
//				*(volatile int*)(0x4000F020) = 0x0060;
//				break;

			default:
				break;
        }

        gpio_ds_control(pin, Bit_ENABLE);
        subWriteReg(0x4000f048,7,5,chn_sel);
        set_differential_mode();
        //LOG("%d %d %x\n",pin,pin_neg,*(volatile int*)0x40003800);
        gpio_pull_set(pin,FLOATING);
        gpio_pull_set(pin_neg,FLOATING);
        gpio_cfg_analog_io(pin,Bit_ENABLE);
        gpio_cfg_analog_io(pin_neg,Bit_ENABLE);
        //LOG("%d %d %x\n",pin,pin_neg,*(volatile int*)0x40003800);
        mAdc_Ctx.all_channel = (cfg.is_differential_mode >> 1);
        mAdc_Ctx.evt_handler[evt_index] = evt_handler;
    }

    return PPlus_SUCCESS;
}

int hal_adc_stop(void)
{
    int i;

    if(!mAdc_init_flg)
    {
        return PPlus_ERR_NOT_REGISTED;
    }
    //MASK_ADC_INT;
    AP_ADCC->intr_mask = 0x1ff;
    NVIC_DisableIRQ((IRQn_Type)ADCC_IRQn);
    //JUMP_FUNCTION(ADCC_IRQ_HANDLER)                  =   0;
    //JUMP_FUNCTION_SET(ADCC_IRQ_HANDLER,0);

    ADC_INIT_TOUT();
    AP_ADCC->intr_clear = 0x1FF;

    while(AP_ADCC->intr_status != 0)
    {
        if(PPlus_ERR_TIMEOUT == ADC_CHECK_TOUT(adc_op_timeout, "hal_adc_clear_int_status timeout\n"))
		{
			return PPlus_ERR_TIMEOUT;
		}
		
        AP_ADCC->intr_clear = 0x1FF;
    }

    //DISABLE_ADC;
    AP_PCRM->ANA_CTL &= ~BIT(3);
    //ADC_CLOCK_DISABLE;
    AP_PCRM->CLKHF_CTL1 &= ~BIT(13);

    for(i =0; i< ADC_CH_NUM; i++)
    {
        if(mAdc_Ctx.evt_handler[i])
        {
            disable_analog_pin((adc_CH_t)i);
        }
    }

    AP_PCRM->ANA_CTL &= ~BIT(0);//Power down analog LDO
    clk_gate_disable(MOD_ADCC);
    clear_adcc_cfg();
    //enableSleep();
    pwrmgr_unlock(MOD_ADCC);
    return PPlus_SUCCESS;
}

/**************************************************************************************
    @fn          hal_adc_value

    @brief       This function process for get adc value

    input parameters

    @param       ADC_CH_e adc_pin: adc pin select;ADC_CH0~ADC_CH7 and ADC_CH_VOICE

    output parameters

    @param       None.

    @return      ADC value
 **************************************************************************************/
#if 0
static void hal_adc_load_calibration_value(void)//
{
    if(adc_cal_read_flag == FALSE)
    {
		adc_cal_read_flag = TRUE;
		adc_cal_negtive = read_reg(0x11001000)&0x0fff;
		adc_cal_postive = (read_reg(0x11001000)>>16)&0x0fff;
		LOG("AD_CAL[%x %x]\n",adc_cal_negtive,adc_cal_postive);
		
		if((adc_cal_negtive < 0x733) || (adc_cal_negtive > 0x8cc) || (adc_cal_postive < 0x733) || (adc_cal_postive > 0x8cc))
		{
				adc_cal_negtive = 0xfff;
				adc_cal_postive = 0xfff;
				LOG("->AD_CAL[%x %x]\n",adc_cal_negtive,adc_cal_postive);
		}
    }
}
#endif

float hal_adc_value_cal(adc_CH_t ch,uint16_t* buf, uint32_t size, uint8_t high_resol, uint8_t diff_mode)
{
    uint32_t i;
    int adc_sum = 0;
    volatile float result = 0.0;

    for (i = 0; i < size; i++)
    {
        adc_sum += (buf[i]&0xfff);
    }

    //hal_adc_load_calibration_value();
    result = ((float)adc_sum)/size;

    //LOG("adc_sum:%10d %10d ",adc_sum,adc_sum/(MAX_ADC_SAMPLE_SIZE-3));
    if((adc_cal_postive != 0xfff) && (adc_cal_negtive != 0xfff))
    {
        float delta = ((int)(adc_cal_postive-adc_cal_negtive))/2.0;

        if(ch&0x01)
        {
            result = (diff_mode) ? ((result-2048-delta)*2/(adc_cal_postive+adc_cal_negtive))
                     : ((result-delta) /(adc_cal_postive+adc_cal_negtive));
        }
        else
        {
            result = (diff_mode) ? ((result-2048-delta)*2/(adc_cal_postive+adc_cal_negtive))
                     : ((result+delta) /(adc_cal_postive+adc_cal_negtive));
        }
    }
    else
    {
            result = (diff_mode) ? (float)(result / 2048 -1) : (float)(result /4096);
    }

    if(high_resol == TRUE)
    {
        result *= 0.8;
    }
    else
    {        
		result = (float)result *(float)adc_Lambda[ch-2]*0.8/1000000;
    }

    return result;
}


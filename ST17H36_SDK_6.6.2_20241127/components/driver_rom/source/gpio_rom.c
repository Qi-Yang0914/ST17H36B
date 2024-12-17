
#include <string.h>
#include "jump_function.h"
#include "bus_dev.h"
#include "gpio.h"
#include "pwrmgr.h"
#include "error.h"
#include "log.h"
#include "uart.h"
#include "digi_wav_capture.h"
#include "clock.h"

typedef struct{
    gpio_pin_e pin;
    comm_cb_t cb;
}gpio_in_cfg_t;

gpio_in_cfg_t s_gpio_in_cfg = {GPIO_DUMMY,NULL};

gpio_ctx_t m_gpioCtx = 
{
	.state = FALSE,
	.retention_map = 0,
	.gpioin_nums = 0,
	.gpioin_ctx = NULL,
};


/*
 * rom use:
 * *_r
*/
void gpio_init_r(void)
{
	gpio_gpio_swporta_dr_set(0);
	gpio_gpio_swporta_ddr_set(0);
	gpio_gpio_swporta_ctl_set(0);	

	memset(&m_gpioCtx, 0, sizeof(m_gpioCtx));	
 }

void gpio_dir_r(gpio_pin_e pin, gpio_dir_t dir)
{
	gpio_fmux_control(pin,Bit_DISABLE);
	
	//gpio_fmux_control(pin,Bit_DISABLE); 		
	if(dir == GPIO_OUTPUT)
	{
		gpio_gpio_swporta_ddr_set(gpio_gpio_swporta_ddr_get()  | BIT(pin));
	}
	else
	{
		gpio_gpio_swporta_ddr_set(gpio_gpio_swporta_ddr_get() & ~BIT(pin));
	}	
}

int gpio_in_trigger_r(gpio_pin_e pin, comm_cb_t in_cb)
{
    s_gpio_in_cfg.cb = in_cb;
    s_gpio_in_cfg.pin = pin;
    
    gpio_dir_r(pin, GPIO_INPUT);

    gpio_gpio_inttype_level_set(gpio_gpio_inttype_level_get() | BIT(pin));         //edge sensitive
    gpio_gpio_intmask_set(gpio_gpio_intmask_get() & ~ BIT(pin));             		//unmask interrupt

    if (gpio_read(pin))                         //polarity
    {
    	gpio_gpio_int_polarity_set(gpio_gpio_int_polarity_get() & ~BIT(pin));		//fall
    }
    else
    {
        gpio_gpio_int_polarity_set(gpio_gpio_int_polarity_get() | BIT(pin));      //raise
    }
	gpio_gpio_inten_set(gpio_gpio_inten_get() | BIT(pin));				 //interrupt enable
    
    NVIC_EnableIRQ(gpio_IRQn);
    NVIC_SetPriority(gpio_IRQn, IRQ_PRIO_HAL);

    return PPlus_SUCCESS;
}

void gpio_interrupt_set_r(gpio_pin_e pin, bit_action_e en)//rom use
{
    if(en)
    {
        gpio_gpio_inten_set(gpio_gpio_inten_get() | BIT(pin));                 //interrupt enable
    }
    else
    {
        gpio_gpio_inten_set(gpio_gpio_inten_get() & ~ BIT(pin));                 //interrupt disable
    }    
}

void GPIO_IRQHandler_r(void)
{
    uint32 st = gpio_gpio_intstatus_get();
    //clear interrupt
    gpio_gpio_porta_eoi_set(st);
	
    if(s_gpio_in_cfg.cb){
        if(st & BIT(s_gpio_in_cfg.pin)){
            comm_evt_t evt;
            if((gpio_gpio_ext_porta_get()) & BIT(s_gpio_in_cfg.pin))
            {
                evt.type = GPIO_EVT_EDGE_RISING;
                gpio_gpio_int_polarity_set(gpio_gpio_int_polarity_get() & ~ BIT(s_gpio_in_cfg.pin));
            }
            else
            {
                evt.type = GPIO_EVT_EDGE_FALLING;
                gpio_gpio_int_polarity_set(gpio_gpio_int_polarity_get() | BIT(s_gpio_in_cfg.pin));
            }
            
            s_gpio_in_cfg.cb(&evt);
        }
    }
}

int gpio_pin_init(gpio_pin_e pin, gpio_dir_t type)
{

    gpio_fmux_control(pin,Bit_DISABLE);

	  if((pin == P2) || (pin == P3))
    {
		  iomux_sw_gpio_en_r_sw_gpio_en_setf(0x1);    //swd gpio
    }

    //gpio_cfg_analog_io
    gpio_cfg_analog_io(pin,Bit_DISABLE);

    if(type == GPIO_OUTPUT)
    {
        gpio_gpio_swporta_ddr_set(gpio_gpio_swporta_ddr_get() | BIT(pin));
        // m_gpioCtx.pin_assignments[pin] = GPIO_PIN_ASSI_OUT;
    }
    else
    {
        gpio_gpio_swporta_ddr_set(gpio_gpio_swporta_ddr_get() & ~BIT(pin));
        //m_gpioCtx.pin_assignments[pin] = GPIO_PIN_ASSI_IN;
    }

    return PPlus_SUCCESS;	
}

void gpio_cfg_analog_io(gpio_pin_e pin, bit_action_e value) 
{

    if(value)
    {		
		iomux_r_analog_io_set(iomux_r_analog_io_get() | BIT(pin));
    }
    else
    {  
    	iomux_r_analog_io_set(iomux_r_analog_io_get() & ~BIT(pin));
    }

}

void gpio_retention(gpio_pin_e pin,bool en)
{
  pin = 20-pin;
  if(en)
  {
    m_gpioCtx.retention_map |= BIT((int)pin);
  }
  else
  {
    m_gpioCtx.retention_map &= ~ BIT((int)pin);
  }
}

void gpio_retention_active(gpio_pin_e pin, bool en)
{
	//AP_AON->IOCTL[2] = m_gpioCtx.retention_map;

  uint8_t h = 0,l = 0;
  uint32_t reg_index = 0;

  reg_index = pin / 8;
  l = 4*(pin%8)+3;
  h = l;	// + 3;
	
	if(en){
		subWriteReg(FEMTO_REG_AON_PM_PM_REG2_OFFSET +(reg_index*4) + FEMTO_REG_AON_PM_BASE_ADDR, h, l, Bit_ENABLE);  
	}
	else{
		subWriteReg(FEMTO_REG_AON_PM_PM_REG2_OFFSET +(reg_index*4) + FEMTO_REG_AON_PM_BASE_ADDR, h, l, Bit_DISABLE);	
	}
}

void gpio_retention_enable(void)
{
//	AP_AON->IOCTL[2] = m_gpioCtx.retention_map;
	for (int i = 0; i < GPIO_NUM; i++)
	{
	  //config retenstion setting
	  if (m_gpioCtx.retention_map & BIT(i))
	  {
		  gpio_retention_active((gpio_pin_e)i, TRUE);
	  }
	}
}


/*
 * */
void gpio_write(gpio_pin_e pin, bit_action_e en)
{   	
    if(en)
    {
        gpio_gpio_swporta_dr_set(gpio_gpio_swporta_dr_get() | BIT(pin));
    }
    else
    {
        gpio_gpio_swporta_dr_set(gpio_gpio_swporta_dr_get() & ~BIT(pin));
    }

    gpio_dir(pin,GPIO_OUTPUT);
}

void gpio_fast_write(gpio_pin_e pin, uint8_t en)
{
    if(en)
		gpio_gpio_swporta_dr_set(gpio_gpio_swporta_dr_get() | BIT(pin));
    else
		gpio_gpio_swporta_dr_set(gpio_gpio_swporta_dr_get() & ~BIT(pin)); 
}

bool gpio_read(gpio_pin_e pin)
{
    uint32_t r;

    if(gpio_gpio_swporta_ddr_get() & BIT(pin))
    {
        r = gpio_gpio_swporta_dr_get();
    }
    else
    {
        r = gpio_gpio_ext_porta_get();
    }

    return (int)((r>> pin) & 1);
}

void gpio_dir(gpio_pin_e pin, gpio_dir_t dir)
{
	gpio_fmux_control(pin, Bit_DISABLE);

	if((pin == P2) || (pin == P3))
  {
    iomux_sw_gpio_en_r_sw_gpio_en_setf(0x1);
  }

	gpio_cfg_analog_io(pin, Bit_DISABLE);

  if(dir == GPIO_OUTPUT)
  {
      gpio_gpio_swporta_ddr_set(gpio_gpio_swporta_ddr_get() | BIT(pin));
  }
  else
  {
      gpio_gpio_swporta_ddr_set(gpio_gpio_swporta_ddr_get() & ~BIT(pin));
      gpio_retention(pin, false);
  }
}

void gpio_pull_set(gpio_pin_e pin, gpio_pupd_e type)
{
    uint8_t h = 0,l = 0;
    uint32_t reg_index = 0;
    uint32_t bit_index = 0;

	reg_index = pin / 8;
    l = 4*(pin%8)+1;
    h = l + 1;

	subWriteReg(FEMTO_REG_AON_PM_PM_REG2_OFFSET +(reg_index*4) + FEMTO_REG_AON_PM_BASE_ADDR, h, l, type);
}

void gpio_wakeup_control(gpio_pin_e pin, bit_action_e value)
{
    if(value)
    {
    	aon_pm_pm_reg9_set(aon_pm_pm_reg9_get() | BIT(pin));
    }
    else
    {
    	aon_pm_pm_reg9_set(aon_pm_pm_reg9_get() & ~BIT(pin));
    }
}

void gpio_wakeup_set(gpio_pin_e pin, gpio_polarity_e type)
{
    uint8_t p = 0;
	uint32_t reg_index = 0;
	uint32_t addr = 0;

	if (m_gpioCtx.retention_map & BIT(pin))
       return;
	
	reg_index = pin / 8;
	p = 4 * (pin % 8);
	addr = FEMTO_REG_AON_PM_PM_REG2_OFFSET +(reg_index*4) + FEMTO_REG_AON_PM_BASE_ADDR;
	
    if(POL_FALLING == type)
    {
        _FEMTO_REG_WR(addr,_FEMTO_REG_RD(addr) | BIT(p));
    }       
    else
    {
        _FEMTO_REG_WR(addr,_FEMTO_REG_RD(addr) & ~BIT(p));
    }
	
	gpio_wakeup_control(pin, Bit_ENABLE);//enable wakeup function
  
}

void gpio_ds_control(gpio_pin_e pin, bit_action_e value)
{
    if(value)	
    {
        iomux_pad_ps_set(iomux_pad_ps_get() | BIT(pin));
    }
    else	
    {
		iomux_pad_ps_set(iomux_pad_ps_get() & ~BIT(pin));	
    }
}

void gpio_fmux_control(gpio_pin_e pin, bit_action_e value)
{
    if(value)
    {
    	iomux_full_mux0_set(iomux_full_mux0_get() | BIT(pin));
    }
    else
    {
    	iomux_full_mux0_set(iomux_full_mux0_get() & ~BIT(pin));
    }

}

void gpio_fmux_set(gpio_pin_e pin, gpio_fmux_e type)
{
	uint8_t h = 0,l = 0;
	uint32_t reg_index;
	uint32_t bit_index;
	
    reg_index = pin / 4;
    bit_index = pin % 4;

	l = 8 * bit_index;
	h = l + 5;
	
	subWriteReg(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET + (reg_index * 4) + FEMTO_REG_IOMUX_BASE_ADDR, h, l, type);
    
    gpio_fmux_control(pin,Bit_ENABLE);
}


extern gpio_pin_e  s_tx_pin;
extern gpio_pin_e  s_rx_pin;
void gpio_pwm_set(uint32_t arr,uint32_t ccr,uint32_t delay)
{
	//timer reset
	pcr_sw_reset2_srst_timerx1_n_setf(0x0);
	pcr_sw_reset2_srst_timerx1_n_setf(0x1);
	if(s_tx_pin==GPIO_DUMMY || s_rx_pin==GPIO_DUMMY){
		if(validChn_uart() == 0){//p5
			gpio_fmux_set(SWU_RX_PIN,FMUX_TIMX_TX);
		}else{//p7
			gpio_fmux_set(SWU_RX_PIN2,FMUX_TIMX_TX);
		}

		timx1_timx_ccmr1_oc2m_setf(6);//PWM mode 1
		timx1_timx_ccmr1_oc2pe_setf(1);//preload
		timx1_timx_cr1_arpe_setf(1);//auto-reload preload
		//timx2_timx_egr_ug_setf(1);//initialize all registers
		timx1_timx_cr1_cen_setf(0x1);//start counter
		timx1_timx_ccer_cc2p_setf(0);//default//active low

		timx1_timx_ccer_cc2np_setf(0);//default//active low//compensate

		timx1_timx_cr1_cms_setf(0);//default edge align
		timx1_timx_ccr2_ccr2_setf(ccr);//timx1_timx_ccr1_ccr1_setf(ccr);//5//ccrx = 4 parameter 1
		timx1_timx_arr_arr_setf(arr);//timx1_timx_arr_arr_setf(arr);//9//arr = 8 parameter 2
		timx1_timx_cr1_dir_setf(0);//upcounting

		timx1_timx_egr_ug_setf(1);//initialize all registers


		if(validChn_uart() == 0){//p5
			timx1_timx_ccer_cc2ne_setf(1);//compensate
		}else{//p7
			timx1_timx_ccer_cc2e_setf(1);
		}
	}else{//dw
		if(validChn_uart() == 0){//p4
			gpio_fmux_control(SWU_TX_PIN,Bit_ENABLE);
			gpio_fmux_set(SWU_TX_PIN,FMUX_TIMX_TX);
		}else{//p6
			gpio_fmux_control(SWU_TX_PIN2,Bit_ENABLE);
			gpio_fmux_set(SWU_TX_PIN2,FMUX_TIMX_TX);
		}
		timx1_timx_ccmr1_oc1m_setf(6);//PWM mode 1
		timx1_timx_ccmr1_oc1pe_setf(1);//preload
		timx1_timx_cr1_arpe_setf(1);//auto-reload preload
		//timx2_timx_egr_ug_setf(1);//initialize all registers
		timx1_timx_cr1_cen_setf(0x1);//start counter
		timx1_timx_ccer_cc1p_setf(0);//default//active low

		timx1_timx_ccer_cc1np_setf(0);//default//active low//compensate

		timx1_timx_cr1_cms_setf(0);//default edge align
		timx1_timx_ccr1_ccr1_setf(ccr);//timx1_timx_ccr1_ccr1_setf(ccr);//5//ccrx = 4 parameter 1
		timx1_timx_arr_arr_setf(arr);//timx1_timx_arr_arr_setf(arr);//9//arr = 8 parameter 2
		timx1_timx_cr1_dir_setf(0);//upcounting

		timx1_timx_egr_ug_setf(1);//initialize all registers

		if(validChn_uart() == 0){
			timx1_timx_ccer_cc1ne_setf(1);//compensate
		}else{
			//enable oc1 output
			timx1_timx_ccer_cc1e_setf(1);	
		}
	}

	timx1_timx_bdtr_moe_setf(1);

	WaitMs(delay);
	timx1_timx_ccer_cc2e_setf(0);
	timx1_timx_ccer_cc2ne_setf(0);//compensate
	timx1_timx_ccer_cc1e_setf(0);
	timx1_timx_ccer_cc1ne_setf(0);//compensate
	timx1_timx_bdtr_moe_setf(0);

}
int gpio_interrupt_set(gpio_pin_e pin, bit_action_e en)
{
    if(en)
		gpio_gpio_inten_set(gpio_gpio_inten_get() | BIT(pin));  //interrupt enable
    else
		gpio_gpio_inten_set(gpio_gpio_inten_get() & ~BIT(pin)); //interrupt disable
    
    return PPlus_SUCCESS;
}

// /**********************************/
static int gpio_interrupt_disable(gpio_pin_e pin)
{
	gpio_gpio_intmask_set(gpio_gpio_intmask_get() | BIT(pin));
	gpio_gpio_inten_set(gpio_gpio_inten_get() & ~BIT(pin));

	return PPlus_SUCCESS;
}

//static
int gpio_interrupt_enable(gpio_pin_e pin, gpio_polarity_e type)
{
    gpio_gpio_inttype_level_set(gpio_gpio_inttype_level_get()|BIT(pin));
    gpio_gpio_intmask_set(gpio_gpio_intmask_get()&(~BIT(pin)));

	if(type == POL_RISING )
		gpio_gpio_int_polarity_set(gpio_gpio_int_polarity_get()|BIT(pin));
	else
		gpio_gpio_int_polarity_set(gpio_gpio_int_polarity_get()& ~BIT(pin));
	
	//gpio_gpio_inten_set(gpio_gpio_inten_get() | BIT(pin));
	gpio_interrupt_set(pin, Bit_ENABLE);

	return PPlus_SUCCESS;
}

int gpioin_disable(gpioin_t* p_gpioin_ctx)
{
    if(p_gpioin_ctx){
        p_gpioin_ctx->enable = FALSE;
        //m_gpioCtx.retention_map = GPIO_PIN_ASSI_NONE;
        //gpio_dir(pin, GPIO_INPUT);
        gpio_interrupt_disable(p_gpioin_ctx->pin);
        return PPlus_SUCCESS;
    }
    return PPlus_ERR_NOT_FOUND;
}


int gpioin_enable(gpioin_t* p_gpioin_ctx)
{
    gpio_polarity_e type = POL_FALLING;

    if(p_gpioin_ctx){
        gpio_pin_e pin = p_gpioin_ctx->pin;
        if (p_gpioin_ctx->posedgeHdl == NULL && p_gpioin_ctx->negedgeHdl == NULL)
            return PPlus_ERR_NOT_REGISTED;

        p_gpioin_ctx->enable = TRUE;
        gpio_dir(pin, GPIO_INPUT);

        if (p_gpioin_ctx->posedgeHdl && p_gpioin_ctx->negedgeHdl) //both raise and fall
        {
            uint32 pinVal = 0;
            pinVal = gpio_read(pin);
            type = pinVal ? POL_FALLING : POL_RISING;
        }
        else if (p_gpioin_ctx->posedgeHdl) //raise
        {
            type = POL_RISING ;
        }
        else if (p_gpioin_ctx->negedgeHdl) //fall
        {
            type = POL_FALLING;
        }

        gpio_interrupt_enable(pin, type);

        return PPlus_SUCCESS;
    }

    return PPlus_ERR_NOT_FOUND;
}


void gpioin_event_pin(gpioin_t* p_gpioin_ctx, gpio_polarity_e type)
{
    if (p_gpioin_ctx->posedgeHdl && (type == POL_RISING ))
    {
        p_gpioin_ctx->posedgeHdl(p_gpioin_ctx->pin,POL_RISING );//LOG("POS\n");
    }
    else if (p_gpioin_ctx->negedgeHdl && (type == POL_FALLING))
    {
        p_gpioin_ctx->negedgeHdl(p_gpioin_ctx->pin,POL_FALLING);//LOG("NEG\n");
    }
}

void gpioin_event(uint32 int_status, uint32 polarity)
{
    int i;
    gpio_pin_e pin = 0;
    gpioin_t* p_gpioin_ctx = m_gpioCtx.gpioin_ctx;

    for (i = 0; i < m_gpioCtx.gpioin_nums; i++)
    {
        pin = p_gpioin_ctx[i].pin;
        if(pin == GPIO_DUMMY)
            continue;

        if(int_status & BIT(pin))
        {
            gpio_polarity_e type = (polarity & BIT(pin)) ? POL_RISING : POL_FALLING;
            gpioin_event_pin(p_gpioin_ctx+i, type);

            //reconfig interrupt
            if (p_gpioin_ctx[i].posedgeHdl && p_gpioin_ctx[i].negedgeHdl) //both raise and fall
            {
                type = (type == POL_RISING) ? POL_FALLING : POL_RISING ;
                gpio_interrupt_enable(pin, type);
            }
            else if (p_gpioin_ctx[i].posedgeHdl) //raise
            {
                gpio_interrupt_enable(pin, POL_RISING);
            }
            else if (p_gpioin_ctx[i].negedgeHdl) //fall
            {
                gpio_interrupt_enable(pin, POL_FALLING);
            }
        }
    }
}

void gpio_sleep_handler(void)
{
    int i;
    gpio_polarity_e pol;
    gpioin_t* p_gpioin_ctx = m_gpioCtx.gpioin_ctx;

//	AP_AON->IOCTL[2] = m_gpioCtx.retention_map;
	gpio_retention_enable();

    for (i = 0; i < m_gpioCtx.gpioin_nums; i++)
    {
        pol = gpio_read(p_gpioin_ctx[i].pin) ? POL_FALLING : POL_RISING ;
        gpio_wakeup_set(p_gpioin_ctx[i].pin, pol);
        m_gpioCtx.gpioin_ctx[i].pin_state = gpio_read(p_gpioin_ctx[i].pin);
    }

}

void gpioin_wakeup_trigger(gpioin_t* p_gpioin_ctx)
{
    //note: need confirm??
    gpio_polarity_e type = p_gpioin_ctx->pin_state ?  POL_FALLING : POL_RISING;
    int pin_state = gpio_read(p_gpioin_ctx->pin);

    gpioin_event_pin(p_gpioin_ctx, type);

    //below means gpio toggle is very shot, when wakeuped, 
    //the pin level have been same as before sleeping
    //so we need make up the missed edge
    if(p_gpioin_ctx->pin_state == pin_state){
        type = pin_state ? POL_FALLING : POL_RISING; //order reverted!!!
        gpioin_event_pin(p_gpioin_ctx, type);
    }
}

void gpio_wakeup_handler(void)
{
  int i;

  gpioin_t* p_gpioin_ctx = m_gpioCtx.gpioin_ctx;

  NVIC_SetPriority(gpio_IRQn, IRQ_PRIO_HAL);
  NVIC_EnableIRQ(gpio_IRQn);

	for (i = 0; i < GPIO_NUM; i++)
	{
		if (m_gpioCtx.retention_map & BIT(20-i))
    {
      if((i == P2) || (i == P3))
      {
        iomux_sw_gpio_en_r_sw_gpio_en_setf(0x1);    //gpio
      }
			
			//enable wakeup pin
			aon_pm_pm_reg9_set(aon_pm_pm_reg9_get() | BIT(i));	  
			bool pol = gpio_read((gpio_pin_e)i);
			gpio_write((gpio_pin_e)i,pol);
			aon_pm_pm_reg9_set(aon_pm_pm_reg9_get() & ~ BIT(i));
//		gpio_write((gpio_pin_e)i, gpio_re &(1<<i));

			gpio_retention_active((gpio_pin_e)(20-i), FALSE);
    }
	  
	  //AP_AON->IOCTL[2] &= (~m_gpioCtx.retention_map);
	}

  //get wakeup source
  for (i = 0; i < m_gpioCtx.gpioin_nums; i++)
  {
    if (p_gpioin_ctx[i].enable)
    {
      if((p_gpioin_ctx[i].pin == P2) || (p_gpioin_ctx[i].pin == P3))
      {
        iomux_sw_gpio_en_r_sw_gpio_en_setf(0x1);    //swd gpio
      }

      gpioin_enable(p_gpioin_ctx+i); //resume gpio irq
      if(p_gpioin_ctx[i].pin_state != gpio_read(p_gpioin_ctx[i].pin))
      {
        gpioin_wakeup_trigger(p_gpioin_ctx+i);	//trigger gpio irq manually
      }
    }
  }
}

void GPIO_IRQHandler(void)
{
	uint32 polarity = gpio_gpio_int_polarity_get();    
	uint32 st = gpio_gpio_intstatus_get();    
	
	//clear interrupt    
	gpio_gpio_porta_eoi_set(st);	
	
	gpioin_event(st, polarity);

}

int gpioin_init(gpioin_t* p_gpioin_ctx, int pin_num)
{
    int i;

    if(m_gpioCtx.gpioin_nums)
        return PPlus_ERR_HAVE_REGISTED;

    for(i = 0; i< pin_num; i++){
        p_gpioin_ctx[i].enable = false;
        p_gpioin_ctx[i].pin = GPIO_DUMMY;
        p_gpioin_ctx[i].pin_state = 0;
        p_gpioin_ctx[i].posedgeHdl = NULL;
        p_gpioin_ctx[i].negedgeHdl = NULL;
    }

    m_gpioCtx.gpioin_ctx = p_gpioin_ctx;
    m_gpioCtx.gpioin_nums = pin_num;
    return PPlus_SUCCESS;  
}

int gpioin_register(gpio_pin_e pin, gpioin_Hdl_t posedgeHdl, gpioin_Hdl_t negedgeHdl)
{
    int i;
    gpioin_t* p_gpioin_ctx = m_gpioCtx.gpioin_ctx;

    for(i = 0; i< m_gpioCtx.gpioin_nums ; i++){
        if(p_gpioin_ctx[i].pin == pin)
            return PPlus_ERR_HAVE_REGISTED;
    }

    for(i = 0; i< m_gpioCtx.gpioin_nums ; i++){
        if(p_gpioin_ctx[i].pin == GPIO_DUMMY){
            p_gpioin_ctx[i].pin = pin;
            p_gpioin_ctx[i].pin_state = 0;
            p_gpioin_ctx[i].posedgeHdl = posedgeHdl;
            p_gpioin_ctx[i].negedgeHdl = negedgeHdl;
            return gpioin_enable(&p_gpioin_ctx[i]);
        }
    }
	
    return PPlus_ERR_NO_MEM;
}

int gpioin_unregister(gpio_pin_e pin)
{
    int i;
    gpioin_t* p_gpioin_ctx = m_gpioCtx.gpioin_ctx;

    for(i = 0; i< m_gpioCtx.gpioin_nums ; i++){
        if(p_gpioin_ctx[i].pin == pin){
            gpioin_disable(&p_gpioin_ctx[i]);
            p_gpioin_ctx[i].pin = GPIO_DUMMY;
            p_gpioin_ctx[i].pin_state = 0;
            p_gpioin_ctx[i].posedgeHdl = NULL;
            p_gpioin_ctx[i].negedgeHdl = NULL;
            return PPlus_SUCCESS;
        }
    }

    return PPlus_ERR_NOT_REGISTED;
}

int gpio_init(void)
{
    if (m_gpioCtx.state)
        return PPlus_ERR_INVALID_STATE;

	if(JUMP_FUNCTION_GET(GPIO_IRQ_HANDLER) == JUMP_BASE_ADDR)
        return PPlus_ERR_NOT_SUPPORTED;

	JUMP_FUNCTION_SET(GPIO_IRQ_HANDLER, (uint32_t)&GPIO_IRQHandler);

    memset(&m_gpioCtx, 0, sizeof(m_gpioCtx));
    m_gpioCtx.state = TRUE;

    //disable all channel irq,unmask all channel
    gpio_gpio_inten_set(0);
	gpio_gpio_intmask_set(0);

    //disable all wakeup pin
    aon_pm_pm_reg9_set(0);

    NVIC_SetPriority(gpio_IRQn, IRQ_PRIO_HAL);
    NVIC_EnableIRQ(gpio_IRQn);

    pwrmgr_register(MOD_GPIO, gpio_sleep_handler, gpio_wakeup_handler);

    return PPlus_SUCCESS;
}

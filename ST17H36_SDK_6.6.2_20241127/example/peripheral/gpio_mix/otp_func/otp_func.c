#include "rom_sym_def.h"
#include "otp_func.h"
#include "gpio.h"
#include "log.h"
#include "global_config.h"

#define OTP_PART __attribute__((section(".otp_section"))) 

OTP_PART void otp_func1(void)
{
	uint32_t data0[4] = {1, 2, 3, 4};

	/* struct pointer */
	otp_cfg_p *otp_p_s;		
	
	gpio_write(P0,1);
	gpio_write(P0,0);
	uint32_t sta = (gpio_read(P7) & 0x5);
	uint32_t _otp_0 = sta+1;

	data0[0] = 20;

	// gloabl config addr val
	volatile uint32_t s_str = pGlobal_config[OTP_CTX_HANDLER];

	otp_p_s = (otp_cfg_p *)s_str;

	/* callback function pointer */
	otp_Hdl_t pFunc = NULL;
	pFunc = (otp_Hdl_t)(otp_p_s->otp_handler);
	pFunc(&_otp_0);

	otp_p_s->para0 = data0[0];
	otp_p_s->para1 = data0;
	otp_p_s->para2 = (uint32_t *)&otp_p_s;
	*(otp_p_s->glab_val) = _otp_0;		//global var
}


OTP_PART void data_set(void)
{
	uint32_t data0[4] = {1, 2, 3, 4};
	memset(data0,0,0x10);
}

OTP_PART void otp_func2(void)
{
	data_set();
	gpio_write(P0, 1);
	gpio_write(P0, 0);
}

#if 0
extern otp_cfg_p *otp_p_s;
// extern otp_cfg_p otp_p_s;

OTP_PART void otp_func1(void)
{
	gpio_write(P0,1);
	gpio_write(P0,0);
	uint32_t sta = (gpio_read(P7) & 0x5);
	otp_t0 = sta+1;
	// otp_0_cb(sta);
	gpio_write(P0,1);
	gpio_write(P0,0);
	LOG("data0 = %#x \n",data0[0]);
	// LOG("P10 = %#x \n", (otp_p_s.para0));
	LOG("P10 = %#x \n", *(uint32_t *)(otp_p_s->para0));
	data0[0] = 5;
	otp_p_s->para0 = data0;
	// otp_p_s.para0 = data0[0];
	LOG("data0 = %#x \n",data0[0]);
	LOG("P10 = %#x \n",*(uint32_t *)(otp_p_s->para0));
	// LOG("P101 = %#x \n", (otp_p_s.para0));
	otp_p_s->para1 = &otp_p_s;
	// otp_p_s.para1 = &otp_p_s;
}
#endif

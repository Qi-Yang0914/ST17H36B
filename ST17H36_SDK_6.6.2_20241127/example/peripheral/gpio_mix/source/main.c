#include "rom_sym_def.h"
#include "bus_dev.h"
#include "rf_phy_driver.h"
#include "global_config.h"
#include "otp_func.h"

extern int app_main(void);
extern void board_init(void);
extern void test(void);

uint32_t otp_t0;

// int otp_0(uint32_t *valp)
int otp_0(uint32_t valu)
{
	uint32_t tmp=0;
	// uint32_t valu=*valp;
	
	if(valu>4) tmp=5;
	else tmp=2;
	for(int i=0;i<tmp;i++)
	{
	  gpio_write(P8,1);
	  gpio_write(P8,1);
	}
	LOG("valu = %#x \n", valu);	
	LOG("otp_0addr = %#x \n", &otp_0);

	return 0;
}

otp_cfg_p otp_p;

/////////////////////////////////////////////////////////////////////////////////////////////////////////
int  main(void)  
{
    g_system_clk = SYS_CLK_XTAL_16M;//SYS_CLK_XTAL_16M;//SYS_CLK_DLL_48M;
	clk_init(SYS_CLK_XTAL_16M);
	// board_init();
	LOG_INIT();
	
	gpio_write(P6, 1);
	gpio_write(P6, 0);

	LOG("otp_p0 = %#x \n", otp_p);	

	otp_t0 = 9;

	otp_p.para0 = 0x10;
	otp_p.glab_val = &otp_t0;	//gloabl valiable pointer

	/* funciton callback handler */
	otp_p.otp_handler = (otp_Hdl_t)&otp_0;
	
	pGlobal_config[OTP_CTX_HANDLER] = (unsigned int)&otp_p;	//gloable addr -- struct

	LOG("otp_t00 = %#x \n",otp_t0);
	LOG("otp_addr0 = %#x \n", &otp_p);
	LOG("p0 = %#x ,p1 = %#x ,p2 = %#x ,p3 = %#x ,p4 = %#x\n",otp_p.para0, otp_p.para1, otp_p.para2, otp_p.glab_val, otp_p.otp_handler);

	otp_func1();
	
	LOG("otp_t0 = %#x \n",otp_t0);
	LOG("otp_addr = %#x \n", &otp_p);
	LOG("p0 = %#x ,p1 = %#x ,p2 = %#x ,p3 = %#x ,p4 = %#x\n",otp_p.para0, otp_p.para1, otp_p.para2, otp_p.glab_val, otp_p.otp_handler);

	//otp_func2();
	while(1);	

	app_main();	

}


/////////////////////////////////////  end  ///////////////////////////////////////


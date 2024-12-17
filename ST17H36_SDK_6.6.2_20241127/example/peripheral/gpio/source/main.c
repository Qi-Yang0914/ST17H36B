#include "rom_sym_def.h"
#include "bus_dev.h"
#include "rf_phy_driver.h"
#include "test_data.h"
#include "watchdog.h"

extern int app_main(void);
extern void board_init(void);
extern void test(void);


/////////////////////////////////////////////////////////////////////////////////////////////////////////
int  main(void)  
{
    g_system_clk = SYS_CLK_XTAL_16M;//SYS_CLK_XTAL_16M;//SYS_CLK_DLL_48M;
	
#if(TEST_MODE==1)
//otp_test
	LOG_INIT();
	test();
	
#elif((TEST_MODE==3) || (TEST_MODE==2))
//flash_test sram
	board_init();
	PRINT("test\n")
	test();
	
#else
	board_init();
	gpio_init();
//	gpio_write(P14, 1);
//	gpio_write(P14, 0);

    LOG_DEBUG("rfClk %d sysClk %d tpCap[%02x %02x] rcCal[%02x]\n",g_rfPhyClkSel,g_system_clk,g_rfPhyTpCal0,g_rfPhyTpCal1,0x7f&read_reg(0x4000f018));
	// watchdog_init(WDG_256S, FALSE);
	
	app_main();
#endif

}


/////////////////////////////////////  end  ///////////////////////////////////////


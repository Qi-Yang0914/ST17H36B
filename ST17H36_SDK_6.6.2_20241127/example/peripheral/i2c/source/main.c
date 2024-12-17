#include "rom_sym_def.h"
#include "bus_dev.h"
#include "rf_phy_driver.h"
#include "watchdog.h"

extern int app_main(void);
extern void board_init(void);

/////////////////////////////////////////////////////////////////////////////////////////////////////////
int  main(void)  
{
    g_system_clk = SYS_CLK_XTAL_16M;//SYS_CLK_XTAL_16M;//SYS_CLK_DLL_48M;
	
	board_init();

    LOG_DEBUG("rfClk %d sysClk %d tpCap[%02x %02x] rcCal[%02x]\n",g_rfPhyClkSel,g_system_clk,g_rfPhyTpCal0,g_rfPhyTpCal1,0x7f&read_reg(0x4000f018));
	// watchdog_init(WDG_256S, FALSE);
	
	app_main();

}


/////////////////////////////////////  end  ///////////////////////////////////////

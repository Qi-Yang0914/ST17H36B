#include "bus_dev.h"
#include "rf_phy_driver.h"
#include "rom_sym_def.h"

extern int app_main(void);
extern void board_init(void);

/////////////////////////////////////////////////////////////////////////////////////////////////////////
int  main(void)
{
    g_system_clk = SYS_CLK_DLL_48M;//SYS_CLK_XTAL_16M;//SYS_CLK_DLL_48M;
	
    #if(FLASH_PROTECT_FEATURE == 1)
    hal_flash_enable_lock(MAIN_INIT);
    #endif

    board_init();
	gpio_init();  

    LOG_DEBUG("rfClk %d sysClk %d tpCap[%02x %02x] rcCal[%02x]\n",g_rfPhyClkSel,g_system_clk,g_rfPhyTpCal0,g_rfPhyTpCal1,0x7f&read_reg(0x4000f018));
    
    app_main();
}


/////////////////////////////////////  end  ///////////////////////////////////////

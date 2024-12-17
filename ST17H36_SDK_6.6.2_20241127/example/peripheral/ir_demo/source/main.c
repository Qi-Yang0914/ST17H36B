#include <string.h>
#include <stdio.h>
#include "rom_sym_def.h"
#include "bus_dev.h"
#include "rf_phy_driver.h"
#include "global_config.h"
#include "clock.h"
#include "log.h"
#include "nrz.h"
#include "ir_demo.h"

extern int app_main(void);
extern void board_init(void);


/////////////////////////////////////////////////////////////////////////////////////////////////////////
int  main(void)  
{
    g_system_clk = SYS_CLK_XTAL_16M;//SYS_CLK_XTAL_16M;//SYS_CLK_DLL_48M;
	// clk_init(SYS_CLK_XTAL_16M);
	board_init();

	app_main();
}

/////////////////////////////////////  end  ///////////////////////////////////////


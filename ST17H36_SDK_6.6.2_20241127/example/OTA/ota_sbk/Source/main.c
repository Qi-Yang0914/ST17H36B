#include "rom_sym_def.h"
#include "bus_dev.h"
#include "rf_phy_driver.h"
#include "ota_protocol.h"


extern int ota_main(void);
extern void board_init(void);
extern uint32_t g_system_reset_cause;


/////////////////////////////////////////////////////////////////////////////////////////////////////////
int  main(void)  
{
    g_system_clk = SYS_CLK_XTAL_16M;//SYS_CLK_XTAL_16M;//SYS_CLK_DLL_48M;
    board_init();
	extern void patch_MTU_2pktsTX23_2pktsRX196(void );
//	extern void patch_asymmetric_bbfifo(void);
	patch_MTU_2pktsTX23_2pktsRX196();
//	patch_asymmetric_bbfifo();
    LOG_DEBUG("rfClk %d sysClk %d tpCap[%02x %02x] rcCal[%02x]\n",g_rfPhyClkSel,g_system_clk,g_rfPhyTpCal0,g_rfPhyTpCal1,aon_pm_pm_reg14_rc32k_c_trim_getf());
    LOG_DEBUG("[REST CAUSE] %d\n ",g_system_reset_cause);
	otaProtocol_BootMode();
    ota_main();	

}
/////////////////////////////////////  end  ///////////////////////////////////////

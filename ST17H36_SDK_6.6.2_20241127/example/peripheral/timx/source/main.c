#include "rom_sym_def.h"
#include "bus_dev.h"
#include "timx_app.h"
#include "log.h"
#include "clock.h"

extern int app_main(void);
extern void board_init(void);
extern void test(void);
extern volatile sysclk_t       g_system_clk;

void timx_irq_handler(void);
/////////////////////////////////////////////////////////////////////////////////////////////////////////
int  main(void)
{
  g_system_clk = SYS_CLK_XTAL_16M; // SYS_CLK_XTAL_16M;//SYS_CLK_DLL_48M;

  board_init();

  __enable_irq();

  uart_init(500000,P4,P5,NULL);

  LOG("sysClk %d\n", g_system_clk);
  
  app_main();
}

/////////////////////////////////////  end  ///////////////////////////////////////


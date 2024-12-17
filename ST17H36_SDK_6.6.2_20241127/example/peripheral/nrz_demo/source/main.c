#include <string.h>
#include <stdio.h>
#include "mcu.h"
#include "rom_sym_def.h"
#include "bus_dev.h"
#include "uart.h"
// #include "spif.h"
#include "clock.h"
#include "gpio.h"
#include "log.h"
#include "nrz.h"
#include "rf_phy_driver.h"
// #include "system_femto_iot.h"
// #include <core_feature_eclic.h>
////////////////////////

#define LED_MAX_NUMBER 	65535


#define NRZ_TEST_RAM	0
void wait(int cycles)
{
	while(cycles--);
}

#if NRZ_TEST_RAM
void ram_initial()
{
	for(int i=0; i <= LED_MAX_NUMBER; i++){
		*(volatile int *)(MEM_ADDR + i*4) = 0;
		// memset(MEM_ADDR, 0xff, LED_MAX_NUMBER*4);
	}
	// LOG("ram\n");
}

void write_ram(int a, uint32_t *data_buf)	//g r b
{
	int ram_cnt=0;

	for(int i=0; i< a; i++)
	{
		 
		// *(int *)(MEM_ADDR + i*4) |= data_buf[i%2];
		*(int *)(MEM_ADDR + i*4) |= data_buf[i];
	}
}

void write8_ram(uint32_t value)	//g r b
{
	for(int i=0;i<8;i++)
    {
        *(int *)(MEM_ADDR + i*4) |= value;
    }
}
#endif

int pin[20][2] = {
	{P0,  FMUX_NRZ_DATA0},
	{P7,  FMUX_NRZ_DATA1},
	{P8,  FMUX_NRZ_DATA1},
	{P9,  FMUX_NRZ_DATA1},
	{P10,  FMUX_NRZ_DATA1},
	{P11,  FMUX_NRZ_DATA1},	//blue
	{P12,  FMUX_NRZ_DATA1},
	{P13,  FMUX_NRZ_DATA1},
};

int  main(void)  
{
	g_system_clk = SYS_CLK_XTAL_16M;//SYS_CLK_XTAL_16M;//SYS_CLK_DLL_48M;
	clk_init(g_system_clk);
	
	 LOG_INIT();
	LOG("nrz test!\n");
	
	hal_nrz_init();

	// gpio_write(P8, 1);
	// gpio_write(P8, 0);
	
#if 1 	//multi channel

	for(int i=0; i< 8; i++)
	{
		hal_nrz_config_channel(pin[i][0], pin[i][1], 1);
	}
#else
	hal_nrz_config_channel(P8, FMUX_NRZ_DATA0, 0);

#endif

	// __enable_irq();
	// NVIC_EnableIRQ(nrz1_IRQn);
    // NVIC_SetPriority(nrz1_IRQn, IRQ_PRIO_HAL);
	
	NRZ_CH_CFG_t ch_cfg = {
		.carr_cnt = 0x00030003,
		.prem_cnt = 0x000c000c,
		.code0_cnt = 0x000e0005,
		.code1_cnt = 0x0005000e,
		.wave_ctrl = 0x408101,
	};

#if NRZ_TEST_RAM
	// ram_initial();
	// uint32_t data_buf[LED_MAX_NUMBER] = {0xFF0000FF, 0x00FF0000,0x0000FF00, 0xFF00007E};

	// write_ram(LED_MAX_NUMBER, data_buf);
	write8_ram(0xFF000050);
#endif	
	
	hal_nrz_dma_config_reload(MEM_ADDR, 1);

	ch_cfg.tx_bits_count = LED_MAX_NUMBER;	//tx bit counts
	hal_nrz_config_set(ch_cfg);
	// LOG("dma_a=%#x\n", *(volatile unsigned int*)0x40005004);
	// LOG("nrz_ch=%#x\n", *(volatile int*) 0x40005028);
	// LOG("ioen=%#x\n", *(volatile int*) 0x4000380C);
	hal_nrz_start();

	// wait(600000);

}

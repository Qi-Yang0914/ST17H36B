#ifndef __CLOCK_ROM_H__
#define __CLOCK_ROM_H__

#ifdef __cplusplus
extern "C" {
#endif


#include "types.h"
#include "bus_dev.h"
#define RTC_OVERFLOW_VAL        (0x000fffff) //20bit rtc counter
#define TIME_BASE               (0x003fffff) // 24bit count shift 2 bit as 1us/bit
#define TIME_DELTA(x,y)         ( (x>=y) ? x-y : TIME_BASE-y+x )

enum  LOWCLK_SEL{
    RC_32K,
    XTAL_32K
};

typedef enum CLK_RC32M_DIV{
	//DIV0_TO_64M=0,
    DIV0_TO_32M,
    DIV1_TO_16M,
    DIV2_TO_8M,
    DIV3_TO_4M,
    DIV4_TO_2M,
    DIV5_TO_1M
}clk_rc32m_div_t;

typedef enum{
    NO_AP_NO_CP = 0,HCLK = 0,
    PCLK = 1,
} pclk_Type_t;

#define SYS_CLK_SEL_RC_32M      0
#define SYS_CLK_SEL_DLL_32M     1
#define SYS_CLK_SEL_DLL_32M1    2
#define SYS_CLK_SEL_DLL_32M2    3

typedef enum  _SYSCLK_SEL {
    //SYS_CLK_RC_64M  = 0,
    SYS_CLK_RC_32M    = 0,  SPIF_CLK_HCLK = 0,
    SYS_CLK_DLL_32M,
    SYS_CLK_XTAL_16M,
    SYS_CLK_DLL_48M,
    SYS_CLK_DLL_64M,
    SYS_CLK_DLL_96M,
    SYS_CLK_8M,
    SYS_CLK_4M,
    SYS_CLK_2M,
    SYS_CLK_1M,
    SYS_CLK_RC_32K,
    SYS_CLK_TMDEF_4M,
	SYS_CLK_PCLK,
    SYS_CLK_NUM,
    SYS_CLK_NONE        = 0xff,
}sysclk_t;

typedef union{
    struct{
        uint32_t en_rc_h_clk:1;
        uint32_t en_rc32k_clk:1;
        uint32_t en_digi_clk:1;
        uint32_t en_dll_clk:1;
        uint32_t en_dll32m_clk:1;
        uint32_t en_dll48m_clk:1;
        uint32_t en_dll64m_clk:1;
    }g;
    uint32_t value;
}clk_en_t;

typedef struct{
    uint32_t    bbpllCtrl;    // clkhf_ctrl5
    uint8_t     puDly;      // ldo pu dly delay rtc cnt
    uint8_t     settleDly;  // pll en settle delay ,rtc cnt
  	uint16_t 	clkswitchNOP;//clk switch wait NOP*2 ,then enter _WFI
}bbpll_config_t;

extern volatile uint32_t  g_pclk,g_hclk;

void rtc_start(void);
void rtc_stop(void);
void rtc_clear(void);
//bool rtc_config_prescale(uint32_t pre);
uint32_t rtc_get_counter(void);
uint32_t tick_get_counter(uint16_t* frac);

void WaitRTCCount(uint32_t rtcDelyCnt);
void WaitUs(uint32_t wtTime);
void WaitMs(uint32_t msecond);
void wait_hclk_cycle_us(uint32_t dlyT);

int clk_spif_ref_clk(sysclk_t spif_ref_clk);
int clk_init(sysclk_t h_system_clk_sel);
void clk_set_pclk_div(uint8_t div);
uint32_t clk_get_pclk(void);
int clk_set_rc32M_div(clk_rc32m_div_t div);
void clk_gate_enable(MODULE_e module);
void clk_gate_disable(MODULE_e module);
int clk_gate_get(MODULE_e module);
void clk_reset(MODULE_e module);
void check_xtal_settle(uint32_t trackingConfig);

uint32_t get_systick(void);
uint32_t get_ms_intv(uint32_t tick);
void system_soft_reset(void);
void _clk_apply_clk_enable(clk_en_t clk_g_en);

#ifdef __cplusplus
}
#endif

#endif

#include "mcu.h"
#include "bus_dev.h"
#include "clock.h"
#include "digi_wav_capture.h"
#include "error.h"
#include "gpio.h"
#define  DELAY_4_NOP_DELAY  {  __asm volatile("nop");__asm volatile("nop");__asm volatile("nop");__asm volatile("nop");}
#define  DELAY_8_NOP_DELAY  {DELAY_4_NOP_DELAY;DELAY_4_NOP_DELAY;}
#define  DELAY_16_NOP_DELAY {DELAY_8_NOP_DELAY;DELAY_8_NOP_DELAY;}
#define  DELAY_32_NOP_DELAY {DELAY_16_NOP_DELAY;DELAY_16_NOP_DELAY;}


//{clock, clk_sel, }
typedef struct{
    uint32_t clock;
    uint8_t hclk_sel;
    uint8_t spif_sel;
    uint8_t tim_sel;
}clk_map_t;

const clk_map_t g_clk_map[SYS_CLK_NUM] = {
    //clk@hz    hclk     spif    tim
    //{64000000,  0x00, 0x00, 0xff},       //SYS_CLK_RC_64M      = 0,
    {32000000,  0x00, 0x00, 0xff},       //SYS_CLK_RC_32M,
    {32000000,  0x01, 0x02, 0xff},       //SYS_CLK_DLL_32M,
    {16000000,  0x02, 0x03, 0x06},       //SYS_CLK_XTAL_16M,
    {48000000,  0x03, 0x01, 0xff},       //SYS_CLK_DLL_48M,
    {64000000,  0x04, 0xff, 0xff},       //SYS_CLK_DLL_64M,
    {96000000,  0x05, 0xff, 0xff},       //SYS_CLK_DLL_96M,
    {8000000,   0x06, 0xff, 0x05},       //SYS_CLK_8M,
    {4000000,   0x07, 0xff, 0x04},       //SYS_CLK_4M,
    {2000000,   0x08, 0xff, 0x03},       //SYS_CLK_2M,
    {1000000,   0x09, 0xff, 0x02},        //SYS_CLK_1M,
    {32768,     0xff, 0xff, 0x00},        //SYS_CLK_RC_32K,
    {4000000,   0xff, 0xff, 0x07},        //SYS_CLK_TMDEF_4M,   //timer default 4M from RC high osc
    {0,			0xff, 0x00, 0x01}      	
};

const uint32_t g_hclk_table[SYS_CLK_NUM] = {
    //64000000, //SYS_CLK_RC_64M      = 0,
    32000000, //SYS_CLK_RC_32M      = 0,
    32000000, //SYS_CLK_DLL_32M     = 1,
    16000000, //SYS_CLK_XTAL_16M    = 2,
    48000000, //SYS_CLK_DLL_48M     = 3,
    64000000, //SYS_CLK_DLL_64M     = 4,
    96000000, //SYS_CLK_DLL_96M     = 5,
    8000000, //SYS_CLK_8M          = 6,
    4000000, //SYS_CLK_4M          = 7,
};

typedef struct{
    bool     init_flag;
    uint32_t hclk;

}clk_ctx_t;

//void clk_gate_enable(MODULE_e module)
//{
//	if(module < MOD_CP_CPU)
//	{
//		pcr_sw_clk0_set(pcr_sw_clk0_get()|BIT(module));
//	}
//	else if(module < MOD_PCLK_CACHE)
//	{
//		pcr_sw_clk1_set(pcr_sw_clk1_get()|BIT(module-MOD_CP_CPU));
//	}
//}
//
//void clk_gate_disable(MODULE_e module)
//{
//	if(module < MOD_CP_CPU)
//	{
//		pcr_sw_clk0_set(pcr_sw_clk0_get() & ~BIT(module));
//	}
//	else if(module < MOD_PCLK_CACHE)
//	{
//		pcr_sw_clk1_set(pcr_sw_clk1_get() & ~BIT(module-MOD_CP_CPU));
//	}
//}
//
//int clk_gate_get(MODULE_e module)
//{
//	if(module < MOD_CP_CPU)
//	{
//		return (pcr_sw_clk0_get() & BIT(module));
//	}
//	else if(module < MOD_PCLK_CACHE)
//	{
//		return (pcr_sw_clk1_get() & BIT(module-MOD_CP_CPU));
//	}
    //else if(module < MOD_USR0)//jack no cache,remove compile warnning
//    {
//        return (pcr_cfq_clock_gate_get() & BIT(module-MOD_PCLK_CACHE));
//    }
//}

//void clk_reset(MODULE_e module)
//{
//	pcr_sw_reset0_set(pcr_sw_reset0_get() & ~BIT(24));
//	pcr_sw_reset0_set(pcr_sw_reset0_get() | BIT(24));
//}

volatile uint32_t g_hclk = 32000000;

uint32_t tick_get_counter(uint16_t* frac)
{
    uint64_t cnt = SysTimer_GetLoadValue();
    if(frac)
        *frac = (uint16_t)((cnt%8000)>>3);
    return(uint32_t)(cnt / 8000);
}

void rtc_start(void)
{
	 aon_rtc_rtc_reg0_rtc_run_setf(1);
}

void rtc_stop(void)
{
     aon_rtc_rtc_reg0_rtc_run_setf(0);
}

void rtc_clear(void)
{
    int i = 100;
    aon_rtc_rtc_reg0_rtc_clr_setf(1);
    while(i-->0);
}

//bool rtc_config_prescale(uint32_t pre)
//{
//    uint8_t divider;
//    
//    if((pre == 0) || (pre > 0xFFF))	
//        return FALSE;
//	else
//        divider = pre -1;
//    
//    if(((AP_AON->RTCCTL>>2)& 0xFFF) != divider)
//    {
//        rtc_stop();
//        subWriteReg(&(AP_AON->RTCCTL),13,2,divider);
//        rtc_start();
//    }
//    return TRUE;
//}

uint32_t rtc_get_counter(void)
{
    uint32_t cnt0,cnt1;
   
    while(1)
    {
        cnt0 = aon_rtc_rtc_reg1_rtc_cnt_getf();
        cnt1 = aon_rtc_rtc_reg1_rtc_cnt_getf();
        
        if(cnt1==cnt0)
            break;
    }
    return cnt1;   
}

void wait_hclk_cycle_us(uint32_t dlyT)
{
   volatile uint32 delay;
   uint8_t curr_hclk = pcrm_clksel_get() &0x7;
   delay = g_hclk_table[curr_hclk];//32M
   delay = (delay +(1<<22))>>23;//+0.5 for round

   delay = dlyT*delay;
   delay+=1;// add 1 to keep delay>0 for lower clock 
   
   while(delay--){};
   
}

void WaitUs(uint32_t wtTime)
{    
    wait_hclk_cycle_us(wtTime);
}

void WaitRTCCount(uint32_t rtcDelyCnt)
{
    volatile uint32 cnt0,cnt1;
    uint32 delt =0;
    aon_rtc_rtc_reg0_rtc_run_setf(1);
    cnt0 = rtc_get_counter();

    while(delt<rtcDelyCnt)
    { 
        cnt1 = rtc_get_counter();
        delt = (cnt1>=cnt0) ? (cnt1-cnt0) : (0xfffff-cnt0+cnt1);
    }    
}

void WaitMs(uint32_t msecond)
{
	WaitRTCCount((msecond<<15)/1000);
}

void clk_set_pclk_div(uint8_t div)
{
    volatile int i = 100;
    uint8_t div_set = div <= 1 ? 0 : (div -1);
    if(div_set == 0){
        pcr_apb_clk_pack(div_set);
        pcr_apb_clk_update_pack(0);
    }
    else
    {
        pcr_apb_clk_pack(div_set);
        pcr_apb_clk_update_pack(1);
    }
    while(i--){
        ;
    }

}

uint32_t clk_get_hclk(void)
{
    return g_hclk_table[pcrm_clksel_get() & 0x07];
}

extern uint32_t g_dwc_rcH;

uint32_t clk_get_pclk(void)
{
    volatile uint32_t pclk;
	if((pcrm_clksel_get() & 0x07) == 0){
    	pclk = g_dwc_rcH / (pcr_apb_clk_pclk_div_m1_getf() + 1);
    }else{
		pclk = (g_hclk_table[pcrm_clksel_get() & 0x07] ) / (pcr_apb_clk_pclk_div_m1_getf() + 1);
	}
    return pclk;

}

__attribute__((aligned(4))) bbpll_config_t g_bpll_config= {
    .bbpllCtrl=0,
    .puDly=3,
    .settleDly=3,
    .clkswitchNOP=5,
    };
void _clk_bpll_config(void)
{
    if(pcrm_clkhf_ctl1_dll_en_getf()==1)
        return;// 
    
    {
        pcrm_clkhf_ctl1_dll_ldo_pu_setf(1);

        if(g_bpll_config.bbpllCtrl)
            pcrm_clkhf_ctrl5_set(g_bpll_config.bbpllCtrl);

        WaitRTCCount(g_bpll_config.puDly);
        pcrm_clkhf_ctl1_dll_en_setf(1);
        WaitRTCCount(g_bpll_config.settleDly);
    }
}
/*
disable interrupt
switch clock
MCU Enter low power mode(M0 _WFI, 802 WAIT)
*/
void _clk_apply_clk_enable(clk_en_t clk_g_en)
{
    //enable clocks whitch need opened
    if(clk_g_en.g.en_digi_clk) //enable digital clock
        pcrm_clkhf_ctl0_xtal_clk_dig_en_setf(1);
    if(clk_g_en.g.en_dll_clk)
        _clk_bpll_config();
    if(clk_g_en.g.en_dll32m_clk)
        pcrm_clkhf_ctl1_en_dig_clk_32m_setf(1);
    if(clk_g_en.g.en_dll48m_clk)
        pcrm_clkhf_ctl1_en_dig_clk_48m_setf(1);
    if(clk_g_en.g.en_dll64m_clk)
        pcrm_clkhf_ctl1_en_dig_clk_64m_setf(1);
}

void _clk_apply_clk_disable(clk_en_t clk_g_en)
{
    //close clocks whitch need closed
    if(clk_g_en.g.en_dll32m_clk == 0)
        pcrm_clkhf_ctl1_en_dig_clk_32m_setf(0);
    if(clk_g_en.g.en_dll48m_clk == 0)
        pcrm_clkhf_ctl1_en_dig_clk_48m_setf(0);
    if(clk_g_en.g.en_digi_clk == 0) //enable digital clock
        pcrm_clkhf_ctl0_xtal_clk_dig_en_setf(0);
    //if(clk_g_en.g.en_dll_clk == 0)
    //    pcrm_clkhf_ctl1_dll_en_setf(0);
}

/*
return value:
0: no 32m digi
1: 32m dll enable
2: 32m doubler enabler : not support on pico
3: both up two : not support on pico
*/
static uint32_t _clk_32m_sel(uint32_t digi_32m_en)
{
    uint32_t digi_32m_sel = 0;  //bit0 32m dll, bit1, 32m dbl
    uint32_t tmp_sel = 0;
    //rxadc
    if(pcrm_clkhf_ctl1_get() & BIT(19)){
        tmp_sel =(pcrm_clkhf_ctl1_rxadc_clk_sel_getf() &3);
        if(tmp_sel == 3)    //32m dll
            digi_32m_sel |= BIT(0);
    }
    //rf clk
    if(pcrm_clkhf_ctl1_get() & BIT(18)){
        tmp_sel =(pcrm_clkhf_ctl1_rf_clk_sel_getf() &3);
        if(tmp_sel == 3)    //32m dll
            digi_32m_sel |= BIT(0);
    }
    //digi 32m
    if(digi_32m_en & BIT(0)){
        digi_32m_sel |= BIT(0); // only support 32M_DLL for pico
    }
    return digi_32m_sel;
}

static void _clk_sel_calc(sysclk_t sel,clk_en_t* p_clk_g_en)
{
	switch(sel){
	    case SYS_CLK_RC_32M:
	        p_clk_g_en->g.en_rc_h_clk = 1;
	        break;
	    case SYS_CLK_XTAL_16M:
	    case SYS_CLK_8M:
	    case SYS_CLK_4M:
	    case SYS_CLK_2M:
	    case SYS_CLK_1M:
	        p_clk_g_en->g.en_digi_clk = 1;
	        break;
	    case SYS_CLK_DLL_32M:
	        p_clk_g_en->g.en_digi_clk = 1;
	        p_clk_g_en->g.en_dll_clk = 1;
	        p_clk_g_en->g.en_dll32m_clk = 1;
	        break;
	    case SYS_CLK_DLL_48M:
	        p_clk_g_en->g.en_digi_clk = 1;
	        p_clk_g_en->g.en_dll_clk = 1;
	        p_clk_g_en->g.en_dll48m_clk = 1;
	        break;
	    case SYS_CLK_DLL_64M:
	        p_clk_g_en->g.en_digi_clk = 1;
	        p_clk_g_en->g.en_dll_clk = 1;
	        p_clk_g_en->g.en_dll64m_clk = 1;
	        break;
	    case SYS_CLK_TMDEF_4M:
		case SYS_CLK_PCLK:		
	        break;
	    default:
	        phy_assert(PPlus_ERR_INVALID_PARAM);
	    }
}

static void _periph_clk_sel_calc(uint8_t clk_sel, uint8_t clk_en, clk_en_t* p_clk_g_en)
{
    if(clk_en == 0) //disabled, do nothing
        return;

    switch(clk_sel & 0x3){//check bit 0~1
    case SYS_CLK_SEL_DLL_32M:
    case SYS_CLK_SEL_DLL_32M1:
    case SYS_CLK_SEL_DLL_32M2:
        p_clk_g_en->g.en_digi_clk = 1;
        p_clk_g_en->g.en_dll_clk = 1;
        p_clk_g_en->g.en_dll32m_clk = 1;
        break;
    case SYS_CLK_SEL_RC_32M:
        p_clk_g_en->g.en_rc_h_clk = 1;
        break;
    default:
        phy_assert(PPlus_ERR_INVALID_PARAM);
    }
}

sysclk_t clk_get_current_timerx_clk(void)
{
    int i;
    uint16_t hclk = (uint16_t)pcrm_timer_clk_ctl_timerx_clk_sel_getf();
    for(i = 0; i< SYS_CLK_NUM; i++ ){
        if(hclk == g_clk_map[i].tim_sel)
            break;
    }
    return (sysclk_t) i;
}

sysclk_t clk_get_current_hclk_clk(void)
{
    int i;
    uint16_t hclk = (uint16_t)pcrm_clksel_hclk_sel_getf();
    for(i = 0; i< SYS_CLK_NUM; i++ ){
        if(hclk == g_clk_map[i].hclk_sel)
            break;
    }
    return (sysclk_t) i;
}
sysclk_t clk_get_current_spif_clk(void)
{
    int i;
    uint16_t spif_ref = (uint16_t)pcrm_timer_clk_ctl_spif_refclk_sel_getf();
    for(i = 0; i< SYS_CLK_DLL_96M; i++ ){
        if(spif_ref == g_clk_map[i].spif_sel)
            break;
    }
	return (sysclk_t) i;
}

clk_en_t _clk_figure_out_clk_en(sysclk_t hclk_clk,
                                sysclk_t spif_clk,
                                sysclk_t xtimer_clk,
                                uint8_t  rxadc_sel,
                                uint8_t  rxadc_sel_en,
                                uint8_t  rfclk_sel,
                                uint8_t  rfclk_sel_en,
                                uint8_t  dig_32m_sel,
                                uint8_t  dig_32m_sel_en)
{
    clk_en_t  clk_g_en;
    clk_g_en.value = 0;
    _clk_sel_calc(spif_clk, &clk_g_en);
    _clk_sel_calc(hclk_clk, &clk_g_en);
    _clk_sel_calc(xtimer_clk, &clk_g_en);

    _periph_clk_sel_calc(rxadc_sel, rxadc_sel_en, &clk_g_en);
    
    _periph_clk_sel_calc(rfclk_sel, rfclk_sel_en, &clk_g_en);
    
    _periph_clk_sel_calc(dig_32m_sel, dig_32m_sel_en, &clk_g_en);

    return clk_g_en;
}


int clk_spif_ref_clk(sysclk_t spif_clk)
{
    clk_en_t clk_g_en;
    uint8_t spif_sel = g_clk_map[spif_clk].spif_sel;

    if(spif_sel == 0xff)
        return PPlus_ERR_INVALID_PARAM;

    clk_g_en = _clk_figure_out_clk_en(
                    clk_get_current_hclk_clk(),
                    spif_clk,
                    clk_get_current_timerx_clk(),
                    pcrm_clkhf_ctl1_rxadc_clk_sel_getf(),
                    pcrm_clkhf_ctl1_en_rxadc_clk_32m_getf(),
                    pcrm_clkhf_ctl1_rf_clk_sel_getf(),
                    pcrm_clkhf_ctl1_en_rf_clk_getf(),
                    pcrm_clkhf_ctl1_dig_clk_32m_sel_getf(),
                    pcrm_clkhf_ctl0_xtal_clk_dig_en_getf());

    //apply clock sel
    _clk_apply_clk_enable(clk_g_en);

	pcr_s_wr_reg10_spif_refclk_sel_setf(1);
	pcrm_timer_clk_ctl_spif_refclk_sel_setf(spif_sel);

    _clk_apply_clk_disable(clk_g_en);
    
    return PPlus_SUCCESS;  
}



void clk_apply0(uint32_t en, uint8_t hclk_sel,uint8_t wfi_sel)
{
	clk_en_t  clk_g_en;
	    clk_g_en.value = en;
	    //apply clock sel
	    _clk_apply_clk_enable(clk_g_en);

        //#warning why need do delay here
	    //for(volatile int i=0; i < 18; i++){
	    //    WaitRTCCount(1);
	    //}
	    if(pcrm_clksel_hclk_sel_getf() != hclk_sel)
	    {
	        uint32_t ispr;
	        uint32_t clk0, clk1;
	        //volatile int wait_write_finish = 1000;

	        //disable clock for bus dev
	        clk0 = pcr_sw_clk0_get();
	        clk1 = pcr_sw_clk1_get();

	        _HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();

	        ispr= NVIC_GetPendingIRQs() & ( ~ BIT(hclk_mux_done_IRQn-Ext_IRQn)); //don't not restore hclk_mux_done interrupt
	        NVIC_ClearPendingIRQs(0xffffffff);
	        
	        //gate off clk, just keep cpu and wdt
	        pcr_sw_clk0_set(0);
	        pcr_sw_clk1_set(PCR_SW_CLK1_CLKG_WDT_BIT | PCR_SW_CLK1_CLKG_CPU_BIT);
	
	        if(wfi_sel)
	        {
	            _HAL_CS_ALLOC_();
	            HAL_ENTER_CRITICAL_SECTION();
	            NVIC_ClearPendingIRQ(hclk_mux_done_IRQn);
	            NVIC_EnableIRQ(hclk_mux_done_IRQn);
	            pcrm_clksel_hclk_sel_en_override_setf(0);
	            pcrm_clksel_hclk_mux_done_override_setf(0);
	            pcrm_clksel_hclk_sel_setf(hclk_sel);
                
				for(volatile int i=0;i<g_bpll_config.clkswitchNOP;i++)
				{
					__NOP();__NOP();
				}
	            __WFI();
	            pcrm_clksel_hclk_mux_done_override_setf(1);
                pcrm_clksel_hclk_sel_en_override_setf(1);
	            NVIC_ClearPendingIRQ(hclk_mux_done_IRQn);
	            NVIC_DisableIRQ(hclk_mux_done_IRQn);
	            HAL_EXIT_CRITICAL_SECTION();
	        }
	        else
	        {
                pcrm_clksel_hclk_mux_done_override_setf(1);
                pcrm_clksel_hclk_sel_en_override_setf(1);
	            pcrm_clksel_hclk_sel_setf(hclk_sel);
	        }

	        //restore clock for bus dev
	        pcr_sw_clk0_set(clk0);
	        pcr_sw_clk1_set(clk1 | PCR_SW_CLK1_CLKG_CPU_BIT);

	        NVIC_SetPendingIRQs(ispr);
	        HAL_EXIT_CRITICAL_SECTION();
	    }

	    _clk_apply_clk_disable(clk_g_en);
}

int clk_init_wfi_sel(sysclk_t hclk_sel,uint8_t wfi_sel)
{
	 clk_en_t  clk_g_en;
	 uint32_t digi_clk_en = 0;

	 if(pcrm_clkhf_ctl0_xtal_clk_dig_en_getf() == 0)//xtal 16Mhz never disabled
		pcrm_clkhf_ctl0_xtal_clk_dig_en_setf(1);

    clk_g_en = _clk_figure_out_clk_en(
                    hclk_sel,
                    clk_get_current_spif_clk(),
                    clk_get_current_timerx_clk(),
                    pcrm_clkhf_ctl1_rxadc_clk_sel_getf(),
                    pcrm_clkhf_ctl1_en_rxadc_clk_32m_getf(),
                    pcrm_clkhf_ctl1_rf_clk_sel_getf(),
                    pcrm_clkhf_ctl1_en_rf_clk_getf(),
                    pcrm_clkhf_ctl1_dig_clk_32m_sel_getf(),
                    pcrm_clkhf_ctl0_xtal_clk_dig_en_getf());

    //apply clock sel
	clk_apply0(clk_g_en.value, hclk_sel,wfi_sel);
	
    if(hclk_sel == SYS_CLK_RC_32M)
        g_hclk = dwc_rcH_frequency();
	
    return PPlus_SUCCESS;
}
int clk_init(sysclk_t hclk_sel)
{
    return clk_init_wfi_sel( hclk_sel,1);
}


extern uint32_t osal_sys_tick;
extern uint32_t g_wakeup_systick_base;
extern uint32_t g_pre_systick;
extern uint16 osal_remUsTicks;
uint32_t get_systick(void)
{
    uint32_t tmp;
    uint32_t elapsedTick=0;
    tmp = tick_get_counter(&osal_remUsTicks)-g_wakeup_systick_base;

    if(tmp>g_pre_systick)
    {
        elapsedTick = tmp-g_pre_systick;
    }
    else
    {
        elapsedTick = 0x100000000-g_pre_systick+tmp;
    }
    g_pre_systick=tmp;

    osal_sys_tick += elapsedTick;
    //#warning debug osal_sys_tick updata
    //write_reg(0x4000f040,osal_sys_tick);
	return osal_sys_tick;
}

uint32_t get_ms_intv(uint32_t tick)
{
    uint32_t diff = 0;

    if(get_systick() < tick)
    {
        diff = 0xffffffff- tick;
        diff = get_systick() + diff;
    }
    else
    {
        diff = get_systick() - tick;
    }

    return diff;
}

void system_soft_reset(void)
{
    //_HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();
	drv_disable_irq();
	pcr_sw_reset1_set(0);

    while(1);
}
int clk_set_rc32M_div(clk_rc32m_div_t div)
{
    if(pcrm_clksel_hclk_sel_getf())
    {
        uint32_t tmp = read_reg(0x4000f0ec);
        if(tmp&0x8)
        {
            //keep pmu_ldoH enble
            subWriteReg(0x4000f0ec,10,8,div);
        }
        else
        {
            //keep pmu_ldoH disable
            tmp =(tmp&0xFFFFF8FF) |(div<<8)|(0x5<<4);
            write_reg(0x4000f0ec,tmp);
        }
        return PPlus_SUCCESS;
    }
    return PPlus_ERR_BUSY;
}

void check_xtal_settle(uint32_t trackingConfig)
{
    uint16_t cnt_target,cnt_dlt;

    if(trackingConfig==0)
        return;
    else
    {
        cnt_target = 0xffff&(trackingConfig>>8);
        cnt_dlt    = 0xff&(trackingConfig);
    }
        

    uint16_t cnt0,cnt1,dlt;

    pcrm_i_clkhf_ctrl2_en_xtal_track_setf(1);
    WaitRTCCount(2);
    
    cnt0 = 0xffff & (read_reg(0x4000f864));
    while(1)
    {
        WaitRTCCount(2);
        cnt1 = 0xffff & (read_reg(0x4000f864));
        dlt = (cnt1>=cnt0) ? cnt1-cnt0 : cnt0-cnt1;
        if(cnt1>cnt_target && cnt0> cnt_target &&( dlt < cnt_dlt))
            break;
        cnt0 = cnt1;
        
    }
    pcrm_i_clkhf_ctrl2_en_xtal_track_setf(0);
}


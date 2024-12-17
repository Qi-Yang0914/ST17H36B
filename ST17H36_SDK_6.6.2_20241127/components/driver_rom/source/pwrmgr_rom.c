#include "types.h"

//#ifndef FPGA_ROM_DRIVER_TEST
#include "ll_sleep.h"
//#else
//#endif

#include "bus_dev.h"
#include "string.h"

#include "pwrmgr.h"
#include "error.h"
#include "gpio.h"
#include "log.h"
#include "clock.h"
#include "jump_function.h"

static uint8_t mPwrMode = PWR_MODE_NO_SLEEP;

//check this macro
//#define CFG_FLASH_ENABLE_DEEP_SLEEP
//#ifdef CFG_FLASH_ENABLE_DEEP_SLEEP
//   #warning "CONFIG FLASH ENABLE DEEP SLEEP !!!"
//#endif



static uint8_t s_pwrmgr_task_maxNum = 0;
static pwrmgr_Ctx_t* mCtx = NULL;//[s_pwrmgr_task_maxNum];
//static uint32_t sramRet_config;
uint32_t s_config_swClk0 = DEF_CLKG_CONFIG_0;
uint32_t s_config_swClk1 = DEF_CLKG_CONFIG_1;
uint32_t s_gpio_wakeup_src;

#ifndef FPGA_ROM_DRIVER_TEST
#else
	#define enableSleep()
	#define disableSleep()
#endif

bool pwrmgr_config(uint8_t pwrmode)
{
	if((pwrmode == PWR_MODE_NO_SLEEP) || (pwrmode == PWR_MODE_SLEEP) || (pwrmode == PWR_MODE_PWROFF_NO_SLEEP))
	{
		mPwrMode = pwrmode;
		return TRUE;
	}
	return FALSE;
}

int pwrmgr_init(pwrmgr_Ctx_t * pctx, uint8_t num)
{
  mCtx = pctx; 
  s_pwrmgr_task_maxNum = num;
  memset((void*)mCtx, 0, sizeof(pwrmgr_Ctx_t)*s_pwrmgr_task_maxNum);
	
    switch(mPwrMode)
    {
    case PWR_MODE_NO_SLEEP:
    case PWR_MODE_PWROFF_NO_SLEEP:
        disableSleep();
        break;

    case PWR_MODE_SLEEP:
        enableSleep();
        break;
    }

    return PPlus_SUCCESS;
}

int pwrmgr_clk_gate_config(MODULE_e module)
{
    if (module < MOD_CP_CPU)
    {
        s_config_swClk0 |= BIT(module);
    }
    else if (module < MOD_PCLK_CACHE)
    {
        s_config_swClk1 |= BIT(module - MOD_CP_CPU);
    }

    return PPlus_SUCCESS;
}

bool pwrmgr_is_lock(MODULE_e mod)
{
    int i;
    int ret = FALSE;

    if(mPwrMode == PWR_MODE_NO_SLEEP || mPwrMode == PWR_MODE_PWROFF_NO_SLEEP )
    {
        return TRUE;
    }

    _HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();

    for(i = 0; i< s_pwrmgr_task_maxNum; i++)
    {
        if(mCtx[i].moudle_id == MOD_NONE)
            break;

        if(mCtx[i].moudle_id == mod)
        {
            if(mCtx[i].lock == TRUE)
                ret = TRUE;

            break;
        }
    }

    HAL_EXIT_CRITICAL_SECTION();
    return ret;
}


int pwrmgr_lock(MODULE_e mod)
{
    int i;
    int ret = PPlus_ERR_NOT_REGISTED;

    if(mPwrMode == PWR_MODE_NO_SLEEP || mPwrMode == PWR_MODE_PWROFF_NO_SLEEP )
    {
        disableSleep();
        return PPlus_SUCCESS;
    }

    _HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();

    for(i = 0; i< s_pwrmgr_task_maxNum; i++)
    {
        if(mCtx[i].moudle_id == MOD_NONE)
            break;

        if(mCtx[i].moudle_id == mod)
        {
            mCtx[i].lock = TRUE;
            disableSleep();      
            ret = PPlus_SUCCESS;
            break;
        }
    }

    HAL_EXIT_CRITICAL_SECTION();
    return ret;
}

int pwrmgr_unlock(MODULE_e mod)
{
    int i, cnt = 0;

    if(mPwrMode == PWR_MODE_NO_SLEEP || mPwrMode == PWR_MODE_PWROFF_NO_SLEEP )
    {
        disableSleep();
        return PPlus_SUCCESS;
    }

    _HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();

    for(i = 0; i< s_pwrmgr_task_maxNum; i++)
    {
        if(mCtx[i].moudle_id == MOD_NONE)
            break;

        if(mCtx[i].moudle_id == mod)
        {
            mCtx[i].lock = FALSE;
        }

        if(mCtx[i].lock)
            cnt ++;
    }

    if(cnt == 0)
        enableSleep();
    else
        disableSleep();

    HAL_EXIT_CRITICAL_SECTION();
    //LOG("sleep mode:%d\n", isSleepAllow());
    return PPlus_SUCCESS;
}

int pwrmgr_register(MODULE_e mod, pwrmgr_Hdl_t sleepHandle, pwrmgr_Hdl_t wakeupHandle)
{
    int i;
    pwrmgr_Ctx_t* pctx = NULL;

    for(i = 0; i< s_pwrmgr_task_maxNum; i++)
    {
        if(mCtx[i].moudle_id == mod)
            return PPlus_ERR_INVALID_STATE;

        if(mCtx[i].moudle_id == MOD_NONE)
        {
            pctx = &mCtx[i];
            break;
        }
    }

    if(pctx == NULL)
        return PPlus_ERR_NO_MEM;

    pctx->lock = FALSE;
    pctx->moudle_id = mod;
    pctx->sleep_handler = sleepHandle;
    pctx->wakeup_handler = wakeupHandle;
    return PPlus_SUCCESS;
}

int pwrmgr_unregister(MODULE_e mod)
{
    int i;
    pwrmgr_Ctx_t* pctx = NULL;

    for(i = 0; i< s_pwrmgr_task_maxNum; i++)
    {
        if(mCtx[i].moudle_id == mod)
        {
            pctx = &mCtx[i];
            break;
        }

        if(mCtx[i].moudle_id == MOD_NONE)
        {
            return PPlus_ERR_NOT_REGISTED;
        }
    }

    if(pctx == NULL)
        return PPlus_ERR_NOT_REGISTED;

    _HAL_CS_ALLOC_(); HAL_ENTER_CRITICAL_SECTION();
    memcpy(pctx, pctx+1, sizeof(pwrmgr_Ctx_t)*(s_pwrmgr_task_maxNum-i-1));
    HAL_EXIT_CRITICAL_SECTION();
    return PPlus_SUCCESS;
}


void __attribute__((used)) pwrmgr_wakeup_process(void)
{
    int i;

    AP_PCR->SW_CLK  = s_config_swClk0;
    AP_PCR->SW_CLK1 = s_config_swClk1|0x01;//force set M0 CPU
    s_gpio_wakeup_src = aon_pm_pm_reg16_get();//AP_AON->GPIO_WAKEUP_SRC[0];

    //restore BB TIMER IRQ_PRIO
    //NVIC_SetPriority((IRQn_Type)BB_IRQn,    IRQ_PRIO_REALTIME);
    //NVIC_SetPriority((IRQn_Type)TIM1_IRQn,  IRQ_PRIO_HIGH);     //ll_EVT
    //NVIC_SetPriority((IRQn_Type)TIM2_IRQn,  IRQ_PRIO_HIGH);     //OSAL_TICK
    //NVIC_SetPriority((IRQn_Type)TIM4_IRQn,  IRQ_PRIO_HIGH);     //LL_EXA_ADV

    for(i = 0; i< s_pwrmgr_task_maxNum; i++)
    {
        if(mCtx[i].moudle_id == MOD_NONE)
        {
            break;
        }

        if(mCtx[i].wakeup_handler)
            mCtx[i].wakeup_handler();
    }

    return;
}

void __attribute__((used)) pwrmgr_sleep_process(void)
{
    int i;
    //LOG("Sleep\n");
    for(i = 0; i< s_pwrmgr_task_maxNum; i++)
    {
        if(mCtx[i].moudle_id == MOD_NONE)
        {
            //return PPlus_ERR_NOT_REGISTED;
            //found last module
            break;
        }

        if(mCtx[i].sleep_handler)
            mCtx[i].sleep_handler();
    }


    return;
}




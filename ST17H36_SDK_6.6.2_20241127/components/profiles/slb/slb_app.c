
/*************************************************************************************************
    Filename:       slb_app.c

    Revised:

    Revision:

    Description:    This file is used for slbota applications.
**************************************************************************************************/

#ifdef PHY_SLB_OTA_ENABLE

#include "slb_app.h"
#include "ppsp_serv.h"
#include "ppsp_impl.h"
#include "OSAL.h"
#include "clock.h"
#include "ll_def.h"
#include "pwrmgr.h"



static void simple_reset_hdlr(void);
static void simple_start_tmo_hdlr(uint16 tmo_int);

static uint8 slb_ota_TaskID;

#if (FLASH_PROTECT_FEATURE == 1)
#include "flash.h"
static void simple_slbota_abnormal_tmo_hdlr(void);
static uint32  __ppsp_impl_upda_offs_last;
extern uint32  __ppsp_impl_upda_offs;
#endif

static ppsp_impl_clit_hdlr_t ble_ppsp_impl_appl_hdlr =
{
    .ppsp_impl_appl_rset_hdlr = simple_reset_hdlr,
    .ppsp_impl_appl_start_tmo_hdlr = simple_start_tmo_hdlr,
    #if (FLASH_PROTECT_FEATURE == 1)
    .ppsp_impl_appl_slbota_abnormal_tmo_cb = simple_slbota_abnormal_tmo_hdlr,
    #endif
};


static void simple_reset_hdlr(void)
{
    osal_start_timerEx(slb_ota_TaskID, SLB_OTA_RESET_EVENT, 3000);
}

static void simple_start_tmo_hdlr(uint16 tmo_int)
{
    if (conn_param[0].active == TRUE)
        osal_start_timerEx(slb_ota_TaskID, SLB_OTA_RE_PACK_TMO_EVENT, tmo_int);
}

#if (FLASH_PROTECT_FEATURE == 1)
static void simple_slbota_abnormal_tmo_hdlr(void)
{
    osal_start_timerEx(slb_ota_TaskID, SLB_OTA_ABNORMAL_TMO_EVENT, 60000);
}
#endif

void SLB_OTA_Init(uint8 task_id)
{
    slb_ota_TaskID = task_id;
    ppsp_serv_add_serv(PPSP_SERV_CFGS_SERV_FEB3_MASK);
    ppsp_impl_reg_serv_appl(&ble_ppsp_impl_appl_hdlr);
}


uint16 SLB_OTA_ProcessEvent(uint8 task_id, uint16 events)
{
    if(events & SLB_OTA_RESET_EVENT)
    {
        hal_system_soft_reset();
        return (events ^ SLB_OTA_RESET_EVENT);
    }

    if (events & SLB_OTA_RE_PACK_TMO_EVENT)
    {
        if (0 != ble_ppsp_impl_appl_hdlr.ppsp_impl_appl_re_pack_tmo_cb)
        {
            ble_ppsp_impl_appl_hdlr.ppsp_impl_appl_re_pack_tmo_cb();
        }
        return (events ^ SLB_OTA_RE_PACK_TMO_EVENT);
    }
    #if (FLASH_PROTECT_FEATURE == 1)
    if (events & SLB_OTA_ABNORMAL_TMO_EVENT)
    {
        if (__ppsp_impl_upda_offs == __ppsp_impl_upda_offs_last)
        {
            extern bStatus_t GAPRole_TerminateConnection(void);
            GAPRole_TerminateConnection();
            if (PPlus_SUCCESS == hal_flash_enable_lock(SLB_OTA))
            {
                LOG("OTA FAIL! Flash lock success ...\r\n");
            }
            else
            {
                LOG("OTA FAIL! Flash lock fail...\r\n");
            }
        }
        else
        {
            __ppsp_impl_upda_offs_last = __ppsp_impl_upda_offs;
            osal_start_timerEx(slb_ota_TaskID, SLB_OTA_ABNORMAL_TMO_EVENT, 60000);
        }
        return (events ^ SLB_OTA_ABNORMAL_TMO_EVENT);
    }
    #endif

    return 0;
}


#endif

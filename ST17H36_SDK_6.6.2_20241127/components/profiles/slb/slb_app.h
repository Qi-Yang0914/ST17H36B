
/*************************************************************************************************
    Filename:       slb_app.h

    Revised:

    Revision:

    Description:
**************************************************************************************************/

#ifndef _SLB_APP_H_
#define _SLB_APP_H_

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef PHY_SLB_OTA_ENABLE


#include "types.h"

#define SLB_OTA_RESET_EVENT                     0x0001
#define SLB_OTA_RE_PACK_TMO_EVENT               0x0002
#if (FLASH_PROTECT_FEATURE == 1)
#define SLB_OTA_ABNORMAL_TMO_EVENT              0x0004
#endif

void SLB_OTA_Init(uint8 task_id);


uint16 SLB_OTA_ProcessEvent(uint8 task_id, uint16 events);



#endif

#ifdef __cplusplus
}
#endif

#endif /* _SLB_APP_H_ */

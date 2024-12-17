#ifndef _FEMTO_REG_AON_RTC_STRUCT_H_
#define _FEMTO_REG_AON_RTC_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  __IO uint32_t rsved0[0x21];

  union{ //offset addr 0x0080

    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t cc_evt_en:1;
      __IO uint32_t reserved1:18;
      __IO uint32_t rtc_clr:1;
      __IO uint32_t rtc_run:1;
    }rtc_reg0_fld;
    __IO uint32_t rtc_reg0;

  };

  union{ //offset addr 0x0084
    struct{
      __IO uint32_t reserved0:12;
      __IO uint32_t rtc_cnt:20;
    }rtc_reg1_fld;
    __IO uint32_t rtc_reg1;

  };

  union{ //offset addr 0x0088
    struct{
      __IO uint32_t reserved0:12;
      __IO uint32_t rtc_cc0_val:20;
    }rtc_reg2_fld;
    __IO uint32_t rtc_reg2;

  };

  __IO uint32_t rsved1[0x3];

  union{ //offset addr 0x0094

    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t rtc_cc:1;
    }rtc_reg5_fld;
    __IO uint32_t rtc_reg5;

  };

} FEMTO_REG_AON_RTC_TypeDef;

#define FEMTO_REG_AON_RTC ((FEMTO_REG_AON_RTC_TypeDef *)0x4000F000)


#if defined(__CC_ARM)
#pragma pop
#endif


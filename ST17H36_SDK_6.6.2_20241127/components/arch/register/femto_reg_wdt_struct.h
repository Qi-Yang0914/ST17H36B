#ifndef _FEMTO_REG_WDT_STRUCT_H_
#define _FEMTO_REG_WDT_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:26;
      __IO uint32_t no_name:1;
      __IO uint32_t rpl:3;
      __IO uint32_t rmod:1;
      __IO uint32_t wdt_en:1;
    }CR_fld;
    __IO uint32_t CR;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t top_init:4;
      __IO uint32_t top:4;
    }TORR_fld;
    __IO uint32_t TORR;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t reserved0:8;
      __IO uint32_t ccvr:24;
    }CCVR_fld;
    __IO uint32_t CCVR;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t crr:8;
    }CRR_fld;
    __IO uint32_t CRR;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t isr:1;
    }STAT_fld;
    __IO uint32_t STAT;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t icr:1;
    }EOI_fld;
    __IO uint32_t EOI;

  };

  __IO uint32_t rsved0[0x34];

  union{ //offset addr 0x00e4

    struct{
      __IO uint32_t cp_wdt_user_top_max:32;
    }COMP_PARAMS_5_fld;
    __IO uint32_t COMP_PARAMS_5;

  };

  union{ //offset addr 0x00e8
    struct{
      __IO uint32_t cp_wdt_user_top_init_max:32;
    }COMP_PARAMS_4_fld;
    __IO uint32_t COMP_PARAMS_4;

  };

  union{ //offset addr 0x00ec
    struct{
      __IO uint32_t cp_wdt_top_rst:32;
    }COMP_PARAMS_3_fld;
    __IO uint32_t COMP_PARAMS_3;

  };

  union{ //offset addr 0x00f0
    struct{
      __IO uint32_t cp_wdt_cnt_rst:32;
    }COMP_PARAMS_2_fld;
    __IO uint32_t COMP_PARAMS_2;

  };

  union{ //offset addr 0x00f4
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t cp_wdt_cnt_width:5;
      __IO uint32_t cp_wdt_dflt_top_init:4;
      __IO uint32_t cp_wdt_dflt_top:4;
      __IO uint32_t reserved1:3;
      __IO uint32_t cp_wdt_dft_rpl:3;
      __IO uint32_t cp_wdt_apb_data_width:2;
      __IO uint32_t cp_wdt_pause:1;
      __IO uint32_t cp_wdt_use_fix_top:1;
      __IO uint32_t cp_wdt_hc_top:1;
      __IO uint32_t cp_wdt_hc_rpl:1;
      __IO uint32_t cp_wdt_hc_rmod:1;
      __IO uint32_t cp_wdt_dual_top:1;
      __IO uint32_t cp_wdt_dflt_rmod:1;
      __IO uint32_t cp_wdt_always_en:1;
    }COMP_PARAMS_1_fld;
    __IO uint32_t COMP_PARAMS_1;

  };

  union{ //offset addr 0x00f8
    struct{
      __IO uint32_t wcv:32;
    }COMP_VERSION_fld;
    __IO uint32_t COMP_VERSION;

  };

  union{ //offset addr 0x00fc
    struct{
      __IO uint32_t ctr:32;
    }COMP_TYPE_fld;
    __IO uint32_t COMP_TYPE;

  };

} FEMTO_REG_WDT_TypeDef;

#define FEMTO_REG_WDT ((FEMTO_REG_WDT_TypeDef *)0x40002000)


#if defined(__CC_ARM)
#pragma pop
#endif


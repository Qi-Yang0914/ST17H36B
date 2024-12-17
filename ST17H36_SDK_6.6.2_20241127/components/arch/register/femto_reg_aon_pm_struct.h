#ifndef _FEMTO_REG_AON_PM_STRUCT_H_
#define _FEMTO_REG_AON_PM_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t power_off_i:1;
    }pm_reg0_fld;
    __IO uint32_t pm_reg0;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t power_slp_i:1;
    }pm_reg1_fld;
    __IO uint32_t pm_reg1;

  };

  __IO uint32_t rsved0[0x3];

  union{ //offset addr 0x0010

    struct{
      __IO uint32_t p7_ret:1;
      __IO uint32_t p07_pul:2;
      __IO uint32_t p07_wu_s:1;
      __IO uint32_t p6_ret:1;
      __IO uint32_t p06_pul:2;
      __IO uint32_t p06_wu_s:1;
      __IO uint32_t p5_ret:1;
      __IO uint32_t p05_pul:2;
      __IO uint32_t p05_wu_s:1;
      __IO uint32_t p4_ret:1;
      __IO uint32_t p04_pul:2;
      __IO uint32_t p04_wu_s:1;
      __IO uint32_t p3_ret:1;
      __IO uint32_t p03_pul:2;
      __IO uint32_t p03_wu_s:1;
      __IO uint32_t p2_ret:1;
      __IO uint32_t p02_pul:2;
      __IO uint32_t p02_wu_s:1;
      __IO uint32_t p1_ret:1;
      __IO uint32_t p01_pul:2;
      __IO uint32_t p01_wu_s:1;
      __IO uint32_t p00_ret:1;
      __IO uint32_t p00_pul:2;
      __IO uint32_t p00_wu_s:1;
    }pm_reg2_fld;
    __IO uint32_t pm_reg2;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t p15_ret:1;
      __IO uint32_t p15_pul:2;
      __IO uint32_t p15_wu_s:1;
      __IO uint32_t p14_ret:1;
      __IO uint32_t p14_pul:2;
      __IO uint32_t p14_wu_s:1;
      __IO uint32_t p13_ret:1;
      __IO uint32_t p13_pul:2;
      __IO uint32_t p13_wu_s:1;
      __IO uint32_t p12_ret:1;
      __IO uint32_t p12_pul:2;
      __IO uint32_t p12_wu_s:1;
      __IO uint32_t p11_ret:1;
      __IO uint32_t p11_pul:2;
      __IO uint32_t p11_wu_s:1;
      __IO uint32_t p10_ret:1;
      __IO uint32_t p10_pul:2;
      __IO uint32_t p10_wu_s:1;
      __IO uint32_t p09_ret:1;
      __IO uint32_t p09_pul:2;
      __IO uint32_t p09_wu_s:1;
      __IO uint32_t p08_ret:1;
      __IO uint32_t p08_pul:2;
      __IO uint32_t p08_wu_s:1;
    }pm_reg3_fld;
    __IO uint32_t pm_reg3;

  };

  union{ //offset addr 0x0018
    struct{
      __IO uint32_t reserved0:12;
      __IO uint32_t p20_ret:1;
      __IO uint32_t p20_pul:2;
      __IO uint32_t p20_wu_s:1;
      __IO uint32_t p19_ret:1;
      __IO uint32_t p19_pul:2;
      __IO uint32_t p19_wu_s:1;
      __IO uint32_t p18_ret:1;
      __IO uint32_t p18_pul:2;
      __IO uint32_t p18_wu_s:1;
      __IO uint32_t p17_ret:1;
      __IO uint32_t p17_pul:2;
      __IO uint32_t p17_wu_s:1;
      __IO uint32_t p16_ret:1;
      __IO uint32_t p16_pul:2;
      __IO uint32_t p16_wu_s:1;
    }pm_reg4_fld;
    __IO uint32_t pm_reg4;

  };

  __IO uint32_t rsved1[0x6];

  union{ //offset addr 0x0030

    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t gpio_wu_mask:21;
    }pm_reg9_fld;
    __IO uint32_t pm_reg9;

  };

  __IO uint32_t rsved2[0x2];

  union{ //offset addr 0x0038

    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t io_pending_clr_reg:1;
    }pm_reg10_fld;
    __IO uint32_t pm_reg10;

  };

  __IO uint32_t rsved3[0x2];

  union{ //offset addr 0x0040

    struct{
      __IO uint32_t sleep_r3:32;
    }pm_reg11_fld;
    __IO uint32_t pm_reg11;

  };

  __IO uint32_t rsved4[0x2];

  union{ //offset addr 0x0048

    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t io_pending_evt_list:1;
    }pm_reg12_fld;
    __IO uint32_t pm_reg12;

  };

  __IO uint32_t rsved5[0x2];

  union{ //offset addr 0x0050

    struct{
      __IO uint32_t reserved0:2;
      __IO uint32_t slp_en_rtc:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t slp_en_rc32k:1;
      __IO uint32_t reserved1:4;
      __IO uint32_t dig_ldo_trim:2;
      __IO uint32_t ovr_io_pending:1;
      __IO uint32_t reserved:20;
    }pm_reg13_fld;
    __IO uint32_t pm_reg13;

  };

  union{ //offset addr 0x0054
    struct{
      __IO uint32_t wdt_en_reg2:1;
      __IO uint32_t reserved0:16;
      __IO uint32_t rc32m_c_trim:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t rc32k_c_trim:6;
      __IO uint32_t rc64m_tune_r_r:1;
    }pm_reg14_fld;
    __IO uint32_t pm_reg14;

  };

  __IO uint32_t rsved6[0x3];

  union{ //offset addr 0x0060

    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t wdt_en_reg3:1;
      __IO uint32_t reserved1:10;
      __IO uint32_t retram0_en:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t rtc_en_ctl:1;
      __IO uint32_t lcldo_en_ctl:1;
      __IO uint32_t reserved1:7;
      __IO uint32_t pwr_ctl_mode:1;
      __IO uint32_t reserved:6;
    }pm_reg15_fld;
    __IO uint32_t pm_reg15;

  };

  __IO uint32_t rsved7[0x14];

  union{ //offset addr 0x00b0

    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t wdt_en_reg0:1;
      __IO uint32_t remap_lat:2;
      __IO uint32_t wakeup_flg:1;
    }pm_reg16_fld;
    __IO uint32_t pm_reg16;

  };

  union{ //offset addr 0x00b4
    struct{
      __IO uint32_t sleep_r2:32;
    }pm_reg17_fld;
    __IO uint32_t pm_reg17;

  };

  __IO uint32_t rsved8[0x8];

  union{ //offset addr 0x00d4

    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t pclk_clk_gate_en:1;
    }pm_reg18_fld;
    __IO uint32_t pm_reg18;

  };

  __IO uint32_t rsved9[0x3];

  union{ //offset addr 0x00e0

    struct{
      __IO uint32_t sleep_r0:32;
    }pm_reg19_fld;
    __IO uint32_t pm_reg19;

  };

  union{ //offset addr 0x00e4
    struct{
      __IO uint32_t sleep_r1:32;
    }pm_reg20_fld;
    __IO uint32_t pm_reg20;

  };

  __IO uint32_t rsved10[0x2];

  union{ //offset addr 0x00ec

    struct{
      __IO uint32_t xtal16m_en_static:1;
      __IO uint32_t reserved0:20;
      __IO uint32_t boot_clk_sel_r:3;
      __IO uint32_t wdt_en_reg1:1;
      __IO uint32_t pmu_ldo_h_out_reg:3;
      __IO uint32_t pmu_ldo_h_out_en_reg:1;
      __IO uint32_t pmu_ldo_h_out_ctrl:1;
      __IO uint32_t xtal_16m_ctrl:2;
    }pm_reg21_fld;
    __IO uint32_t pm_reg21;

  };

} FEMTO_REG_AON_PM_TypeDef;

#define FEMTO_REG_AON_PM ((FEMTO_REG_AON_PM_TypeDef *)0x4000F000)


#if defined(__CC_ARM)
#pragma pop
#endif


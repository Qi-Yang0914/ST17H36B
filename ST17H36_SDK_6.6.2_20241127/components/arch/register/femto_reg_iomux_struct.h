#ifndef _FEMTO_REG_IOMUX_STRUCT_H_
#define _FEMTO_REG_IOMUX_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t r_analog_io_en:21;
    }r_analog_io_fld;
    __IO uint32_t r_analog_io;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved0:13;
      __IO uint32_t r_demod_out_vld_en:1;
      __IO uint32_t r_demod_out_en:1;
      __IO uint32_t r_bb_adc_clko_en:1;
      __IO uint32_t r_bb_adc_qen:8;
      __IO uint32_t r_bb_adc_ien:8;
    }spi_debug_fld;
    __IO uint32_t spi_debug;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t r_debug_mux_en:8;
    }debug_mux_en_fld;
    __IO uint32_t debug_mux_en;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t r_func_io_en:21;
    }full_mux0_fld;
    __IO uint32_t full_mux0;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t r_sw_gpio_en:1;
    }sw_gpio_en_fld;
    __IO uint32_t sw_gpio_en;

  };

  __IO uint32_t rsved0[0x2];

  union{ //offset addr 0x0018

    struct{
      __IO uint32_t reserved0:2;
      __IO uint32_t r_func_io03_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io02_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io01_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io00_sel:6;
    }func_io0_fld;
    __IO uint32_t func_io0;

  };

  union{ //offset addr 0x001c
    struct{
      __IO uint32_t reserved0:2;
      __IO uint32_t r_func_io07_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io06_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io05_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io04_sel:6;
    }func_io1_fld;
    __IO uint32_t func_io1;

  };

  union{ //offset addr 0x0020
    struct{
      __IO uint32_t reserved0:2;
      __IO uint32_t r_func_io11_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io10_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io09_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io08_sel:6;
    }func_io2_fld;
    __IO uint32_t func_io2;

  };

  union{ //offset addr 0x0024
    struct{
      __IO uint32_t reserved0:2;
      __IO uint32_t r_func_io15_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io14_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io13_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io12_sel:6;
    }func_io3_fld;
    __IO uint32_t func_io3;

  };

  union{ //offset addr 0x0028
    struct{
      __IO uint32_t reserved0:2;
      __IO uint32_t r_func_io19_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io18_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io17_sel:6;
      __IO uint32_t reserved1:2;
      __IO uint32_t r_func_io16_sel:6;
    }func_io4_fld;
    __IO uint32_t func_io4;

  };

  union{ //offset addr 0x002c
    struct{
      __IO uint32_t reserved0:26;
      __IO uint32_t r_func_io20_sel:6;
    }func_io5_fld;
    __IO uint32_t func_io5;

  };

  union{ //offset addr 0x0030
    struct{
      __IO uint32_t reserved:32;
    }func_io6_fld;
    __IO uint32_t func_io6;

  };

  union{ //offset addr 0x0034
    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t r_io_pe:21;
    }pad_pe_fld;
    __IO uint32_t pad_pe;

  };

  __IO uint32_t rsved1[0x2];

  union{ //offset addr 0x003c

    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t r_io_ds:21;
    }pad_ps_fld;
    __IO uint32_t pad_ps;

  };

  __IO uint32_t rsved2[0x2];

  union{ //offset addr 0x0044

    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t clkout_en:4;
    }clkout_fld;
    __IO uint32_t clkout;

  };

} FEMTO_REG_IOMUX_TypeDef;

#define FEMTO_REG_IOMUX ((FEMTO_REG_IOMUX_TypeDef *)0x40003800)


#if defined(__CC_ARM)
#pragma pop
#endif


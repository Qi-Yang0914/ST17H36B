#ifndef _FEMTO_REG_ADCC_STRUCT_H_
#define _FEMTO_REG_ADCC_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t adcc_data:32;
    }adcc_data_fld;
    __IO uint32_t adcc_data;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t adc_cmp_hth:12;
      __IO uint32_t reserved1:1;
      __IO uint32_t adc_cmp_lth:12;
      __IO uint32_t reserved1:1;
      __IO uint32_t adc_cmp_direction:1;
      __IO uint32_t adc_cmp_en:1;
      __IO uint32_t adc_en:1;
    }adcc_reg0_fld;
    __IO uint32_t adcc_reg0;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t reserved0:18;
      __IO uint32_t adc12_ctl:8;
      __IO uint32_t reserved1:1;
      __IO uint32_t adc12_pu:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t adc_tconv_sel:1;
      __IO uint32_t adc_clk_sel:2;
    }adcc_reg1_fld;
    __IO uint32_t adcc_reg1;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved0:30;
      __IO uint32_t adc_int_src:2;
    }adcc_reg2_fld;
    __IO uint32_t adcc_reg2;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved0:30;
      __IO uint32_t adc_int_mask:2;
    }aes_reg5_fld;
    __IO uint32_t aes_reg5;

  };

} FEMTO_REG_ADCC_TypeDef;

#define FEMTO_REG_ADCC ((FEMTO_REG_ADCC_TypeDef *)0x40050000)


#if defined(__CC_ARM)
#pragma pop
#endif


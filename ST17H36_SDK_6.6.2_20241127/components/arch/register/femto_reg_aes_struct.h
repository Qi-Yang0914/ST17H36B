#ifndef _FEMTO_REG_AES_STRUCT_H_
#define _FEMTO_REG_AES_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t enable:1;
    }aes_reg0_fld;
    __IO uint32_t aes_reg0;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved0:27;
      __IO uint32_t aes_single_mode:1;
      __IO uint32_t code_mode:1;
      __IO uint32_t reserved:3;
    }aes_reg1_fld;
    __IO uint32_t aes_reg1;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t reserved:32;
    }aes_reg2_fld;
    __IO uint32_t aes_reg2;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved:32;
    }aes_reg3_fld;
    __IO uint32_t aes_reg3;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved:32;
    }aes_reg4_fld;
    __IO uint32_t aes_reg4;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t single_done:1;
    }aes_reg5_fld;
    __IO uint32_t aes_reg5;

  };

  union{ //offset addr 0x0018
    struct{
      __IO uint32_t reserved:32;
    }aes_reg6_fld;
    __IO uint32_t aes_reg6;

  };

  union{ //offset addr 0x001c
    struct{
      __IO uint32_t reserved:32;
    }aes_reg7_fld;
    __IO uint32_t aes_reg7;

  };

  union{ //offset addr 0x0020
    struct{
      __IO uint32_t key0:32;
    }aes_reg8_fld;
    __IO uint32_t aes_reg8;

  };

  union{ //offset addr 0x0024
    struct{
      __IO uint32_t key1:32;
    }aes_reg9_fld;
    __IO uint32_t aes_reg9;

  };

  union{ //offset addr 0x0028
    struct{
      __IO uint32_t key2:32;
    }aes_reg10_fld;
    __IO uint32_t aes_reg10;

  };

  union{ //offset addr 0x002c
    struct{
      __IO uint32_t key3:32;
    }aes_reg11_fld;
    __IO uint32_t aes_reg11;

  };

  union{ //offset addr 0x0030
    struct{
      __IO uint32_t nonce0:32;
    }aes_reg12_fld;
    __IO uint32_t aes_reg12;

  };

  union{ //offset addr 0x0034
    struct{
      __IO uint32_t nonce1:32;
    }aes_reg13_fld;
    __IO uint32_t aes_reg13;

  };

  union{ //offset addr 0x0038
    struct{
      __IO uint32_t nonce2:32;
    }aes_reg14_fld;
    __IO uint32_t aes_reg14;

  };

  union{ //offset addr 0x003c
    struct{
      __IO uint32_t nonce3:32;
    }aes_reg15_fld;
    __IO uint32_t aes_reg15;

  };

  __IO uint32_t rsved0[0x5];

  union{ //offset addr 0x0050

    struct{
      __IO uint32_t data_o0:32;
    }aes_reg16_fld;
    __IO uint32_t aes_reg16;

  };

  union{ //offset addr 0x0054
    struct{
      __IO uint32_t data_o1:32;
    }aes_reg17_fld;
    __IO uint32_t aes_reg17;

  };

  union{ //offset addr 0x0058
    struct{
      __IO uint32_t data_o2:32;
    }aes_reg18_fld;
    __IO uint32_t aes_reg18;

  };

  union{ //offset addr 0x005c
    struct{
      __IO uint32_t data_o3:32;
    }aes_reg19_fld;
    __IO uint32_t aes_reg19;

  };

  __IO uint32_t rsved1[0x29];

  union{ //offset addr 0x0100

    struct{
      __IO uint32_t memory_write:32;
    }aes_reg20_fld;
    __IO uint32_t aes_reg20;

  };

} FEMTO_REG_AES_TypeDef;

#define FEMTO_REG_AES ((FEMTO_REG_AES_TypeDef *)0x40040000)


#if defined(__CC_ARM)
#pragma pop
#endif


#ifndef _FEMTO_REG_GPIO_STRUCT_H_
#define _FEMTO_REG_GPIO_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t port_a_data_register:21;
    }gpio_swporta_dr_fld;
    __IO uint32_t gpio_swporta_dr;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t port_a_data_direction_register:21;
    }gpio_swporta_ddr_fld;
    __IO uint32_t gpio_swporta_ddr;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t port_a_data_source:1;
    }gpio_swporta_ctl_fld;
    __IO uint32_t gpio_swporta_ctl;

  };

  __IO uint32_t rsved0[0xa];

  union{ //offset addr 0x0030

    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t interrupt_enable:26;
    }gpio_inten_fld;
    __IO uint32_t gpio_inten;

  };

  union{ //offset addr 0x0034
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t interrupt_mask:26;
    }gpio_intmask_fld;
    __IO uint32_t gpio_intmask;

  };

  union{ //offset addr 0x0038
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t interrupt_level:26;
    }gpio_inttype_level_fld;
    __IO uint32_t gpio_inttype_level;

  };

  union{ //offset addr 0x003c
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t interrupt_polarity:26;
    }gpio_int_polarity_fld;
    __IO uint32_t gpio_int_polarity;

  };

  union{ //offset addr 0x0040
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t interrupt_status:26;
    }gpio_intstatus_fld;
    __IO uint32_t gpio_intstatus;

  };

  union{ //offset addr 0x0044
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t raw_interrupt_status:26;
    }gpio_raw_intstatus_fld;
    __IO uint32_t gpio_raw_intstatus;

  };

  union{ //offset addr 0x0048
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t debounce_enable:26;
    }gpio_debounce_fld;
    __IO uint32_t gpio_debounce;

  };

  union{ //offset addr 0x004c
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t clear_interrupt:26;
    }gpio_porta_eoi_fld;
    __IO uint32_t gpio_porta_eoi;

  };

  union{ //offset addr 0x0050
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t external_port_a:26;
    }gpio_ext_porta_fld;
    __IO uint32_t gpio_ext_porta;

  };

  __IO uint32_t rsved1[0x4];

  union{ //offset addr 0x0060

    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t synchronization_level:1;
    }gpio_ls_sync_fld;
    __IO uint32_t gpio_ls_sync;

  };

  union{ //offset addr 0x0064
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t gpio_id_code:16;
    }gpio_id_code_fld;
    __IO uint32_t gpio_id_code;

  };

  __IO uint32_t rsved2[0x2];

  union{ //offset addr 0x006c

    struct{
      __IO uint32_t gpio_component_version:32;
    }gpio_ver_id_code_fld;
    __IO uint32_t gpio_ver_id_code;

  };

  union{ //offset addr 0x0070
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t encoded_id_pwidth_b:5;
      __IO uint32_t encoded_id_pwidth_a:5;
    }gpio_config_reg2_fld;
    __IO uint32_t gpio_config_reg2;

  };

  union{ //offset addr 0x0074
    struct{
      __IO uint32_t reserved0:11;
      __IO uint32_t encoded_id_width:5;
      __IO uint32_t gpio_id:1;
      __IO uint32_t add_encoded_params:1;
      __IO uint32_t debounce:1;
      __IO uint32_t porta_intr:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t hw_portb:1;
      __IO uint32_t hw_porta:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t portb_single_ctl:1;
      __IO uint32_t porta_single_ctl:1;
      __IO uint32_t num_ports:2;
      __IO uint32_t apb_data_width:2;
    }gpio_config_reg1_fld;
    __IO uint32_t gpio_config_reg1;

  };

} FEMTO_REG_GPIO_TypeDef;

#define FEMTO_REG_GPIO ((FEMTO_REG_GPIO_TypeDef *)0x40008000)


#if defined(__CC_ARM)
#pragma pop
#endif


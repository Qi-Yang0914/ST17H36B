#ifndef _FEMTO_REG_UART0_STRUCT_H_
#define _FEMTO_REG_UART0_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t receive_buffer_register:8;
    }RBR_Receive_Buffer_Register_fld;
    __IO uint32_t RBR_Receive_Buffer_Register;

    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t transmit_holding_register:8;
    }THR_Transmit_Holding_Register_fld;
    __IO uint32_t THR_Transmit_Holding_Register;

    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t divisor_latch_low:8;
    }DLL_Divisor_Latch_Low_fld;
    __IO uint32_t DLL_Divisor_Latch_Low;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t divisor_latch_high:8;
    }DLH_Divisor_Latch_High_fld;
    __IO uint32_t DLH_Divisor_Latch_High;

    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t ptime:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t edssi:1;
      __IO uint32_t elsi:1;
      __IO uint32_t etbei:1;
      __IO uint32_t erbfi:1;
    }IER_Interrupt_Enable_Register_fld;
    __IO uint32_t IER_Interrupt_Enable_Register;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t fifose:2;
      __IO uint32_t reserved1:2;
      __IO uint32_t iid:4;
    }IIR_Interrupt_Identity_Register_fld;
    __IO uint32_t IIR_Interrupt_Identity_Register;

    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t rt:2;
      __IO uint32_t tet:2;
      __IO uint32_t dmam:1;
      __IO uint32_t xfifor:1;
      __IO uint32_t rfifor:1;
      __IO uint32_t fifoe:1;
    }FCR_FIFO_Control_Register_fld;
    __IO uint32_t FCR_FIFO_Control_Register;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t dlab:1;
      __IO uint32_t break_cond:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t eps:1;
      __IO uint32_t pen:1;
      __IO uint32_t stop:1;
      __IO uint32_t dls:2;
    }LCR_Line_Control_Register_fld;
    __IO uint32_t LCR_Line_Control_Register;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved0:25;
      __IO uint32_t sire:1;
      __IO uint32_t afce:1;
      __IO uint32_t loop_back:1;
      __IO uint32_t out2:1;
      __IO uint32_t out1:1;
      __IO uint32_t rts:1;
      __IO uint32_t dtr:1;
    }MCR_Modem_Control_Register_fld;
    __IO uint32_t MCR_Modem_Control_Register;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t rfe:1;
      __IO uint32_t temt:1;
      __IO uint32_t thre:1;
      __IO uint32_t bi:1;
      __IO uint32_t fe:1;
      __IO uint32_t pe:1;
      __IO uint32_t oe:1;
      __IO uint32_t dr:1;
    }LSR_Line_Status_Register_fld;
    __IO uint32_t LSR_Line_Status_Register;

  };

  union{ //offset addr 0x0018
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t dcd:1;
      __IO uint32_t ri:1;
      __IO uint32_t dsr:1;
      __IO uint32_t cts:1;
      __IO uint32_t ddcd:1;
      __IO uint32_t teri:1;
      __IO uint32_t ddsr:1;
      __IO uint32_t dcts:1;
    }MSR_Modem_Status_Register_fld;
    __IO uint32_t MSR_Modem_Status_Register;

  };

  union{ //offset addr 0x001c
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t scratchpad_register:8;
    }SCR_Scratchpad_Register_fld;
    __IO uint32_t SCR_Scratchpad_Register;

  };

  union{ //offset addr 0x0020
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t lpdll:8;
    }LPDLL_Low_Power_Divisor_Latch_Low_Register_fld;
    __IO uint32_t LPDLL_Low_Power_Divisor_Latch_Low_Register;

  };

  union{ //offset addr 0x0024
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t lpdlh:8;
    }LPDLH_Low_Power_Divisor_Latch_High_Register_fld;
    __IO uint32_t LPDLH_Low_Power_Divisor_Latch_High_Register;

  };

  __IO uint32_t rsved0[0x3];

  union{ //offset addr 0x0030

    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t shadow_receive_buffer_register:8;
    }SRBR_Shadow_Receive_Buffer_Register_fld;
    __IO uint32_t SRBR_Shadow_Receive_Buffer_Register;

    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t shadow_transmit_holding_register:8;
    }STHR_Shadow_Transmit_Holding_Register_fld;
    __IO uint32_t STHR_Shadow_Transmit_Holding_Register;

  };

  __IO uint32_t rsved1[0x10];

  union{ //offset addr 0x0070

    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t fifo_access_register:1;
    }FAR_FIFO_Access_Register_fld;
    __IO uint32_t FAR_FIFO_Access_Register;

  };

  union{ //offset addr 0x0074
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t transmit_fifo_read:8;
    }TFR_Transmit_FIFO_Read_fld;
    __IO uint32_t TFR_Transmit_FIFO_Read;

  };

  union{ //offset addr 0x0078
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t rffe:1;
      __IO uint32_t rfpe:1;
      __IO uint32_t rfwd:8;
    }RFW_Receive_FIFO_Write_fld;
    __IO uint32_t RFW_Receive_FIFO_Write;

  };

  union{ //offset addr 0x007c
    struct{
      __IO uint32_t reserved0:27;
      __IO uint32_t rff:1;
      __IO uint32_t rfne:1;
      __IO uint32_t tfe:1;
      __IO uint32_t tfnf:1;
      __IO uint32_t busy:1;
    }USR_UART_Status_Register_fld;
    __IO uint32_t USR_UART_Status_Register;

  };

  union{ //offset addr 0x0080
    struct{
      __IO uint32_t reserved0:27;
      __IO uint32_t transmit_fifo_level:5;
    }TFL_Transmit_FIFO_Level_fld;
    __IO uint32_t TFL_Transmit_FIFO_Level;

  };

  union{ //offset addr 0x0084
    struct{
      __IO uint32_t reserved0:27;
      __IO uint32_t receive_fifo_level:5;
    }RFL_Receive_FIFO_Level_fld;
    __IO uint32_t RFL_Receive_FIFO_Level;

  };

  union{ //offset addr 0x0088
    struct{
      __IO uint32_t reserved0:29;
      __IO uint32_t xfr:1;
      __IO uint32_t rfr:1;
      __IO uint32_t ur:1;
    }SRR_Software_Reset_Register_fld;
    __IO uint32_t SRR_Software_Reset_Register;

  };

  union{ //offset addr 0x008c
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t shadow_request_to_send:1;
    }SRTS_Shadow_Request_to_Send_fld;
    __IO uint32_t SRTS_Shadow_Request_to_Send;

  };

  union{ //offset addr 0x0090
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t shadow_break_control_register:1;
    }SBCR_Shadow_Break_Control_Register_fld;
    __IO uint32_t SBCR_Shadow_Break_Control_Register;

  };

  union{ //offset addr 0x0094
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t shadow_dma_mode:1;
    }SDMAM_Shadow_DMA_Mode_fld;
    __IO uint32_t SDMAM_Shadow_DMA_Mode;

  };

  union{ //offset addr 0x0098
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t shadow_fifo_enable:1;
    }SFE_Shadow_FIFO_Enable_fld;
    __IO uint32_t SFE_Shadow_FIFO_Enable;

  };

  union{ //offset addr 0x009c
    struct{
      __IO uint32_t reserved0:30;
      __IO uint32_t shadow_rcvr_trigger:2;
    }SRT_Shadow_RCVR_Trigger_fld;
    __IO uint32_t SRT_Shadow_RCVR_Trigger;

  };

  union{ //offset addr 0x00a0
    struct{
      __IO uint32_t reserved0:30;
      __IO uint32_t shadow_tx_empty_trigger:2;
    }STET_Shadow_TX_Empty_Trigger_fld;
    __IO uint32_t STET_Shadow_TX_Empty_Trigger;

  };

  union{ //offset addr 0x00a4
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t halt_tx:1;
    }HTX_Halt_TX_fld;
    __IO uint32_t HTX_Halt_TX;

  };

  union{ //offset addr 0x00a8
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t dma_software_acknowledge:1;
    }DMASA_DMA_Software_Acknowledge_fld;
    __IO uint32_t DMASA_DMA_Software_Acknowledge;

  };

  __IO uint32_t rsved2[0x13];

  union{ //offset addr 0x00f4

    struct{
      __IO uint32_t reserved0:8;
      __IO uint32_t fifo_mode:8;
      __IO uint32_t reserved1:2;
      __IO uint32_t dma_extra:1;
      __IO uint32_t uart_add_encoded_params:1;
      __IO uint32_t shadow:1;
      __IO uint32_t fifo_stat:1;
      __IO uint32_t fifo_access:1;
      __IO uint32_t additional_feat:1;
      __IO uint32_t sir_lp_mode:1;
      __IO uint32_t sir_mode:1;
      __IO uint32_t thre_mode:1;
      __IO uint32_t afce_mode:1;
      __IO uint32_t reserved1:2;
      __IO uint32_t apb_data_width:2;
    }CPR_Component_Parameter_Register_fld;
    __IO uint32_t CPR_Component_Parameter_Register;

  };

  union{ //offset addr 0x00f8
    struct{
      __IO uint32_t uart_component_version:32;
    }UCV_UART_Component_Version_fld;
    __IO uint32_t UCV_UART_Component_Version;

  };

  union{ //offset addr 0x00fc
    struct{
      __IO uint32_t peripheral_id:32;
    }CTR_Component_Type_Register_fld;
    __IO uint32_t CTR_Component_Type_Register;

  };

} FEMTO_REG_UART0_TypeDef;

#define FEMTO_REG_UART0 ((FEMTO_REG_UART0_TypeDef *)0x40004000)


#if defined(__CC_ARM)
#pragma pop
#endif


#ifndef _FEMTO_REG_USB_DEVICE_STRUCT_H_
#define _FEMTO_REG_USB_DEVICE_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  __IO uint32_t rsved0[0x1101];

  union{ //offset addr 0x4400

    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t fifo_ready:1;
      __IO uint32_t flush_fifo:1;
      __IO uint32_t send_nak:1;
      __IO uint32_t send_stall:1;
    }IN_EP_T0_CTL_fld;
    __IO uint32_t IN_EP_T0_CTL;

  };

  union{ //offset addr 0x4404
    struct{
      __IO uint32_t reserved0:26;
      __IO uint32_t iso_tx_done:1;
      __IO uint32_t data_underrun_err:1;
      __IO uint32_t nak_sent:1;
      __IO uint32_t below_threshold:1;
      __IO uint32_t data_sent:1;
      __IO uint32_t status:1;
    }IN_EP_T0_STA_fld;
    __IO uint32_t IN_EP_T0_STA;

  };

  union{ //offset addr 0x4408
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t fifo_sz_in_ep0:10;
    }IN_EP_T0_FIFO_SZ_fld;
    __IO uint32_t IN_EP_T0_FIFO_SZ;

  };

  union{ //offset addr 0x440c
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t trans_sz:10;
    }IN_EP_T0_TRANS_SZ_fld;
    __IO uint32_t IN_EP_T0_TRANS_SZ;

  };

  union{ //offset addr 0x4410
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t fifo_ready:1;
      __IO uint32_t flush_fifo:1;
      __IO uint32_t send_nak:1;
      __IO uint32_t send_stall:1;
    }IN_EP_T1_CTL_fld;
    __IO uint32_t IN_EP_T1_CTL;

  };

  union{ //offset addr 0x4414
    struct{
      __IO uint32_t reserved0:26;
      __IO uint32_t iso_tx_done:1;
      __IO uint32_t data_underrun_err:1;
      __IO uint32_t nak_sent:1;
      __IO uint32_t below_threshold:1;
      __IO uint32_t data_sent:1;
      __IO uint32_t status:1;
    }IN_EP_T1_STA_fld;
    __IO uint32_t IN_EP_T1_STA;

  };

  union{ //offset addr 0x4418
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t fifo_sz:10;
    }IN_EP_T1_FIFO_SZ_fld;
    __IO uint32_t IN_EP_T1_FIFO_SZ;

  };

  union{ //offset addr 0x441c
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t trans_sz:10;
    }IN_EP_T1_TRANS_SZ_fld;
    __IO uint32_t IN_EP_T1_TRANS_SZ;

  };

  union{ //offset addr 0x4420
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t fifo_ready:1;
      __IO uint32_t flush_fifo:1;
      __IO uint32_t send_nak:1;
      __IO uint32_t send_stall:1;
    }IN_EP_T2_CTL_fld;
    __IO uint32_t IN_EP_T2_CTL;

  };

  union{ //offset addr 0x4424
    struct{
      __IO uint32_t reserved0:26;
      __IO uint32_t iso_tx_done:1;
      __IO uint32_t data_underrun_err:1;
      __IO uint32_t nak_sent:1;
      __IO uint32_t below_threshold:1;
      __IO uint32_t data_sent:1;
      __IO uint32_t status:1;
    }IN_EP_T2_STA_fld;
    __IO uint32_t IN_EP_T2_STA;

  };

  union{ //offset addr 0x4428
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t fifo_sz:10;
    }IN_EP_T2_FIFO_SZ_fld;
    __IO uint32_t IN_EP_T2_FIFO_SZ;

  };

  union{ //offset addr 0x442c
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t trans_sz:10;
    }IN_EP_T2_TRANS_SZ_fld;
    __IO uint32_t IN_EP_T2_TRANS_SZ;

  };

  union{ //offset addr 0x4430
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t fifo_ready:1;
      __IO uint32_t flush_fifo:1;
      __IO uint32_t send_nak:1;
      __IO uint32_t send_stall:1;
    }IN_EP_T3_CTL_fld;
    __IO uint32_t IN_EP_T3_CTL;

  };

  union{ //offset addr 0x4434
    struct{
      __IO uint32_t reserved0:26;
      __IO uint32_t iso_tx_done:1;
      __IO uint32_t data_underrun_err:1;
      __IO uint32_t nak_sent:1;
      __IO uint32_t below_threshold:1;
      __IO uint32_t data_sent:1;
      __IO uint32_t status:1;
    }IN_EP_T3_STA_fld;
    __IO uint32_t IN_EP_T3_STA;

  };

  union{ //offset addr 0x4438
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t fifo_sz:10;
    }IN_EP_T3_FIFO_SZ_fld;
    __IO uint32_t IN_EP_T3_FIFO_SZ;

  };

  union{ //offset addr 0x443c
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t trans_sz:10;
    }IN_EP_T3_TRANS_SZ_fld;
    __IO uint32_t IN_EP_T3_TRANS_SZ;

  };

  union{ //offset addr 0x4440
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t fifo_ready:1;
      __IO uint32_t flush_fifo:1;
      __IO uint32_t send_nak:1;
      __IO uint32_t send_stall:1;
    }IN_EP_T4_CTL_fld;
    __IO uint32_t IN_EP_T4_CTL;

  };

  union{ //offset addr 0x4444
    struct{
      __IO uint32_t reserved0:26;
      __IO uint32_t iso_tx_done:1;
      __IO uint32_t data_underrun_err:1;
      __IO uint32_t nak_sent:1;
      __IO uint32_t below_threshold:1;
      __IO uint32_t data_sent:1;
      __IO uint32_t status:1;
    }IN_EP_T4_STA_fld;
    __IO uint32_t IN_EP_T4_STA;

  };

  union{ //offset addr 0x4448
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t fifo_sz:10;
    }IN_EP_T4_FIFO_SZ_fld;
    __IO uint32_t IN_EP_T4_FIFO_SZ;

  };

  union{ //offset addr 0x444c
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t trans_sz:10;
    }IN_EP_T4_TRANS_SZ_fld;
    __IO uint32_t IN_EP_T4_TRANS_SZ;

  };

  __IO uint32_t rsved1[0x2d];

  union{ //offset addr 0x4500

    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t fifo_ready:1;
      __IO uint32_t flush_fifo:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t send_stall:1;
    }OUT_EP_R0_CTL_fld;
    __IO uint32_t OUT_EP_R0_CTL;

  };

  __IO uint32_t rsved2[0x4];

  union{ //offset addr 0x4510

    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t fifo_ready:1;
      __IO uint32_t flush_fifo:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t send_stall:1;
    }OUT_EP_R1_CTL_fld;
    __IO uint32_t OUT_EP_R1_CTL;

  };

  __IO uint32_t rsved3[0x4];

  union{ //offset addr 0x4520

    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t fifo_ready:1;
      __IO uint32_t flush_fifo:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t send_stall:1;
    }OUT_EP_R2_CTL_fld;
    __IO uint32_t OUT_EP_R2_CTL;

  };

  __IO uint32_t rsved4[0x4];

  union{ //offset addr 0x4530

    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t fifo_ready:1;
      __IO uint32_t flush_fifo:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t send_stall:1;
    }OUT_EP_R3_CTL_fld;
    __IO uint32_t OUT_EP_R3_CTL;

  };

  __IO uint32_t rsved5[0x4];

  union{ //offset addr 0x4540

    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t fifo_ready:1;
      __IO uint32_t flush_fifo:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t send_stall:1;
    }OUT_EP_R4_CTL_fld;
    __IO uint32_t OUT_EP_R4_CTL;

  };

  __IO uint32_t rsved6[0x30];

  union{ //offset addr 0x4600

    struct{
      __IO uint32_t reserved0:19;
      __IO uint32_t status_bit_1:1;
      __IO uint32_t status_bit_0:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t scale_down:1;
      __IO uint32_t hst_mode:1;
      __IO uint32_t set_desc_sup:1;
      __IO uint32_t csr_done:1;
      __IO uint32_t csr_prg_sup:1;
      __IO uint32_t sync_frame:1;
      __IO uint32_t self_poweped:1;
      __IO uint32_t remote_wakeup:1;
      __IO uint32_t speed:2;
    }DEV_CFG_fld;
    __IO uint32_t DEV_CFG;

  };

  union{ //offset addr 0x4604
    struct{
      __IO uint32_t ts:11;
      __IO uint32_t reserved0:8;
      __IO uint32_t susp:1;
      __IO uint32_t alt:4;
      __IO uint32_t intf:4;
      __IO uint32_t cfg:4;
    }DEV_STA_fld;
    __IO uint32_t DEV_STA;

  };

  union{ //offset addr 0x4608
    struct{
      __IO uint32_t reserved0:21;
      __IO uint32_t i2c_int:1;
      __IO uint32_t otg_int:1;
      __IO uint32_t port_int:1;
      __IO uint32_t out_received:1;
      __IO uint32_t setup_received:1;
      __IO uint32_t sof:1;
      __IO uint32_t us:1;
      __IO uint32_t ur:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t si:1;
      __IO uint32_t sc:1;
    }DEV_INT_STA_fld;
    __IO uint32_t DEV_INT_STA;

  };

  union{ //offset addr 0x460c
    struct{
      __IO uint32_t reserved0:21;
      __IO uint32_t i2c_int_en:1;
      __IO uint32_t otg_int_en:1;
      __IO uint32_t port_int_en:1;
      __IO uint32_t out_received_int_en:1;
      __IO uint32_t setup_received_int_en:1;
      __IO uint32_t sof_int_en:1;
      __IO uint32_t us_int_en:1;
      __IO uint32_t ur_int_en:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t si_int_en:1;
      __IO uint32_t sc_int_en:1;
    }DEV_INT_EN_fld;
    __IO uint32_t DEV_INT_EN;

  };

  union{ //offset addr 0x4610
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t fifo_sz:10;
    }OUT_EP_RX_FIFO_SZ_fld;
    __IO uint32_t OUT_EP_RX_FIFO_SZ;

  };

  union{ //offset addr 0x4614
    struct{
      __IO uint32_t out_ep_int_en:16;
      __IO uint32_t in_ep_int_en:16;
    }GLB_EP_INT_EN_fld;
    __IO uint32_t GLB_EP_INT_EN;

  };

  union{ //offset addr 0x4618
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t rx_threshold:10;
      __IO uint32_t reserved1:6;
      __IO uint32_t tx_threshold:10;
    }DEV_THD_fld;
    __IO uint32_t DEV_THD;

  };

  union{ //offset addr 0x461c
    struct{
      __IO uint32_t trans_sz:10;
      __IO uint32_t reserved0:2;
      __IO uint32_t ep_num:4;
      __IO uint32_t reserved1:11;
      __IO uint32_t data_overrun_error:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t above_threshold:1;
      __IO uint32_t status_complete:1;
      __IO uint32_t status:1;
    }OUT_EP_RX_FIFO_STA_fld;
    __IO uint32_t OUT_EP_RX_FIFO_STA;

  };

  union{ //offset addr 0x4620
    struct{
      __IO uint32_t reserved0:12;
      __IO uint32_t ep_num:4;
      __IO uint32_t setup_after_out:1;
      __IO uint32_t reserved1:13;
      __IO uint32_t status_complete:1;
      __IO uint32_t status:1;
    }SETUP_RX_FIFO_STA_fld;
    __IO uint32_t SETUP_RX_FIFO_STA;

  };

  union{ //offset addr 0x4624
    struct{
      __IO uint32_t out_ep_int_sta:16;
      __IO uint32_t in_ep_int_sta:16;
    }GLB_EP_INT_STA_fld;
    __IO uint32_t GLB_EP_INT_STA;

  };

  union{ //offset addr 0x4628
    struct{
      __IO uint32_t reserved0:21;
      __IO uint32_t frame_number:11;
    }FRAME_NUM_fld;
    __IO uint32_t FRAME_NUM;

  };

  __IO uint32_t rsved7[0x36];

  union{ //offset addr 0x4700

    struct{
      __IO uint32_t setup_data_0:32;
    }SETUP_DATA_0_fld;
    __IO uint32_t SETUP_DATA_0;

  };

  union{ //offset addr 0x4704
    struct{
      __IO uint32_t setup_data_1:32;
    }SETUP_DATA_1_fld;
    __IO uint32_t SETUP_DATA_1;

  };

  union{ //offset addr 0x4708
    struct{
      __IO uint32_t reserved0:30;
      __IO uint32_t delay_count:2;
    }BIU_CTL_fld;
    __IO uint32_t BIU_CTL;

  };

  __IO uint32_t rsved8[0x3f];

  union{ //offset addr 0x4804

    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t max_pkt_size:10;
      __IO uint32_t config_alternate:4;
      __IO uint32_t config_interface:4;
      __IO uint32_t config_num:4;
      __IO uint32_t ep_type:2;
      __IO uint32_t ep_dir:1;
      __IO uint32_t ep_num:4;
    }Endpoint_NE_ep0_fld;
    __IO uint32_t Endpoint_NE_ep0;

  };

  union{ //offset addr 0x4808
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t max_pkt_size:10;
      __IO uint32_t config_alternate:4;
      __IO uint32_t config_interface:4;
      __IO uint32_t config_num:4;
      __IO uint32_t ep_type:2;
      __IO uint32_t ep_dir:1;
      __IO uint32_t ep_num:4;
    }Endpoint_NE_ep1_fld;
    __IO uint32_t Endpoint_NE_ep1;

  };

  union{ //offset addr 0x480c
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t max_pkt_size:10;
      __IO uint32_t config_alternate:4;
      __IO uint32_t config_interface:4;
      __IO uint32_t config_num:4;
      __IO uint32_t ep_type:2;
      __IO uint32_t ep_dir:1;
      __IO uint32_t ep_num:4;
    }Endpoint_NE_ep2_fld;
    __IO uint32_t Endpoint_NE_ep2;

  };

  union{ //offset addr 0x4810
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t max_pkt_size:10;
      __IO uint32_t config_alternate:4;
      __IO uint32_t config_interface:4;
      __IO uint32_t config_num:4;
      __IO uint32_t ep_type:2;
      __IO uint32_t ep_dir:1;
      __IO uint32_t ep_num:4;
    }Endpoint_NE_ep3_fld;
    __IO uint32_t Endpoint_NE_ep3;

  };

  union{ //offset addr 0x4814
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t max_pkt_size:10;
      __IO uint32_t config_alternate:4;
      __IO uint32_t config_interface:4;
      __IO uint32_t config_num:4;
      __IO uint32_t ep_type:2;
      __IO uint32_t ep_dir:1;
      __IO uint32_t ep_num:4;
    }Endpoint_NE_ep4_fld;
    __IO uint32_t Endpoint_NE_ep4;

  };

  __IO uint32_t rsved9[0x20];

  union{ //offset addr 0x4894

    struct{
      __IO uint32_t otg_interface:1;
      __IO uint32_t reserved0:9;
      __IO uint32_t hnp_capable:1;
      __IO uint32_t srp_capable:1;
      __IO uint32_t hnp_enabled:1;
      __IO uint32_t host_hnp_enable:1;
      __IO uint32_t hnp_request:1;
      __IO uint32_t session_request:1;
      __IO uint32_t reserved1:5;
      __IO uint32_t mode:1;
      __IO uint32_t id_status_change:1;
      __IO uint32_t connector_id_status:1;
      __IO uint32_t host_negotiation_detect_status_change:1;
      __IO uint32_t host_negotiation_detected:1;
      __IO uint32_t session_request_detected_status_change:1;
      __IO uint32_t session_request_detected:1;
      __IO uint32_t host_negotiation_success_status_change:1;
      __IO uint32_t host_negotiation_success:1;
      __IO uint32_t session_request_status_change:1;
      __IO uint32_t session_request_success:1;
    }FS_OTG_Control_and_Status_fld;
    __IO uint32_t FS_OTG_Control_and_Status;

  };

} FEMTO_REG_USB_DEVICE_TypeDef;

#define FEMTO_REG_USB_DEVICE ((FEMTO_REG_USB_DEVICE_TypeDef *)0x14000000)


#if defined(__CC_ARM)
#pragma pop
#endif


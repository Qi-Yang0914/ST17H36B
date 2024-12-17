#ifndef _FEMTO_REG_LINKLAYER_STRUCT_H_
#define _FEMTO_REG_LINKLAYER_STRUCT_H_

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
    }Enable_fld;
    __IO uint32_t Enable;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved0:8;
      __IO uint32_t rx_packet_number:8;
      __IO uint32_t tx_packet_number:8;
      __IO uint32_t reserved1:4;
      __IO uint32_t mode:4;
    }Mode_fld;
    __IO uint32_t Mode;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t state:4;
    }state_fld;
    __IO uint32_t state;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved0:18;
      __IO uint32_t nack_int:1;
      __IO uint32_t loop_timeout:1;
      __IO uint32_t crc_err_2:1;
      __IO uint32_t crc_ok:1;
      __IO uint32_t rx_done:1;
      __IO uint32_t tx_done:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t rx_fifo_over_half:1;
      __IO uint32_t rx_fifo_full:1;
      __IO uint32_t rx_timeout:1;
      __IO uint32_t rx_crc_error:1;
      __IO uint32_t mode_done:1;
    }Mode1_fld;
    __IO uint32_t Mode1;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved0:18;
      __IO uint32_t nack_int:1;
      __IO uint32_t loop_timeout:1;
      __IO uint32_t crc_err_2:1;
      __IO uint32_t crc_ok:1;
      __IO uint32_t rx_done:1;
      __IO uint32_t tx_done:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t rx_fifo_over_half:1;
      __IO uint32_t rx_fifo_full:1;
      __IO uint32_t rx_timeout:1;
      __IO uint32_t rx_crc_error:1;
      __IO uint32_t mode_done:1;
    }Mode2_fld;
    __IO uint32_t Mode2;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t reserved0:18;
      __IO uint32_t nack_int:1;
      __IO uint32_t loop_timeout:1;
      __IO uint32_t crc_err_2:1;
      __IO uint32_t crc_ok:1;
      __IO uint32_t rx_done:1;
      __IO uint32_t tx_done:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t rx_fifo_over_half_:1;
      __IO uint32_t rx_fifo_full:1;
      __IO uint32_t rx_timeout:1;
      __IO uint32_t rx_crc_error:1;
      __IO uint32_t mode_done:1;
    }Mode3_fld;
    __IO uint32_t Mode3;

  };

  union{ //offset addr 0x0018
    struct{
      __IO uint32_t tx_to_rx_interval_value:32;
    }TX_to_RX_interval_value_fld;
    __IO uint32_t TX_to_RX_interval_value;

  };

  union{ //offset addr 0x001c
    struct{
      __IO uint32_t rx_to_tx_interval_value1:32;
    }TX_to_RX_interval_value1_fld;
    __IO uint32_t TX_to_RX_interval_value1;

  };

  union{ //offset addr 0x0020
    struct{
      __IO uint32_t phy_tx_en_release:16;
      __IO uint32_t phy_rx_en_release:16;
    }TX_and_RX_en_release_fld;
    __IO uint32_t TX_and_RX_en_release;

  };

  union{ //offset addr 0x0024
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t rx_time_out_1st:16;
    }rx_time_out_1st_fld;
    __IO uint32_t rx_time_out_1st;

  };

  union{ //offset addr 0x0028
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t rx_time_out:16;
    }rx_time_out_fld;
    __IO uint32_t rx_time_out;

  };

  union{ //offset addr 0x002c
    struct{
      __IO uint32_t tx_empty_packet_header:16;
      __IO uint32_t rx_pkt_header:16;
    }rx_pkt_header_fld;
    __IO uint32_t rx_pkt_header;

  };

  union{ //offset addr 0x0030
    struct{
      __IO uint32_t reserved0:8;
      __IO uint32_t rx_crc_error_count:8;
      __IO uint32_t rx_total_cnt:8;
      __IO uint32_t rx_packet_number:8;
    }RX_packet_number_fld;
    __IO uint32_t RX_packet_number;

  };

  union{ //offset addr 0x0034
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t tx_nack_count:4;
      __IO uint32_t tx_ack_count:8;
    }TX_ACK_count_fld;
    __IO uint32_t TX_ACK_count;

  };

  union{ //offset addr 0x0038
    struct{
      __IO uint32_t reserved0:29;
      __IO uint32_t md_bypass:1;
      __IO uint32_t sn_bypass:1;
      __IO uint32_t nesn_bypass:1;
    }bypass_soft_value_fld;
    __IO uint32_t bypass_soft_value;

  };

  union{ //offset addr 0x003c
    struct{
      __IO uint32_t reserved0:29;
      __IO uint32_t md_ini:1;
      __IO uint32_t sn_ini:1;
      __IO uint32_t nesn_ini:1;
    }ini_value_fld;
    __IO uint32_t ini_value;

  };

  union{ //offset addr 0x0040
    struct{
      __IO uint32_t reserved0:21;
      __IO uint32_t md_soft_sel:1;
      __IO uint32_t sn_soft_sel:1;
      __IO uint32_t nesn_soft_sel:1;
      __IO uint32_t reserved1:5;
      __IO uint32_t md_soft:1;
      __IO uint32_t sn_soft:1;
      __IO uint32_t nesn_soft:1;
    }soft_value_fld;
    __IO uint32_t soft_value;

  };

  union{ //offset addr 0x0044
    struct{
      __IO uint32_t reserved0:21;
      __IO uint32_t md_rx:1;
      __IO uint32_t sn_rx:1;
      __IO uint32_t nesn_rx:1;
      __IO uint32_t reserved1:5;
      __IO uint32_t md_local:1;
      __IO uint32_t sn_local:1;
      __IO uint32_t nesn_local:1;
    }Local_fld;
    __IO uint32_t Local;

  };

  __IO uint32_t rsved0[0x2];

  union{ //offset addr 0x004c

    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t rx_fifo_wr_addr_last:11;
      __IO uint32_t reserved1:5;
      __IO uint32_t tx_fifo_rd_addr_last:11;
    }RX_or_TX_fifo_addr_last_fld;
    __IO uint32_t RX_or_TX_fifo_addr_last;

  };

  union{ //offset addr 0x0050
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t tx_fifo_wr_addr:11;
      __IO uint32_t reserved1:5;
      __IO uint32_t tx_fifo_rd_addr:11;
    }RX_or_TX_fifo_addr_fld;
    __IO uint32_t RX_or_TX_fifo_addr;

  };

  union{ //offset addr 0x0054
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t rx_fifo_wr_addr:11;
      __IO uint32_t reserved1:5;
      __IO uint32_t rx_fifo_rd_addr:11;
    }RX_or_TX_fifo_addr1_fld;
    __IO uint32_t RX_or_TX_fifo_addr1;

  };

  union{ //offset addr 0x0058
    struct{
      __IO uint32_t reserved0:23;
      __IO uint32_t rx_fifo_reset:1;
      __IO uint32_t reserved1:7;
      __IO uint32_t tx_fifo_reset:1;
    }RX_or_TX_fifo_reset_fld;
    __IO uint32_t RX_or_TX_fifo_reset;

  };

  union{ //offset addr 0x005c
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t rd_cnt_last_ini:11;
      __IO uint32_t reserved1:5;
      __IO uint32_t rd_cnt_ini:11;
    }rd_cnt_ini_fld;
    __IO uint32_t rd_cnt_ini;

  };

  union{ //offset addr 0x0060
    struct{
      __IO uint32_t loop_timeout:32;
    }loop_timeout_fld;
    __IO uint32_t loop_timeout;

  };

  union{ //offset addr 0x0064
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t nack_num:4;
    }Nack_num_fld;
    __IO uint32_t Nack_num;

  };

  union{ //offset addr 0x0068
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t nack_num:8;
    }Nack_num1_fld;
    __IO uint32_t Nack_num1;

  };

  union{ //offset addr 0x006c
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t anchor_point_cnt:16;
    }Anchor_point_cnt_fld;
    __IO uint32_t Anchor_point_cnt;

  };

  union{ //offset addr 0x0070
    struct{
      __IO uint32_t ll_loop_timeout_cnt:32;
    }ll_loop_timeout_cnt_fld;
    __IO uint32_t ll_loop_timeout_cnt;

  };

  union{ //offset addr 0x0074
    struct{
      __IO uint32_t reserved0:9;
      __IO uint32_t rx_space:7;
      __IO uint32_t reserved1:7;
      __IO uint32_t tx_space:9;
    }trx_space_rd_fld;
    __IO uint32_t trx_space_rd;

  };

  __IO uint32_t rsved1[0x4];

  union{ //offset addr 0x0084

    struct{
      __IO uint32_t rx_pkt_number:32;
    }rx_pkt_number_fld;
    __IO uint32_t rx_pkt_number;

  };

  union{ //offset addr 0x0088
    struct{
      __IO uint32_t crc_error_number:32;
    }Crc_error_number_fld;
    __IO uint32_t Crc_error_number;

  };

  union{ //offset addr 0x008c
    struct{
      __IO uint32_t sfd_error_sum:32;
    }sfd_error_sum_fld;
    __IO uint32_t sfd_error_sum;

  };

  union{ //offset addr 0x0090
    struct{
      __IO uint32_t sync_asate_sum:32;
    }Sync_asate_sum_fld;
    __IO uint32_t Sync_asate_sum;

  };

  union{ //offset addr 0x0094
    struct{
      __IO uint32_t freq_offset_sum:32;
    }Freq_offset_sum_fld;
    __IO uint32_t Freq_offset_sum;

  };

  union{ //offset addr 0x0098
    struct{
      __IO uint32_t nrssi_sum:32;
    }Nrssi_sum_fld;
    __IO uint32_t Nrssi_sum;

  };

  union{ //offset addr 0x009c
    struct{
      __IO uint32_t arssi_um:32;
    }Arssi_um_fld;
    __IO uint32_t Arssi_um;

  };

  union{ //offset addr 0x00a0
    struct{
      __IO uint32_t gain_sum0:32;
    }gain_sum0_fld;
    __IO uint32_t gain_sum0;

  };

  union{ //offset addr 0x00a4
    struct{
      __IO uint32_t gain_sum1:32;
    }gain_sum1_fld;
    __IO uint32_t gain_sum1;

  };

  union{ //offset addr 0x00a8
    struct{
      __IO uint32_t gain_sum2:32;
    }gain_sum2_fld;
    __IO uint32_t gain_sum2;

  };

  union{ //offset addr 0x00ac
    struct{
      __IO uint32_t gain_sum3:32;
    }gain_sum3_fld;
    __IO uint32_t gain_sum3;

  };

  union{ //offset addr 0x00b0
    struct{
      __IO uint32_t gain_sum4:32;
    }gain_sum4_fld;
    __IO uint32_t gain_sum4;

  };

  union{ //offset addr 0x00b4
    struct{
      __IO uint32_t gain_sum5:32;
    }gain_sum5_fld;
    __IO uint32_t gain_sum5;

  };

  union{ //offset addr 0x00b8
    struct{
      __IO uint32_t gain_sum6:32;
    }gain_sum6_fld;
    __IO uint32_t gain_sum6;

  };

  union{ //offset addr 0x00bc
    struct{
      __IO uint32_t gain_sum7:32;
    }gain_sum7_fld;
    __IO uint32_t gain_sum7;

  };

  union{ //offset addr 0x00c0
    struct{
      __IO uint32_t gain_sum8:32;
    }gain_sum8_fld;
    __IO uint32_t gain_sum8;

  };

  __IO uint32_t rsved2[0x4];

  union{ //offset addr 0x00d0

    struct{
      __IO uint32_t reserved0:23;
      __IO uint32_t ll_sch_clk_ctrl:1;
      __IO uint32_t ll_sch_clk_div:8;
    }clk_ctrl_fld;
    __IO uint32_t clk_ctrl;

  };

  union{ //offset addr 0x00d4
    struct{
      __IO uint32_t reserved0:8;
      __IO uint32_t ll_sch_load:24;
    }ll_sch_load_fld;
    __IO uint32_t ll_sch_load;

  };

  union{ //offset addr 0x00d8
    struct{
      __IO uint32_t reserved0:4;
      __IO uint32_t ll_sch_irq_ctrl:4;
      __IO uint32_t ll_sch_irq_target:24;
    }ll_sch_irq_ctrl_fld;
    __IO uint32_t ll_sch_irq_ctrl;

  };

  union{ //offset addr 0x00dc
    struct{
      __IO uint32_t reserved0:4;
      __IO uint32_t ll_sch_trig_ctrl:4;
      __IO uint32_t ll_sch_trig_target:24;
    }ll_sch_trig_ctrl_fld;
    __IO uint32_t ll_sch_trig_ctrl;

  };

  union{ //offset addr 0x00e0
    struct{
      __IO uint32_t reserved0:8;
      __IO uint32_t ll_sch_cnt_state:24;
    }ll_sch_cnt_state_fld;
    __IO uint32_t ll_sch_cnt_state;

  };

  union{ //offset addr 0x00e4
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t mode_done_count_rd:8;
    }mode_done_count_rd_fld;
    __IO uint32_t mode_done_count_rd;

  };

  __IO uint32_t rsved3[0x47];

  union{ //offset addr 0x0200

    struct{
      __IO uint32_t aod_data_read:32;
    }AOD_data_read_fld;
    __IO uint32_t AOD_data_read;

  };

  __IO uint32_t rsved4[0x80];

  union{ //offset addr 0x0400

    struct{
      __IO uint32_t tx_fifo_write:32;
    }TX_fifo_write_fld;
    __IO uint32_t TX_fifo_write;

  };

  __IO uint32_t rsved5[0x200];

  union{ //offset addr 0x0c00

    struct{
      __IO uint32_t rx_fifo_write:32;
    }RX_fifo_write_fld;
    __IO uint32_t RX_fifo_write;

  };

} FEMTO_REG_LINKLAYER_TypeDef;

#define FEMTO_REG_LINKLAYER ((FEMTO_REG_LINKLAYER_TypeDef *)0x40031000)


#if defined(__CC_ARM)
#pragma pop
#endif


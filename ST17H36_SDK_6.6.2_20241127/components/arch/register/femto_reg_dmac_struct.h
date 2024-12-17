#ifndef _FEMTO_REG_DMAC_STRUCT_H_
#define _FEMTO_REG_DMAC_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t sar:32;
    }SAR0_fld;
    __IO uint32_t SAR0;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved:32;
    }SAR01_fld;
    __IO uint32_t SAR01;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t dar:32;
    }DAR0_fld;
    __IO uint32_t DAR0;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved:32;
    }DAR01_fld;
    __IO uint32_t DAR01;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t loc:30;
      __IO uint32_t lms:2;
    }LLP0_fld;
    __IO uint32_t LLP0;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t reserved:32;
    }LLP01_fld;
    __IO uint32_t LLP01;

  };

  union{ //offset addr 0x0018
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t llp_src_en:1;
      __IO uint32_t llp_dst_en:1;
      __IO uint32_t sms:2;
      __IO uint32_t dms:2;
      __IO uint32_t tt_fc:3;
      __IO uint32_t reserved1:1;
      __IO uint32_t dst_scatter_en:1;
      __IO uint32_t src_gather_en:1;
      __IO uint32_t src_msize:3;
      __IO uint32_t dest_msize:3;
      __IO uint32_t sinc:2;
      __IO uint32_t dinc:2;
      __IO uint32_t src_tr_width:3;
      __IO uint32_t dst_tr_width:3;
      __IO uint32_t int_en:1;
    }CTL0_fld;
    __IO uint32_t CTL0;

  };

  union{ //offset addr 0x001c
    struct{
      __IO uint32_t reserved0:19;
      __IO uint32_t done:1;
      __IO uint32_t block_ts:12;
    }CTL01_fld;
    __IO uint32_t CTL01;

  };

  union{ //offset addr 0x0020
    struct{
      __IO uint32_t sstat:32;
    }SSTAT0_fld;
    __IO uint32_t SSTAT0;

  };

  union{ //offset addr 0x0024
    struct{
      __IO uint32_t reserved:32;
    }SSTAT01_fld;
    __IO uint32_t SSTAT01;

  };

  union{ //offset addr 0x0028
    struct{
      __IO uint32_t dstat:32;
    }DSTAT0_fld;
    __IO uint32_t DSTAT0;

  };

  union{ //offset addr 0x002c
    struct{
      __IO uint32_t reserved:32;
    }DSTAT01_fld;
    __IO uint32_t DSTAT01;

  };

  union{ //offset addr 0x0030
    struct{
      __IO uint32_t sstatar:32;
    }SSTATAR0_fld;
    __IO uint32_t SSTATAR0;

  };

  union{ //offset addr 0x0034
    struct{
      __IO uint32_t reserved:32;
    }SSTATAR01_fld;
    __IO uint32_t SSTATAR01;

  };

  union{ //offset addr 0x0038
    struct{
      __IO uint32_t dstatar:32;
    }DSTATAR0_fld;
    __IO uint32_t DSTATAR0;

  };

  union{ //offset addr 0x003c
    struct{
      __IO uint32_t reserved:32;
    }DSTATAR01_fld;
    __IO uint32_t DSTATAR01;

  };

  union{ //offset addr 0x0040
    struct{
      __IO uint32_t reload_dst:1;
      __IO uint32_t reload_src:1;
      __IO uint32_t max_abrst:10;
      __IO uint32_t src_hs_pol:1;
      __IO uint32_t dst_hs_pol:1;
      __IO uint32_t lock_b:1;
      __IO uint32_t lock_ch:1;
      __IO uint32_t lock_b_l:2;
      __IO uint32_t lock_ch_l:2;
      __IO uint32_t hs_sel_src:1;
      __IO uint32_t hs_sel_dst:1;
      __IO uint32_t fifo_empty:1;
      __IO uint32_t ch_susp:1;
      __IO uint32_t ch_prior:3;
      __IO uint32_t reserved:5;
    }CFG0_fld;
    __IO uint32_t CFG0;

  };

  union{ //offset addr 0x0044
    struct{
      __IO uint32_t reserved0:17;
      __IO uint32_t dest_per:4;
      __IO uint32_t src_per:4;
      __IO uint32_t ss_upd_en:1;
      __IO uint32_t ds_upd_en:1;
      __IO uint32_t protctl:3;
      __IO uint32_t fifo_mode:1;
      __IO uint32_t fcmode:1;
    }CFG01_fld;
    __IO uint32_t CFG01;

  };

  union{ //offset addr 0x0048
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t sgc:9;
      __IO uint32_t sgi:20;
    }SGR0_fld;
    __IO uint32_t SGR0;

  };

  union{ //offset addr 0x004c
    struct{
      __IO uint32_t reserved:32;
    }SGR01_fld;
    __IO uint32_t SGR01;

  };

  union{ //offset addr 0x0050
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t dsc:9;
      __IO uint32_t dsi:20;
    }DSR0_fld;
    __IO uint32_t DSR0;

  };

  union{ //offset addr 0x0054
    struct{
      __IO uint32_t reserved:32;
    }DSR01_fld;
    __IO uint32_t DSR01;

  };

  union{ //offset addr 0x0058
    struct{
      __IO uint32_t sar:32;
    }SAR1_fld;
    __IO uint32_t SAR1;

  };

  union{ //offset addr 0x005c
    struct{
      __IO uint32_t reserved:32;
    }SAR11_fld;
    __IO uint32_t SAR11;

  };

  union{ //offset addr 0x0060
    struct{
      __IO uint32_t dar:32;
    }DAR1_fld;
    __IO uint32_t DAR1;

  };

  union{ //offset addr 0x0064
    struct{
      __IO uint32_t reserved:32;
    }DAR11_fld;
    __IO uint32_t DAR11;

  };

  union{ //offset addr 0x0068
    struct{
      __IO uint32_t loc:30;
      __IO uint32_t lms:2;
    }LLP1_fld;
    __IO uint32_t LLP1;

  };

  union{ //offset addr 0x006c
    struct{
      __IO uint32_t reserved:32;
    }LLP11_fld;
    __IO uint32_t LLP11;

  };

  union{ //offset addr 0x0070
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t llp_src_en:1;
      __IO uint32_t llp_dst_en:1;
      __IO uint32_t sms:2;
      __IO uint32_t dms:2;
      __IO uint32_t tt_fc:3;
      __IO uint32_t reserved1:1;
      __IO uint32_t dst_scatter_en:1;
      __IO uint32_t src_gather_en:1;
      __IO uint32_t src_msize:3;
      __IO uint32_t dest_msize:3;
      __IO uint32_t sinc:2;
      __IO uint32_t dinc:2;
      __IO uint32_t src_tr_width:3;
      __IO uint32_t dst_tr_width:3;
      __IO uint32_t int_en:1;
    }CTL1_fld;
    __IO uint32_t CTL1;

  };

  union{ //offset addr 0x0074
    struct{
      __IO uint32_t reserved0:19;
      __IO uint32_t done:1;
      __IO uint32_t reserved1:3;
      __IO uint32_t block_ts:9;
    }CTL11_fld;
    __IO uint32_t CTL11;

  };

  union{ //offset addr 0x0078
    struct{
      __IO uint32_t sstat:32;
    }SSTAT1_fld;
    __IO uint32_t SSTAT1;

  };

  union{ //offset addr 0x007c
    struct{
      __IO uint32_t reserved:32;
    }SSTAT11_fld;
    __IO uint32_t SSTAT11;

  };

  union{ //offset addr 0x0080
    struct{
      __IO uint32_t dstat:32;
    }DSTAT1_fld;
    __IO uint32_t DSTAT1;

  };

  union{ //offset addr 0x0084
    struct{
      __IO uint32_t reserved:32;
    }DSTAT11_fld;
    __IO uint32_t DSTAT11;

  };

  union{ //offset addr 0x0088
    struct{
      __IO uint32_t sstatar:32;
    }SSTATAR1_fld;
    __IO uint32_t SSTATAR1;

  };

  union{ //offset addr 0x008c
    struct{
      __IO uint32_t reserved:32;
    }SSTATAR11_fld;
    __IO uint32_t SSTATAR11;

  };

  union{ //offset addr 0x0090
    struct{
      __IO uint32_t dstatar:32;
    }DSTATAR1_fld;
    __IO uint32_t DSTATAR1;

  };

  union{ //offset addr 0x0094
    struct{
      __IO uint32_t reserved:32;
    }DSTATAR11_fld;
    __IO uint32_t DSTATAR11;

  };

  union{ //offset addr 0x0098
    struct{
      __IO uint32_t reload_dst:1;
      __IO uint32_t reload_src:1;
      __IO uint32_t max_abrst:10;
      __IO uint32_t src_hs_pol:1;
      __IO uint32_t dst_hs_pol:1;
      __IO uint32_t lock_b:1;
      __IO uint32_t lock_ch:1;
      __IO uint32_t lock_b_l:2;
      __IO uint32_t lock_ch_l:2;
      __IO uint32_t hs_sel_src:1;
      __IO uint32_t hs_sel_dst:1;
      __IO uint32_t fifo_empty:1;
      __IO uint32_t ch_susp:1;
      __IO uint32_t ch_prior:3;
      __IO uint32_t reserved:5;
    }CFG1_fld;
    __IO uint32_t CFG1;

  };

  union{ //offset addr 0x009c
    struct{
      __IO uint32_t reserved0:17;
      __IO uint32_t dest_per:4;
      __IO uint32_t src_per:4;
      __IO uint32_t ss_upd_en:1;
      __IO uint32_t ds_upd_en:1;
      __IO uint32_t protctl:3;
      __IO uint32_t fifo_mode:1;
      __IO uint32_t fcmode:1;
    }CFG11_fld;
    __IO uint32_t CFG11;

  };

  union{ //offset addr 0x00a0
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t sgc:9;
      __IO uint32_t sgi:20;
    }SGR1_fld;
    __IO uint32_t SGR1;

  };

  union{ //offset addr 0x00a4
    struct{
      __IO uint32_t reserved:32;
    }SGR11_fld;
    __IO uint32_t SGR11;

  };

  union{ //offset addr 0x00a8
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t dsc:9;
      __IO uint32_t dsi:20;
    }DSR1_fld;
    __IO uint32_t DSR1;

  };

  union{ //offset addr 0x00ac
    struct{
      __IO uint32_t reserved:32;
    }DSR11_fld;
    __IO uint32_t DSR11;

  };

  union{ //offset addr 0x00b0
    struct{
      __IO uint32_t sar:32;
    }SAR2_fld;
    __IO uint32_t SAR2;

  };

  union{ //offset addr 0x00b4
    struct{
      __IO uint32_t reserved:32;
    }SAR21_fld;
    __IO uint32_t SAR21;

  };

  union{ //offset addr 0x00b8
    struct{
      __IO uint32_t dar:32;
    }DAR2_fld;
    __IO uint32_t DAR2;

  };

  union{ //offset addr 0x00bc
    struct{
      __IO uint32_t reserved:32;
    }DAR21_fld;
    __IO uint32_t DAR21;

  };

  union{ //offset addr 0x00c0
    struct{
      __IO uint32_t loc:30;
      __IO uint32_t lms:2;
    }LLP2_fld;
    __IO uint32_t LLP2;

  };

  union{ //offset addr 0x00c4
    struct{
      __IO uint32_t reserved:32;
    }LLP21_fld;
    __IO uint32_t LLP21;

  };

  union{ //offset addr 0x00c8
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t llp_src_en:1;
      __IO uint32_t llp_dst_en:1;
      __IO uint32_t sms:2;
      __IO uint32_t dms:2;
      __IO uint32_t tt_fc:3;
      __IO uint32_t reserved1:1;
      __IO uint32_t dst_scatter_en:1;
      __IO uint32_t src_gather_en:1;
      __IO uint32_t src_msize:3;
      __IO uint32_t dest_msize:3;
      __IO uint32_t sinc:2;
      __IO uint32_t dinc:2;
      __IO uint32_t src_tr_width:3;
      __IO uint32_t dst_tr_width:3;
      __IO uint32_t int_en:1;
    }CTL2_fld;
    __IO uint32_t CTL2;

  };

  union{ //offset addr 0x00cc
    struct{
      __IO uint32_t reserved0:19;
      __IO uint32_t done:1;
      __IO uint32_t reserved1:5;
      __IO uint32_t block_ts:7;
    }CTL21_fld;
    __IO uint32_t CTL21;

  };

  union{ //offset addr 0x00d0
    struct{
      __IO uint32_t sstat:32;
    }SSTAT2_fld;
    __IO uint32_t SSTAT2;

  };

  union{ //offset addr 0x00d4
    struct{
      __IO uint32_t reserved:32;
    }SSTAT21_fld;
    __IO uint32_t SSTAT21;

  };

  union{ //offset addr 0x00d8
    struct{
      __IO uint32_t dstat:32;
    }DSTAT2_fld;
    __IO uint32_t DSTAT2;

  };

  union{ //offset addr 0x00dc
    struct{
      __IO uint32_t reserved:32;
    }DSTAT21_fld;
    __IO uint32_t DSTAT21;

  };

  union{ //offset addr 0x00e0
    struct{
      __IO uint32_t sstatar:32;
    }SSTATAR2_fld;
    __IO uint32_t SSTATAR2;

  };

  union{ //offset addr 0x00e4
    struct{
      __IO uint32_t reserved:32;
    }SSTATAR21_fld;
    __IO uint32_t SSTATAR21;

  };

  union{ //offset addr 0x00e8
    struct{
      __IO uint32_t dstatar:32;
    }DSTATAR2_fld;
    __IO uint32_t DSTATAR2;

  };

  union{ //offset addr 0x00ec
    struct{
      __IO uint32_t reserved:32;
    }DSTATAR21_fld;
    __IO uint32_t DSTATAR21;

  };

  union{ //offset addr 0x00f0
    struct{
      __IO uint32_t reload_dst:1;
      __IO uint32_t reload_src:1;
      __IO uint32_t max_abrst:10;
      __IO uint32_t src_hs_pol:1;
      __IO uint32_t dst_hs_pol:1;
      __IO uint32_t lock_b:1;
      __IO uint32_t lock_ch:1;
      __IO uint32_t lock_b_l:2;
      __IO uint32_t lock_ch_l:2;
      __IO uint32_t hs_sel_src:1;
      __IO uint32_t hs_sel_dst:1;
      __IO uint32_t fifo_empty:1;
      __IO uint32_t ch_susp:1;
      __IO uint32_t ch_prior:3;
      __IO uint32_t reserved:5;
    }CFG2_fld;
    __IO uint32_t CFG2;

  };

  union{ //offset addr 0x00f4
    struct{
      __IO uint32_t reserved0:17;
      __IO uint32_t dest_per:4;
      __IO uint32_t src_per:4;
      __IO uint32_t ss_upd_en:1;
      __IO uint32_t ds_upd_en:1;
      __IO uint32_t protctl:3;
      __IO uint32_t fifo_mode:1;
      __IO uint32_t fcmode:1;
    }CFG21_fld;
    __IO uint32_t CFG21;

  };

  union{ //offset addr 0x00f8
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t sgc:7;
      __IO uint32_t sgi:20;
    }SGR2_fld;
    __IO uint32_t SGR2;

  };

  union{ //offset addr 0x00fc
    struct{
      __IO uint32_t reserved:32;
    }SGR21_fld;
    __IO uint32_t SGR21;

  };

  union{ //offset addr 0x0100
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t dsc:7;
      __IO uint32_t dsi:20;
    }DSR2_fld;
    __IO uint32_t DSR2;

  };

  union{ //offset addr 0x0104
    struct{
      __IO uint32_t reserved:32;
    }DSR21_fld;
    __IO uint32_t DSR21;

  };

  union{ //offset addr 0x0108
    struct{
      __IO uint32_t sar:32;
    }SAR3_fld;
    __IO uint32_t SAR3;

  };

  union{ //offset addr 0x010c
    struct{
      __IO uint32_t reserved:32;
    }SAR31_fld;
    __IO uint32_t SAR31;

  };

  union{ //offset addr 0x0110
    struct{
      __IO uint32_t dar:32;
    }DAR3_fld;
    __IO uint32_t DAR3;

  };

  union{ //offset addr 0x0114
    struct{
      __IO uint32_t reserved:32;
    }DAR31_fld;
    __IO uint32_t DAR31;

  };

  union{ //offset addr 0x0118
    struct{
      __IO uint32_t loc:30;
      __IO uint32_t lms:2;
    }LLP3_fld;
    __IO uint32_t LLP3;

  };

  union{ //offset addr 0x011c
    struct{
      __IO uint32_t reserved:32;
    }LLP31_fld;
    __IO uint32_t LLP31;

  };

  union{ //offset addr 0x0120
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t llp_src_en:1;
      __IO uint32_t llp_dst_en:1;
      __IO uint32_t sms:2;
      __IO uint32_t dms:2;
      __IO uint32_t tt_fc:3;
      __IO uint32_t reserved1:1;
      __IO uint32_t dst_scatter_en:1;
      __IO uint32_t src_gather_en:1;
      __IO uint32_t src_msize:3;
      __IO uint32_t dest_msize:3;
      __IO uint32_t sinc:2;
      __IO uint32_t dinc:2;
      __IO uint32_t src_tr_width:3;
      __IO uint32_t dst_tr_width:3;
      __IO uint32_t int_en:1;
    }CTL3_fld;
    __IO uint32_t CTL3;

  };

  union{ //offset addr 0x0124
    struct{
      __IO uint32_t reserved0:19;
      __IO uint32_t done:1;
      __IO uint32_t reserved1:5;
      __IO uint32_t block_ts:7;
    }CTL31_fld;
    __IO uint32_t CTL31;

  };

  union{ //offset addr 0x0128
    struct{
      __IO uint32_t sstat:32;
    }SSTAT3_fld;
    __IO uint32_t SSTAT3;

  };

  union{ //offset addr 0x012c
    struct{
      __IO uint32_t reserved:32;
    }SSTAT31_fld;
    __IO uint32_t SSTAT31;

  };

  union{ //offset addr 0x0130
    struct{
      __IO uint32_t dstat:32;
    }DSTAT3_fld;
    __IO uint32_t DSTAT3;

  };

  union{ //offset addr 0x0134
    struct{
      __IO uint32_t reserved:32;
    }DSTAT31_fld;
    __IO uint32_t DSTAT31;

  };

  union{ //offset addr 0x0138
    struct{
      __IO uint32_t sstatar:32;
    }SSTATAR3_fld;
    __IO uint32_t SSTATAR3;

  };

  union{ //offset addr 0x013c
    struct{
      __IO uint32_t reserved:32;
    }SSTATAR31_fld;
    __IO uint32_t SSTATAR31;

  };

  union{ //offset addr 0x0140
    struct{
      __IO uint32_t dstatar:32;
    }DSTATAR3_fld;
    __IO uint32_t DSTATAR3;

  };

  union{ //offset addr 0x0144
    struct{
      __IO uint32_t reserved:32;
    }DSTATAR31_fld;
    __IO uint32_t DSTATAR31;

  };

  union{ //offset addr 0x0148
    struct{
      __IO uint32_t reload_dst:1;
      __IO uint32_t reload_src:1;
      __IO uint32_t max_abrst:10;
      __IO uint32_t src_hs_pol:1;
      __IO uint32_t dst_hs_pol:1;
      __IO uint32_t lock_b:1;
      __IO uint32_t lock_ch:1;
      __IO uint32_t lock_b_l:2;
      __IO uint32_t lock_ch_l:2;
      __IO uint32_t hs_sel_src:1;
      __IO uint32_t hs_sel_dst:1;
      __IO uint32_t fifo_empty:1;
      __IO uint32_t ch_susp:1;
      __IO uint32_t ch_prior:3;
      __IO uint32_t reserved:5;
    }CFG3_fld;
    __IO uint32_t CFG3;

  };

  union{ //offset addr 0x014c
    struct{
      __IO uint32_t reserved0:17;
      __IO uint32_t dest_per:4;
      __IO uint32_t src_per:4;
      __IO uint32_t ss_upd_en:1;
      __IO uint32_t ds_upd_en:1;
      __IO uint32_t protctl:3;
      __IO uint32_t fifo_mode:1;
      __IO uint32_t fcmode:1;
    }CFG31_fld;
    __IO uint32_t CFG31;

  };

  union{ //offset addr 0x0150
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t sgc:7;
      __IO uint32_t sgi:20;
    }SGR3_fld;
    __IO uint32_t SGR3;

  };

  union{ //offset addr 0x0154
    struct{
      __IO uint32_t reserved:32;
    }SGR31_fld;
    __IO uint32_t SGR31;

  };

  union{ //offset addr 0x0158
    struct{
      __IO uint32_t reserved0:5;
      __IO uint32_t dsc:7;
      __IO uint32_t dsi:20;
    }DSR3_fld;
    __IO uint32_t DSR3;

  };

  union{ //offset addr 0x015c
    struct{
      __IO uint32_t reserved:32;
    }DSR31_fld;
    __IO uint32_t DSR31;

  };

  union{ //offset addr 0x0160
    struct{
      __IO uint32_t sar:32;
    }SAR4_fld;
    __IO uint32_t SAR4;

  };

  union{ //offset addr 0x0164
    struct{
      __IO uint32_t reserved:32;
    }SAR41_fld;
    __IO uint32_t SAR41;

  };

  union{ //offset addr 0x0168
    struct{
      __IO uint32_t dar:32;
    }DAR4_fld;
    __IO uint32_t DAR4;

  };

  union{ //offset addr 0x016c
    struct{
      __IO uint32_t reserved:32;
    }DAR41_fld;
    __IO uint32_t DAR41;

  };

  union{ //offset addr 0x0170
    struct{
      __IO uint32_t loc:30;
      __IO uint32_t lms:2;
    }LLP4_fld;
    __IO uint32_t LLP4;

  };

  union{ //offset addr 0x0174
    struct{
      __IO uint32_t reserved:32;
    }LLP41_fld;
    __IO uint32_t LLP41;

  };

  union{ //offset addr 0x0178
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t llp_src_en:1;
      __IO uint32_t llp_dst_en:1;
      __IO uint32_t sms:2;
      __IO uint32_t dms:2;
      __IO uint32_t tt_fc:3;
      __IO uint32_t reserved1:1;
      __IO uint32_t dst_scatter_en:1;
      __IO uint32_t src_gather_en:1;
      __IO uint32_t src_msize:3;
      __IO uint32_t dest_msize:3;
      __IO uint32_t sinc:2;
      __IO uint32_t dinc:2;
      __IO uint32_t src_tr_width:3;
      __IO uint32_t dst_tr_width:3;
      __IO uint32_t int_en:1;
    }CTL4_fld;
    __IO uint32_t CTL4;

  };

  union{ //offset addr 0x017c
    struct{
      __IO uint32_t reserved0:19;
      __IO uint32_t done:1;
      __IO uint32_t reserved1:6;
      __IO uint32_t block_ts:6;
    }CTL41_fld;
    __IO uint32_t CTL41;

  };

  union{ //offset addr 0x0180
    struct{
      __IO uint32_t sstat:32;
    }SSTAT4_fld;
    __IO uint32_t SSTAT4;

  };

  union{ //offset addr 0x0184
    struct{
      __IO uint32_t reserved:32;
    }SSTAT41_fld;
    __IO uint32_t SSTAT41;

  };

  union{ //offset addr 0x0188
    struct{
      __IO uint32_t dstat:32;
    }DSTAT4_fld;
    __IO uint32_t DSTAT4;

  };

  union{ //offset addr 0x018c
    struct{
      __IO uint32_t reserved:32;
    }DSTAT41_fld;
    __IO uint32_t DSTAT41;

  };

  union{ //offset addr 0x0190
    struct{
      __IO uint32_t sstatar:32;
    }SSTATAR4_fld;
    __IO uint32_t SSTATAR4;

  };

  union{ //offset addr 0x0194
    struct{
      __IO uint32_t reserved:32;
    }SSTATAR41_fld;
    __IO uint32_t SSTATAR41;

  };

  union{ //offset addr 0x0198
    struct{
      __IO uint32_t dstatar:32;
    }DSTATAR4_fld;
    __IO uint32_t DSTATAR4;

  };

  union{ //offset addr 0x019c
    struct{
      __IO uint32_t reserved:32;
    }DSTATAR41_fld;
    __IO uint32_t DSTATAR41;

  };

  union{ //offset addr 0x01a0
    struct{
      __IO uint32_t reload_dst:1;
      __IO uint32_t reload_src:1;
      __IO uint32_t max_abrst:10;
      __IO uint32_t src_hs_pol:1;
      __IO uint32_t dst_hs_pol:1;
      __IO uint32_t lock_b:1;
      __IO uint32_t lock_ch:1;
      __IO uint32_t lock_b_l:2;
      __IO uint32_t lock_ch_l:2;
      __IO uint32_t hs_sel_src:1;
      __IO uint32_t hs_sel_dst:1;
      __IO uint32_t fifo_empty:1;
      __IO uint32_t ch_susp:1;
      __IO uint32_t ch_prior:3;
      __IO uint32_t reserved:5;
    }CFG4_fld;
    __IO uint32_t CFG4;

  };

  union{ //offset addr 0x01a4
    struct{
      __IO uint32_t reserved0:17;
      __IO uint32_t dest_per:4;
      __IO uint32_t src_per:4;
      __IO uint32_t ss_upd_en:1;
      __IO uint32_t ds_upd_en:1;
      __IO uint32_t protctl:3;
      __IO uint32_t fifo_mode:1;
      __IO uint32_t fcmode:1;
    }CFG41_fld;
    __IO uint32_t CFG41;

  };

  union{ //offset addr 0x01a8
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t sgc:6;
      __IO uint32_t sgi:20;
    }SGR4_fld;
    __IO uint32_t SGR4;

  };

  union{ //offset addr 0x01ac
    struct{
      __IO uint32_t reserved:32;
    }SGR41_fld;
    __IO uint32_t SGR41;

  };

  union{ //offset addr 0x01b0
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t dsc:6;
      __IO uint32_t dsi:20;
    }DSR4_fld;
    __IO uint32_t DSR4;

  };

  union{ //offset addr 0x01b4
    struct{
      __IO uint32_t reserved:32;
    }DSR41_fld;
    __IO uint32_t DSR41;

  };

  union{ //offset addr 0x01b8
    struct{
      __IO uint32_t sar:32;
    }SAR5_fld;
    __IO uint32_t SAR5;

  };

  union{ //offset addr 0x01bc
    struct{
      __IO uint32_t reserved:32;
    }SAR51_fld;
    __IO uint32_t SAR51;

  };

  union{ //offset addr 0x01c0
    struct{
      __IO uint32_t dar:32;
    }DAR5_fld;
    __IO uint32_t DAR5;

  };

  union{ //offset addr 0x01c4
    struct{
      __IO uint32_t reserved:32;
    }DAR51_fld;
    __IO uint32_t DAR51;

  };

  union{ //offset addr 0x01c8
    struct{
      __IO uint32_t loc:30;
      __IO uint32_t lms:2;
    }LLP5_fld;
    __IO uint32_t LLP5;

  };

  union{ //offset addr 0x01cc
    struct{
      __IO uint32_t reserved:32;
    }LLP51_fld;
    __IO uint32_t LLP51;

  };

  union{ //offset addr 0x01d0
    struct{
      __IO uint32_t reserved0:3;
      __IO uint32_t llp_src_en:1;
      __IO uint32_t llp_dst_en:1;
      __IO uint32_t sms:2;
      __IO uint32_t dms:2;
      __IO uint32_t tt_fc:3;
      __IO uint32_t reserved1:1;
      __IO uint32_t dst_scatter_en:1;
      __IO uint32_t src_gather_en:1;
      __IO uint32_t src_msize:3;
      __IO uint32_t dest_msize:3;
      __IO uint32_t sinc:2;
      __IO uint32_t dinc:2;
      __IO uint32_t src_tr_width:3;
      __IO uint32_t dst_tr_width:3;
      __IO uint32_t int_en:1;
    }CTL5_fld;
    __IO uint32_t CTL5;

  };

  union{ //offset addr 0x01d4
    struct{
      __IO uint32_t reserved0:19;
      __IO uint32_t done:1;
      __IO uint32_t reserved1:6;
      __IO uint32_t block_ts:6;
    }CTL51_fld;
    __IO uint32_t CTL51;

  };

  union{ //offset addr 0x01d8
    struct{
      __IO uint32_t sstat:32;
    }SSTAT5_fld;
    __IO uint32_t SSTAT5;

  };

  union{ //offset addr 0x01dc
    struct{
      __IO uint32_t reserved:32;
    }SSTAT51_fld;
    __IO uint32_t SSTAT51;

  };

  union{ //offset addr 0x01e0
    struct{
      __IO uint32_t dstat:32;
    }DSTAT5_fld;
    __IO uint32_t DSTAT5;

  };

  union{ //offset addr 0x01e4
    struct{
      __IO uint32_t reserved:32;
    }DSTAT51_fld;
    __IO uint32_t DSTAT51;

  };

  union{ //offset addr 0x01e8
    struct{
      __IO uint32_t sstatar:32;
    }SSTATAR5_fld;
    __IO uint32_t SSTATAR5;

  };

  union{ //offset addr 0x01ec
    struct{
      __IO uint32_t reserved:32;
    }SSTATAR51_fld;
    __IO uint32_t SSTATAR51;

  };

  union{ //offset addr 0x01f0
    struct{
      __IO uint32_t dstatar:32;
    }DSTATAR5_fld;
    __IO uint32_t DSTATAR5;

  };

  union{ //offset addr 0x01f4
    struct{
      __IO uint32_t reserved:32;
    }DSTATAR51_fld;
    __IO uint32_t DSTATAR51;

  };

  union{ //offset addr 0x01f8
    struct{
      __IO uint32_t reload_dst:1;
      __IO uint32_t reload_src:1;
      __IO uint32_t max_abrst:10;
      __IO uint32_t src_hs_pol:1;
      __IO uint32_t dst_hs_pol:1;
      __IO uint32_t lock_b:1;
      __IO uint32_t lock_ch:1;
      __IO uint32_t lock_b_l:2;
      __IO uint32_t lock_ch_l:2;
      __IO uint32_t hs_sel_src:1;
      __IO uint32_t hs_sel_dst:1;
      __IO uint32_t fifo_empty:1;
      __IO uint32_t ch_susp:1;
      __IO uint32_t ch_prior:3;
      __IO uint32_t reserved:5;
    }CFG5_fld;
    __IO uint32_t CFG5;

  };

  union{ //offset addr 0x01fc
    struct{
      __IO uint32_t reserved0:17;
      __IO uint32_t dest_per:4;
      __IO uint32_t src_per:4;
      __IO uint32_t ss_upd_en:1;
      __IO uint32_t ds_upd_en:1;
      __IO uint32_t protctl:3;
      __IO uint32_t fifo_mode:1;
      __IO uint32_t fcmode:1;
    }CFG51_fld;
    __IO uint32_t CFG51;

  };

  union{ //offset addr 0x0200
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t sgc:6;
      __IO uint32_t sgi:20;
    }SGR5_fld;
    __IO uint32_t SGR5;

  };

  union{ //offset addr 0x0204
    struct{
      __IO uint32_t reserved:32;
    }SGR51_fld;
    __IO uint32_t SGR51;

  };

  union{ //offset addr 0x0208
    struct{
      __IO uint32_t reserved0:6;
      __IO uint32_t dsc:6;
      __IO uint32_t dsi:20;
    }DSR5_fld;
    __IO uint32_t DSR5;

  };

  union{ //offset addr 0x020c
    struct{
      __IO uint32_t reserved:32;
    }DSR51_fld;
    __IO uint32_t DSR51;

  };

  __IO uint32_t rsved0[0x2d];

  union{ //offset addr 0x02c0

    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t raw:4;
    }RawTfr_fld;
    __IO uint32_t RawTfr;

  };

  union{ //offset addr 0x02c4
    struct{
      __IO uint32_t reserved:32;
    }RawTfr1_fld;
    __IO uint32_t RawTfr1;

  };

  union{ //offset addr 0x02c8
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t raw:4;
    }RawBlock_fld;
    __IO uint32_t RawBlock;

  };

  union{ //offset addr 0x02cc
    struct{
      __IO uint32_t reserved:32;
    }RawBlock1_fld;
    __IO uint32_t RawBlock1;

  };

  union{ //offset addr 0x02d0
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t raw:4;
    }RawSrcTran_fld;
    __IO uint32_t RawSrcTran;

  };

  union{ //offset addr 0x02d4
    struct{
      __IO uint32_t reserved:32;
    }RawSrcTran1_fld;
    __IO uint32_t RawSrcTran1;

  };

  union{ //offset addr 0x02d8
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t raw:4;
    }RawDstTran_fld;
    __IO uint32_t RawDstTran;

  };

  union{ //offset addr 0x02dc
    struct{
      __IO uint32_t reserved:32;
    }RawDstTran1_fld;
    __IO uint32_t RawDstTran1;

  };

  union{ //offset addr 0x02e0
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t raw:4;
    }RawErr_fld;
    __IO uint32_t RawErr;

  };

  union{ //offset addr 0x02e4
    struct{
      __IO uint32_t reserved:32;
    }RawErr1_fld;
    __IO uint32_t RawErr1;

  };

  union{ //offset addr 0x02e8
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t status:4;
    }StatusTfr0_fld;
    __IO uint32_t StatusTfr0;

  };

  union{ //offset addr 0x02ec
    struct{
      __IO uint32_t reserved:32;
    }StatusTfr1_fld;
    __IO uint32_t StatusTfr1;

  };

  union{ //offset addr 0x02f0
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t status:4;
    }StatusBlock_fld;
    __IO uint32_t StatusBlock;

  };

  union{ //offset addr 0x02f4
    struct{
      __IO uint32_t reserved:32;
    }StatusBlock1_fld;
    __IO uint32_t StatusBlock1;

  };

  union{ //offset addr 0x02f8
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t status:4;
    }StatusSrcTran_fld;
    __IO uint32_t StatusSrcTran;

  };

  union{ //offset addr 0x02fc
    struct{
      __IO uint32_t reserved:32;
    }StatusSrcTran1_fld;
    __IO uint32_t StatusSrcTran1;

  };

  union{ //offset addr 0x0300
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t status:4;
    }StatusDstTran_fld;
    __IO uint32_t StatusDstTran;

  };

  union{ //offset addr 0x0304
    struct{
      __IO uint32_t reserved:32;
    }StatusDstTran1_fld;
    __IO uint32_t StatusDstTran1;

  };

  union{ //offset addr 0x0308
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t status:4;
    }StatusErr_fld;
    __IO uint32_t StatusErr;

  };

  union{ //offset addr 0x030c
    struct{
      __IO uint32_t reserved:32;
    }StatusErr1_fld;
    __IO uint32_t StatusErr1;

  };

  union{ //offset addr 0x0310
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t int_mask_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t int_mask:4;
    }MaskTfr_fld;
    __IO uint32_t MaskTfr;

  };

  union{ //offset addr 0x0314
    struct{
      __IO uint32_t reserved:32;
    }MaskTfr1_fld;
    __IO uint32_t MaskTfr1;

  };

  union{ //offset addr 0x0318
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t int_mask_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t int_mask:4;
    }MaskBlock_fld;
    __IO uint32_t MaskBlock;

  };

  union{ //offset addr 0x031c
    struct{
      __IO uint32_t reserved:32;
    }MaskBlock1_fld;
    __IO uint32_t MaskBlock1;

  };

  union{ //offset addr 0x0320
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t int_mask_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t int_mask:4;
    }MaskSrcTran_fld;
    __IO uint32_t MaskSrcTran;

  };

  union{ //offset addr 0x0324
    struct{
      __IO uint32_t reserved:32;
    }MaskSrcTran1_fld;
    __IO uint32_t MaskSrcTran1;

  };

  union{ //offset addr 0x0328
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t int_mask_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t int_mask:4;
    }MaskDstTran_fld;
    __IO uint32_t MaskDstTran;

  };

  union{ //offset addr 0x032c
    struct{
      __IO uint32_t reserved:32;
    }MaskDstTran1_fld;
    __IO uint32_t MaskDstTran1;

  };

  union{ //offset addr 0x0330
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t int_mask_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t int_mask:4;
    }MaskErr_fld;
    __IO uint32_t MaskErr;

  };

  union{ //offset addr 0x0334
    struct{
      __IO uint32_t reserved:32;
    }MaskErr1_fld;
    __IO uint32_t MaskErr1;

  };

  union{ //offset addr 0x0338
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t clear:4;
    }ClearTfr_fld;
    __IO uint32_t ClearTfr;

  };

  union{ //offset addr 0x033c
    struct{
      __IO uint32_t reserved:32;
    }ClearTfr1_fld;
    __IO uint32_t ClearTfr1;

  };

  union{ //offset addr 0x0340
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t clear:4;
    }ClearBlock_fld;
    __IO uint32_t ClearBlock;

  };

  union{ //offset addr 0x0344
    struct{
      __IO uint32_t reserved:32;
    }ClearBlock1_fld;
    __IO uint32_t ClearBlock1;

  };

  union{ //offset addr 0x0348
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t clear:4;
    }ClearSrcTran_fld;
    __IO uint32_t ClearSrcTran;

  };

  union{ //offset addr 0x034c
    struct{
      __IO uint32_t reserved:32;
    }ClearSrcTran1_fld;
    __IO uint32_t ClearSrcTran1;

  };

  union{ //offset addr 0x0350
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t clear:4;
    }ClearDstTran_fld;
    __IO uint32_t ClearDstTran;

  };

  union{ //offset addr 0x0354
    struct{
      __IO uint32_t reserved:32;
    }ClearDstTran1_fld;
    __IO uint32_t ClearDstTran1;

  };

  union{ //offset addr 0x0358
    struct{
      __IO uint32_t reserved0:28;
      __IO uint32_t clear:4;
    }ClearErr_fld;
    __IO uint32_t ClearErr;

  };

  union{ //offset addr 0x035c
    struct{
      __IO uint32_t reserved:32;
    }ClearErr1_fld;
    __IO uint32_t ClearErr1;

  };

  union{ //offset addr 0x0360
    struct{
      __IO uint32_t reserved0:27;
      __IO uint32_t err:1;
      __IO uint32_t dstt:1;
      __IO uint32_t srct:1;
      __IO uint32_t block:1;
      __IO uint32_t tfr:1;
    }StatusInt_fld;
    __IO uint32_t StatusInt;

  };

  union{ //offset addr 0x0364
    struct{
      __IO uint32_t reserved:32;
    }StatusInt1_fld;
    __IO uint32_t StatusInt1;

  };

  union{ //offset addr 0x0368
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t src_req_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t src_req:4;
    }ReqSrcReg_fld;
    __IO uint32_t ReqSrcReg;

  };

  union{ //offset addr 0x036c
    struct{
      __IO uint32_t reserved:32;
    }ReqSrcReg1_fld;
    __IO uint32_t ReqSrcReg1;

  };

  union{ //offset addr 0x0370
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t dst_req_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t dst_req:4;
    }ReqDstReg_fld;
    __IO uint32_t ReqDstReg;

  };

  union{ //offset addr 0x0374
    struct{
      __IO uint32_t reserved:32;
    }ReqDstReg1_fld;
    __IO uint32_t ReqDstReg1;

  };

  union{ //offset addr 0x0378
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t src_sglreq_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t src_sglreq:4;
    }SglReqSrcReg_fld;
    __IO uint32_t SglReqSrcReg;

  };

  union{ //offset addr 0x037c
    struct{
      __IO uint32_t reserved:32;
    }SglReqSrcReg1_fld;
    __IO uint32_t SglReqSrcReg1;

  };

  union{ //offset addr 0x0380
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t dst_sglreq_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t dst_sglreq:4;
    }SglReqDstReg_fld;
    __IO uint32_t SglReqDstReg;

  };

  union{ //offset addr 0x0384
    struct{
      __IO uint32_t reserved:32;
    }SglReqDstReg1_fld;
    __IO uint32_t SglReqDstReg1;

  };

  union{ //offset addr 0x0388
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t lstsrc_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t lstsrc:4;
    }LstSrcReg_fld;
    __IO uint32_t LstSrcReg;

  };

  union{ //offset addr 0x038c
    struct{
      __IO uint32_t reserved:32;
    }LstSrcReg1_fld;
    __IO uint32_t LstSrcReg1;

  };

  union{ //offset addr 0x0390
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t lstdst_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t lstdst:4;
    }LstDstReg_fld;
    __IO uint32_t LstDstReg;

  };

  union{ //offset addr 0x0394
    struct{
      __IO uint32_t reserved:32;
    }LstDstReg1_fld;
    __IO uint32_t LstDstReg1;

  };

  union{ //offset addr 0x0398
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t dma_en:1;
    }DmaCfgReg_fld;
    __IO uint32_t DmaCfgReg;

  };

  union{ //offset addr 0x039c
    struct{
      __IO uint32_t reserved:32;
    }DmaCfgReg1_fld;
    __IO uint32_t DmaCfgReg1;

  };

  union{ //offset addr 0x03a0
    struct{
      __IO uint32_t reserved0:20;
      __IO uint32_t ch_en_we:4;
      __IO uint32_t reserved1:4;
      __IO uint32_t ch_en:4;
    }ChEnReg_fld;
    __IO uint32_t ChEnReg;

  };

  union{ //offset addr 0x03a4
    struct{
      __IO uint32_t reserved:32;
    }ChEnReg1_fld;
    __IO uint32_t ChEnReg1;

  };

  union{ //offset addr 0x03a8
    struct{
      __IO uint32_t dma_id:32;
    }DmaIdReg_fld;
    __IO uint32_t DmaIdReg;

  };

  union{ //offset addr 0x03ac
    struct{
      __IO uint32_t reserved:32;
    }DmaIdReg1_fld;
    __IO uint32_t DmaIdReg1;

  };

  union{ //offset addr 0x03b0
    struct{
      __IO uint32_t reserved0:31;
      __IO uint32_t test_slv_if:1;
    }DmaTestReg_fld;
    __IO uint32_t DmaTestReg;

  };

  union{ //offset addr 0x03b4
    struct{
      __IO uint32_t reserved:32;
    }DmaTestReg1_fld;
    __IO uint32_t DmaTestReg1;

  };

  __IO uint32_t rsved1[0x5];

  union{ //offset addr 0x03c8

    struct{
      __IO uint32_t reserved:32;
    }DMA_COMP_PARAMS_6_fld;
    __IO uint32_t DMA_COMP_PARAMS_6;

  };

  union{ //offset addr 0x03cc
    struct{
      __IO uint32_t reserved0:1;
      __IO uint32_t ch7_fifo_depth:3;
      __IO uint32_t ch7_sms:3;
      __IO uint32_t ch7_lms:3;
      __IO uint32_t ch7_dms:3;
      __IO uint32_t ch7_max_mult_size:3;
      __IO uint32_t ch7_fc:2;
      __IO uint32_t ch7_hc_llp:1;
      __IO uint32_t ch7_ctl_wb_en:1;
      __IO uint32_t ch7_multi_blk_en:1;
      __IO uint32_t ch7_lock_en:1;
      __IO uint32_t ch7_src_gat_en:1;
      __IO uint32_t ch7_dst_sca_en:1;
      __IO uint32_t ch7_stat_src:1;
      __IO uint32_t ch7_stat_dst:1;
      __IO uint32_t ch7_stw:3;
      __IO uint32_t ch7_dtw:3;
    }DMA_COMP_PARAMS_61_fld;
    __IO uint32_t DMA_COMP_PARAMS_61;

  };

  __IO uint32_t rsved2[0x5];

  union{ //offset addr 0x03e0

    struct{
      __IO uint32_t reserved0:1;
      __IO uint32_t ch2_fifo_depth:3;
      __IO uint32_t ch2_sms:3;
      __IO uint32_t ch2_lms:3;
      __IO uint32_t ch2_dms:3;
      __IO uint32_t ch2_max_mult_size:3;
      __IO uint32_t ch2_fc:2;
      __IO uint32_t ch2_hc_llp:1;
      __IO uint32_t ch2_ctl_wb_en:1;
      __IO uint32_t ch2_multi_blk_en:1;
      __IO uint32_t ch2_lock_en:1;
      __IO uint32_t ch2_src_gat_en:1;
      __IO uint32_t ch2_dst_sca_en:1;
      __IO uint32_t ch2_stat_src:1;
      __IO uint32_t ch2_stat_dst:1;
      __IO uint32_t ch2_stw:3;
      __IO uint32_t ch2_dtw:3;
    }DMA_COMP_PARAMS_3_fld;
    __IO uint32_t DMA_COMP_PARAMS_3;

  };

  union{ //offset addr 0x03e4
    struct{
      __IO uint32_t reserved0:1;
      __IO uint32_t ch1_fifo_depth:3;
      __IO uint32_t ch1_sms:3;
      __IO uint32_t ch1_lms:3;
      __IO uint32_t ch1_dms:3;
      __IO uint32_t ch1_max_mult_size:3;
      __IO uint32_t ch1_fc:2;
      __IO uint32_t ch1_hc_llp:1;
      __IO uint32_t ch1_ctl_wb_en:1;
      __IO uint32_t ch1_multi_blk_en:1;
      __IO uint32_t ch1_lock_en:1;
      __IO uint32_t ch1_src_gat_en:1;
      __IO uint32_t ch1_dst_sca_en:1;
      __IO uint32_t ch1_stat_src:1;
      __IO uint32_t ch1_stat_dst:1;
      __IO uint32_t ch1_stw:3;
      __IO uint32_t ch1_dtw:3;
    }DMA_COMP_PARAMS_31_fld;
    __IO uint32_t DMA_COMP_PARAMS_31;

  };

  union{ //offset addr 0x03e8
    struct{
      __IO uint32_t reserved0:1;
      __IO uint32_t ch0_fifo_depth:3;
      __IO uint32_t ch0_sms:3;
      __IO uint32_t ch0_lms:3;
      __IO uint32_t ch0_dms:3;
      __IO uint32_t ch0_max_mult_size:3;
      __IO uint32_t ch0_fc:2;
      __IO uint32_t ch0_hc_llp:1;
      __IO uint32_t ch0_ctl_wb_en:1;
      __IO uint32_t ch0_multi_blk_en:1;
      __IO uint32_t ch0_lock_en:1;
      __IO uint32_t ch0_src_gat_en:1;
      __IO uint32_t ch0_dst_sca_en:1;
      __IO uint32_t ch0_stat_src:1;
      __IO uint32_t ch0_stat_dst:1;
      __IO uint32_t ch0_stw:3;
      __IO uint32_t ch0_dtw:3;
    }DMA_COMP_PARAMS_2_fld;
    __IO uint32_t DMA_COMP_PARAMS_2;

  };

  union{ //offset addr 0x03ec
    struct{
      __IO uint32_t ch7_multi_blk_type:4;
      __IO uint32_t ch6_multi_blk_type:4;
      __IO uint32_t ch5_multi_blk_type:4;
      __IO uint32_t ch4_multi_blk_type:4;
      __IO uint32_t ch3_multi_blk_type:4;
      __IO uint32_t ch2_multi_blk_type:4;
      __IO uint32_t ch1_multi_blk_type:4;
      __IO uint32_t ch0_multi_blk_type:4;
    }DMA_COMP_PARAMS_21_fld;
    __IO uint32_t DMA_COMP_PARAMS_21;

  };

  union{ //offset addr 0x03f0
    struct{
      __IO uint32_t ch7_multi_blk_type:4;
      __IO uint32_t ch6_multi_blk_type:4;
      __IO uint32_t ch5_multi_blk_type:4;
      __IO uint32_t ch4_multi_blk_type:4;
      __IO uint32_t ch3_multi_blk_type:4;
      __IO uint32_t ch2_multi_blk_type:4;
      __IO uint32_t ch1_multi_blk_type:4;
      __IO uint32_t ch0_multi_blk_type:4;
    }DMA_COMP_PARAMS_1_fld;
    __IO uint32_t DMA_COMP_PARAMS_1;

  };

  __IO uint32_t rsved3[0x2];

  union{ //offset addr 0x03f8

    struct{
      __IO uint32_t dma_comp_type:32;
    }DMA_Component_ID_Register_fld;
    __IO uint32_t DMA_Component_ID_Register;

  };

  union{ //offset addr 0x03fc
    struct{
      __IO uint32_t ch7_multi_blk_type:32;
    }DMA_Component_ID_Register1_fld;
    __IO uint32_t DMA_Component_ID_Register1;

  };

} FEMTO_REG_DMAC_TypeDef;

#define FEMTO_REG_DMAC ((FEMTO_REG_DMAC_TypeDef *)0x40010000)


#if defined(__CC_ARM)
#pragma pop
#endif


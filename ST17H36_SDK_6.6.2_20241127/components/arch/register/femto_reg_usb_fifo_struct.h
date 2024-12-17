#ifndef _FEMTO_REG_USB_FIFO_STRUCT_H_
#define _FEMTO_REG_USB_FIFO_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t in_ep_tx_fifo:32;
    }IN_TX_FIFO_fld;
    __IO uint32_t IN_TX_FIFO;

  };

  __IO uint32_t rsved0[0x100];

  union{ //offset addr 0x0400

    struct{
      __IO uint32_t in_ep_tx_fifo:32;
    }IN_EP_TX_FIFO_ep1_fld;
    __IO uint32_t IN_EP_TX_FIFO_ep1;

  };

  __IO uint32_t rsved1[0x100];

  union{ //offset addr 0x0800

    struct{
      __IO uint32_t in_ep_tx_fifo:32;
    }IN_EP_TX_FIFO_ep2_fld;
    __IO uint32_t IN_EP_TX_FIFO_ep2;

  };

  __IO uint32_t rsved2[0x100];

  union{ //offset addr 0x0c00

    struct{
      __IO uint32_t in_ep_tx_fifo:32;
    }IN_EP_TX_FIFO_ep3_fld;
    __IO uint32_t IN_EP_TX_FIFO_ep3;

  };

  __IO uint32_t rsved3[0x100];

  union{ //offset addr 0x1000

    struct{
      __IO uint32_t in_ep_tx_fifo:32;
    }IN_EP_TX_FIFO_ep4_fld;
    __IO uint32_t IN_EP_TX_FIFO_ep4;

  };

  __IO uint32_t rsved4[0xc00];

  union{ //offset addr 0x4000

    struct{
      __IO uint32_t out_rx_fifo:32;
    }OUT_RX_FIFO_fld;
    __IO uint32_t OUT_RX_FIFO;

  };

} FEMTO_REG_USB_FIFO_TypeDef;

#define FEMTO_REG_USB_FIFO ((FEMTO_REG_USB_FIFO_TypeDef *)0x14000000)


#if defined(__CC_ARM)
#pragma pop
#endif


#ifndef _FEMTO_REG_TIMX1_STRUCT_H_
#define _FEMTO_REG_TIMX1_STRUCT_H_

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#endif

typedef struct
{
  union{ //offset addr 0x0000
    struct{
      __IO uint32_t reserved0:22;
      __IO uint32_t ckd:2;
      __IO uint32_t arpe:1;
      __IO uint32_t cms:2;
      __IO uint32_t dir:1;
      __IO uint32_t opm:1;
      __IO uint32_t urs:1;
      __IO uint32_t udis:1;
      __IO uint32_t cen:1;
    }Timx_CR1_fld;
    __IO uint32_t Timx_CR1;

  };

  union{ //offset addr 0x0004
    struct{
      __IO uint32_t reserved0:17;
      __IO uint32_t ois4:1;
      __IO uint32_t ois3n:1;
      __IO uint32_t ois3:1;
      __IO uint32_t ois2n:1;
      __IO uint32_t ois2:1;
      __IO uint32_t ois1n:1;
      __IO uint32_t ois1:1;
      __IO uint32_t ti1s:1;
      __IO uint32_t mms:3;
      __IO uint32_t ccds:1;
      __IO uint32_t ccus:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t ccpc:1;
    }Timx_CR2_fld;
    __IO uint32_t Timx_CR2;

  };

  union{ //offset addr 0x0008
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t etp:1;
      __IO uint32_t ece:1;
      __IO uint32_t etps:2;
      __IO uint32_t etf:4;
      __IO uint32_t msm:1;
      __IO uint32_t ts:3;
      __IO uint32_t reserved1:1;
      __IO uint32_t sms:3;
    }Timx_SMCR_fld;
    __IO uint32_t Timx_SMCR;

  };

  union{ //offset addr 0x000c
    struct{
      __IO uint32_t reserved0:17;
      __IO uint32_t tde:1;
      __IO uint32_t comde:1;
      __IO uint32_t cc4de:1;
      __IO uint32_t cc3de:1;
      __IO uint32_t cc2de:1;
      __IO uint32_t cc1de:1;
      __IO uint32_t ude:1;
      __IO uint32_t bie:1;
      __IO uint32_t tie:1;
      __IO uint32_t comie:1;
      __IO uint32_t cc4ie:1;
      __IO uint32_t cc3ie:1;
      __IO uint32_t cc2ie:1;
      __IO uint32_t cc1ie:1;
      __IO uint32_t uie:1;
    }Timx_DIER_fld;
    __IO uint32_t Timx_DIER;

  };

  union{ //offset addr 0x0010
    struct{
      __IO uint32_t reserved0:19;
      __IO uint32_t cc4of:1;
      __IO uint32_t cc3of:1;
      __IO uint32_t cc2of:1;
      __IO uint32_t cc1of:1;
      __IO uint32_t reserved1:1;
      __IO uint32_t bif:1;
      __IO uint32_t tif:1;
      __IO uint32_t comif:1;
      __IO uint32_t cc4if:1;
      __IO uint32_t cc3if:1;
      __IO uint32_t cc2if:1;
      __IO uint32_t cc1if:1;
      __IO uint32_t uif:1;
    }Timx_SR_fld;
    __IO uint32_t Timx_SR;

  };

  union{ //offset addr 0x0014
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t bg:1;
      __IO uint32_t tg:1;
      __IO uint32_t comg:1;
      __IO uint32_t cc4g:1;
      __IO uint32_t cc3g:1;
      __IO uint32_t cc2g:1;
      __IO uint32_t cc1g:1;
      __IO uint32_t ug:1;
    }Timx_EGR_fld;
    __IO uint32_t Timx_EGR;

  };

  union{ //offset addr 0x0018
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t oc2ce:1;
      __IO uint32_t oc2m:3;
      __IO uint32_t oc2pe:1;
      __IO uint32_t oc2fe:1;
      __IO uint32_t cc2s:2;
      __IO uint32_t oc1ce:1;
      __IO uint32_t oc1m:3;
      __IO uint32_t oc1pe:1;
      __IO uint32_t oc1fe:1;
      __IO uint32_t cc1s:2;
    }Timx_CCMR1_fld;
    __IO uint32_t Timx_CCMR1;

    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t ic2f:4;
      __IO uint32_t ic2psc:2;
      __IO uint32_t cc2s:2;
      __IO uint32_t ic1f:4;
      __IO uint32_t ic1psc:2;
      __IO uint32_t cc1s:2;
    }Timx_CCMR1_ic_fld;
    __IO uint32_t Timx_CCMR1_ic;

  };

  union{ //offset addr 0x001c
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t oc4ce:1;
      __IO uint32_t oc4m:3;
      __IO uint32_t oc4pe:1;
      __IO uint32_t oc4fe:1;
      __IO uint32_t cc4s:2;
      __IO uint32_t oc3ce:1;
      __IO uint32_t oc3m:3;
      __IO uint32_t oc3pe:1;
      __IO uint32_t oc3fe:1;
      __IO uint32_t cc3s:2;
    }Timx_CCMR2_fld;
    __IO uint32_t Timx_CCMR2;

    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t ic4f:4;
      __IO uint32_t ic4psc:2;
      __IO uint32_t cc4s:2;
      __IO uint32_t ic3f:4;
      __IO uint32_t ic3psc:2;
      __IO uint32_t cc3s:2;
    }Timx_CCMR2_ic_fld;
    __IO uint32_t Timx_CCMR2_ic;

  };

  union{ //offset addr 0x0020
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t cc4np:1;
      __IO uint32_t cc4ne:1;
      __IO uint32_t cc4p:1;
      __IO uint32_t cc4e:1;
      __IO uint32_t cc3np:1;
      __IO uint32_t cc3ne:1;
      __IO uint32_t cc3p:1;
      __IO uint32_t cc3e:1;
      __IO uint32_t cc2np:1;
      __IO uint32_t cc2ne:1;
      __IO uint32_t cc2p:1;
      __IO uint32_t cc2e:1;
      __IO uint32_t cc1np:1;
      __IO uint32_t cc1ne:1;
      __IO uint32_t cc1p:1;
      __IO uint32_t cc1e:1;
    }Timx_CCER_fld;
    __IO uint32_t Timx_CCER;

  };

  union{ //offset addr 0x0024
    struct{
      __IO uint32_t cnt:32;
    }Timx_CNT_fld;
    __IO uint32_t Timx_CNT;

  };

  union{ //offset addr 0x0028
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t psc:16;
    }Timx_PSC_fld;
    __IO uint32_t Timx_PSC;

  };

  union{ //offset addr 0x002c
    struct{
      __IO uint32_t arr:32;
    }Timx_ARR_fld;
    __IO uint32_t Timx_ARR;

  };

  union{ //offset addr 0x0030
    struct{
      __IO uint32_t reserved0:24;
      __IO uint32_t rep:8;
    }Timx_RCR_fld;
    __IO uint32_t Timx_RCR;

  };

  union{ //offset addr 0x0034
    struct{
      __IO uint32_t ccr1:32;
    }Timx_CCR1_fld;
    __IO uint32_t Timx_CCR1;

  };

  union{ //offset addr 0x0038
    struct{
      __IO uint32_t ccr2:32;
    }Timx_CCR2_fld;
    __IO uint32_t Timx_CCR2;

  };

  union{ //offset addr 0x003c
    struct{
      __IO uint32_t ccr3:32;
    }Timx_CCR3_fld;
    __IO uint32_t Timx_CCR3;

  };

  union{ //offset addr 0x0040
    struct{
      __IO uint32_t ccr4:32;
    }Timx_CCR4_fld;
    __IO uint32_t Timx_CCR4;

  };

  union{ //offset addr 0x0044
    struct{
      __IO uint32_t reserved0:16;
      __IO uint32_t moe:1;
      __IO uint32_t aoe:1;
      __IO uint32_t bkp:1;
      __IO uint32_t bke:1;
      __IO uint32_t ossr:1;
      __IO uint32_t ossi:1;
      __IO uint32_t lock:2;
      __IO uint32_t dtg:8;
    }Timx_BDTR_fld;
    __IO uint32_t Timx_BDTR;

  };

  union{ //offset addr 0x0048
    struct{
      __IO uint32_t reserved0:19;
      __IO uint32_t dbl:5;
      __IO uint32_t reserved1:3;
      __IO uint32_t dba:5;
    }Timx_DCR_fld;
    __IO uint32_t Timx_DCR;

  };

  union{ //offset addr 0x004c
    struct{
      __IO uint32_t dmab:32;
    }Timx_DMAR_fld;
    __IO uint32_t Timx_DMAR;

  };

} FEMTO_REG_TIMX1_TypeDef;

#define FEMTO_REG_TIMX1 ((FEMTO_REG_TIMX1_TypeDef *)0x4000A000)


#if defined(__CC_ARM)
#pragma pop
#endif


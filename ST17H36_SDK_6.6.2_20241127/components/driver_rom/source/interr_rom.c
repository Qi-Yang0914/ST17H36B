/*
this file is used for all extern interrupt routine, it need other project to fill the jump table 
to realize interrupt function defined by user.
*/

#include "bus_dev.h"
//#include "timer.h"
#include "jump_function.h"
#include "uart.h"
#include "otp.h"

//#ifndef FPGA_ROM_DRIVER_TEST
#include "ll_common.h"
//#endif

#include "gpio.h"
#include "clock.h"

int   hardFault;
typedef void (*irq_function)(void);//just support non-vector irq
typedef void (*expt_function)(unsigned int, unsigned int);

extern void LL_IRQHandler(void);
extern void USB_IRQHandler(void);

extern void LL_SCH_IRQHandler(void);
extern void WDT_IRQHandler(void);

uint32_t g_systick_cnt = 0;

void MSIP_Handler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(MSIP_HANDLER));
    
    if (pFunc != NULL)
        pFunc();
}

void MTIP_Handler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(MTIP_HANDLER));
    
    if (pFunc != NULL)
    {
        pFunc();
    }
        
}


void exception_handler(unsigned int mcause, unsigned int sp)
{
    expt_function pFunc = NULL;
     
    pFunc = (expt_function)(JUMP_FUNCTION_GET(EXCEPTION_HANDLER));
    if ( pFunc != 0)
    {
         pFunc(mcause, sp);
    }
    while(1){
        __WFI();
    }
}


/*void SVC_Handler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(SVC_HANDLER));
    
    if (pFunc != ((irq_function)JUMP_BASE_ADDR))
        pFunc();
    
}*/

/*void PendSV_Handler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(PENDSV_HANDLER));
    
    if (pFunc != ((irq_function)JUMP_BASE_ADDR))
        pFunc();
    
}*/

/*ATTRIBUTE_ISR void SysTick_Handler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(SYSTICK_HANDLER));
    
    if (pFunc != ((irq_function)JUMP_BASE_ADDR))
        pFunc();
    
}*/

//None
//ATTRIBUTE_ISR void Vx_IRQHandler(void)
//{
//    irq_function pFunc = NULL;
//        
//    pFunc = (irq_function)(JUMP_FUNCTION_GET(Vx_IRQ_HANDLER));
//    
//    if (pFunc != ((irq_function)JUMP_BASE_ADDR))
//        pFunc();
//}

//xtal irq
ATTRIBUTE_ISR void V1_IRQHandler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V1_IRQ_HANDLER));
    
    if (pFunc != NULL )
        pFunc();
}

//r2_bb_sch_irq
ATTRIBUTE_ISR void V3_IRQHandler(void)
{
    irq_function pFunc = NULL;

	if((OTP_CHIP_ID->id3 & OTP_CID_2P4_FLG) == 0)
      return;
	
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V3_IRQ_HANDLER));
    
    if (pFunc != NULL )
        pFunc();
	else
		LL_SCH_IRQHandler();
}

// LL_IRQHandler BB_IRQ
ATTRIBUTE_ISR void V4_IRQHandler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V4_IRQ_HANDLER));
    
    if (pFunc != NULL )
        pFunc();
	else
		LL_IRQHandler();
}

//efuse_irq
ATTRIBUTE_ISR void V7_IRQHandler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V7_IRQ_HANDLER));
    
    if (pFunc != NULL)
        pFunc();
}

//Watchdog
ATTRIBUTE_ISR void V10_IRQHandler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V10_IRQ_HANDLER));
    
    if (pFunc != NULL)
        pFunc();
	else
		WDT_IRQHandler();		
}

//uart0
ATTRIBUTE_ISR void V11_IRQHandler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V11_IRQ_HANDLER));
    
    if (pFunc != NULL)
        pFunc();
}

//iic 0
ATTRIBUTE_ISR void V12_IRQHandler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V12_IRQ_HANDLER));
    
    if (pFunc != NULL )
        pFunc();
}

//spi 0
ATTRIBUTE_ISR void V15_IRQHandler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V15_IRQ_HANDLER));
    
	if (pFunc != NULL)
		pFunc();
}


//gpio
ATTRIBUTE_ISR void V16_IRQHandler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V16_IRQ_HANDLER));
    
    if (pFunc != NULL)
        pFunc();
}

//dma_int
ATTRIBUTE_ISR void V19_IRQHandler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V19_IRQ_HANDLER));
    
    if (pFunc != NULL)
        pFunc();
}

//nrzl traking
ATTRIBUTE_ISR void V21_IRQHandler(void)
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V21_IRQ_HANDLER));
    
    if (pFunc != NULL)
        pFunc();

}


//timerx
ATTRIBUTE_ISR void V24_IRQHandler(void)//rom use
{
	irq_function pFunc = NULL;

	pFunc = (irq_function)(JUMP_FUNCTION_GET(V24_IRQ_HANDLER));

	if (pFunc != NULL)
		pFunc();
}

//usb
ATTRIBUTE_ISR void V27_IRQHandler(void)//rom use
{
    irq_function pFunc = NULL;
    if((OTP_CHIP_ID->id3 & OTP_CID_USB_FLG) == 0)
      return;
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V27_IRQ_HANDLER));
    
    if (pFunc != NULL)
        pFunc();
    else
        USB_IRQHandler();

}

//adc
ATTRIBUTE_ISR void V29_IRQHandler(void)//rom use
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V29_IRQ_HANDLER));
    
    if (pFunc != NULL)
        pFunc();
}

//hclk_mux_done
ATTRIBUTE_ISR void V31_IRQHandler(void)//sdk use
{
    irq_function pFunc = NULL;
        
    pFunc = (irq_function)(JUMP_FUNCTION_GET(V31_IRQ_HANDLER));
    
    if (pFunc != NULL)
        pFunc();
}

// void subWriteReg(uint32_t addr,uint8_t high,uint8_t low,uint32_t value)
// {  
//    write_reg(addr,read_reg(addr)&\
//    (~((((unsigned int)1<<((high)-(low)+1))-1)<<(low)))|\
//    ((unsigned int)(value)<<(low)));__asm volatile("nop");
//}

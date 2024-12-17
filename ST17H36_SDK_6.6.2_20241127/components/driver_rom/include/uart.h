
#ifndef __UART_ROM_H__
#define __UART_ROM_H__

#include "types.h"
#include "bus_dev.h"
#include "gpio.h"

#define UART_TX_FIFO_SIZE    16
#define UART_RX_FIFO_SIZE    16


#define FCR_RX_TRIGGER_00 0x00
#define FCR_RX_TRIGGER_01 0x40
#define FCR_RX_TRIGGER_10 0x80
#define FCR_RX_TRIGGER_11 0xc0
#define FCR_TX_TRIGGER_00 0x00
#define FCR_TX_TRIGGER_01 0x10
#define FCR_TX_TRIGGER_10 0x20
#define FCR_TX_TRIGGER_11 0x30
#define FCR_TX_FIFO_RESET 0x04
#define FCR_RX_FIFO_RESET 0x02
#define FCR_FIFO_ENABLE   0x01

#define UART_FIFO_RX_TRIGGER	FCR_RX_TRIGGER_01//FCR_RX_TRIGGER_10//FCR_RX_TRIGGER_11
#define UART_FIFO_TX_TRIGGER	FCR_TX_TRIGGER_00//FCR_TX_TRIGGER_00//FCR_TX_TRIGGER_01


#define IER_PTIME   0x80
#define IER_EDSSI   0x08
#define IER_ELSI    0x04
#define IER_ETBEI   0x02
#define IER_ERBFI   0x01

/*LSR 0x14*/
#define LSR_RFE		0x80
#define LSR_TEMT	0x40
#define LSR_THRE	0x20
#define LSR_BI		0x10
#define LSR_FE		0x08
#define LSR_PE		0x04
#define LSR_OE		0x02
#define LSR_DR		0x01

/*USR 0x7c*/
#define USR_RFF   0x10
#define USR_RFNE  0x08
#define USR_TFE   0x04
#define USR_TFNF  0x02
#define USR_BUSY  0x01

#define SWU_TX() swu_tx_mode(0)
#define SWU_RX() swu_rx_mode(0)

#define SWU_TX_B(baud) swu_tx_mode(baud)
#define SWU_RX_B(baud) swu_rx_mode(baud)

#define SWU_DUMMY_PIN   GPIO_DUMMY
#define SWU_TX_PIN      P4
#define SWU_RX_PIN      P5

#define SWU_TX_PIN2      P6
#define SWU_RX_PIN2      P7


enum UARTIRQID{
	NONE_IRQ = 0,
	NO_IRQ_PENDING_IRQ = 1,
	THR_EMPTY = 2,
	RDA_IRQ = 4,
	RLS_IRQ = 6,
	BUSY_IRQ = 7,
	TIMEOUT_IRQ = 12,
};

enum{
  UART_EVT_TYPE_RX_DATA = 1,
  UART_EVT_TYPE_TX_COMPLETED,
};

enum{
  TX_STATE_UNINIT = 0,
  TX_STATE_IDLE,
  TX_STATE_TX,
  TX_STATE_ERR
};

void UART0_IRQHandler(void);

int uart_init(int baud, gpio_pin_e tx_pin, gpio_pin_e rx_pin, comm_cb_t cb);
int uart_deinit(void);

void uart_wakeup_init(void);

void uart_send_buff(unsigned char *data,int len);
int uart_set_baudrate(uint32_t baud);
void swu_tx_mode(int baud);
void swu_rx_mode(int baud);
int uart_rxtrigger(uint32_t rxfifo_num);
int uart_txtrigger(uint32_t txfifo_num);
//int hal_DMAmode_func(uint32_t TXfifo_reset_en);
//int hal_RXfifo_reset_func(uint32_t RXfifo_reset_en);
void uart_dma_init(void);
void uart_dma_start(uint32_t addr, uint32_t size);
void uart_dma_stop(void);

uint32_t uart_dma_offset(void);

#endif

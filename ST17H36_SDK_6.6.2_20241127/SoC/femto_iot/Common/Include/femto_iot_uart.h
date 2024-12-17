// See LICENSE for license details.

#ifndef _FEMTO_IOT_UART_H
#define _FEMTO_IOT_UART_H

#ifdef __cplusplus
extern "C" {
#endif

//int32_t uart_init(UART_TypeDef* uart, uint32_t baudrate);
int32_t uart_iot_init(UART_TypeDef* uart, uint32_t baudrate);

int32_t uart_write(UART_TypeDef* uart, uint8_t val);
uint8_t uart_read(UART_TypeDef* uart);

#ifdef __cplusplus
}
#endif
#endif /* _FEMTO_IOT_UART_H */

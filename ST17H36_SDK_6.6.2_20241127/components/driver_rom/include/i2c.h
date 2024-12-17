#ifndef _I2C_SOFT_DRIVER_H_
#define _I2C_SOFT_DRIVER_H_

#include "types.h"
#include "gpio.h"

#define READ_CMD        1

#define I2C_ACK         0
#define I2C_NAK         1

//#define EEPROM_BASE_ADDR          (0xffff8000)

typedef enum
{
    IS_8BIT = 0,
    IS_16BIT
} i2c_reg_addrmode_enum_t;

typedef enum
{
    HW_I2C = 0,
    SW_I2C
} i2c_type_enum_t;

typedef struct
{
    GPIO_Pin_e scl;
    GPIO_Pin_e sda;
	GPIO_Pin_e vdd_pin;
} i2c_drv_struct_t;


void i2c_soft_init(i2c_drv_struct_t* p_i2c);
void i2c_soft_deinit(i2c_drv_struct_t* p_i2c);
void i2c_driver_read(uint8 device_addr, uint16 reg_addr, uint8* buf, uint16 len, i2c_reg_addrmode_enum_t mode);
void i2c_driver_write(uint8 device_addr, uint16 reg_addr, uint8* buf, uint16 len, i2c_reg_addrmode_enum_t mode);
int eeprom_soft_read(uint16_t device_address, uint16_t word_address, uint8_t *data_buf, uint16_t size);
int eeprom_soft_write(uint16_t device_address, uint16_t word_address, uint8_t *data, uint16_t size);

#endif

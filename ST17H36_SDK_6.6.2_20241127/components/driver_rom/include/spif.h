
#ifndef __FLASH_ROM_H__
#define __FLASH_ROM_H__


#include "types.h"
#include "gpio.h"


#define SPIF_FIFO_DEEPTH    6

#define SPIF_PAGE_SIZE      256
#define SPIF_SECT_SIZE      (1024*4)
#define SPIF_BLOCK_SIZE     (1024*64)

#define SPIF_REMAP_ADDR_START  (0x40000)       
#define SPIF_REMAP_ADDR_END    (0x440000) 

#define SPIF_BASE_ADDR          (0x11000000)    //base address should convert to 11000000

#define SPIF_USER_SPACE         (0x2000)

/*boot sector*/
#define SPIF_BOOT_AREA_ADDR             (SPIF_USER_SPACE)
//boot secure mic include all image info
#define SPIF_BOOT_SEC_ADDR              ((uint8_t*)(SPIF_BASE_ADDR + SPIF_BOOT_AREA_ADDR+0x10))
#define SPIF_BOOT_BIN_NUM               (*(volatile uint32_t*)(SPIF_BASE_ADDR + SPIF_BOOT_AREA_ADDR))
#define SPIF_BOOT_MIC                   (*(volatile uint32_t*)(SPIF_BASE_ADDR + SPIF_BOOT_AREA_ADDR + 4))
#define SPIF_BOOT_RUN_ADDR              (*(volatile uint32_t*)(SPIF_BASE_ADDR + SPIF_BOOT_AREA_ADDR + 8))
#define SPIF_BOOT_PART_FADDR(n)         (*(volatile uint32_t*)(SPIF_BASE_ADDR + SPIF_BOOT_AREA_ADDR+0x10+(n)*0x10))
#define SPIF_BOOT_PART_SIZE(n)          ((*(volatile uint32_t*)(SPIF_BASE_ADDR + SPIF_BOOT_AREA_ADDR+0x14+(n)*0x10))&0xffffff)
#define SPIF_BOOT_PART_SEC(n)           ((*(volatile uint32_t*)(SPIF_BASE_ADDR + SPIF_BOOT_AREA_ADDR+0x14+(n)*0x10))&0x80000000)
#define SPIF_BOOT_PART_AUTH(n)          ((*(volatile uint32_t*)(SPIF_BASE_ADDR + SPIF_BOOT_AREA_ADDR+0x14+(n)*0x10))&0x40000000)
#define SPIF_BOOT_PART_RADDR(n)         (*(volatile uint32_t*)(SPIF_BASE_ADDR + SPIF_BOOT_AREA_ADDR+0x18+(n)*0x10))
#define SPIF_BOOT_PART_SEC_MIC(n)       (*(volatile uint32_t*)(SPIF_BASE_ADDR + SPIF_BOOT_AREA_ADDR+0x1c+(n)*0x10))
#define SPIF_BOOT_PART_CRC(n)           (*(volatile uint32_t*)(SPIF_BASE_ADDR + SPIF_BOOT_AREA_ADDR+0x1c+(n)*0x10))

//address convert: 00aabbcc >> 00ccbbaa >> ccbbaa00
#define SPIF_ADDR_CONVERT(addr) (((addr & 0xff)<<24) | ((addr &0xff0000)>>8) | ((addr & 0xff00)<<8))


typedef struct {
    /*device id*/
    uint8_t mid;
    uint8_t mtype; //mempry type
    uint8_t mcapc; //memory capcity
}spif_id_t;

typedef struct {
    union{
        struct{
        	uint8_t clk_pin;
        	uint8_t cs_pin;
        	uint8_t io0_pin;
        	uint8_t io1_pin;

			uint16_t dly_polling:4;
			uint16_t dly_clk:4;

        	uint16_t mode:4;
        	uint16_t spif_ref_clk:4;
        	uint16_t crc;
    	};
		struct{
			uint32_t spif_pin;
			uint32_t timing;
		};
	};

}spif_cfg_t;

bool spif_cfg_load(void);
bool spif_cfg_set(spif_cfg_t *spif_conf, bool otp_wr);
bool spif_use_spif(void);
uint32_t spif_flash_size(void);
int spif_status_reg_read(void);
void spif_status_reg_write(int value);
void  spif_read_identification(spif_id_t* pid);
int spif_erase_sector(unsigned int addr);
int spif_erase_block(unsigned int addr);
int spif_erase_all(void);
int spif_erase_chip(void);
void spif_deep_sleep_set(void);
void spif_deep_sleep_release(void);
int spif_write_word (uint32_t addr, uint32_t data);
int spif_write_page_byte(uint32_t addr, uint8_t *data,  int size);
int spif_write_page_word(uint32_t addr, uint32_t *data,  int size);
int spif_write(uint32_t addr, uint32_t *data,  int size);
int spif_write_verified (uint32_t addr, uint32_t value);
uint8_t spif_read_byte (uint32_t addr);
uint32_t spif_read_word(uint32_t addr);
int spif_read(uint32_t addr, uint8_t* data, int size);


#endif

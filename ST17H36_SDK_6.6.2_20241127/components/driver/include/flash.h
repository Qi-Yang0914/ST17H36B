#ifndef _FLASH_H_
#define _FLASH_H_

#include "rom_sym_def.h"
#include "types.h"

typedef struct {
    /*device id*/
    uint8_t mid;
    uint8_t mtype; //mempry type
    uint8_t mcapc; //memory capcity
}spif_id_t;

#define P25D22U_ID              0x124485
#define GT25D20E_ID             0x1260C4

#define FLASH_PROTECT_AREA_5BIT_7C      0x7c// protected area: 0x7c -> ALL
#define FLASH_PROTECT_AREA_5BIT_5C      0x5c// protected area: 0x7c -> ALL
#define FLASH_PROTECT_AREA_3BIT_1C      0x1c// protected area: 0x1c -> ALL
#define FLASH_PROTECT_AREA_2BIT_0C      0x0c// protected area: 0x0c -> ALL


typedef enum
{
    SLB_OTA                = 0x1,
    SINGLE_OTA             = 0x2,
    MAIN_INIT              = 0x3,
    FS_INIT                = 0x4,
    FS_FORMAT              = 0x5,
    FS_GARBAGE_COLLECT     = 0x6,
    FS_ITEM_DEL            = 0x7,
    FS_ITEM_WRITE          = 0x8,
    PS_STORE               = 0x9,
    USER_DEFINE_1          = 0xa,
    USER_DEFINE_2          = 0xb,
    USER_DEFINE_3          = 0xc,
    NONE                   = 0xff, //Only used in main initialization !!!
} module_ID_t;


typedef struct
{
    bool    bypass_flash_lock;
    module_ID_t module_ID;
} FLASH_PROTECT_INFO;

extern uint32 flash_ID;
extern void  spif_read_identification(spif_id_t* pid);
extern int  spif_write(uint32_t addr, uint8_t* data, uint32_t size);
extern int  spif_read(uint32_t addr, uint8_t* data, uint32_t size);
extern int  spif_write_word(uint32_t addr, uint32_t data);
extern int  spif_read_word(uint32_t addr);
extern int spif_erase_sector(unsigned int addr);
extern int spif_erase_block64(unsigned int addr);
extern int spif_erase_all(void);
extern int spif_status_reg_read(void);
extern void spif_status_reg_write(int value);
int hal_flash_enable_lock(module_ID_t id);
int hal_flash_disable_lock(module_ID_t id);
int hal_flash_write_status_register(uint16 reg_data);
int hal_flash_lock(void);
int hal_flash_unlock(void);
uint8 hal_flash_get_lock_state(void);
uint8 hal_flash_get_high_lock_state(void);
int hal_get_flash_info(void);
int hal_flash_write(uint32_t addr, uint8_t* data, uint32_t size);
int hal_flash_write_by_dma(uint32_t addr, uint8_t* data, uint32_t size);
int hal_flash_read(uint32_t addr, uint32_t* data);
int hal_flash_erase_sector(unsigned int addr);
int hal_flash_erase_block64(unsigned int addr);
int flash_write_word(unsigned int offset, uint32_t  value);


#endif









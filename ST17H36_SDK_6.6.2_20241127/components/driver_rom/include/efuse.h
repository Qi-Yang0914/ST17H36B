
#ifndef _EFUSE_H_ROM_
#define _EFUSE_H_ROM_
#include "types.h"

typedef enum{
    EFUSE_BLOCK_BIT0 = BIT(0),
    EFUSE_BLOCK_BIT1 = BIT(1),
    EFUSE_BLOCK_BIT2 = BIT(2),
    EFUSE_BLOCK_BIT3 = BIT(3),
}EFUSE_block_bit_t;

typedef enum{
    EFUSE_BLOCK_0 = 0,
    EFUSE_BLOCK_1 = 1,
    EFUSE_BLOCK_2 = 2,
    EFUSE_BLOCK_3 = 3,
}EFUSE_block_t;


int efuse_lock(EFUSE_block_bit_t block);
int efuse_read(EFUSE_block_t block,uint32_t* buf);
int efuse_write(EFUSE_block_t block,uint32_t* buf);
int efuse_set_bit_idx(uint8_t idx);
int efuse_set_bit(EFUSE_block_t block, uint8_t bit);
int efuse_write_protect(EFUSE_block_t block);

#endif



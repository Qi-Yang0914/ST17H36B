#ifndef __FSR_RAID_H__
#define __FSR_RAID_H__

#include <stdint.h>

int fsr_get_free_size(uint32_t* free_size);

int fsr_init(uint32_t fs_start_address,uint32_t backup_start_address,uint8_t sector_num);
int fsr_item_write(uint16_t id,uint8_t* buf,uint16_t len);
int fsr_item_read(uint16_t id,uint8_t* buf,uint16_t buf_len,uint16_t* len);
int fsr_format(uint32_t fs_start_address,uint32_t backup_start_address,uint8_t sector_num);
int fsr_item_del(uint16_t id);
int fsr_get_garbage_size(uint32_t* garbage_file_num);
int fsr_garbage_collect(void);

#endif

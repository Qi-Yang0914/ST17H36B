#ifndef _FS_AUTOTEST_H_
#define _FS_AUTOTEST_H_

#include "types.h"
#include "fs.h"

//be care:when assign the fs size,please refer to Flash_Distribution
#ifdef FS_USE_RAID
#define FS_OFFSET_ADDRESS         (0x11040000 - FS_SECTOR_NUM * 4096 * 2)//for 256KB Flash 
#define  BACKUP_BASE_ADDR  				(0x11031000)//FS_OFFSET_ADDRESS + FS_SECTOR_NUM * SECTOR_SIZE) 
#else
#define FS_OFFSET_ADDRESS         (0x11040000 - FS_SECTOR_NUM * 4096)//for 256KB Flash 
//#define FS_OFFSET_ADDRESS         0x11034000 //for 512KB Flash
#endif
#define FS_SECTOR_NUM              4//2
#define  SECTOR_SIZE       				(4 * 1024)


//preamble string add

void fst_preamble(uint8_t* params);



//size: get bytes of section number
uint16_t fst_info(uint32_t argc, uint8_t* argv[]);

//return read status and cksum of file
uint16_t fst_read(uint32_t argc, uint8_t* argv[]);

//return write res_status and cksum of file
uint16_t fst_write(uint32_t argc, uint8_t* argv[]);
//return read time of file
uint16_t fst_read_time(uint32_t argc, uint8_t* argv[]);

//return write time of file
uint16_t fst_write_time(uint32_t argc, uint8_t* argv[]);

//return del file status
uint16_t fst_del(uint32_t argc, uint8_t* argv[]);

//return available free size
uint16_t fst_free(uint32_t argc, uint8_t* argv[]);

//return garbage_size and garbage_count
uint16_t fst_garbage(uint32_t argc, uint8_t* argv[]);

//garbage_collect and return available free size
uint16_t fst_clean(uint32_t argc, uint8_t* argv[]);

//format and eraser all files
uint16_t fst_format(uint32_t argc, uint8_t* argv[]);

static uint16_t fst_help(uint32_t argc, uint8_t* argv[]);

void fst_cmd_register(void);
#endif


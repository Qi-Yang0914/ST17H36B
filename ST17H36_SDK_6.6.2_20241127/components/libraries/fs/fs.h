
/*******************************************************************************
    @file     fs.h
    @brief    Contains all functions support for spi driver
    @version  0.0
    @date     18. Oct. 2017
    @author



*******************************************************************************/
#ifndef __FS_H__
#define __FS_H__

#include "types.h"
#include "fsr_raid.h"

#define FS_SECTOR_NUM_MAX                         (15)    //macro need user re-define if sector num > 16
#define FS_SECTOR_NUM_MIN                         (2)
#ifndef BLE_AT_ENABLE
#define FS_CACHE_NUM_MAX                          (64)//(0)//
#else
#define FS_CACHE_NUM_MAX                          (0)//(0)//
#endif


#define FS_ID_NULL                                (0xFFFF)  //NULL FS ID for FS CACHE ID 

/*
    fs cache addr need 32bit when FS_SECTOR_NUM_MAX>15
*/
#if(FS_SECTOR_NUM_MAX>15)
    #define FS_ADDR_NULL                              (0xFFFFFFFF)  //NULL FS ID for FS CACHE addr
#else
    #define FS_ADDR_NULL                              (0xFFFF)  //NULL FS ID for FS CACHE addr
#endif

#if(FS_SECTOR_NUM_MAX>15)
    typedef uint32_t fsCachAddr_t;
#else
    typedef uint16_t fsCachAddr_t;
#endif

#ifndef FS_CRC_EN
    #define FS_CRC_EN 0
#endif

#if(FS_CRC_EN==1)
    #include "crc16.h"
#endif

#if(FS_CRC_EN == 1)
    #define FS_CRC_FIELD 2
#else
    #define FS_CRC_FIELD 0
#endif

// #define FS_DBBUG
#ifdef FS_DBBUG
    #define FS_LOG  LOG
#else
    #define FS_LOG(...)
#endif

// #define FS_CACHE_DBBUG
#ifdef FS_CACHE_DBBUG
    #define FS_CACH_LOG(...)  {LOG("[FS_CACHE]");LOG(__VA_ARGS__);};
#else
    #define FS_CACH_LOG(...)
#endif


#define FS_ITEM_LEN_16BYTE 0
#define FS_ITEM_LEN_32BYTE 1
#define FS_ITEM_LEN_64BYTE 2

#ifndef FS_SETTING
    #define FS_SETTING FS_ITEM_LEN_16BYTE
#endif

#if (FS_SETTING == FS_ITEM_LEN_16BYTE)
    #define FS_ITEM_LEN                                                             16
#elif (FS_SETTING == FS_ITEM_LEN_32BYTE)
    #define FS_ITEM_LEN                                                             32
#elif (FS_SETTING == FS_ITEM_LEN_64BYTE)
    #define FS_ITEM_LEN                                                             64
#else
    #error please check your config parameter
#endif


/* FS_USE_RAID:include double fs
 * FS_USE_FS1 :only contain single fs
 */
// #define  FS_USE_RAID // FS_USE_FS1// 

#ifdef FS_USE_RAID
#define hal_fs_get_free_size     fsr_get_free_size
#define hal_fs_garbage_collect   fsr_garbage_collect
#define hal_fs_item_write 	     fsr_item_write
#define hal_fs_init              fsr_init
#define hal_fs_item_read         fsr_item_read
#define hal_fs_item_del          fsr_item_del
#define hal_fs_get_garbage_size  fsr_get_garbage_size
#define hal_fs_format  					 fsr_format

#else
#define hal_fs_get_free_size     hal_fs_get_free_size_pre
#define hal_fs_garbage_collect	 hal_fs_garbage_collect_pre
#define hal_fs_item_write 	 		 hal_fs_item_write_pre
#define hal_fs_init 						 hal_fs_init_pre
#define hal_fs_item_read         hal_fs_item_read_pre
#define hal_fs_item_del          hal_fs_item_del_pre
#define hal_fs_get_garbage_size  hal_fs_get_garbage_size_pre
#define hal_fs_format  					 hal_fs_format_pre

#endif

typedef enum
{
    ITEM_DEL    = 0x00,//zone is deleted
    ITEM_UNUSED = 0x03,//zone is free
    ITEM_USED   = 0x02,//zone is used
    ITEM_RESERVED = 0x01//to be extend
} item_pro;

typedef enum
{
    ITEM_SF = 0x03,//single frame file
    ITEM_MF_F = 0x01,//multiple frame file,first frame
    ITEM_MF_C   = 0x02,//multiple frame file,continue frame
    ITEM_MF_E = 0x00//multiple frame file,end frame
} item_frame;

typedef enum
{
    FLASH_UNCHECK = 0,//before analysis fs
    FLASH_NEW = 1,//new fs,its are 0xFF
    FLASH_ORIGINAL_ORDER = 2,//fs has data,its order is the original
    FLASH_NEW_ORDER = 3,//fs has data,its order is not the original
    FLASH_CONTEXT_ERROR = 4,//fs has data,but data is broken
} FS_FLASH_TYPE;

typedef enum
{
	SECTOR_DONE  = 0x00,//FF,
	SECTOR_DOING = 0x01,
}gc_flag;
/*
    file head struct:
    len(12bit)+frame(2bit)+pro(2bit)+id(16bit)
*/
typedef union
{
    struct
    {
        uint32_t id:16;//file id
        uint32_t pro:2;//file property
        uint32_t frame:2;//file frame
        uint32_t len:12;//file length
    } b;
    uint32_t reg;
} fs_item_t;

#if(FS_CACHE_NUM_MAX>0)

typedef struct
{
    uint16_t id[FS_CACHE_NUM_MAX];//fs cache id
    fsCachAddr_t addr[FS_CACHE_NUM_MAX];//fs cache addr
} fs_cache_t;
//static fs_cache_t fs_cache;
#endif

/*
    sector head struct:
    sector_addr(one word)+(ff+index+item_len+sector_num)(one word)+(0xffffffff)(one word)~(0xffffffff)(one word)
*/
typedef struct
{
    uint32_t sector_addr;//fs start address
    uint8_t  sector_num;//fs sector number
    uint8_t  item_len;//item length
    uint8_t  index;//sector index
    uint8_t  crc_en;//0xff: None; 0x01: CRC en
    uint8_t  gc_flag;//0x0:finish;0x1:doing
		uint8_t  cpy_flag;//0x0:finish;0x1:doing
	
    uint8_t  reserved[FS_ITEM_LEN-10];
} fs_cfg_t;



typedef struct
{
    fs_cfg_t    cfg;
    uint8_t current_sector;//free sector index
    uint8_t exchange_sector;//exchange sector,only use it when garbage collect
		uint8_t fs_init_flag;
	  uint8_t fs_psr_protection;
    uint16_t offset;//free position in free sector index
	
#if(FS_CACHE_NUM_MAX>0)
	  fs_cache_t fs_cache;
#endif
} fs_t;

typedef struct 
{
	uint8_t fail_m		:2;
	uint8_t fail_b		:2; 
	uint8_t init_count :4; 		
}fs_error_status;

typedef struct
{
	fs_t fs_m;
	fs_t fs_b;
	fs_error_status erro_sta;
	uint16_t sector_size;
	uint8_t sec_num;
	uint32_t start_addr;
	uint32_t backup_addr;	
}fs_raid_t;


//please do not modify the following parameters
#define FS_ITEM_HEAD_LEN                          4
#define FS_ITEM_DATA_LEN                          (FS_ITEM_LEN - FS_ITEM_HEAD_LEN)
#define FS_SECTOR_ITEM_NUM                        (4096/FS_ITEM_LEN - 1)
#define FS_SECTOR_NUM_BUFFER_SIZE                 (312/4)
#define FS_ABSOLUTE_ADDR(offset)                  (pg_fs->cfg.sector_addr + offset)


/**************************************************************************************
    @fn          hal_fs_init

    @brief       initialize fs.
                if fs is new,use fs_start_address and sector_num to config fs.
                if fs is not new,read fs every sector head data and check with fs_start_address and sector_num,
                if same,the fs is valid,else is invalid.

    input parameters

    @param       fs_addr:
                fs zone start address,4Kbyte align.
                fs zone should not cover phy code and app code.

                sector_num:
                fs zone sector number,one sector = 4Kbyte,its minimal size is 2.
                fs zone should not cover phy code and app code.

    output parameters

    @param       None.

    @return
                            PPlus_SUCCESS                               fs init success.
                            PPlus_ERR_FS_UNINITIALIZED  fs has not been inited.
                            PPlus_ERR_INVALID_PARAM         parameter error,check your parameter.
                            PPlus_ERR_FS_CONTEXT                fs has data but different with your parameter.
                            PPlus_ERR_FS_WRITE_FAILED       flash cannot write.
                            PPlus_ERR_FS_RESERVED_ERROR reserved error.
 **************************************************************************************/
int hal_fs_init_pre(uint32_t fs_addr, uint8_t sect_num);

/**************************************************************************************
    @fn          hal_fs_item_read

    @brief       read a file from fs.

    input parameters

    @param       id:file id,it should be unique.

                buf:file buf to be read.

                buf_len:file buf len.

                len:*len is the file length after read from fs.

    output parameters

    @param       None.

    @return
                            PPlus_SUCCESS                                   file write success.
                            PPlus_ERR_FS_IN_INT                     write later beyond int processing.
                            PPlus_ERR_FS_UNINITIALIZED      fs has not been inited.
                            PPlus_ERR_FS_PARAMETER              parameter error,check it.
                            PPlus_ERR_FS_BUFFER_TOO_SMALL   buf is too small.
                            PPlus_ERR_FS_NOT_FIND_ID            there is no this file in fs.
 **************************************************************************************/
int hal_fs_item_read_pre(uint16_t id,uint8_t* buf,uint16_t buf_len,uint16_t* len);

/**************************************************************************************
    @fn          hal_fs_item_write

    @brief       write a file to fs.

    input parameters

    @param       id:file id,it should be unique.

                buf:file buf.

                len:file length.

    output parameters

    @param       None.

    @return
                            PPlus_SUCCESS                                   file write success
                            PPlus_ERR_FS_IN_INT                     write later beyond int processing
                            PPlus_ERR_FS_UNINITIALIZED      fs has not been inited
                            PPlus_ERR_FS_PARAMETER              parameter error,check it
                            PPlus_ERR_FS_NOT_ENOUGH_SIZE    there is not enouth size to write this file
                            PPlus_ERR_FATAL                             there is a same id file,when delete it,occur a error
 **************************************************************************************/
int hal_fs_item_write_pre(uint16_t id,uint8_t* buf,uint16_t len);


/**************************************************************************************
    @fn          hal_fs_list

    @brief       get file number, file id and size.

    input parameters

    @param       None.

    output parameters

    @param       None.

    @return
    @return
                            PPlus_SUCCESS                                   file write success
                            PPlus_ERR_FS_IN_INT                     write later beyond int processing
                            PPlus_ERR_FS_UNINITIALIZED      fs has not been inited
                            PPlus_ERR_FS_PARAMETER              parameter error,check it
                            PPlus_ERR_FS_NOT_ENOUGH_SIZE    there is not enouth size to write this file
                            PPlus_ERR_FATAL                             there is a same id file,when delete it,occur a error
 **************************************************************************************/
int hal_fs_list(uint32_t* fnum, uint16_t* pfid, uint16_t* pfsize);

/**************************************************************************************
    @fn          hal_fs_get_size

    @brief       get total size, free size, max filesize, unit size, sector number.

    input parameters

    @param       None.

    output parameters

    @param       None.

    @return
    @return
                          PPlus_SUCCESS                                   file write success
                          PPlus_ERR_FS_IN_INT                     write later beyond int processing
                          PPlus_ERR_FS_UNINITIALIZED      fs has not been inited
                          PPlus_ERR_FS_PARAMETER              parameter error,check it
                          PPlus_ERR_FS_NOT_ENOUGH_SIZE    there is not enouth size to write this file
                          PPlus_ERR_FATAL                             there is a same id file,when delete it,occur a error
 **************************************************************************************/
int hal_fs_get_size(uint32_t* fs_size, uint32_t* free_size,
                    uint32_t* fsize_max, uint8_t* item_size, uint8_t* sector_num);


/**************************************************************************************
    @fn          hal_fs_get_free_size

    @brief       get fs free size.
                just file data not include file head.
                for example,16bytes=4byte+12byte,free size is 12byte.

    input parameters

    @param       None.

    output parameters

    @param       free_size.

    @return
    @return
                            PPlus_SUCCESS                                   file write success
                            PPlus_ERR_FS_IN_INT                     write later beyond int processing
                            PPlus_ERR_FS_UNINITIALIZED      fs has not been inited
                            PPlus_ERR_FS_PARAMETER              parameter error,check it
                            PPlus_ERR_FS_NOT_ENOUGH_SIZE    there is not enouth size to write this file
                            PPlus_ERR_FATAL                             there is a same id file,when delete it,occur a error
 **************************************************************************************/
int hal_fs_get_free_size_pre(uint32_t* free_size);

/**************************************************************************************
    @fn          hal_fs_get_garbage_size

    @brief       get fs garbage size.
                some deleted files is in garbage,its size is garbage sise.
                only after garbage collect the garbage will be released to free.
                just file data not include file head.
                for example,16bytes=4byte+12byte,garbage size is 12byte.

    input parameters

    @param       None.

    output parameters

    @param       garbage_file_num:deleted file number

    @return
                            garbage size
 **************************************************************************************/
int hal_fs_get_garbage_size_pre(uint32_t* garbage_file_num);
/**************************************************************************************
    @fn          hal_fs_item_del

    @brief       delete a file from fs.

    input parameters

    @param       id:file id,it should be unique.

    output parameters

    @param       None.

    @return
                            PPlus_SUCCESS                                   file delete success
                            PPlus_ERR_FS_IN_INT                     delete later beyond int processing
                            PPlus_ERR_FS_UNINITIALIZED      fs has not been inited
                            PPlus_ERR_FS_NOT_FIND_ID            not find this file in fs
 **************************************************************************************/
int hal_fs_item_del_pre(uint16_t id);

/**************************************************************************************
    @fn          hal_fs_garbage_collect

    @brief       release all deleted file zone to free

    input parameters

    @param       None.

    output parameters

    @param       None.

    @return
                            PPlus_SUCCESS                                   collect success
                            PPlus_ERR_FS_IN_INT                     delete later beyond int processing
                            PPlus_ERR_FS_UNINITIALIZED      fs has not been inited
                            PPlus_ERR_FS_WRITE_FAILED           flash cannot write.
                            PPlus_ERR_FS_UNINITIALIZED    fs has not been inited.
                            PPlus_ERR_FS_CONTEXT                    fs has data but different with your parameter.
                            PPlus_ERR_FS_RESERVED_ERROR     reserved error.
 **************************************************************************************/
int hal_fs_garbage_collect_pre(void);

/**************************************************************************************
    @fn          hal_fs_format

    @brief       format fs.all fs data will be clean.

    input parameters

    @param       fs_start_address:
                fs zone start address,4Kbyte align.
                fs zone should not cover phy code and app code.

                sector_num:
                fs zone sector number,one sector = 4Kbyte,its minimal size is 3.
                fs zone should not cover phy code and app code.

    output parameters

    @param       None.

    @return
                            PPlus_SUCCESS                               fs format and init success.
                            PPlus_ERR_FS_IN_INT         delete later beyond int processing
                            PPlus_ERR_FS_UNINITIALIZED  fs has not been inited.
                            PPlus_ERR_INVALID_PARAM         parameter error,check your parameter.
                            PPlus_ERR_FS_CONTEXT                fs has data but different with your parameter.
                            PPlus_ERR_FS_WRITE_FAILED       flash cannot write.
                            PPlus_ERR_FS_RESERVED_ERROR reserved error.
 **************************************************************************************/
int hal_fs_format_pre(uint32_t fs_start_address,uint8_t sector_num);

/**************************************************************************************
    @fn          hal_fs_initialized

    @brief       fs has been initialized or not.
                if not,fs is disable,please use hal_fs_init to initialize it.

    input parameters

    @param           none.

    output parameters

    @param       None.

    @return
                TRUE
                FALSE
 **************************************************************************************/
bool hal_fs_initialized(void);

void hal_fs_ctx(fs_t* pfs);

// set fs psr protection
void fs_set_psr_protection(bool enable);
int hal_fs_item_find_id(uint16_t id, uint32_t* id_addr);
int hal_fs_item_id_fading(uint16_t id, uint16_t new_id);
int hal_fs_item_assert(uint16_t id);
void fs_erase_ucds_one_sector(uint32_t addr_erase);

void fs_erase_ucds_all_sector(uint32_t start_addr);
int fs_spif_write(uint32_t addr,uint8_t* value,uint32_t len);
uint32_t fs_spif_read(uint32_t addr,uint8_t* buf,uint32_t len);
int hal_fs_init_pre(uint32_t fs_start_address,uint8_t sector_num);

#endif

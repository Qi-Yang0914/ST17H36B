
/*******************************************************************************
    @file     fs.c
    @brief    Contains all functions support for spi driver
    @version  0.0
    @date     18. Oct. 2017
    @author



*******************************************************************************/
#include "rom_sym_def.h"
#include "OSAL.h"
#include "fs.h"
#include "flash.h"
#include "error.h"
#include "log.h"
//#include "cliface.h"

#if(FS_CRC_EN==1)
    #include "crc16.h"
#endif

extern void * memcpy ( void * destination, const void * source, size_t num );

fs_t *pg_fs = NULL;
fs_t fs_ctx;

//#define FS_DBG_TRIGGER
#ifdef FS_DBG_TRIGGER

    uint32_t _pos  =  0;
    uint8_t _cnt_trigger  = 0;
    uint8_t _cnt = 0;

//    #define __fs_break(pos) {if(fs_break_pos == pos){if(fs_break_cnt==fs_break_cnt_trigger) NVIC_SystemReset(); fs_break_cnt ++;}}

/* force reset*/
void __fs_break(uint32_t pos)
 {
		if(_pos == pos){if(_cnt==_cnt_trigger) NVIC_SystemReset(); _cnt++;}
 }
 /*incorrect data destory */
 int __fs_data_destory(uint32_t pos)
 {
		if(_pos == pos){_cnt++; if(_cnt==_cnt_trigger) {_cnt =0; return 1;} }
 }
    //#define __fs_break(pos, cnt) {if(fs_break_pos == pos){if(fs_break_cnt==fs_break_cnt_trigger && cnt >0) while(1){;} fs_break_cnt ++;}}

#else
    #define __fs_break(pos)
#endif

typedef enum
{
    SEARCH_FREE_ITEM = 0,
    SEARCH_APPOINTED_ITEM = 1,
    SEARCH_DELETED_ITEMS = 2,
} search_type;


// extern uint32_t __psr(void);//check if in int process
// inline uint32_t __psr(void)
// {
//     uint32_t i;
//     __asm__ __volatile__
//     (
//         "\tmrs    %0, psr"
//         : "=r" (i)
//         :
//         : "memory");
//     return i;
// }

void fs_set_psr_protection(bool enable)
{
    pg_fs->fs_psr_protection=enable;
}

static uint32_t fs_check_psr(void)
{
    // if(pg_fs->fs_psr_protection)
    //     return(__psr());

    return 0;
}

void fs_erase_ucds_all_sector(uint32_t start_addr)
{
    int i;

    for(i=0; i<pg_fs->cfg.sector_num; i++)
        hal_flash_erase_sector(start_addr + (i*4096));
}

void fs_erase_ucds_one_sector(uint32_t addr_erase)
{
    hal_flash_erase_sector(addr_erase);
}

int fs_spif_write(uint32_t addr,uint8_t* value,uint32_t len)
{
    uint8_t retval;
	
    // len need 4bytes aligned
    if (len % 4)
    {
        len += 4 - len % 4;
    }
    retval = hal_flash_write(addr,value,len);
    return retval;
}

uint32_t fs_spif_read(uint32_t addr,uint8_t* buf,uint32_t len)
{
    memcpy(buf, (void *)addr, len);
    return 0;
    // return( hal_flash_read(addr,buf) );
}

static void check_addr(uint32_t* addr)
{
    if((*addr % 4096) == 0)
    {
        *addr += sizeof(fs_cfg_t);

        if(*addr >= 4096 * pg_fs->cfg.sector_num)
            *addr -= 4096 * pg_fs->cfg.sector_num;
    }
}

#if(FS_CACHE_NUM_MAX>0)
static void fs_addr_cache_init(void)
{
    for(int i=0; i<FS_CACHE_NUM_MAX; i++)
    {
        pg_fs->fs_cache.addr[i]=FS_ADDR_NULL;
        pg_fs->fs_cache.id[i]=FS_ID_NULL;
    }
}

static int fs_addr_cache_search(uint32_t id,uint32_t* addr)
{
    if(id == FS_ID_NULL)
        return PPlus_ERR_FSCACHE_INVALID_ID;

    for(int i=0; i<FS_CACHE_NUM_MAX; i++)
    {
        if(id==pg_fs->fs_cache.id[i] && pg_fs->fs_cache.addr[i]!=FS_ADDR_NULL)
        {
            *addr =(uint32_t)pg_fs->fs_cache.addr[i];
            if((*addr)%0x1000 == 0) *addr += FS_ITEM_LEN;
            FS_CACH_LOG("SCH OK ID %04x %08x\r\n",pg_fs->fs_cache.id[i],pg_fs->fs_cache.addr[i]);
            return PPlus_SUCCESS;
        }
    }

    FS_CACH_LOG("SCH FAIL ID %04x\r\n",id);
    return PPlus_ERR_FSCACHE_ID_NOT_FOUND;
}
static int fs_addr_cache_sync(uint32_t id,uint32_t addr)
{
    if(id == FS_ID_NULL)
        return PPlus_ERR_FSCACHE_INVALID_ID;

    //search for exsited id
    for(int i=0; i<FS_CACHE_NUM_MAX; i++)
    {
        if(id==pg_fs->fs_cache.id[i])
        {
            pg_fs->fs_cache.addr[i]=(fsCachAddr_t)addr;

            //del existed id
            if(addr == FS_ADDR_NULL)
            {
                pg_fs->fs_cache.id[i]=FS_ID_NULL;
            }

            FS_CACH_LOG("SYNC OLD ID %04x %08x\r\n",pg_fs->fs_cache.id[i],pg_fs->fs_cache.addr[i]);
            return PPlus_SUCCESS;
        }
    }

    //add new id
    for(int i=0; i<FS_CACHE_NUM_MAX; i++)
    {
        if(FS_ID_NULL==pg_fs->fs_cache.id[i])
        {
            pg_fs->fs_cache.id[i]=id;
            pg_fs->fs_cache.addr[i]=(fsCachAddr_t)addr;
            FS_CACH_LOG("SYNC NEW ID %04x %08x\r\n",pg_fs->fs_cache.id[i],pg_fs->fs_cache.addr[i]);
            return PPlus_SUCCESS;
        }
    }

    FS_CACH_LOG("SYNC FAIL ID %04x\r\n",id);
    return PPlus_ERR_FSCACHE_SYNC_ID_FAIL;
}
void dbg_show_fs_cache(void)
{
    LOG("-----dbg_show_fs_cache------\n");

    for(int i=0; i<FS_CACHE_NUM_MAX; i++)
    {
        LOG("[%03d]%04x:%08x\n",i,pg_fs->fs_cache.id[i],pg_fs->fs_cache.addr[i]);
    }
}
#endif
static int fs_search_items(search_type type,uint32_t* para1,uint32_t* para2)
{
    uint8_t m,n;
    uint16_t j,g_offset = 1;
    uint16_t file_len = 0;
    uint8_t boundary =0;
    uint32_t sector_addr,ab_addr;
    uint32_t j_tmp = 0;
    fs_item_t i1;
    bool from_last_sector = false;

    for(m = 1; m < pg_fs->cfg.sector_num; m++)
    {
        n = (m + pg_fs->exchange_sector) % pg_fs->cfg.sector_num;

        if(g_offset > FS_SECTOR_ITEM_NUM)
        {
//            g_offset -= FS_SECTOR_ITEM_NUM;

//            if(g_offset >= FS_SECTOR_ITEM_NUM)
//            {
                g_offset -= FS_SECTOR_ITEM_NUM;
                continue;
//            }
        }

        if(SEARCH_FREE_ITEM == type)
            pg_fs->current_sector = (m + pg_fs->exchange_sector) % pg_fs->cfg.sector_num;

        sector_addr = n * 4096;
        j_tmp = j;
        for(j = 1; j <= FS_SECTOR_ITEM_NUM; j++)
        {
            if(from_last_sector == true)
            {
                from_last_sector = false;
                j += g_offset;
            }
            else
            {
                boundary = (j_tmp > FS_SECTOR_ITEM_NUM)? boundary : 0;
                if(g_offset > 1)
                {
                    if((j - 2 + g_offset) < FS_SECTOR_ITEM_NUM)
                    {
                        j = j - 1 + g_offset + boundary;
                    }
                    else
                    {
                        g_offset -= (FS_SECTOR_ITEM_NUM + 2 - j);
                        from_last_sector = true;
                        break;
                    }
                }
            }
            boundary = 0;
            ab_addr = sector_addr + j*FS_ITEM_LEN;

            if(ab_addr%0x1000 == 0) { ab_addr += FS_ITEM_LEN; boundary=1;}
            fs_spif_read(FS_ABSOLUTE_ADDR(ab_addr),(uint8_t*)&i1,FS_ITEM_HEAD_LEN);

            switch(type)
            {
            case SEARCH_FREE_ITEM:
            {
                switch(i1.b.pro)
                {
                case ITEM_DEL:
                case ITEM_USED:
                {
                    file_len = i1.b.len + FS_CRC_FIELD;

                    if(i1.b.frame == ITEM_MF_F)
                        g_offset = (file_len/FS_ITEM_DATA_LEN) + ((file_len % FS_ITEM_DATA_LEN)?1:0) + boundary;
                    else
                        g_offset = 1;
                }
                break;

                case ITEM_UNUSED:
                    *para1 = ab_addr%4096;
                    return PPlus_SUCCESS;

                default:
                    break;
                }
            }
            break;

            case SEARCH_APPOINTED_ITEM:
            {
                switch(i1.b.pro)
                {
                case ITEM_DEL:
                case ITEM_USED:
                    if((ITEM_USED == i1.b.pro) && (i1.b.id == (uint16)(*para1)))
                    {
                        *para2 = ab_addr;
                        return PPlus_SUCCESS;
                    }
                    else
                    {
                        file_len = i1.b.len + FS_CRC_FIELD;

                        if(i1.b.frame == ITEM_MF_F)
                            g_offset = (file_len / FS_ITEM_DATA_LEN) + ((file_len % FS_ITEM_DATA_LEN)?1:0) + boundary;
                        else
                            g_offset = 1;
                    }

                    break;

                case ITEM_UNUSED:
                    return PPlus_ERR_FS_NOT_FIND_ID;//break;//

                default:
                    break;
                }
            }
            break;

            case SEARCH_DELETED_ITEMS:
            {
                switch(i1.b.pro)
                {
                case ITEM_DEL:
                {
                    if(i1.b.frame == ITEM_MF_F)
                    {
                        file_len = i1.b.len + FS_CRC_FIELD;
                        g_offset = (file_len/FS_ITEM_DATA_LEN) + ((file_len % FS_ITEM_DATA_LEN)?1:0);
                        *para1 += g_offset*FS_ITEM_DATA_LEN;
                    }
                    else
                    {
                        g_offset = 1;
                        *para1 += FS_ITEM_DATA_LEN;
                    }

                    *para2 += 1;
                }
                break;

                case ITEM_USED:
                {
                    if(i1.b.frame == ITEM_MF_F)
                    {
                        file_len = i1.b.len + FS_CRC_FIELD;
                        g_offset = (file_len/FS_ITEM_DATA_LEN) + ((file_len % FS_ITEM_DATA_LEN)?1:0) + boundary;
                    }
                    else
                    {
                        g_offset = 1;
                    }
                }
                break;

                case ITEM_UNUSED:
                    return PPlus_SUCCESS;

                default:
                    break;
                }
            }
            break;

            default:
                return PPlus_ERR_INVALID_PARAM;
            }
        }
    }

    switch(type)
    {
    case SEARCH_FREE_ITEM:
        return PPlus_ERR_FS_FULL;

    case SEARCH_APPOINTED_ITEM:
        return PPlus_ERR_FS_NOT_FIND_ID;

    default:
        return PPlus_SUCCESS;
    }
}

static int fs_get_free_item(void)
{
    int ret;
    uint32_t posiztion = 0;

    if(pg_fs->fs_init_flag == false)
        return  PPlus_ERR_FS_UNINITIALIZED;

    ret = fs_search_items(SEARCH_FREE_ITEM,&posiztion,0);

    if(PPlus_SUCCESS == ret)
    {
        pg_fs->offset = posiztion;
    }
    else if(PPlus_ERR_FS_FULL == ret)
    {
        pg_fs->offset = 4096;
    }

    return ret;
}

static int fs_init(void)
{
    uint8_t i = 0,sector_order[FS_SECTOR_NUM_BUFFER_SIZE],ret = PPlus_ERR_FS_UNINITIALIZED;
    FS_FLASH_TYPE flash = FLASH_UNCHECK;
    fs_cfg_t flash_rd_cfg;

	  pg_fs->cfg.gc_flag = 0xff;
		pg_fs->cfg.cpy_flag = 0xff;
    pg_fs->cfg.index = 0xff;
    pg_fs->cfg.item_len = FS_ITEM_LEN;
    pg_fs->cfg.crc_en = (FS_CRC_EN==1)? 1: 0xff;
    osal_memset((pg_fs->cfg.reserved),0xff,(FS_ITEM_LEN-7)*sizeof(uint8_t));
    osal_memset((sector_order),0x00,FS_SECTOR_NUM_BUFFER_SIZE);
    FS_LOG("fs_init:\n");

    for(i = 0; i < pg_fs->cfg.sector_num; i++)
    {
        fs_spif_read(FS_ABSOLUTE_ADDR(4096*i),(uint8_t*)(&flash_rd_cfg),sizeof(fs_cfg_t));
        FS_LOG("flash_rd_cfg.sector_addr:%x\n",flash_rd_cfg.sector_addr);
        FS_LOG("flash_rd_cfg.sector_num:%x\n",flash_rd_cfg.sector_num);
        FS_LOG("flash_rd_cfg.item_len:%x\n",flash_rd_cfg.item_len);
        FS_LOG("flash_rd_cfg.index:%x\n",flash_rd_cfg.index);

        if((flash_rd_cfg.sector_addr == pg_fs->cfg.sector_addr) &&
                (flash_rd_cfg.sector_num == pg_fs->cfg.sector_num) &&
                (flash_rd_cfg.item_len == pg_fs->cfg.item_len))
				
        {
            if(flash_rd_cfg.index < (pg_fs->cfg.sector_num - 1))
            {
                if(i == flash_rd_cfg.index)
                {
                    flash = FLASH_ORIGINAL_ORDER;
                    FS_LOG("FLASH_ORIGINAL_ORDER\n");
                }
                else
                {
                    flash = FLASH_NEW_ORDER;
                    FS_LOG("FLASH_NEW_ORDER\n");
                }

                sector_order[i] = flash_rd_cfg.index;
                pg_fs->cfg.index = flash_rd_cfg.index;	
            }
            else
            { 
                flash = FLASH_CONTEXT_ERROR;
                FS_LOG("FLASH_CONTEXT_ERROR1\n");
                break;
            }
        }
        else if((flash_rd_cfg.sector_addr == 0xffffffff) &&
                (flash_rd_cfg.sector_num == 0xff) &&
                (flash_rd_cfg.item_len == 0xff))
        {
            sector_order[i] = 0xff;
        }
        else
        {
            flash = FLASH_CONTEXT_ERROR;
            FS_LOG("FLASH_CONTEXT_ERROR2\n");
            break;
        }
    }

    if(flash == FLASH_CONTEXT_ERROR)
    {
        return PPlus_ERR_FS_CONTEXT;
    }

    if(pg_fs->cfg.index == 0xff)
        flash = FLASH_NEW;

    if(flash == FLASH_NEW)
    {
        for(i = 0; i < (pg_fs->cfg.sector_num - 1); i++)
        {
            pg_fs->cfg.index = i;
            if(PPlus_SUCCESS != fs_spif_write((FS_ABSOLUTE_ADDR(4096*i)),(uint8_t*)(&(pg_fs->cfg)),sizeof(fs_cfg_t)))
            {
                FS_LOG("PPlus_ERR_FS_WRITE_FAILED\n");
                return PPlus_ERR_FS_WRITE_FAILED;
            }
        }

        pg_fs->current_sector = 0;
        pg_fs->exchange_sector = pg_fs->cfg.sector_num - 1;
        pg_fs->offset = sizeof(fs_cfg_t);
        pg_fs->fs_init_flag = TRUE;
    }
    else
    {
        for(i = 0; i < pg_fs->cfg.sector_num; i++)
        {
            if(sector_order[i] == 0)
                break;
        }

        if(i < pg_fs->cfg.sector_num)
        {
            pg_fs->exchange_sector = (i + pg_fs->cfg.sector_num - 1) % pg_fs->cfg.sector_num;
            pg_fs->fs_init_flag = TRUE;
            ret = fs_get_free_item();

            if((ret != PPlus_ERR_FS_FULL) && (ret != PPlus_SUCCESS))
            {
                FS_LOG("PPlus_ERR_FS_RESERVED_ERROR\n");
                return PPlus_ERR_FS_RESERVED_ERROR;
            }
        }
    }

    #if(FS_CACHE_NUM_MAX>0)
    fs_addr_cache_init();
    #endif
    FS_LOG("PPlus_SUCCESS\n");
    return PPlus_SUCCESS;
}

int hal_fs_get_free_size_pre(uint32_t* free_size)
{
    uint32_t size = 0;
    *free_size = 0;

    if(pg_fs->fs_init_flag == false)
    {
			 // CLIT_output("[%d, 0]",pg_fs->fs_init_flag);
        return PPlus_ERR_FS_UNINITIALIZED;
    }
		 
    if(pg_fs->offset < 4096)
    {
        size = ((pg_fs->exchange_sector + pg_fs->cfg.sector_num - pg_fs->current_sector - 1)%pg_fs->cfg.sector_num)*(4096-sizeof(fs_cfg_t));
        size += (4096 - pg_fs->offset);
        size = size*FS_ITEM_DATA_LEN/FS_ITEM_LEN;
    }
    *free_size = size;
    return PPlus_SUCCESS;
}

int hal_fs_get_garbage_size_pre(uint32_t* garbage_file_num)
{
    uint32_t garbage_size = 0,garbage_count = 0;
    int ret;

    if(pg_fs->fs_init_flag == false)
        return  PPlus_ERR_FS_UNINITIALIZED;

    ret = fs_search_items(SEARCH_DELETED_ITEMS,&garbage_size,&garbage_count);

    if(PPlus_SUCCESS == ret)
    {
        if(NULL != garbage_file_num)
            *garbage_file_num = garbage_count;

        return garbage_size;
    }

    return PPlus_ERR_FATAL;
}

int hal_fs_item_find_id(uint16_t id,uint32_t* id_addr)
{
    int ret;
    uint32_t file_id = 0;

    if(pg_fs->fs_init_flag == false)
        return  PPlus_ERR_FS_UNINITIALIZED;

    file_id = id & 0xffff;
    #if(FS_CACHE_NUM_MAX>0)

    if(PPlus_SUCCESS==fs_addr_cache_search(file_id,id_addr))
    {
        return PPlus_SUCCESS;
    }

    #endif
    ret = fs_search_items(SEARCH_APPOINTED_ITEM,&file_id,id_addr);
    #if(FS_CACHE_NUM_MAX>0)

    if(ret==PPlus_SUCCESS)
    {
        uint32_t addr = *id_addr;
        fs_addr_cache_sync(file_id, addr);
    }

    #endif
    return ret;
}


int hal_fs_item_write_pre(uint16_t id,uint8_t* buf,uint16_t len)
{
    uint8_t frame_len,wr_buf[FS_ITEM_LEN];
    uint16_t i,write_len;
    uint32_t addr;
    fs_item_t i1;
    uint32_t free_size;
    #if(FS_CRC_EN == 1)
    uint8_t crc_buf[2*FS_ITEM_DATA_LEN];
    uint16_t crc = crc16(0, buf, len);
    #endif

    if(fs_check_psr()&0x3f)
    {
        return PPlus_ERR_FS_IN_INT;
    }

    if(pg_fs->fs_init_flag == false)
    {
        return PPlus_ERR_FS_UNINITIALIZED;
    }

    if((buf == NULL) || (len == 0)||(len > 4095))
        return PPlus_ERR_FS_PARAMETER;

    hal_fs_get_free_size_pre(&free_size);

    if(len + FS_CRC_FIELD > free_size)
        return PPlus_ERR_FS_NOT_ENOUGH_SIZE;

    //if(hal_fs_item_find_id(id,&addr) == PPlus_SUCCESS)
    //  return PPlus_ERR_FS_EXIST_SAME_ID;
		
    if(hal_fs_item_find_id(id,&addr) == PPlus_SUCCESS)
    {
        if(PPlus_SUCCESS != hal_fs_item_del_pre(id))
            return PPlus_ERR_FATAL;
    }

    write_len = len + FS_CRC_FIELD;
    i1.b.len = len;
    i1.b.id = id;
    i1.b.pro = ITEM_USED;

    if(len <= FS_ITEM_DATA_LEN)
        i1.b.frame = ITEM_SF;

    i = 0;
    #if(FLASH_PROTECT_FEATURE == 1)
    hal_flash_disable_lock(FS_ITEM_WRITE);
    #endif

    while(write_len > 0)
    {
				#if(FS_CACHE_NUM_MAX>0)
				//update fs_addr_cache
				if(i==0 && len> 0)
					fs_addr_cache_sync(id,(pg_fs->current_sector * 4096) + pg_fs->offset);
				#endif
				
        if(write_len > FS_ITEM_DATA_LEN)
        {
            if(write_len == len + FS_CRC_FIELD)
                i1.b.frame = ITEM_MF_F;
            else
                i1.b.frame = ITEM_MF_C;

            frame_len = FS_ITEM_DATA_LEN;
            write_len -= FS_ITEM_DATA_LEN;
        }
        else
        {
            if((i1.b.frame == ITEM_MF_C) || (i1.b.frame == ITEM_MF_F))
                i1.b.frame = ITEM_MF_E;

            frame_len = write_len;
            write_len = 0;
        }

        addr = FS_ABSOLUTE_ADDR((pg_fs->current_sector * 4096) + pg_fs->offset);
        osal_memcpy(wr_buf,(uint8_t*)(&i1.reg),FS_ITEM_HEAD_LEN);
        #if(FS_CRC_EN == 1)

        if(len <= frame_len)
        {
            if( len > 0)
            {
                osal_memcpy(crc_buf,(buf + i),frame_len);
                crc_buf[len] = (uint8_t)(crc & 0xff);
                crc_buf[len + 1] = (uint8_t)((crc>>8) & 0xff);
                i = 0;
            }

            len = 0;
            osal_memcpy((wr_buf + FS_ITEM_HEAD_LEN),(crc_buf + i),frame_len);
        }
        else
        {
            osal_memcpy((wr_buf + FS_ITEM_HEAD_LEN),(buf + i),frame_len);
            len -= frame_len;
        }

        #else
        osal_memcpy((wr_buf + FS_ITEM_HEAD_LEN),(buf + i),frame_len);
        #endif

        if(PPlus_SUCCESS != fs_spif_write(addr,wr_buf,(frame_len+FS_ITEM_HEAD_LEN)))
        {
            #if(FLASH_PROTECT_FEATURE == 1)
            hal_flash_enable_lock(FS_ITEM_WRITE);
            #endif
            return PPlus_ERR_FS_WRITE_FAILED;
        }
        
//        #if(FS_CACHE_NUM_MAX>0)

//        //update fs_addr_cache
//        if(len>0 && (len<=frame_len))//(i==0 && len> 0)
//            fs_addr_cache_sync(id,(pg_fs->current_sector * 4096) + pg_fs->offset);
//        #endif
        i += frame_len;
        pg_fs->offset += FS_ITEM_LEN;

        if(pg_fs->offset == 4096)
        {
            if(((pg_fs->current_sector + 1) % pg_fs->cfg.sector_num) != pg_fs->exchange_sector)
            {
                pg_fs->offset = sizeof(fs_cfg_t);
                pg_fs->current_sector = (pg_fs->current_sector + 1) % pg_fs->cfg.sector_num;
            }
        }
    }

    #if(FLASH_PROTECT_FEATURE == 1)
    hal_flash_enable_lock(FS_ITEM_WRITE);
    #endif
    return PPlus_SUCCESS;
}

int hal_fs_item_read_pre(uint16_t id,uint8_t* buf,uint16_t buf_len,uint16_t* len)
{
    uint8_t rd_len;
    uint16_t i = 0,temp_len;
    uint32_t addr;
    fs_item_t i1;

    if(fs_check_psr()&0x3f)
    {
        return PPlus_ERR_FS_IN_INT;
    }

    if(pg_fs->fs_init_flag == false)
        return PPlus_ERR_FS_UNINITIALIZED;

    if((buf == NULL) || (buf_len == 0))
        return PPlus_ERR_FS_PARAMETER;

    if(hal_fs_item_find_id(id,&addr) == PPlus_SUCCESS)
    {
        fs_spif_read(FS_ABSOLUTE_ADDR(addr),(uint8_t*)&i1,FS_ITEM_HEAD_LEN);
        if(len != NULL)
        {
            *len = i1.b.len;
        }
        temp_len = i1.b.len;

        if(buf_len >= i1.b.len)
        {
            while(temp_len > 0)
            {
                rd_len = (temp_len >= FS_ITEM_DATA_LEN) ? FS_ITEM_DATA_LEN : temp_len;
                fs_spif_read(FS_ABSOLUTE_ADDR(addr + FS_ITEM_HEAD_LEN),(buf + i),rd_len);
                temp_len -= rd_len;
                #if(FS_CRC_EN == 1)

                if(temp_len == 0)
                {
                    uint8_t rd_offset = rd_len;
                    uint8_t fs_crc[2];
                    //figure buf crc
                    uint16_t buf_crc = crc16(0, buf, i1.b.len);

                    //get fs crc
                    if(rd_offset == FS_ITEM_DATA_LEN)
                    {
                        addr += FS_ITEM_LEN;
                        check_addr(&addr);
                        rd_offset = 0;
                    }

                    fs_spif_read(FS_ABSOLUTE_ADDR(addr + FS_ITEM_HEAD_LEN + rd_offset), fs_crc, 1);
                    rd_offset ++;

                    if(rd_offset == FS_ITEM_DATA_LEN)
                    {
                        addr += FS_ITEM_LEN;
                        check_addr(&addr);
                        rd_offset = 0;
                    }

                    fs_spif_read(FS_ABSOLUTE_ADDR(addr + FS_ITEM_HEAD_LEN + rd_offset), fs_crc+1, 1);

                    if((fs_crc[0] != (buf_crc & 0xff)) || (fs_crc[1] != ((buf_crc>>8) & 0xff)))
                    {
                        return PPlus_ERR_FS_CRC;
                    }
                }

                #endif /*FS_CRC_EN*/
                addr += FS_ITEM_LEN;
                i += rd_len;
                check_addr(&addr);
            }

            return PPlus_SUCCESS;
        }

        return PPlus_ERR_FS_BUFFER_TOO_SMALL;
    }

    return PPlus_ERR_FS_NOT_FIND_ID;
}

int hal_fs_item_set(uint16_t id, uint8_t pro, uint16_t new_id)
{
    uint16_t i = 0,count = 1;
    uint32_t addr = 0;
    uint16_t file_len = 0;
    fs_item_t i1;

    if(fs_check_psr()&0x3f)
    {
        return PPlus_ERR_FS_IN_INT;
    }

    if(pg_fs->fs_init_flag == FALSE)
        return PPlus_ERR_FS_UNINITIALIZED;

    if(hal_fs_item_find_id(id,&addr) == PPlus_SUCCESS)
    {
        fs_spif_read(FS_ABSOLUTE_ADDR(addr),(uint8_t*)&i1,FS_ITEM_HEAD_LEN);
        file_len = i1.b.len + FS_CRC_FIELD;
			
        count = file_len/FS_ITEM_DATA_LEN + ((file_len % FS_ITEM_DATA_LEN)?1:0);
        #if(FLASH_PROTECT_FEATURE == 1)
        hal_flash_disable_lock(FS_ITEM_DEL);
        #endif

        for(i = 0; i < count; i++)
        {
            fs_spif_read(FS_ABSOLUTE_ADDR(addr),(uint8_t*)&i1,FS_ITEM_HEAD_LEN);
            i1.b.pro &= pro;
            i1.b.id  &= new_id;

            if(PPlus_SUCCESS != fs_spif_write(FS_ABSOLUTE_ADDR(addr),(uint8_t*)(&i1.reg),FS_ITEM_HEAD_LEN))
            {
                #if (FLASH_PROTECT_FEATURE == 1)
                hal_flash_enable_lock(FS_ITEM_DEL);
                #endif
                return PPlus_ERR_FS_WRITE_FAILED;
            }

            addr += FS_ITEM_LEN;
            check_addr(&addr);
        }

        #if (FLASH_PROTECT_FEATURE == 1)
        hal_flash_enable_lock(FS_ITEM_DEL);
        #endif
        return PPlus_SUCCESS;
    }
    else
    {
        return PPlus_ERR_FS_NOT_FIND_ID;
    }
}

//debug interface
int hal_fs_item_assert(uint16_t id)
{
    int ret;
    uint32_t addr = 0;

    if(fs_check_psr()&0x3f)
    {
        return PPlus_ERR_FS_IN_INT;
    }

    if(pg_fs->fs_init_flag == FALSE)
        return PPlus_ERR_FS_UNINITIALIZED;

    if(hal_fs_item_find_id(id,&addr) == PPlus_SUCCESS)
    {
        #if(FLASH_PROTECT_FEATURE == 1)
        hal_flash_disable_lock(FS_ITEM_DEL);
        #endif
        //just do in 1st item
        {
            uint32_t data[3] = {0};
            ret = fs_spif_write(FS_ABSOLUTE_ADDR(addr + FS_ITEM_HEAD_LEN),(uint8_t*)(data),FS_ITEM_DATA_LEN);
        }
        #if (FLASH_PROTECT_FEATURE == 1)
        hal_flash_enable_lock(FS_ITEM_DEL);
        #endif
        return ret;
    }
    else
    {
        return PPlus_ERR_FS_NOT_FIND_ID;
    }
}


int hal_fs_item_id_fading(uint16_t id, uint16_t new_id)
{
    int ret = hal_fs_item_set(id, 0xff, new_id);
    #if(FS_CACHE_NUM_MAX>0)
    fs_addr_cache_sync(id,FS_ADDR_NULL);
    #endif
    return ret;
}

int hal_fs_item_del_pre(uint16_t id)
{
    int ret = hal_fs_item_set(id, ITEM_DEL, 0xffff);
    #if(FS_CACHE_NUM_MAX>0)

    if(ret == PPlus_SUCCESS)
        fs_addr_cache_sync(id,FS_ADDR_NULL);

    #endif
    return ret;
}


int hal_fs_garbage_collect_pre(void)
{
    uint8_t  i,j,buf[FS_ITEM_DATA_LEN];
    uint8_t from_sector_index = 0,to_sector_index = 0;
    uint32_t addr_rd=0,addr_wr=0,addr_erase;
    fs_item_t i1;

    if(fs_check_psr()&0x3f)
    {
        return PPlus_ERR_FS_IN_INT;
    }

    if(pg_fs->fs_init_flag == FALSE)
        return PPlus_ERR_FS_UNINITIALIZED;

    to_sector_index = pg_fs->exchange_sector;
    from_sector_index = (pg_fs->exchange_sector + 1) % pg_fs->cfg.sector_num;
    addr_wr = 4096*to_sector_index;
    #if(FLASH_PROTECT_FEATURE == 1)
    hal_flash_disable_lock(FS_GARBAGE_COLLECT);
    #endif

    for(i = 0; i < (pg_fs->cfg.sector_num - 1); i++)
    {
        addr_rd = 4096*((from_sector_index + i) % pg_fs->cfg.sector_num);
        addr_erase = addr_rd + pg_fs->cfg.sector_addr;
        pg_fs->cfg.index = i;

				pg_fs->cfg.gc_flag = SECTOR_DOING;//0x01
        if(PPlus_SUCCESS != fs_spif_write(FS_ABSOLUTE_ADDR((4096*((to_sector_index + i) % pg_fs->cfg.sector_num))),(uint8_t*)(&(pg_fs->cfg)),sizeof(fs_cfg_t)))
        {
            #if (FLASH_PROTECT_FEATURE == 1)
            hal_flash_enable_lock(FS_GARBAGE_COLLECT);
            #endif
            return PPlus_ERR_FS_WRITE_FAILED;
        }

        if(i == 0)
            addr_wr += sizeof(fs_cfg_t);

        addr_rd += sizeof(fs_cfg_t);

        for(j = 0; j < FS_SECTOR_ITEM_NUM; j++)
        {
            fs_spif_read(FS_ABSOLUTE_ADDR(addr_rd),(uint8_t*)&i1,FS_ITEM_HEAD_LEN);

            if(i1.b.pro == ITEM_USED)
            {
                fs_spif_read(FS_ABSOLUTE_ADDR(addr_rd + FS_ITEM_HEAD_LEN),buf,FS_ITEM_DATA_LEN);

                if(PPlus_SUCCESS != fs_spif_write(FS_ABSOLUTE_ADDR(addr_wr),(uint8_t*)(&i1.reg),FS_ITEM_HEAD_LEN))
                {
                    #if (FLASH_PROTECT_FEATURE == 1)
                    hal_flash_enable_lock(FS_GARBAGE_COLLECT);
                    #endif
                    return PPlus_ERR_FS_WRITE_FAILED;
                }

                if(PPlus_SUCCESS != fs_spif_write(FS_ABSOLUTE_ADDR(addr_wr + FS_ITEM_HEAD_LEN),buf,FS_ITEM_DATA_LEN))
                {
                    #if (FLASH_PROTECT_FEATURE == 1)
                    hal_flash_enable_lock(FS_GARBAGE_COLLECT);
                    #endif
                    return PPlus_ERR_FS_WRITE_FAILED;
                }

                addr_wr += FS_ITEM_LEN;
                check_addr(&addr_wr);
            }
            else if(i1.b.pro == ITEM_UNUSED)
            {
                break;
            }

            addr_rd += FS_ITEM_LEN;
        }
				
        fs_erase_ucds_one_sector(addr_erase);
				pg_fs->cfg.gc_flag = SECTOR_DONE;//0x00
				fs_spif_write(FS_ABSOLUTE_ADDR((4096*((to_sector_index + i) % pg_fs->cfg.sector_num))),(uint8_t*)&(pg_fs->cfg),sizeof(fs_cfg_t));
    }

    int ret = fs_init();
    #if(FLASH_PROTECT_FEATURE == 1)
    hal_flash_enable_lock(FS_GARBAGE_COLLECT);
    #endif
    return (ret);
}

void hal_fs_ctx(fs_t* pfs)
{
    pg_fs = pfs;
}

int hal_fs_format_pre(uint32_t fs_start_address,uint8_t sector_num)
{
    if(fs_check_psr()&0x3f)
    {
        return PPlus_ERR_FS_IN_INT;
    }

    pg_fs->fs_init_flag = FALSE;
    pg_fs->cfg.sector_num = sector_num;
    if((fs_start_address % 0x1000) || (sector_num < FS_SECTOR_NUM_MIN))
    {
        return PPlus_ERR_INVALID_PARAM;
    }

    #if(FLASH_PROTECT_FEATURE == 1)
    hal_flash_disable_lock(FS_FORMAT);
    #endif
    fs_erase_ucds_all_sector(fs_start_address);
    #if(FLASH_PROTECT_FEATURE == 1)
    hal_flash_enable_lock(FS_FORMAT);
    #endif
    return hal_fs_init_pre(fs_start_address,sector_num);
}

int hal_fs_init_pre(uint32_t fs_start_address,uint8_t sector_num)
{
    #if(FLASH_PROTECT_FEATURE == 1)
    hal_flash_disable_lock(FS_INIT);
    #endif
	
	  #ifndef FS_USE_RAID
		hal_fs_ctx(&fs_ctx);
	  #endif
	
    if(pg_fs->fs_init_flag == TRUE)
    {		
       return PPlus_ERR_FS_UNINITIALIZED;			
    }

    if((fs_start_address % 0x1000) || (sector_num < FS_SECTOR_NUM_MIN))
    {
       return PPlus_ERR_INVALID_PARAM;
    }

		pg_fs->cfg.sector_addr = fs_start_address;
		pg_fs->cfg.sector_num = sector_num;
		
		LOG("fs_init \n");
    int ret = fs_init();
    #if(FLASH_PROTECT_FEATURE == 1)
    hal_flash_enable_lock(FS_INIT);
    #endif
    return (ret);
}


bool hal_fs_initialized(void)
{
    return pg_fs->fs_init_flag;
}

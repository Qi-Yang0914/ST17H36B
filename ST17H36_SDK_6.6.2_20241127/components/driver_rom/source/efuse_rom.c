#include "types.h"
#include "mcu.h"
#include "clock.h"
#include "bus_dev.h"
#include "efuse.h"
#include "error.h"

/*
PPlus_ERR_ACCESS_REJECTED;->PPlus_SUCCESS
PPlus_ERR_UNINITIALIZED   ->PPlus_ERR_UNINITIALIZED
PPlus_ERR_INVALID_DATA    ->PPlus_ERR_INVALID_DATA
PPlus_SUCCESS             ->PPlus_SUCCESS
*/

int efuse_lock(EFUSE_block_bit_t block)
{
	int ret = 0;
	uint32_t temp_rd[1];
	for(int i=0; i<4; i++)
	{
		if(block & BIT(i))
		{
			ret = efuse_read((EFUSE_block_t)i, temp_rd);

			if(ret == PPlus_ERR_ACCESS_REJECTED)
				return PPlus_SUCCESS;
			else if(ret == PPlus_SUCCESS)	
				efuse_efuse_security_set(~BIT(i));		
		}
	}

	return ret;
}

bool efuse_get_lock_state(EFUSE_block_t block)
{
	return (efuse_efuse_security_get() & BIT(block))?FALSE:TRUE;
}

int efuse_write(EFUSE_block_t block, uint32_t* buf)
{
	int ret = 0;
	uint32_t temp_rd[1];
	
	if(efuse_get_lock_state(block) == TRUE)
		return PPlus_ERR_ACCESS_REJECTED;	
	
	efuse_efuse_int_mask_set(0x11010);
	efuse_efuse_addr_wordmode_setf(0x1);
	efuse_efuse_data_number_set(block);
	efuse_efuse_pgm_data_set(*buf);
	efuse_efuse_pgm_req_set(0x9669);
	efuse_efuse_pgm_en_set(0x1);

	while((efuse_efuse_int_state_get()&(1<<(block+12))) != (1<<(block+12)));
	
	ret = efuse_read(block, temp_rd);

	return ret;
}

int efuse_read(EFUSE_block_t block, uint32_t* buf)
{
	if(efuse_get_lock_state(block) == TRUE)
		return PPlus_ERR_ACCESS_REJECTED;

	efuse_efuse_int_mask_set(0x11100);
	efuse_efuse_data_number_set(block);
	efuse_efuse_read_en_set(0x1);
	
	switch(block)
	{
		case EFUSE_BLOCK_0:
			*buf = efuse_efuse_read_data0_get();
			break;
		case EFUSE_BLOCK_1:
			*buf = efuse_efuse_read_data1_get();
			break;			
		case EFUSE_BLOCK_2:
			*buf = efuse_efuse_read_data2_get();
			break;
		case EFUSE_BLOCK_3:
			*buf = efuse_efuse_read_data3_get();
			break;
		default:
		  break;
	}
	
	while((efuse_efuse_int_state_get() & (1<<(block+4))) != (1<<(block+4)));
	
	return PPlus_SUCCESS;
}

int efuse_write_protect(EFUSE_block_t block)
{
	volatile uint16_t cy = 100;
	
	efuse_efuse_int_mask_set(0x10110);
	efuse_efuse_addr_efuse_addr_setf(115+block*4);
	efuse_efuse_pgm_en_set(0x1);
	efuse_efuse_pgm_req_set(0x9669);
	while(cy--){
		;
	}
	
	return PPlus_SUCCESS;
}

/***************************************************************
 * @fn          efuse_set_bit_idx
 * 
 * @brief       This function processes for efuse write bit mode in the entire efuse memory space
 *
 * input parameters 
 *
 * @param       uint8_t idx: write bit addr select
 *              select: 0 ~ 127
 *
 ****************************************************************/
int efuse_set_bit_idx(uint8_t idx)
{
	efuse_efuse_int_mask_set(0x10110);
	efuse_efuse_addr_efuse_addr_setf(idx);
	efuse_efuse_pgm_en_set(0x1);
	efuse_efuse_pgm_req_set(0x9669);
	
	while((efuse_efuse_int_state_get()&(1<< 20)) != (1<<20));
	
	return PPlus_SUCCESS;
}

/***************************************************************
 * @fn          efuse_set_bit
 * 
 * @brief       This function process for efuse write bit mode in the selected block
 *
 * input parameters 
 *
 * @param       uint8_t bit: write bit addr select in the selected block
 *              select: 0 ~ 31
 *
 ****************************************************************/
int efuse_set_bit(EFUSE_block_t block, uint8_t bit)
{
	uint8_t w_addr, ret, h_addr;
	ret = bit / 8;
	h_addr = bit % 8;
	w_addr = 4* block + 16 * h_addr + ret;
	efuse_efuse_int_mask_set(0x10110);
	efuse_efuse_addr_efuse_addr_setf(w_addr);
	efuse_efuse_pgm_en_set(0x1);
	efuse_efuse_pgm_req_set(0x9669);
	
	while((efuse_efuse_int_state_get()&(1<< 20)) != (1<<20));
	
	return PPlus_SUCCESS;
}


/*******************************************************************  
* (c) Copyright 2011-2012 Discretix Technologies Ltd.              *
* This software is protected by copyright, international           *
* treaties and patents.                                            *
* Use of this Software as part of or with the Discretix CryptoCell *
* or Packet Engine products is governed by the products'           *
* commercial end user license agreement ("EULA").                  *
* It is possible that copies of this Software might be distributed *
* under some type of GNU General Public License ("GPL").           *
* Notwithstanding any such distribution under the terms of GPL,    *
* GPL does not govern the use of this Software as part of or with  *
* the Discretix CryptoCell or Packet Engine products, for which a  *
* EULA is required.                                                *
* If the product's EULA allows any copy or reproduction of this    *
* Software, then such copy or reproduction must include this       *
* Copyright Notice as well as any other notices provided           *
* thereunder.                                                      *
********************************************************************/



/************* Include Files ****************/
#include "../include/dx_pal_types.h"

/************************ Defines ******************************/

/************************ Enums ******************************/

/************************ Typedefs ******************************/

/************************ Global Data ******************************/

/************************ Private Functions ******************************/
                                                    
/************************ Public Functions ******************************/

/** 
 * @brief This function purpose is to return the base virtual address that maps the 
 *        base physical address 
 *         
 *
 * @param[in] aPhysicalAddress - Starts physical address of the I/O range to be mapped.
 * @param[in] aMapSize - Number of bytes that were mapped
 * @param[out] aVirtualAddr - Pointer to the base virtual address to which the physical pages were mapped
 *
 * @return The return values will be according to operating system return values.
 */ 	
DxError_t DX_PAL_MemMap(	DxUint32_t PhysicalAddress,	
	                  	    DxUint32_t aMapSize,	
		                      DxUint32_t *aVirtualAddr	)
{
  *aVirtualAddr = PhysicalAddress;
  
  return DX_SUCCESS;
}/* End of DX_PAL_MemMap */
		                      
/** 
 * @brief This function purpose is to Unmaps a specified address range previously mapped 
 *        by DX_PAL_MemMap         
 *         
 *
 * @param[in] aVirtualAddr - Pointer to the base virtual address to which the physical 
 *            pages were mapped
 * @param[in] aMapSize - Number of bytes that were mapped 
 *
 * @return The return values will be according to operating system return values.
 */ 	
DxError_t DX_PAL_MemUnMap(	DxUint32_t* aVirtualAddr,	
	                  	      DxUint32_t aMapSize   )
{
  return DX_SUCCESS;
}/* End of DX_PAL_MemUnMap */

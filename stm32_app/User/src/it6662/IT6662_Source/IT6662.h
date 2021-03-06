///*****************************************
//  Copyright (C) 2009-2015
//  ITE Tech. Inc. All Rights Reserved
//  Proprietary and Confidential
///*****************************************
//   @file   <IT6662.h>
//   @author Hanming.Cheng@ite.com.tw
//   @date   2015/07/03
//   @fileversion: ITE_SPLITER_1.13
//******************************************/
///*****************************************
//  Copyright (C) 2009-2014
//  ITE Tech. Inc. All Rights Reserved
//  Proprietary and Confidential
///*****************************************
//   @file   <IT6662.h>
//   @author Hanming.Cheng@ite.com.tw
//   @date   2014/12/17
//   @fileversion: ITE_SPLITER_1.01
//******************************************/
#ifndef _IT6662_H_
#define _IT6662_H_
#include "../IT6662_Customer/IT6662_IO.h"


iTE_u1 IT6662_Detect(void);
iTE_u1 IT6662_Init(void);
void IT6662_Irq(void);
void IT6662_VarInit(IT6662_Var* stCurIt6662Var);
void IT6662_ClrHpdCnt(void);
void IT6662_RxHpdTrg(void);
void IT6662_CecTxPollingCheck(void);
iTE_u8 IT6662_GetReg(iTE_u8	u8I2cAdr, iTE_u16 u16Reg);
void	IT6662_SetReg(iTE_u8	u8I2cAdr, iTE_u16 u16Reg, iTE_u8 u8Data);
#endif

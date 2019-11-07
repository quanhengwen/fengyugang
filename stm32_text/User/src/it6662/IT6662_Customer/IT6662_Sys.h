///*****************************************
//  Copyright (C) 2009-2015
//  ITE Tech. Inc. All Rights Reserved
//  Proprietary and Confidential
///*****************************************
//   @file   <IT6662_Sys.h>
//   @author Hanming.Cheng@ite.com.tw
//   @date   2015/07/03
//   @fileversion: ITE_SPLITER_1.13
//******************************************/
///*****************************************
//  Copyright (C) 2009-2014
//  ITE Tech. Inc. All Rights Reserved
//  Proprietary and Confidential
///*****************************************
//   @file   <IT6662_Sys.h>
//   @author Hanming.Cheng@ite.com.tw
//   @date   2014/12/17
//   @fileversion: ITE_SPLITER_1.01
//******************************************/
#ifndef _IT6662_SYS_H_
#define _IT6662_SYS_H_
#include "IT6662_IO.h"
#include "..\IT6662_Source\IT6662.h"

iTE_u1 IT6662_SysInit(void);
void IT6662_SysIrq(void);
void IT6662_SysSetEdidMode(iTE_u8 u8EdidMode);
#endif

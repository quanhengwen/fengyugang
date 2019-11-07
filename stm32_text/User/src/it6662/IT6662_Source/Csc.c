///*****************************************
//  Copyright (C) 2009-2015
//  ITE Tech. Inc. All Rights Reserved
//  Proprietary and Confidential
///*****************************************
//   @file   <Csc.c>
//   @author Hanming.Cheng@ite.com.tw
//   @date   2015/07/03
//   @fileversion: ITE_SPLITER_1.13
//******************************************/
///*****************************************
//  Copyright (C) 2009-2014
//  ITE Tech. Inc. All Rights Reserved
//  Proprietary and Confidential
///*****************************************
//   @file   <Csc.c>
//   @author Hanming.Cheng@ite.com.tw
//   @date   2014/12/17
//   @fileversion: ITE_SPLITER_1.01
//******************************************/
#include "Csc.h"
#include "Hdmi_Rx.h"

#define CSCMODE1

#ifdef CSCMODE1
iTE_u8	_CODE u8RgbToYuv444[21] = {0x00, 0x80, 0x10, 0xB2, 0x04, 0x65, 0x02, 0xE9, 0x00, 0x93, 0x3C, 0x18, 0x04, 0x55, 0x3F, 0x49, 0x3D, 0x9F, 0x3E, 0x18, 0x04};
#endif
#ifdef CSCMODE2
iTE_u8	_CODE u8RgbToYuv444[21] = {0x00, 0x80, 0x10, 0xB2, 0x04, 0x65, 0x02, 0xE9, 0x00, 0x93, 0x3C, 0x18, 0x04, 0x55, 0x3F, 0x49, 0x3D, 0x9F, 0x3E, 0x18, 0x04};
#endif
#ifdef CSCMODE3
iTE_u8	_CODE u8RgbToYuv444[21] = {0x10, 0x80, 0x10, 0x09, 0x04, 0x0E, 0x02, 0xC9, 0x00, 0x0F, 0x3D, 0x84, 0x03, 0x6D, 0x3F, 0xAB, 0x3D, 0xD1, 0x3E, 0x84, 0x03};
#endif
#ifdef CSCMODE4
iTE_u8	_CODE u8RgbToYuv444[21] = {0x00, 0x80, 0x10, 0xB8, 0x05, 0xB4, 0x01, 0x94, 0x00, 0x4A, 0x3C, 0x17, 0x04, 0x9F, 0x3F, 0xD9, 0x3C, 0x10, 0x3F, 0x17, 0x04};
#endif
#ifdef CSCMODE5
iTE_u8	_CODE u8RgbToYuv444[21] = {0x10, 0x80, 0x10, 0xEA, 0x04, 0x77, 0x01, 0x7F, 0x00, 0xD0, 0x3C, 0x83, 0x03, 0xAD, 0x3F, 0x4B, 0x3D, 0x32, 0x3F, 0x83, 0x03};
#endif
void Csc_RgbToYuv444(void)
{
	HdmiRx_Bank(1);
	HdmiRx_Wb(0x70, 0x15, u8RgbToYuv444);
	HdmiRx_Bank(0);
	HdmiRx_Set(0x65, 0x33, 0x22);
}
#ifdef CSCMODE1
iTE_u8	_CODE u8RgbToYuv422[21] = {0x00, 0x80, 0x10, 0xB2, 0x04, 0x65, 0x02, 0xE9, 0x00, 0x93, 0x3C, 0x18, 0x04, 0x55, 0x3F, 0x49, 0x3D, 0x9F, 0x3E, 0x18, 0x04};
#endif
#ifdef CSCMODE2
iTE_u8	_CODE u8RgbToYuv422[21] = {0x00, 0x80, 0x10, 0xB2, 0x04, 0x65, 0x02, 0xE9, 0x00, 0x93, 0x3C, 0x18, 0x04, 0x55, 0x3F, 0x49, 0x3D, 0x9F, 0x3E, 0x18, 0x04};
#endif
#ifdef CSCMODE3
iTE_u8	_CODE u8RgbToYuv422[21] = {0x10, 0x80, 0x10, 0x09, 0x04, 0x0E, 0x02, 0xC9, 0x00, 0x0F, 0x3D, 0x84, 0x03, 0x6D, 0x3F, 0xAB, 0x3D, 0xD1, 0x3E, 0x84, 0x03};
#endif
#ifdef CSCMODE4
iTE_u8	_CODE u8RgbToYuv422[21] = {0x00, 0x80, 0x10, 0xB8, 0x05, 0xB4, 0x01, 0x94, 0x00, 0x4A, 0x3C, 0x17, 0x04, 0x9F, 0x3F, 0xD9, 0x3C, 0x10, 0x3F, 0x17, 0x04};
#endif
#ifdef CSCMODE5
iTE_u8	_CODE u8RgbToYuv422[21] = {0x10, 0x80, 0x10, 0xEA, 0x04, 0x77, 0x01, 0x7F, 0x00, 0xD0, 0x3C, 0x83, 0x03, 0xAD, 0x3F, 0x4B, 0x3D, 0x32, 0x3F, 0x83, 0x03};
#endif
void Csc_RgbToYuv422(void)
{
	HdmiRx_Bank(1);
	HdmiRx_Wb(0x70, 0x15, u8RgbToYuv422);
	HdmiRx_Bank(0);
	HdmiRx_Set(0x65, 0x33, 0x12);
}
#ifdef CSCMODE1
iTE_u8	_CODE u8Yuv444ToRgb[21] = {0x00, 0x00, 0x00, 0x4F, 0x09, 0x81, 0x39, 0xDF, 0x3C, 0x4F, 0x09, 0xC2, 0x0C, 0x00, 0x00, 0x4F, 0x09, 0x00, 0x00, 0x1E, 0x10};
#endif
#ifdef CSCMODE2
iTE_u8	_CODE u8Yuv444ToRgb[21] = {0x00, 0x00, 0x00, 0x00, 0x08, 0x6B, 0x3A, 0x50, 0x3D, 0x00, 0x08, 0xF5, 0x0A, 0x02, 0x00, 0x00, 0x08, 0xFD, 0x3F, 0xDA, 0x0D};
#endif
#ifdef CSCMODE3
iTE_u8	_CODE u8Yuv444ToRgb[21] = {0x04, 0x00, 0xA7, 0x4F, 0x09, 0x81, 0x39, 0xDD, 0x3C, 0x4F, 0x09, 0xC4, 0x0C, 0x01, 0x00, 0x4F, 0x09, 0xFD, 0x3F, 0x1F, 0x10};
#endif
#ifdef CSCMODE4
iTE_u8	_CODE u8Yuv444ToRgb[21] = {0x00, 0x00, 0x00, 0x00, 0x08, 0x55, 0x3C, 0x88, 0x3E, 0x00, 0x08, 0x51, 0x0C, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x84, 0x0E};
#endif
#ifdef CSCMODE5
iTE_u8	_CODE u8Yuv444ToRgb[21] = {0x04, 0x00, 0xA7, 0x4F, 0x09, 0xBA, 0x3B, 0x4B, 0x3E, 0x4F, 0x09, 0x57, 0x0E, 0x02, 0x00, 0x4F, 0x09, 0xFE, 0x3F, 0xE8, 0x10};
#endif
void Csc_Yuv444ToRgb(void)
{
	HdmiRx_Bank(1);
	HdmiRx_Wb(0x70, 0x15, u8Yuv444ToRgb);
	HdmiRx_Bank(0);
	HdmiRx_Set(0x65, 0x33, 0x03);
}
#ifdef CSCMODE1
iTE_u8	_CODE u8Yuv422ToRgb[21] = {0x00, 0x00, 0x00, 0x4F, 0x09, 0x81, 0x39, 0xDF, 0x3C, 0x4F, 0x09, 0xC2, 0x0C, 0x00, 0x00, 0x4F, 0x09, 0x00, 0x00, 0x1E, 0x10};
#endif
#ifdef CSCMODE2
iTE_u8	_CODE u8Yuv422ToRgb[21] = {0x00, 0x00, 0x00, 0x00, 0x08, 0x6B, 0x3A, 0x50, 0x3D, 0x00, 0x08, 0xF5, 0x0A, 0x02, 0x00, 0x00, 0x08, 0xFD, 0x3F, 0xDA, 0x0D};
#endif
#ifdef CSCMODE3
iTE_u8	_CODE u8Yuv422ToRgb[21] = {0x04, 0x00, 0xA7, 0x4F, 0x09, 0x81, 0x39, 0xDD, 0x3C, 0x4F, 0x09, 0xC4, 0x0C, 0x01, 0x00, 0x4F, 0x09, 0xFD, 0x3F, 0x1F, 0x10};
#endif
#ifdef CSCMODE4
iTE_u8	_CODE u8Yuv422ToRgb[21] = {0x00, 0x00, 0x00, 0x00, 0x08, 0x55, 0x3C, 0x88, 0x3E, 0x00, 0x08, 0x51, 0x0C, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x84, 0x0E};
#endif
#ifdef CSCMODE5
iTE_u8	_CODE u8Yuv422ToRgb[21] = {0x04, 0x00, 0xA7, 0x4F, 0x09, 0xBA, 0x3B, 0x4B, 0x3E, 0x4F, 0x09, 0x57, 0x0E, 0x02, 0x00, 0x4F, 0x09, 0xFE, 0x3F, 0xE8, 0x10};
#endif
void Csc_Yuv422ToRgb(void)
{
	HdmiRx_Bank(1);
	HdmiRx_Wb(0x70, 0x15, u8Yuv422ToRgb);
	HdmiRx_Bank(0);
	HdmiRx_Set(0x65, 0x33, 0x03);
}

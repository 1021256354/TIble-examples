/*
 * Copyright (c) 2015-2016, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/** ============================================================================
 *  @file       CC26X2R1_LAUNCHXL_I2S.h
 *
 *  @brief      CC26X2R1 LaunchPad Board Specific header file.
 *  This board file is an addendum to CC26X2R1_LAUNCHXL.c. It adds an I2S
 *  object to interface the CC26X2R and a booster pack.
 *  ============================================================================
 */

#ifndef __CC26X2R1_LAUNCHXL_I2S_BOARD_H__
#define __CC26X2R1_LAUNCHXL_I2S_BOARD_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes */
#include <ti/devices/DeviceFamily.h>
#include DeviceFamily_constructPath(driverlib/ioc.h)

/* Defines */
#ifndef CC26X2R1_LAUNCHXL
  #define CC26X2R1_LAUNCHXL
#endif /* CC26X2R1_LAUNCHXL */

/* Audio */
#define CC26X2R1_LAUNCHXL_I2S_ADO               IOID_0
#define CC26X2R1_LAUNCHXL_I2S_ADI               IOID_1

/* I2S */
#define CC26X2R1_LAUNCHXL_I2S_BCLK              IOID_30
#define CC26X2R1_LAUNCHXL_I2S_MCLK              (PIN_Id)IOID_UNUSED
#define CC26X2R1_LAUNCHXL_I2S_WCLK              IOID_29

#ifdef __cplusplus
}
#endif

#endif /* __CC26X2R1_LAUNCHXL_I2S_BOARD_H__ */

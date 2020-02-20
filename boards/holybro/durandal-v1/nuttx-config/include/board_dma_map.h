/****************************************************************************
 *
 *   Copyright (c) 2020 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#pragma once


// DMA1 Channel/Stream Selections
//---------------------------------------------------------------------------------------

//      DMAMAP_DMA12_TIM1UP_0                           // DMA1:15
//      DMAMAP_DMA12_TIM4UP_0                           // DMA1:32
#define DMAMAP_USART1_RX        DMAMAP_DMA12_USART1RX_0 // DMA1:41
#define DMAMAP_USART1_TX        DMAMAP_DMA12_USART1TX_0 // DMA1:42
#define DMAMAP_USART2_RX        DMAMAP_DMA12_USART2RX_0 // DMA1:43
#define DMAMAP_USART2_TX        DMAMAP_DMA12_USART2TX_0 // DMA1:44
#define DMAMAP_USART3_RX        DMAMAP_DMA12_USART3RX_0 // DMA1:45
#define DMAMAP_USART3_TX        DMAMAP_DMA12_USART3TX_0 // DMA1:46
#define DMAMAP_UART4_RX         DMAMAP_DMA12_UART4RX_0  // DMA1:63
#define DMAMAP_UART4_TX         DMAMAP_DMA12_UART4TX_0  // DMA1:64
#define DMAMAP_USART6_RX        DMAMAP_DMA12_USART6RX_0 // DMA1:71
#define DMAMAP_USART6_TX        DMAMAP_DMA12_USART6TX_0 // DMA1:72
#define DMAMAP_UART8_RX         DMAMAP_DMA12_UART8RX_0  // DMA1:81
#define DMAMAP_UART8_TX         DMAMAP_DMA12_UART8TX_0  // DMA1:82


//  DMA2 Channel/Stream Selections
//---------------------------------------------------------------------------------------
#define DMAMAP_SPI1_RX    DMAMAP_DMA12_SPI1RX_1 // DMA2:37
#define DMAMAP_SPI1_TX    DMAMAP_DMA12_SPI1TX_1 // DMA2:38

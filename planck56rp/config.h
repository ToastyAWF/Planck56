// Copyright 2023 Toastywf (@Toastywf)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_FLASH_GENERIC_03H

/* matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

//matrix pins
#define MATRIX_ROW_PINS { GP20, GP23, GP21, GP9, GP8, GP7, GP6, GP4 }
#define MATRIX_COL_PINS { GP0, GP1, GP29, GP28, GP27, GP26, GP22 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

//Double tap
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader

//OLED
#define OLED_BRIGHTNESS 128
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_DISPLAY_128x64

//debug and stuff
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

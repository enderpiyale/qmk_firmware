// Copyright 2024 Ender Piyale (@enderpiyale)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

/* OLED DRIVER CONFIG */
/*
#define OLED_DISPLAY_128X128
#define OLED_IC OLED_IC_SH1107
*/

#define OLED_PRE_CHARGE_PERIOD 0x22
#define OLED_VCOM_DETECT 0x35
#define OLED_TIMEOUT 15000

#define I2C_DRIVER I2CD0
#define I2C1_SCL_PIN GP13
#define I2C1_SDA_PIN GP12
#define OLED_BRIGHTNESS 128



/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

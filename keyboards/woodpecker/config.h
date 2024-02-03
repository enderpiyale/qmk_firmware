// Copyright 2024 Ender Piyale (@enderpiyale)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define I2C_DRIVER I2CD1
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

/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2020 Ben Roesner (keycapsss.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */
// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

#ifdef RGBLIGHT_ENABLE
//#    define RGBLIGHT_ANIMATIONS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_HUE_STEP 6 // number of steps to cycle through the hue by
#    define RGBLIGHT_SAT_STEP 6 // number of steps to increment the saturation by
#    define RGBLIGHT_VAL_STEP 6 // number of steps to increment the brightness by
#    define RGBLIGHT_SLEEP //  the RGB lighting will be switched off when the host goes to sleep
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK

#define TAPPING_TERM 175

#define OLED_DISPLAY_CUSTOM
#define OLED_DISPLAY_WIDTH 64
#define OLED_DISPLAY_HEIGHT 128
#define OLED_COLUMN_OFFSET 32
#define OLED_MATRIX_SIZE (OLED_DISPLAY_HEIGHT / 8 * OLED_DISPLAY_WIDTH)
#define OLED_BLOCK_TYPE uint16_t
#define OLED_SOURCE_MAP { 0, 8, 16, 24, 32, 40, 48, 56 }
#define OLED_TARGET_MAP { 56, 48, 40, 32, 24, 16, 8, 0 }
#define OLED_BLOCK_COUNT (sizeof(OLED_BLOCK_TYPE) * 8)
#define OLED_BLOCK_SIZE (OLED_MATRIX_SIZE / OLED_BLOCK_COUNT)
#define OLED_COM_PINS COM_PINS_ALT
#define OLED_IC OLED_IC_SH1107

//#define MK_KINETIC_SPEED
#define MK_MOMENTARY_ACCEL

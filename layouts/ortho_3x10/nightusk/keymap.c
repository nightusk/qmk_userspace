// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "nightusk.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_ortho_3x10_wrapper(
    __QWERT____________________________________, __YUIOP____________________________________,
    __ASDFG____________________________________, __HJKL____________________________, KC_SCLN,
    __ZXCVB____________________________________, __NM____________, __COMM_DOT__SLSH_________
  ),
};

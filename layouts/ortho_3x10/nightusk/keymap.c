// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "nightusk.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_ortho_3x10_wrapper(
    __QWERT____________________________________, __YUIOP____________________________________,
    __ASDFG____________________________________, __HJKL____________________________, MT_SCLN,
    __ZXCVB____________________________________, __NM____________, __COMM_DOT__SLSH_________
  ),
  [_60____] = LAYOUT_ortho_3x10_wrapper(
    __12345____________________________________, __67890____________________________________,
    __Fn_block2_______________________, _______, KC_GRV,  __MINS_EQL______, JP_YEN,  KC_QUOT,
    __Fn_block1_______________________, _______, _______, __LBRC_RBRC_NUHS_________, JP_BSLS
  ),
  [_60_s__] = LAYOUT_ortho_3x10_wrapper(
    __12345_shifted____________________________, __67890_shifted____________________________,
    __Fn_block2_______________________, _______, KC_TILD, __UNDS_PLUS_____, JP_PIPE, KC_DQUO,
    __Fn_block1_______________________, _______, _______, __LCBR_RCBR_PIPE_________, JP_UNDS
  ),
};

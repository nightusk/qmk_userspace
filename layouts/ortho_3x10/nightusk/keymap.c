// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "nightusk.h"

#define LAYOUT_ortho_3x10_wrapper(...) LAYOUT_ortho_3x10(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_ortho_3x10_wrapper(
    __QWERT____________________________________, __YUIOP____________________________________,
    __ASDFG____________________________________, __HJKL____________________________, TD_SCLN,
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
  [_75____] = LAYOUT_ortho_3x10_wrapper(
    __Fn_block3_______________________, KC_PAUS, KC_INS,  _______, KC_APP,  _______, _______,
    __Fn_block2_______________________, KC_SCRL, __ARROW___________________________, _______,
    __Fn_block1_______________________, KC_PSCR, __NAV_____________________________, _______
  ),
  [_NUM_MS] = LAYOUT_ortho_3x10_wrapper(
    KC_NUM , __Np_block3______________, KC_ENT,  _______, __MOUSE_BTN_____, _______, QK_BOOT,
    KC_PDOT, __Np_block2______________, KC_PEQL, __MOUSE_MOV_______________________, _______,
    KC_P0,   __Np_block1______________, KC_PPLS, __MOUSE_WHL_______________________, _______
  ),
};

const uint16_t PROGMEM cb_mhen[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM cb_henk[] = {KC_K, KC_L, COMBO_END};
combo_t key_combos[] = {
   COMBO(cb_mhen, JP_MHEN),
   COMBO(cb_henk, JP_HENK),
};

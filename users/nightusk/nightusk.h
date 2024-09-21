#pragma once

#include "keymap_japanese.h"
#include "./tapdance.h"

#define LAYOUT_ortho_3x10_wrapper(...) LAYOUT_ortho_3x10(__VA_ARGS__)

// Fn
#define MT_F1   LCTL_T(     KC_F1)
#define MT_F5   LSFT_T(     KC_F5)
// R3
#define TD_Q    TD(TD_Q_ESC)
// R2
#define MT_A    LSFT_T(     KC_A)
#define TD_H    TD(         TD_H_BSPC)
#define TD_SCLN TD(         TD_SCLN_SFT_ENT)
// R1
#define MT_Z    LCTL_T(     KC_Z)
#define TD_X    TD(         TD_X_GUI_DEL)
#define MT_C    LALT_T(     KC_C)
#define TD_V    TD(         TD_V_SPC)
#define LT_B    LT(_60____, KC_B)
#define LT_N    LT(_60_s__, KC_N)
#define MT_M    RCTL_T(     KC_M)
#define TD_COMM TD(         TD_COMM_GUI_TAB)
#define MT_DOT  RALT_T(     KC_DOT)
#define TD_SLSH TD(         TD_SLSH_LT_LT)

// Minimal
#define __QWERT____________________________________ TD_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define __YUIOP____________________________________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define __ASDFG____________________________________ MT_A,    KC_S,    KC_D,    KC_F,    KC_G
#define __HJKL____________________________          TD_H,    KC_J,    KC_K,    KC_L
#define __ZXCVB____________________________________ MT_Z,    TD_X,    MT_C,    TD_V,    LT_B
#define __NM____________                            LT_N,    MT_M
#define __SCLN_QUOT_____                            TD_SCLN, KC_QUOT
#define __COMM_DOT__SLSH_________                   TD_COMM, MT_DOT,  TD_SLSH
// 60%
#define __12345____________________________________ KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define __67890____________________________________ KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define __MINS_EQL______                            KC_MINS, KC_EQL
#define __LBRC_RBRC_NUHS_________                   KC_LBRC, KC_RBRC, KC_NUHS
// 60% Shifted
#define __12345_shifted____________________________ KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define __67890_shifted____________________________ KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define __UNDS_PLUS_____                            KC_UNDS, KC_PLUS
#define __LCBR_RCBR_PIPE_________                   KC_LCBR, KC_RCBR, KC_PIPE
// 75%
#define __Fn_block1_______________________          MT_F1,   KC_F2,   KC_F3,   KC_F4
#define __Fn_block2_______________________          MT_F5,   KC_F6,   KC_F7,   KC_F8
#define __Fn_block3_______________________          KC_F9,   KC_F10,  KC_F11,  KC_F12
#define __NAV_____________________________          KC_HOME, KC_PGDN, KC_PGUP, KC_END
#define __ARROW___________________________          KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
// Num pad
#define __Np_block1______________                   KC_P1,   KC_P2,   KC_P3
#define __Np_block2______________                   KC_P8,   KC_P7,   KC_P6
#define __Np_block3______________                   KC_P7,   KC_P8,   KC_P9
// Mouse
#define __MOUSE_MOV_______________________          MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT
#define __MOUSE_BTN_____                            MS_BTN1, MS_BTN2
#define __MOUSE_WHL_______________________          MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR

enum layers {
  _QWERTY,
  _60____,
  _60_s__,
  _75____,
  _NUM_MS,
};

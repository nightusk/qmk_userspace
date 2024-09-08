#pragma once

#include "keymap_japanese.h"

#define LAYOUT_ortho_3x10_wrapper(...) LAYOUT_ortho_3x10(__VA_ARGS__)

// R1
#define LT_B    LT(_60____, KC_B)
#define LT_N    LT(_60_s__, KC_N)

// Minimal
#define __QWERT____________________________________ KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define __YUIOP____________________________________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define __ASDFG____________________________________ KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define __HJKL____________________________          KC_H,    KC_J,    KC_K,    KC_L
#define __ZXCVB____________________________________ KC_Z,    KC_X,    KC_C,    KC_V,    LT_B
#define __NM____________                            LT_N,    KC_M
#define __SCLN_QUOT_____                            KC_SCLN, KC_QUOT
#define __COMM_DOT__SLSH_________                   KC_COMM, KC_DOT,  KC_SLSH
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

enum layers {
  _QWERTY,
  _60____,
  _60_s__,
};

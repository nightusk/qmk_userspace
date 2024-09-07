#pragma once

#include "keymap_japanese.h"

#define LAYOUT_ortho_3x10_wrapper(...) LAYOUT_ortho_3x10(__VA_ARGS__)

// Minimal
#define __QWERT____________________________________ KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define __YUIOP____________________________________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define __ASDFG____________________________________ KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define __HJKL____________________________          KC_H,    KC_J,    KC_K,    KC_L
#define __ZXCVB____________________________________ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B
#define __NM____________                            KC_N,    KC_M
#define __SCLN_QUOT_____                            KC_SCLN, KC_QUOT
#define __COMM_DOT__SLSH_________                   KC_COMM, KC_DOT,  KC_SLSH

enum layers {
  _QWERTY,
};

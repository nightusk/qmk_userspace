#pragma once

#include "keymap_japanese.h"
#include "./tapdance.h"

#define LAYOUT_ortho_3x10_wrapper(...) LAYOUT_ortho_3x10(__VA_ARGS__)

// R3
#define TD_Q    TD(TD_Q_ESC)
// R2
#define MT_A    LSFT_T(     KC_A)
#define MT_SCLN RSFT_T(     KC_SCLN)
// R1
#define MT_Z    LCTL_T(     KC_Z)
#define MT_X    LGUI_T(     KC_X)
#define MT_C    LALT_T(     KC_C)
#define LT_B    LT(_60____, KC_B)
#define LT_N    LT(_60_s__, KC_N)
#define MT_M    RCTL_T(     KC_M)
#define MT_COMM RGUI_T(     KC_COMM)
#define MT_DOT  RALT_T(     KC_DOT)

// Minimal
#define __QWERT____________________________________ TD_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define __YUIOP____________________________________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define __ASDFG____________________________________ MT_A,    KC_S,    KC_D,    KC_F,    KC_G
#define __HJKL____________________________          KC_H,    KC_J,    KC_K,    KC_L
#define __ZXCVB____________________________________ MT_Z,    MT_X,    MT_C,    KC_V,    LT_B
#define __NM____________                            LT_N,    MT_M
#define __SCLN_QUOT_____                            MT_SCLN, KC_QUOT
#define __COMM_DOT__SLSH_________                   MT_COMM, MT_DOT,  LT_SLSH
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

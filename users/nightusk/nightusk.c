#include QMK_KEYBOARD_H

#include "./tapdance.h"

tap_dance_action_t tap_dance_actions[TD_END] = {
  // R3
  [TD_Q_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
  // R2
  [TD_H_BSPC] = ACTION_TAP_DANCE_DOUBLE(KC_H, KC_BSPC),
  // R1
  [TD_V_SPC] = ACTION_TAP_DANCE_DOUBLE(KC_V, KC_SPC),
};

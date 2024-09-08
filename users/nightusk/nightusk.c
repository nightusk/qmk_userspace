#include QMK_KEYBOARD_H

#include "./tapdance.h"

tap_dance_action_t tap_dance_actions[TD_END] = {
  [TD_Q_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
};

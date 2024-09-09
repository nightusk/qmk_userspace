#include QMK_KEYBOARD_H

#include "./tapdance.h"

tap_dance_action_t tap_dance_actions[TD_END] = {
  // R3
  [TD_Q_ESC]        = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
  // R2
  [TD_H_BSPC]       = ACTION_TAP_DANCE_DOUBLE(KC_H, KC_BSPC),
  [TD_SCLN_SFT_ENT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, scln_finished, scln_reset),
  // R1
  [TD_X_GUI_DEL]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_finished, x_reset),
  [TD_V_SPC]        = ACTION_TAP_DANCE_DOUBLE(KC_V, KC_SPC),
  [TD_COMM_GUI_TAB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, comm_finished, comm_reset),
};

td_state_t cur_dance(tap_dance_state_t *state) {
  switch (state->count) {
    case 1:
      if (state->interrupted || !state->pressed)
        return TD_SINGLE_TAP;
      return TD_SINGLE_HOLD;
    case 2:
      if (state->interrupted || !state->pressed)
        return TD_DOUBLE_TAP;
      return TD_DOUBLE_HOLD;
    default:
      return TD_UNKNOWN;
  }
}

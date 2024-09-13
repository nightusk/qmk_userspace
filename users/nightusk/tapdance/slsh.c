#include QMK_KEYBOARD_H

#include "../nightusk.h"

static td_tap_t tap_state = {
  .is_press_action = true,
  .state = TD_NONE,
};

void slsh_finished(tap_dance_state_t *state, void *user_data) {
  switch (tap_state.state = cur_dance(state)) {
    case TD_DOUBLE_TAP:  tap_code(KC_SLSH);
    case TD_SINGLE_TAP:  tap_code(KC_SLSH); break;
    case TD_SINGLE_HOLD: layer_on(_75____); break;
    case TD_DOUBLE_HOLD: layer_on(_NUM_MS); break;
    default:                                break;
  }
}

void slsh_reset(tap_dance_state_t *state, void *user_data) {
  switch (tap_state.state) {
    case TD_SINGLE_HOLD: layer_off(_75____); break;
    case TD_DOUBLE_HOLD: layer_off(_NUM_MS); break;
    default:                                 break;
  }
  tap_state.state = TD_NONE;
}

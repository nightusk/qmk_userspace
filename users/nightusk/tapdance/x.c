#include QMK_KEYBOARD_H

#include "../tapdance.h"

static td_tap_t tap_state = {
  .is_press_action = true,
  .state = TD_NONE,
};

void x_finished(tap_dance_state_t *state, void *user_data) {
  switch (tap_state.state = cur_dance(state)) {
    case TD_SINGLE_TAP:  tap_code(             KC_X);     break;
    case TD_SINGLE_HOLD: register_mods(MOD_BIT(KC_LGUI)); break;
    case TD_DOUBLE_TAP:  tap_code(             KC_DEL);   break;
    case TD_DOUBLE_HOLD: register_code(        KC_DEL);   break;
    default:                                              break;
  }
}

void x_reset(tap_dance_state_t *state, void *user_data) {
  switch (tap_state.state) {
    case TD_SINGLE_HOLD: unregister_mods(MOD_BIT(KC_LGUI)); break;
    case TD_DOUBLE_HOLD: unregister_code(        KC_DEL);   break;
    default:                                                break;
  }
  tap_state.state = TD_NONE;
}

#pragma once

enum {
  // R3
  TD_Q_ESC,
  // R2
  TD_H_BSPC,
  TD_SCLN_SFT_ENT,
  // R1
  TD_V_SPC,
  TD_COMM_GUI_TAB,
  // END
  TD_END,
};

typedef enum {
  TD_NONE,
  TD_UNKNOWN,
  TD_SINGLE_TAP,
  TD_SINGLE_HOLD,
  TD_DOUBLE_TAP,
  TD_DOUBLE_HOLD,
} td_state_t;

typedef struct {
  bool       is_press_action;
  td_state_t state;
} td_tap_t;

extern tap_dance_action_t tap_dance_actions[TD_END];

td_state_t cur_dance(tap_dance_state_t *state);
// R2
void scln_finished(tap_dance_state_t *state, void *user_data);
void scln_reset(tap_dance_state_t *state, void *user_data);
// R1
void comm_finished(tap_dance_state_t *state, void *user_data);
void comm_reset(tap_dance_state_t *state, void *user_data);

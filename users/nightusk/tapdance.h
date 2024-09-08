#pragma once

enum {
  // R3
  TD_Q_ESC,
  // R2
  TD_H_BSPC,
  // R1
  TD_V_SPC,
  // END
  TD_END,
};

extern tap_dance_action_t tap_dance_actions[TD_END];

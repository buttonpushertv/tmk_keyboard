#include "keymap_common.h"
#include "rgblight.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

KEYMAP(
  ESC,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    BSPC,
  FN2,  A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT,
  LSFT, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, FN3,
  LCTL, LALT, LGUI, APP,  FN1,  SPC,  SPC,  FN0,  LEFT, DOWN, UP,   RGHT
),

KEYMAP(
  GRV,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    DELETE,
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, MINS, EQL,  LBRC, RBRC, BSLS,
  TRNS, F11,  F12,  F13,  F14,  F15,  F16,  F17,  F18,  F19,  F20,  TRNS,
  TRNS, TRNS, TRNS, CAPS, TRNS, TRNS, TRNS, TRNS, HOME, PGDN, PGUP, END
),

KEYMAP(
  FN6,  FN7,  FN8,  FN9,  FN10, FN11, FN12, FN13, FN14, FN15, FN16, DELETE,
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, FN17, FN18, FN19, FN20, FN21,
  TRNS, F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  TRNS,
  TRNS, TRNS, TRNS, CAPS, TRNS, TRNS, TRNS, TRNS, HOME, PGDN, PGUP, END
),

KEYMAP( /* Tab */
  ESC,  CALC, WHOM, MAIL, MYCM, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, TRNS,
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
  TRNS, FN4,  FN5,  FN22, FN23, FN24, FN25, FN26, FN27, TRNS, TRNS, TRNS,
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, MS_L, MS_D, MS_U, MS_R
),
};

enum function_id {
   RGBLED_TOGGLE,
   RGBLED_INCREASE_HUE,
   RGBLED_DECREASE_HUE,
   RGBLED_INCREASE_SAT,
   RGBLED_DECREASE_SAT,
   RGBLED_INCREASE_VAL,
   RGBLED_DECREASE_VAL,
   RGBLED_STEP_MODE,
};

const action_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_TAP_KEY(3, KC_TAB),
    [3]  = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENT),
    [4]  = ACTION_FUNCTION(RGBLED_TOGGLE),
    [5]  = ACTION_FUNCTION(RGBLED_STEP_MODE),
    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [7]  = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [8]  = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [9]  = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
    [22] = ACTION_FUNCTION(RGBLED_INCREASE_HUE),
    [23] = ACTION_FUNCTION(RGBLED_DECREASE_HUE),
    [24] = ACTION_FUNCTION(RGBLED_INCREASE_SAT),
    [25] = ACTION_FUNCTION(RGBLED_DECREASE_SAT),
    [26] = ACTION_FUNCTION(RGBLED_INCREASE_VAL),
    [27] = ACTION_FUNCTION(RGBLED_DECREASE_VAL),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
    case RGBLED_TOGGLE:
        if (record->event.pressed) {
        rgblight_toggle();
        }
        break;
    case RGBLED_INCREASE_HUE:
        if (record->event.pressed) {
        rgblight_increase_hue();
        }
        break;
    case RGBLED_DECREASE_HUE:
        if (record->event.pressed) {
          rgblight_decrease_hue();
        }
        break;
    case RGBLED_INCREASE_SAT:
        if (record->event.pressed) {
        rgblight_increase_sat();
        }
        break;
    case RGBLED_DECREASE_SAT:
        if (record->event.pressed) {
          rgblight_decrease_sat();
        }
        break;
    case RGBLED_INCREASE_VAL:
        if (record->event.pressed) {
          rgblight_increase_val();
        }
        break;
    case RGBLED_DECREASE_VAL:
        if (record->event.pressed) {
          rgblight_decrease_val();
        }
        break;
    case RGBLED_STEP_MODE:
        if (record->event.pressed) {
          rgblight_step();
        }
        break;
  }
}


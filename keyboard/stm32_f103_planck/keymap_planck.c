#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qerty */
    KEYMAP(ESC,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,BSPC, \
           FN0,    A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT, \
           LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,FN20, \
           LCTL,LALT,LGUI, APP, FN1, SPC, SPC, FN2,LEFT,DOWN,  UP,RGHT),

    /* 1: FN 1 */
    KEYMAP(FN3,  FN4, FN5, FN6, FN7, FN8, FN9,FN10,FN11,FN12,FN13, DEL, \
           TRNS,TRNS,TRNS,PAUS,TRNS,TRNS,TRNS,FN16,FN17,FN18,FN19,FN14, \
           TRNS,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGDN,PGUP, END),

    /* 2: FN 2 */
    KEYMAP(GRV,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0, DEL, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MINS, EQL,LBRC,RBRC,BSLS, \
           TRNS, F11, F12, F13, F14, F15, F16, F17, F18,PGUP, F20,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGDN,PGUP, END),
		   
    /* 3: TAB */
    KEYMAP(TRNS,CALC,WHOM,MAIL,TRNS,MYCM,TRNS,TRNS,TRNS,TRNS,PSCR, DEL, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,  TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGDN,PGUP, END),
};

const uint16_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_TAP_KEY(3, KC_TAB),
    [1]  = ACTION_LAYER_TAP_KEY(1, KC_SPC),
    [2]  = ACTION_LAYER_TAP_KEY(2, KC_SPC),
    [3]  = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [4]  = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [5]  = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [7]  = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [8]  = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [9]  = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
	[20] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENT),
};


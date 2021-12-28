#include QMK_KEYBOARD_H

// Macro declarations
enum {
    TGLDRK = SAFE_RANGE,
    CTRLV,
    CTRLC,
    CTRLX,
};

// Tap Dance declarations
enum {
    TD_PGUP_F14,
    TD_PGDN_F13,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_PGUP_F14] = ACTION_TAP_DANCE_DOUBLE(KC_PGUP, KC_F14),
    [TD_PGDN_F13] = ACTION_TAP_DANCE_DOUBLE(KC_PGDN, KC_F13),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0, default layer
__________________________________________________________________________________________________________________________________  ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|  ESC   |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   |  DELETE    ||  HOME  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|  ~`    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   | BACKSPACE  ||  PGUP  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|            |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |        ||        |
|     TAB    |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \ ||  PGDN  |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________||________|
  |            |        |        |        |        |        |        |        |        |        |   ;    |   '    |            |   |        |
  |    MO(1)   |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    |   ENTER    |   |  END   |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |   ,    |    .   |   /    |            |        |
  |     SHIFT      |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    |   SHIFT    |   UP   |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |    CTRL    |  LGUI  | MO(1) | LALT   |    LSFT/BSPC    |      SPACE      | RCTRL  |  RALT  |    MO(1)    |   |  LEFT  |  DOWN  | RIGHT  |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|
*/

  [0] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,       KC_HOME,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_PGUP,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_PGDN,
        MO(2), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_ENT,           KC_END,
        KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,    KC_RSFT,    KC_UP,
        KC_LCTL, KC_LGUI, MO(2),   KC_LALT,    LSFT_T(KC_BSPC),    KC_SPC,     KC_RCTL,   KC_RALT,   MO(2),         KC_LEFT, KC_DOWN, KC_RGHT
  ),

    /*
     * Another base layer, removes the mod-tap keys
     */
  [1] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,       KC_HOME,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_END,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_PGUP,
        MO(2),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_ENT,          KC_PGDN,
        KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,   KC_COMM,  KC_DOT,  KC_SLSH,    KC_RSFT,    KC_UP,
        KC_LCTL, KC_LGUI, MO(2),   KC_LALT,      KC_BSPC,       KC_SPC,         KC_RCTL,   KC_RALT,   MO(2),         KC_LEFT, KC_DOWN, KC_RGHT
  ),

    /* Layer 2, function layer
__________________________________________________________________________________________________________________________________  ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|        |  DF(0) |  DF(1) |        |        |        |        |        |        |        |        |        |        |   INSERT   ||        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |   DELETE   ||        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|            |        |        |        |        |        |        |        |        |        |        |        |        |        ||        |
|  CAPS LOCK |  MUTE  | VOL DN | VOL UP |        |        |  HOME  |  PGDN  |  PGUP  |  END   |        |        |        |        ||        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________||________|
  |            |        |        |        |        |        |        |        |        |        |        |        |            |   |        |
  |            |        |        |        |        |        |  LEFT  |  DOWN  |   UP   | RIGHT  |        |        |            |   |        |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |        |        |        |            |        |
  |                |        |  CUT   |  COPY  | PASTE  |        |        |        |        |        |        |            |        |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |            |        |       |        |      DELETE     |   PLAY/PAUSE    |        |        |    MO(2)    |   |        |        |        |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|

* 'RESET' resets the controller and puts the board into firmware flashing mode. If this key is hit accidentally, just unplug the board
*        and plug it back in.
*/

  [2] = LAYOUT(
    KC_TRNS,   DF(0),   DF(1),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,    KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,      KC_TRNS,
    KC_CAPS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,    KC_TRNS,       KC_TRNS,
        KC_TRNS, KC_TRNS, CTRLX,   CTRLC,   CTRLV,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,      KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_DEL,          KC_MPLY,      KC_TRNS, KC_TRNS, MO(3),          KC_TRNS,  KC_TRNS, KC_TRNS
  ),

    /* Layer 3, function layer
__________________________________________________________________________________________________________________________________  ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
| SLEEP  |  F13   |  F14   |  F15   |  F16   |  F17   |  F18   |  F19   |  F20   |  F21   |  F22   |  F23   |  F24   |            || RESET  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|        |        |        |        |        |        |        |        |        |        |  LED   |  LED   |  LED   |            ||        |
|        |        |        |        |        |        |        |        |        |        | TOGGLE |  DOWN  |  UP    |            ||        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|            |        |        |        |        |        |        |        |        |        |        |        |        |        ||        |
|            |        |        |        |        |        |        |        |        |        |        |        |        |        ||        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________||________|
  |            |        |        |        |        |        |        |        |        |        |        |        |            |   |        |
  |            |        |        |  DRK   |        |        |        |        |        |        |        |        |            |   |        |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |        |        |        |            |        |
  |                |        |        |        |        |        |        |        |        |        |        |            |        |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|

    * 'RESET' resets the controller and puts the board into firmware flashing mode. If this key is hit accidentally, just unplug the board
            *        and plug it back in.
                */


  [3] = LAYOUT(
    KC_SLEP, KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  KC_TRNS,     RESET,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, RGB_VAD, RGB_VAI, KC_TRNS,     KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, TGLDRK,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS,
              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,          KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS
  ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case TGLDRK:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LSFT) SS_DOWN(X_LALT) "d" SS_UP(X_LCTL) SS_UP(X_LSFT) SS_UP(X_LALT));
            } else {
                // released
            }
            break;

        case CTRLC:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL) "c" SS_UP(X_LCTL) );
            } else {
                // released
            }
            break;
        case CTRLV:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL) "v" SS_UP(X_LCTL) );
            } else {
                // released
            }
            break;

        case CTRLX:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL) "x" SS_UP(X_LCTL) );
            } else {
                // released
            }
            break;

    }
    return true;
}

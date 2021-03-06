#include "kb.h"

#define _DEFAULT 0
#define _FN 1
#define _LIGHTS 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_DEFAULT] = KEYMAP(
		MO(1), KC_LGUI, KC_LALT, KC_RGHT, KC_DOWN, KC_LEFT, KC_SPC, MO(2), KC_RALT, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, 
		KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, 
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, 
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, 
		
		KC_UP, KC_LSFT, KC_SLSH, KC_DOT, KC_COMM, 
		KC_ENT, KC_QUOT, KC_SCLN, KC_L, 
		G(KC_PGDN), KC_BSPC, KC_RBRC, KC_LBRC, KC_P, KC_O, 
		G(KC_PGUP), KC_EQL, KC_MINS, KC_BSLS, KC_0, KC_9, 
		KC_DEL, KC_F12, KC_F11, KC_F10, KC_PSCR, KC_F9),

	[_FN] = KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		
		KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_HOME, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[_LIGHTS] = KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};

uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
    case 0:
		rgblight_sethsv_range(128, 100, 0, 0, 16);
        rgblight_sethsv_range(128, 255, 75, 16, 20);
        break;
    case 1:
		rgblight_sethsv_range(213, 255, 0, 0, 16);
        rgblight_sethsv_range(213, 255, 75, 16, 20);
        break;
    case 2:
		rgblight_setrgb_range(0, 0, 0, 0, 16);
        rgblight_setrgb_range(0, 0, 255, 16, 20);
        break;
    default: //  for any other layers, or the default layer
		rgblight_sethsv_range(128, 100, 0, 0, 16);
        rgblight_sethsv_range(128, 255, 75, 16, 20);
        break;
    }
  return state;
}

void keyboard_post_init_user(void) {
	rgblight_sethsv_range(128, 100, 0, 0, 16);
    rgblight_sethsv_range(128, 255, 75, 16, 20);
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}
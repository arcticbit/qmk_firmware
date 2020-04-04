#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN
};

enum unicode_names {
    L_AUML,
    L_OUML,
    L_ARNG,
    C_AUML,
    C_OUML,
    C_ARNG
};

const uint32_t PROGMEM unicode_map[] = {
    [C_ARNG]  = 0x00c5,   // Å
    [L_ARNG]  = 0x00e5,   // å


    [C_AUML]  = 0x00C4,   // Ä
    [L_AUML]  = 0x00e4,   // ä

    [C_OUML]  = 0x00D6,  // Ö
    [L_OUML]  = 0x00F6   // ö
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,  KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,             KC_F11,              KC_F12,   KC_NO,   KC_NO,
		KC_MPLY, KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,               KC_MINUS,            KC_EQUAL, KC_BSPC, KC_NO,
		KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,               KC_LBRC,             KC_RBRC,  KC_NO,
		KC_CAPS, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,     KC_SCOLON,          KC_QUOT,             KC_BSLS,  KC_ENT,  KC_NO,
		KC_LSFT, KC_GRAVE, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMMA, KC_DOT,             KC_SLASH,            KC_RSFT,  KC_UP,   KC_NO,
		MO(1),   KC_LCTL,  KC_LALT, KC_LGUI,                            KC_SPC,                     KC_RGUI,            KC_RALT,             KC_LEFT,  KC_DOWN, KC_RIGHT
    ),
     [_FN]  = LAYOUT(
        RESET,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,            KC_TRNS,             KC_TRNS,  KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,            KC_TRNS,             KC_TRNS,  KC_DEL,  KC_TRNS,
		KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,            XP(L_ARNG, C_ARNG),  KC_TRNS,  KC_TRNS, /*NONE*/
		KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  XP(L_OUML, C_OUML), XP(L_AUML, C_AUML),  KC_TRNS,  KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,            KC_TRNS,             KC_TRNS,  KC_PGUP, KC_HOME,
		KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,                            KC_TRNS,                    KC_TRNS,            KC_TRNS,             KC_TRNS,  KC_PGDN, KC_END
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // case C_ARING:
        //     SEND_STRING("KAN DU VARA SJAELV NOERD");
        //     break;
        // case C_AUML:
        //     SEND_STRING("ä");
        //     break;
        // case C_OUML:
        //     SEND_STRING("ö");
        //     break;
        default:
            break;
    }
    return true;
}

void matrix_init_user(void) {
    set_unicode_input_mode(UC_OSX); // REPLACE UC_XXXX with the Unicode Input Mode for your OS. See table below.
};

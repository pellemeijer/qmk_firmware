/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


/*
LAYOUT TEMPLATE

[] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                           _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,            _______,       _______,            _______,  _______,  _______,  _______,  _______,
                                                _______,  _______,  _______,       _______,  _______,  _______
    ),

*/



#include QMK_KEYBOARD_H
#include "version.h"

enum layers {
    BASE,  // default layer
    GAME,  // gaming layer
    NAVI,  // navigation layer
    MOUS,  // mouse layer
    MDIA,  // media layer
    NUMB,  // number layer
    SYMB,  // symbol layer
    FUNC,  // function layer
};

enum custom_keycodes {
    VRSN = SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      TG(GAME),      XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,  XXXXXXX,       XXXXXXX,   TG(NUMB),
        XXXXXXX,    KC_J,     KC_G,     KC_M,     KC_P,     KC_V,         XXXXXXX,       XXXXXXX,  KC_EXLM,     KC_DOT,   KC_LPRN,  KC_SEMICOLON,  KC_QUOTE,  XXXXXXX,
        XXXXXXX,    KC_R,     KC_S,     KC_N,     KC_D,     KC_K,         XXXXXXX,       XXXXXXX,  KC_MINS,     KC_A,     KC_E,     KC_I,          KC_H,      XXXXXXX,
        KC_UP,      KC_X,     KC_F,     KC_L,     KC_C,     KC_B,                                  KC_BSLS,     KC_U,     KC_O,     KC_Y,          KC_W,      KC_UP,
        KC_DOWN,    KC_LEFT,  KC_RIGHT, XXXXXXX,  XXXXXXX,                XXXXXXX,       XXXXXXX,               XXXXXXX,  XXXXXXX,  KC_LEFT,       KC_RIGHT,  KC_DOWN,
                                                  LT(KC_T), LT(KC_BSPC),  XXXXXXX,       XXXXXXX,  LT(QK_REP),  LT(KC_SPC)
    ),

    [GAME] = LAYOUT(
        KC_ESCAPE,  KC_1,     KC_2,      KC_3,     KC_4,   KC_5,     _______,        XXXXXXX,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,      TG(NUMB),
        KC_TAB,     KC_Q,     KC_W,      KC_E,     KC_R,   KC_T,     XXXXXXX,        XXXXXXX,  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,      XXXXXXX,
        KC_LSFT,    KC_A,     KC_S,      KC_D,     KC_F,   KC_G,     XXXXXXX,        XXXXXXX,  KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,   XXXXXXX,
        KC_BSPC,    KC_Z,     KC_X,      KC_C,     KC_V,   KC_B,                               KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,   KC_UP,
        KC_LCTL,    KC_LEFT,  KC_RIGHT,  KC_LALT,  KC_SPC,           XXXXXXX,        XXXXXXX,            XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_RIGHT,  KC_DOWN,
                                                  KC_ESC,  KC_BSPC,  XXXXXXX,        XXXXXXX,  QK_REP,   KC_SPC
    ),

    [NAVI] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  QK_BOOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL,  XXXXXXX,  XXXXXXX,       XXXXXXX,  CW_TOGG,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  KC_RALT,  XXXXXXX,  XXXXXXX,  XXXXXXX,                           KC_INS,   KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,       XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                                _______,  _______,  XXXXXXX,       XXXXXXX,  _______,  _______
    ),

    [MOUS] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  QK_BOOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL,  XXXXXXX,  XXXXXXX,       XXXXXXX,  KC_BTN3,  KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  KC_RALT,  XXXXXXX,  XXXXXXX,  XXXXXXX,                           XXXXXXX,  KC_WH_L,  KC_WH_D,  KC_WH_U,  KC_WH_R,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,       XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                                _______,  _______,  XXXXXXX,       XXXXXXX,  KC_BTN2,  KC_BTN1
    ),

    [MDIA] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  QK_BOOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL,  XXXXXXX,  XXXXXXX,       XXXXXXX,  XXXXXXX,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  KC_RALT,  XXXXXXX,  XXXXXXX,  XXXXXXX,                           XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,       XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                                _______,  _______,  XXXXXXX,       XXXXXXX,  KC_MUTE,  KC_MPLY
    ),

    [NUMB] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
        XXXXXXX,  KC_ASTR,  KC_7,     KC_8,     KC_9,     KC_SLSH,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  QK_BOOT,  XXXXXXX,
        XXXXXXX,  KC_LBRC,  KC_4,     KC_5,     KC_6,     KC_EQL,   XXXXXXX,       XXXXXXX,  XXXXXXX,  KC_LCTL,  KC_LSFT,  KC_LALT,  KC_LGUI,  XXXXXXX,
        XXXXXXX,  KC_PLUS,  KC_1,     KC_2,     KC_3,     KC_MINS,                           XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_RALT,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,       XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                                KC_0,     _______,  XXXXXXX,       XXXXXXX,  _______,  _______
    ),

    [SYMB] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  KC_HASH,  KC_COLN,  KC_LPRN,  KC_DLR,   KC_DQUO,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  QK_BOOT,  XXXXXXX,
        XXXXXXX,  KC_LBRC,  KC_LABK,  KC_DOT,   KC_SLSH,  KC_EQL,   XXXXXXX,       XXXXXXX,  XXXXXXX,  KC_LCTL,  KC_LSFT,  KC_LALT,  KC_LGUI,  XXXXXXX,
        XXXXXXX,  KC_LCBR,  KC_AMPR,  KC_PERC,  KC_ASTR,  KC_AT,                             XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_RALT,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,       XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                                KC_UNDS,  _______,  XXXXXXX,       XXXXXXX,  _______,  _______
    ),

    [FUNC] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  KC_F12,   KC_F7,    KC_F8,    KC_F9,    XXXXXXX,  XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  QK_BOOT,  XXXXXXX,
        XXXXXXX,  KC_F11,   KC_F4,    KC_F5,    KC_F6,    KC_PSCR,  XXXXXXX,       XXXXXXX,  XXXXXXX,  KC_LCTL,  KC_LSFT,  KC_LALT,  KC_LGUI,  XXXXXXX,
        XXXXXXX,  KC_F10,   KC_F1,    KC_F2,    KC_F3,    KC_PAUS,                           XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_RALT,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,       XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                                KC_PSCR,  KC_PAUS,  XXXXXXX,       XXXXXXX,  _______,  _______
    ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
        case VRSN:
            SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
            return false;
        }
    }
    return true;
}

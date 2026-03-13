/* Copyright 2019 Danny Nguyen <danny@keeb.io>
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
#include QMK_KEYBOARD_H
#include "eosti.h"

enum encoder_names {
  _LEFT,
  _RIGHT,
  _MIDDLE,
};

enum layer_names {
    _ALTIUM_PCB,
    _ALTIUM_PCB2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALTIUM_PCB] = LAYOUT(
    // ┌────────┬────────┬────────┐
         LT(_ALTIUM_PCB2, KC_TAB), KC_DEL,  KC_V,
    // ├────────┼────────┼────────┤
         KC_ESC, LCTL(KC_W), KC_L,
    // ├────────┼────────┼────────┤
         KC_LSFT, LSFT(KC_SPC), KC_SPC
    // └────────┴────────┴────────┘
        ),
    [_ALTIUM_PCB2] = LAYOUT(
    // ┌────────┬────────┬────────┐
         _______, KC_UP,  KC_NO,
    // ├────────┼────────┼────────┤
         ALTIUM_PLACE_SELECTED, KC_SCLN, RM_TOGG,
    // ├────────┼────────┼────────┤
         QK_BOOT, KC_DOWN, RM_HUEU
    // └────────┴────────┴────────┘
        ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == _RIGHT) {
        if (clockwise) {
            tap_code(KC_KP_PLUS);
        } else {
            tap_code(KC_KP_MINUS);
        }
    }
    return true;
}

// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keymap_brazilian_abnt2.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                KC_MPRV,
                KC_MNXT,
                KC_MPLY,
                KC_MUTE,
                KC_A,
                KC_H  
    ),
};


bool encoder_update_user(uint8_t index, bool clockwise){
    if (index == 0){
        if(clockwise){
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
    return false;
}
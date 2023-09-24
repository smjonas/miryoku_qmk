// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//      /*
//       * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
//       * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
//       * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
//       * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
//       * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
//       * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
//       * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
//       *               ┌───┐                   ┌───┐
//       *               │GUI├───┐           ┌───┤Alt│
//       *               └───┤Bsp├───┐   ┌───┤Ent├───┘
//       *                   └───┤   │   │   ├───┘
//       *                       └───┘   └───┘
//       */
//     [0] = LAYOUT_split_3x6_3(
//         KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
//         KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
//         KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
//                                             KC_LGUI, KC_BSPC, KC_SPC,           KC_SPC,  KC_ENT,  KC_RALT
//     )
// };

#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_TAB),  LT(U_MOUSE,KC_SPC),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP



// ! < > $ %    & { } X X
// ~ - + = #    | ( ) @ X
// ^ / * \ X    X [ ] X X
// 
// NAV LAYER (RHS):
// left, down, up, right in second row
// mouse movement in third row



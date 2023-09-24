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

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,       "Base") \
MIRYOKU_X(EXTRA,      "Extra") \
MIRYOKU_X(TAP,        "Tap") \
MIRYOKU_X(BUTTON,     "Button") \
MIRYOKU_X(NAV,        "Nav") \
MIRYOKU_X(MOUSE,      "Mouse") \
MIRYOKU_X(MEDIA,      "Media") \
MIRYOKU_X(NUM,        "Num") \
MIRYOKU_X(SYM,        "Sym") \
MIRYOKU_X(FUN,        "Fun")

#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_TAB),  LT(U_MOUSE,KC_SPC),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO,               KC_NO,          KC_NO,             KC_NO,                 KC_NO,\
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_MEDIA_PREV_TRACK, KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN, KC_MEDIA_NEXT_TRACK,  KC_NO,\
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
    U_NP, U_NP, KC_NO, KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO, U_NP, U_NP

#define MIRYOKU_LAYER_NAV \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_NO,\
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, KC_NO,\
    U_NP, U_NP, KC_NO, KC_NO, KC_NO,          KC_MS_BTN2, KC_MS_BTN1, KC_NO, U_NP, U_NP

// ! < > $ %    & { } X X
// _ - + = #    | ( ) @ X
// ^ ~ / * \    X [ ] X X
// >>/*
#define MIRYOKU_LAYER_SYM \
KC_EXLM,      KC_LT,      KC_GT,      KC_DLR,      KC_PERC,              KC_AMPR,      KC_LCBR,      KC_RCBR,      KC_NO, KC_NO,\
KC_UNDERSCORE,  KC_KP_MINUS,    KC_KP_PLUS,  KC_KP_EQUAL,   KC_HASH,     KC_PIPE,      KC_LPRN, KC_RPRN,      KC_AT,      KC_NO,\
KC_CIRC, KC_TILD,    KC_PSLS,      KC_ASTR,      KC_BSLS,                KC_NO,      KC_LBRC,      KC_RBRC,      KC_NO, KC_NO,\
    U_NP, U_NP, KC_NO,  KC_NO,      KC_NO,                               KC_NO, KC_NO,      KC_NO, U_NP, U_NP

#define MIRYOKU_LAYER_NUM \
      KC_NO, KC_7, KC_8, KC_9, KC_KP_PLUS,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
     KC_NO, KC_4, KC_5, KC_6, KC_KP_MINUS,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
     KC_NO, KC_1, KC_2, KC_3, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
    U_NP, U_NP, KC_DOT, KC_0, KC_NO,        KC_NO, KC_NO, KC_NO, U_NP, U_NP

#define MIRYOKU_LAYER_FUN \
    KC_F9, KC_F10, KC_F11, KC_F12, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
    KC_F5, KC_F6, KC_F7, KC_F8, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
    KC_F1, KC_F2, KC_F3, KC_F4, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
    U_NP, U_NP, KC_DOT, KC_0, KC_NO,          KC_NO, KC_NO, KC_NO, U_NP, U_NP

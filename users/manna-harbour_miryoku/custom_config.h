// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define XXX KC_NO

// Use 3x6 layout instead of the default 3x5, see https://github.com/manna-harbour/miryoku/discussions/85 (->Mapping->QMK)
#define MIRYOKU_MAPPING( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_ESC,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  XXX, \
XXX,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_RGUI, \
KC_LCTL,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  XXX , \
                  K32,  K33,  K34,         K35,  K36,  K37 \
)

#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_TAB),  LT(U_MOUSE,KC_SPC),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_MEDIA \
    XXX, XXX, XXX, XXX, XXX,        XXX,               XXX,          XXX,             XXX,                 XXX,\
    XXX, XXX, XXX, XXX, XXX,        KC_MEDIA_PREV_TRACK, KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN, KC_MEDIA_NEXT_TRACK,  XXX,\
    XXX, XXX, XXX, XXX, XXX,        XXX, XXX, XXX, XXX, XXX,\
    U_NP, U_NP, XXX, XXX, XXX,          XXX, XXX, XXX, U_NP, U_NP

#define MIRYOKU_LAYER_NAV \
    XXX, XXX, XXX, XXX, XXX,        XXX, XXX, XXX, XXX, XXX,\
    XXX, XXX, XXX, XXX, XXX,        KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXX,\
    XXX, XXX, XXX, XXX, XXX,        KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, XXX,\
    U_NP, U_NP, XXX, XXX, XXX,          KC_MS_BTN2, KC_MS_BTN1, XXX, U_NP, U_NP

// ! < > $ %    & { } X X
// _ - + = #    | ( ) @ X
// ^ ~ / * \    X [ ] X X
// >>/*
#define MIRYOKU_LAYER_SYM \
KC_EXLM,      KC_LT,      KC_GT,      KC_DLR,      KC_PERC,              KC_AMPR,      KC_LCBR,      KC_RCBR,      XXX, XXX,\
KC_UNDERSCORE,  KC_KP_MINUS,    KC_KP_PLUS,  KC_KP_EQUAL,   KC_HASH,     KC_PIPE,      KC_LPRN, KC_RPRN,      KC_AT,      XXX,\
KC_CIRC, KC_TILD,    KC_PSLS,      KC_ASTR,      KC_BSLS,                XXX,      KC_LBRC,      KC_RBRC,      XXX, XXX,\
                          U_NP, U_NP, XXX,  XXX,      XXX,               XXX, XXX,      XXX, U_NP, U_NP

#define MIRYOKU_LAYER_NUM \
      XXX, KC_7, KC_8, KC_9, KC_KP_PLUS,  XXX, XXX, XXX, XXX, XXX, \
     XXX, KC_4, KC_5, KC_6, KC_KP_MINUS,  XXX, XXX, XXX, XXX, XXX,\
     XXX, KC_1, KC_2, KC_3, XXX,          XXX, XXX, XXX, XXX, XXX,\
    U_NP, U_NP, KC_DOT, KC_0, XXX,        XXX, XXX, XXX, U_NP, U_NP

#define MIRYOKU_LAYER_FUN \
    KC_F9, KC_F10, KC_F11, KC_F12, XXX,     XXX, XXX, XXX, XXX, XXX,\
    KC_F5, KC_F6, KC_F7, KC_F8, XXX,        XXX, XXX, XXX, XXX, XXX,\
    KC_F1, KC_F2, KC_F3, KC_F4, XXX,        XXX, XXX, XXX, XXX, XXX,\
    U_NP, U_NP, KC_DOT, KC_0, XXX,          XXX, XXX, XXX, U_NP, U_NP


#include "amj60.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _FN0 0
#define _FN1 1
#define _FN2 2



// increase readability 
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define DUALCAPS LT(1, KC_CAPS)
#define FN2 TG(2)
#define ALTF4 LALT(KC_F4)
#define DUALFN LT(1, TG(2))



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Дефолтный слой
        * ,-----------------------------------------------------------.
        * |esc~| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |bckspc|
        * |-----------------------------------------------------------|
        * |tab  | Q | W | E | R | T | Y | U | I | O | P | [ | ] |  \  |
        * |-----------------------------------------------------------|
        * |caps\fn1| A | S | D | F | G | H | J | K | L | ; | ' | enter|
        * |-----------------------------------------------------------|
        * |shift    | Z | X | C | V | B | N | M | , | . | / |  shift  |
        * |-----------------------------------------------------------|
        * |ctr |win |alt |        space          |alt |fn2 |ctr |del  |
        * `-----------------------------------------------------------'
     */
    
    [_FN0] = KEYMAP_ANSI(
        KC_GESC,      KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL,      KC_BSPC,     \
        KC_TAB,     KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,   KC_BSLS,     \
        DUALCAPS,    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,        KC_ENT,      \
        KC_LSFT,      KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,           KC_RSFT,     \
        KC_LCTL, KC_LGUI, KC_LALT,            KC_SPACE,                      KC_RALT, DUALFN, KC_RCTL, KC_DEL),
    
    /* Слой fn1 / Переход к слою при удерживании.
        * ,-----------------------------------------------------------.
        * |altf4| F1| F2| F3| F4| F5| F6| F7| F8| F9| F10| VOLD| VOLU|bl|
        * |-----------------------------------------------------------|
        * |tab  | home | up | end | BL | BL_BRTG |  |  |  |  |  |  |  |RESET |
        * |-----------------------------------------------------------|
        * |caps\fn1|left|down |right |  |  |  |  |  |  |  |  | enter |
        * |-----------------------------------------------------------|
        * |shift     |  |  |calc|  |  |  |  |  |  |  |  shift   |
        * |-----------------------------------------------------------|
        * |ptrack|play|ntrack|       space       |alt |fn2 |ctr |del  |
        * `-----------------------------------------------------------'
     */
    
    [_FN1] = KEYMAP_ANSI(
        ALTF4,      KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_VOLD, KC_VOLU,                          KC_CALC,     \
        _______,      KC_HOME, KC_UP, KC_END, BL_TOGG, _______, _______, _______, _______, _______, _______, KC_PGDOWN, KC_PGUP,     KC_PSCREEN,     \
        _______,        KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______, _______, _______, _______, _______, _______,          RESET,     \
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                 _______,     \
        KC_MPRV, KC_MPLY, KC_MNXT,                              _______,                                     _______, _______, _______, _______),
        
   
    /* Слой Fn2 / Переключение на слой при нажатии Fn2
         * ,-----------------------------------------------------------.
        * |esc | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |bckspc|
        * |-----------------------------------------------------------|
        * |tab  | Q | W | E | R | T | Y | U | I | O | P | [ | ] |  \  |
        * |-----------------------------------------------------------|
        * |caps   | A | S | D | F | G | H | J | K | L | ; | ' | enter |
        * |-----------------------------------------------------------|
        * |shift    | Z | X | C | V | B | N | M | , | . | / |  shift   |
        * |-----------------------------------------------------------|
        * |ctr |win |alt |        space          |alt |fn2 |ctr |del  |
        * `-----------------------------------------------------------'
     */
    
    [_FN2] = KEYMAP_ANSI(
        XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,     \
        XXXXXXX,      KC_Q, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     \
        XXXXXXX,        KC_Q, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX,     \
        XXXXXXX,          KC_Q, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX,     \
        XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX,                                     XXXXXXX, FN2, XXXXXXX, XXXXXXX),
    
    
};

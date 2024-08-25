#include QMK_KEYBOARD_H
enum klor_layers {
    _BASE,
    _NUMB,
    _NAVI,
    _FUNC,
};

/*LEFT HAND HOME ROW MODS*/
#define GUI_C MT(MOD_LGUI, KC_C)
#define ALT_I MT(MOD_LALT, KC_I)
#define CTL_E MT(MOD_LCTL, KC_E)
#define SHT_A MT(MOD_LSFT, KC_A)
/*RIGHT HAND HOME ROW MODS*/
#define SHT_H MT(MOD_RSFT, KC_H)
#define CTL_MT MT(MOD_LCTL, KC_T)
#define ALT_S MT(MOD_LALT, KC_S)
#define GUI_N MT(MOD_LGUI, KC_N)
/*LAYER MODS*/
#define ESC_FUNC LT(3, KC_ESC)
#define SPC_NUMB LT(1, KC_SPC)
#define TAB_NAVI LT(2, KC_TAB)
#define ENT_NAVI LT(2, KC_ENT)
#define BSP_NUMB LT(1, KC_BSPC)
#define DEL_FUNC LT(3, KC_DEL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*BASE*/
    [_BASE] = LAYOUT_polydactyl(
                     KC_Z,        KC_Y,        KC_O,        KC_U,        KC_QUOT,                                        KC_DQUO,    KC_L,        KC_D,        KC_W,        KC_Q,
        KC_B,        GUI_C,       ALT_I,       CTL_E,       SHT_A,       KC_COMMA,                                       KC_DOT,     SHT_H,       CTL_MT,       ALT_S,       GUI_N,       KC_V,
        KC_HASH,     KC_G,        KC_X,        KC_J,        KC_K,        KC_SCLN,        KC_MUTE,        KC_MPLY,        KC_COLN,    KC_R,        KC_M,        KC_F,        KC_P,        KC_SLASH,
                                               ESC_FUNC,    SPC_NUMB,    TAB_NAVI,       KC_LBRC,        KC_RBRC,        ENT_NAVI,   BSP_NUMB,    DEL_FUNC
    ),

    [_NUMB] = LAYOUT_polydactyl(
                     KC_NO,       KC_NO,       KC_NO,       KC_QUES,     KC_NO,                                          KC_NO,      KC_EXLM,     KC_NO,       KC_NO,       KC_NO,
        KC_AT,       LGUI_T(KC_1),LALT_T(KC_2),LCTL_T(KC_3),LSFT_T(KC_4),KC_5,                                           KC_6,       LSFT_T(KC_7),LCTL_T(KC_3),LALT_T(KC_2),LGUI_T(KC_1),KC_GRV,
        KC_DLR,      KC_PIPE,     KC_EQL,      KC_TILDE,    KC_PLUS,     KC_MINS,        _______,        _______,        KC_UNDS,    KC_CIRC,     KC_AMPR,     KC_PERC,     KC_ASTR,     KC_BSLS,
                                               ESC_FUNC,    _______,     TAB_NAVI,       KC_LPRN,        KC_RPRN,        ENT_NAVI,   _______,     DEL_FUNC
    ),

    [_NAVI] = LAYOUT_polydactyl(
                     KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,                                          KC_AGIN,    KC_PAST,     KC_COPY,     KC_CUT,     KC_UNDO,
        KC_NO,       KC_LGUI,     KC_LALT,     KC_LCTL,     KC_LSFT,     KC_NO,                                          KC_CAPS,    KC_LEFT,     KC_DOWN,     KC_UP,      KC_RIGHT,     KC_NO,
        KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,          _______,        _______,        KC_INS,     KC_HOME,     KC_PGDN,     KC_PGUP,    KC_END,       KC_NO,
                                               ESC_FUNC,    SPC_NUMB,    _______,        KC_NO,          KC_NO,          _______,    BSP_NUMB,    DEL_FUNC
    ),

    [_FUNC] = LAYOUT_polydactyl(
                     KC_F12,      KC_F7,       KC_F8,       KC_F9,       KC_PSCR,                                        KC_NO,      KC_NO,       KC_NO,       KC_NO,      KC_NO,
        KC_NO,       KC_F11,      KC_F4,       KC_F5,       KC_F6,       KC_SCRL,                                        KC_NO,      KC_LGUI,     KC_LALT,     KC_LCTL,    KC_LSFT,      KC_NO,
        KC_NO,       KC_F10,      KC_F1,       KC_F2,       KC_F3,       KC_PAUS,        _______,        _______,        KC_NO,      KC_NO,       KC_NO,       KC_NO,      KC_NO,        KC_NO,
                                               _______,     SPC_NUMB,    TAB_NAVI,       KC_NO,          KC_NO,          ENT_NAVI,   BSP_NUMB,    _______
    ),
};

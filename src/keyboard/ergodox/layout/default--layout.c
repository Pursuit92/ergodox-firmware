// -*- tab-width: 16; -*-
/* ----------------------------------------------------------------------------
 * ergoDOX layout : QWERTY (modified from the Kinesis layout)
 * -----------------------------------------------------------------------------
 * Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (MIT) (see "license.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  ktog     &kbfun_toggle
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpush5   &kbfun_layer_push_5
#define  lpush6   &kbfun_layer_push_6
#define  lpush7   &kbfun_layer_push_7
#define  lpush8   &kbfun_layer_push_8
#define  lpush9   &kbfun_layer_push_9
#define  lpush10  &kbfun_layer_push_10
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  lpop5    &kbfun_layer_pop_5
#define  lpop6    &kbfun_layer_pop_6
#define  lpop7    &kbfun_layer_pop_7
#define  lpop8    &kbfun_layer_pop_8
#define  lpop9    &kbfun_layer_pop_9
#define  lpop10   &kbfun_layer_pop_10
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
  // LAYER 0
  KB_MATRIX_LAYER(
                  // unused
                  0,
                  // left hand
                  _equal,	_1,	_2,	_3,	_4,	_5,	_esc,
                  _backslash,	_Q,	_W,	_E,	_R,	_T,	1,
                  _tab,	_A,	_S,	_D,	_F,	_G,
                  _shiftL,	_Z,	_X,	_C,	_V,	_B,	1,
                  _guiL,	_grave,	_backslash,	_arrowL,	_arrowR,
                  _ctrlL,	_altL,
                  0,	0,	_home,
                  _bs,	_del,	_end,
                  // right hand
                  2,	_6,	_7,	_8,	_9,	_0,	_dash,
                  _bracketL,	_Y,	_U,	_I,	_O,	_P,	_bracketR,
                  _H,	_J,	_K,	_L,	_semicolon,	_quote,
                  1,	_N,	_M,	_comma,	_period,	_slash,	_shiftR,
                  _arrowL,	_arrowD,	_arrowU,	_arrowR,	_guiR,
                  _altR,	_ctrlR,
                  _pageU,	0,	0,
                  _pageD,	_enter,	_space
                  ),
  // LAYER 1
  KB_MATRIX_LAYER(
                  // unused
                  0,
                  // left hand
                  0,	_F1,	_F2,	_F3,	_F4,	_F5,	_F11,
                  0,	0,	0,	0,	0,	0,	1,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0,
                  // right hand
                  _F12,	_F6,	_F7,	_F8,	_F9,	_F10,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0
                  ),
  // LAYER 2
  KB_MATRIX_LAYER(
                  // unused
                  0,
                  // left hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	3,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	4,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0,
                  // right hand
                  0,	0,	_numLock_kp,	_div_kp,	_mul_kp,	_sub_kp,	0,
                  0,	0,	_7_kp,	_8_kp,	_9_kp,	_add_kp,	0,
                  0,	_4_kp,	_5_kp,	_6_kp,	_add_kp,	0,
                  0,	0,	_1_kp,	_2_kp,	_3_kp,	_enter_kp,	0,
                  0,	0,	_dec_del_kp,	_enter_kp,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	_0_kp),
  // LAYER 3
  KB_MATRIX_LAYER(
                  // unused
                  0,
                  // left hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	_Q,	_D,	_R,	_W,	_B,	0,
                  0,	_A,	_S,	_H,	_T,	_G,
                  0,	_Z,	_X,	_M,	_C,	_V,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0,
                  // right hand
                  2,	0,	0,	0,	0,	0,	0,
                  0,	_J,	_F,	_U,	_P,	_semicolon,	0,
                  _Y,	_N,	_E,	_O,	_I,	0,
                  0,	_K,	_L,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0
                  ),
  // LAYER 4
  KB_MATRIX_LAYER(
                  // unused
                  0,
                  // left hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	_Q,	_W,	_F,	_P,	_G,	0,
                  0,	_A,	_R,	_S,	_T,	_D,
                  0,	_Z,	_X,	_C,	_V,	_B,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0,
                  // right hand
                  2,	0,	0,	0,	0,	0,	0,
                  0,	_J,	_L,	_U,	_Y,	_semicolon,	0,
                  _H,	_N,	_E,	_I,	_O,	0,
                  0,	_K,	_M,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0
                  ),
  // LAYER 5
  KB_MATRIX_LAYER(
                  // unused
                  0,
                  // left hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0,
                  // right hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0
                  ),
  // LAYER 6
  KB_MATRIX_LAYER(
                  // unused
                  0,
                  // left hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0,
                  // right hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0
                  ),
  // LAYER 7
  KB_MATRIX_LAYER(
                  // unused
                  0,
                  // left hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0,
                  // right hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0
                  ),
  // LAYER 8
  KB_MATRIX_LAYER(
                  // unused
                  0,
                  // left hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0,
                  // right hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0
                  ),
  // LAYER 9
  KB_MATRIX_LAYER(
                  // unused
                  0,
                  // left hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0,
                  // right hand
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,	0,	0,
                  0,	0,	0,	0,	0,
                  0,	0,
                  0,	0,	0,
                  0,	0,	0
                  ),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
  // LAYER 0
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush1,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush1,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,
                  NULL,	NULL,	kprrel,
                  kprrel,	kprrel,	kprrel,
                  // right hand
                  lpush2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  lpush1,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,
                  kprrel,	NULL,	NULL,
                  kprrel,	kprrel,	kprrel
                  ),
  // LAYER 1
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	lpop1,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  NULL,	NULL,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  // right hand
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  ktrans,	NULL,	NULL,
                  ktrans,	ktrans,	ktrans
                  ),
  // LAYER 2
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  dbtldr,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	lpop,	lpop,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	lpop,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  lpop2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
                  NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
                  NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
                  NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
                  NULL,	NULL,	kprrel,	kprrel,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	kprrel
                  ),
  // LAYER 3
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  // right hand
                  lpush2,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	kprrel,	kprrel,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans
                  ),
  // LAYER 4
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  // right hand
                  lpush2,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	kprrel,	kprrel,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans
                  ),
  // LAYER 5
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL
                  ),
  // LAYER 6
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL
                  ),
  // LAYER 7
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL
                  ),
  // LAYER 8
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL
                  ),
  // LAYER 9
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL
                  ),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
  // LAYER 0
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop1,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,
                  NULL,	NULL,	kprrel,
                  kprrel,	kprrel,	kprrel,
                  // right hand
                  NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  lpop1,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  kprrel,	kprrel,
                  kprrel,	NULL,	NULL,
                  kprrel,	kprrel,	kprrel
                  ),
  // LAYER 1
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	NULL,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  NULL,	NULL,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  // right hand
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  ktrans,	NULL,	NULL,
                  ktrans,	ktrans,	ktrans
                  ),
  // LAYER 2
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	lpush3,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	lpush4,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
                  NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
                  NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
                  NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
                  NULL,	NULL,	kprrel,	kprrel,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	kprrel
                  ),
  // LAYER 3
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  // right hand
                  NULL,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	kprrel,	kprrel,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans
                  ),
  // LAYER 4
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  // right hand
                  NULL,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,
                  ktrans,	kprrel,	kprrel,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans,
                  ktrans,	ktrans,	ktrans
                  ),
  // LAYER 5
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL
                  ),
  // LAYER 6
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL
                  ),
  // LAYER 7
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL
                  ),
  // LAYER 8
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL
                  ),
  // LAYER 9
  KB_MATRIX_LAYER(
                  // unused
                  NULL,
                  // left hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,
                  // right hand
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL,	NULL,	NULL,
                  NULL,	NULL,
                  NULL,	NULL,	NULL,
                  NULL,	NULL,	NULL
                  ),
};
// ----------------------------------------------------------------------------

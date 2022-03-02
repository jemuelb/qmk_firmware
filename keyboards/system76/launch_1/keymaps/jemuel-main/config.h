#pragma once

// RGB Stuff
#undef RGB_MATRIX_STARTUP_MODE
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR

#undef RGB_MATRIX_STARTUP_SAT
#define RGB_MATRIX_STARTUP_SAT 0

#undef RGB_MATRIX_STARTUP_VAL
#define RGB_MATRIX_STARTUP_VAL 128

#undef RGB_MATRIX_STARTUP_SPD
#define RGB_MATRIX_STARTUP_SPD 80

// Mod tap stuff
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY

#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

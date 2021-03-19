#pragma once

/* Split Keyboard Configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

// because elite-c is a slave device
#define SPLIT_USB_DETECT
#define NO_USB_STARTUP_CHECK

#define SPLIT_TRANSPORT_MIRROR

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_KEYPRESSES
#    define RGB_DISABLE_WHEN_USB_SUSPENDED true
#    define RGBLIGHT_SLEEP 
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // max leds processed per animation task
#    define RGB_MATRIX_LED_FLUSH_LIMIT 16 // LEDs refresh rate max. 60fps

#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#    define RGB_MATRIX_HUE_STEP 6
#    define RGB_MATRIX_SAT_STEP 6
#    define RGB_MATRIX_VAL_STEP 6
#    define RGB_MATRIX_SPD_STEP 6

// Animations disabled to save space
#   define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#   define DISABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#   define DISABLE_RGB_MATRIX_BREATHING
#   define DISABLE_RGB_MATRIX_BAND_SAT
#   define DISABLE_RGB_MATRIX_BAND_VAL
#   define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#   define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#   define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#   define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#   define DISABLE_RGB_MATRIX_CYCLE_ALL
#   define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#   define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
#   define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
#   define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#   define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#   define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
#   define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
#   define DISABLE_RGB_MATRIX_DUAL_BEACON
#   define DISABLE_RGB_MATRIX_RAINBOW_BEACON
#   define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#   define DISABLE_RGB_MATRIX_RAINDROPS
#   define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS

// #   define DISABLE_RGB_MATRIX_TYPING_HEATMAP
#   define DISABLE_RGB_MATRIX_DIGITAL_RAIN

// #   define DISABLE_RGB_MATRIX_SOLID_REACTIVE
#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#   define DISABLE_RGB_MATRIX_SPLASH
#   define DISABLE_RGB_MATRIX_MULTISPLASH
#   define DISABLE_RGB_MATRIX_SOLID_SPLASH
#   define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif


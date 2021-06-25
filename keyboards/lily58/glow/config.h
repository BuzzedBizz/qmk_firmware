#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFC51
#define PRODUCT_ID      0x0058
#define DEVICE_VER      0x0100
#define MANUFACTURER    Keyhive
#define PRODUCT         "Lily58 Glow"

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* ws2812 RGB LED */
#define RGB_DI_PIN D3

/* Backlight setup */
#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_SPLIT
#    define RGBLIGHT_LIMIT_VAL 120
#endif

/* LED Setup */
#ifdef RGB_MATRIX_ENABLE
#    define RGBLED_NUM 70  // Number of LEDs
#    define DRIVER_LED_TOTAL RGBLED_NUM

#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120 // Sane brightness values so the board has enough power to operate
#    define RGBLED_SPLIT { 35, 35 }
#    define RGB_MATRIX_SPLIT RGBLED_SPLIT
#endif

/* serial setup */
#define SOFT_SERIAL_PIN D2

#ifdef OPENRGB_ENABLE
#define OPENRGB_ZONES_COUNT 1
#define OPENRGB_USE_CUSTOM_MATRIX_MAP
#define OPENRGB_DIRECT_MODE_USE_UNIVERSAL_BRIGHTNESS
#ifdef OPENRGB_USE_CUSTOM_MATRIX_MAP
    #define OPENRGB_MATRIX_COLUMNS 12
    #define OPENRGB_MATRIX_ROWS 5
#endif
#endif

#ifdef OPENRGB_ENABLE
RGB_MATRIX_EFFECT(OPENRGB_DIRECT)
#    ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool OPENRGB_DIRECT(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        #ifdef OPENRGB_DIRECT_MODE_USE_UNIVERSAL_BRIGHTNESS
        HSV max_brightness = {0, 0, rgb_matrix_config.hsv.v}; // turn into whitepoint for current brightness
        RGB max_channels = rgb_matrix_hsv_to_rgb(max_brightness);
        uint8_t r  = scale8(g_openrgb_direct_mode_colors[i].r, max_channels.r);
        uint8_t g  = scale8(g_openrgb_direct_mode_colors[i].g, max_channels.g);
        uint8_t b  = scale8(g_openrgb_direct_mode_colors[i].b, max_channels.b);

        rgb_matrix_set_color(i, r, g, b);
        #else
        rgb_matrix_set_color(
            i,
            g_openrgb_direct_mode_colors[i].r,
            g_openrgb_direct_mode_colors[i].g,
            g_openrgb_direct_mode_colors[i].b
        );
        #endif
    }
    return led_max < DRIVER_LED_TOTAL;
}
#    endif
#endif

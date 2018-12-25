#pragma once
#include "snake+/definitions.h"
#include "snake+/components/inputs.h"

// Menus
extern void (*const snake_draw_menu_functions[SNAKE_COUNT_MENUS])(
    uint8_t* out_id_menu_function,
    const uint8_t in_id_main_menu_function,
    const uint8_t in_id_in_game_menu_function
);

// Main Menus
extern void (*const snake_draw_main_menu_functions[SNAKE_COUNT_MAIN_MENUS])(
    uint8_t* out_id_menu_function
);

// Inputs
extern void (*const snake_handle_inputs_functions[SNAKE_COUNT_INPUTS])();

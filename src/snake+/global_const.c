#include "pch.h"
#include "snake+/global_const.h"
#include "snake+/components/menu.h"
#include "snake+/components/buttons.h"

// Menus
void (*const snake_draw_menu_functions[SNAKE_COUNT_MENUS])(
    const uint8_t in_id_main_menu_function,
    const uint8_t in_id_in_game_menu_function
) = { 
    snake_draw_none_menu, 
    snake_draw_main_menu, 
    snake_draw_in_game_menu
};

// Main Menus
void (*const snake_draw_main_menu_functions[SNAKE_COUNT_MAIN_MENUS])(

) = {
    snake_draw_main_menu_1280_720,
    snake_draw_main_menu_1920_1080,
    snake_draw_main_menu_2560_1440
};

// Inputs
void (*const snake_handle_inputs_functions[SNAKE_COUNT_INPUTS])() = {
    snake_move_up,
    snake_move_down,
    snake_move_right,
    snake_move_left
};
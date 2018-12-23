#include "pch.h"
#include "snake+/global_const.h"

// Menus
void (*const snake_draw_menu_functions[SNAKE_COUNT_MENUS])() = { 
    snake_draw_none_menu, 
    snake_draw_main_menu, 
    snake_draw_in_game_menu
};

// Inputs
void (*const snake_handle_inputs_functions[SNAKE_COUNT_INPUTS])() = {
    snake_move_up,
    snake_move_down,
    snake_move_right,
    snake_move_left
};
#include "pch.h"
#include "snake+/global_const.h"

// Menus
const unsigned short snake_none_menu    = 0;
const unsigned short snake_main_menu    = 1;
const unsigned short snake_in_game_menu = 2;
void (*const snake_draw_menu_functions[3])() = { 
    snake_draw_none_menu, 
    snake_draw_main_menu, 
    snake_draw_in_game_menu
};
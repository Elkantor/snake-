#pragma once
#include "snake+/definitions.h"
#include "snake+/components/inputs.h"

// Menus
extern void (*const snake_draw_menu_functions[SNAKE_COUNT_MENUS])();

// Main Menus
extern void (*const snake_draw_main_menu_functions[SNAKE_COUNT_MAIN_MENUS])();

// Options Menus
extern void (*const snake_draw_options_menu_functions[SNAKE_COUNT_OPTIONS_MENUS])();

// Inputs
extern void (*const snake_handle_inputs_functions[SNAKE_COUNT_INPUTS])();

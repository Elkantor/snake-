#pragma once
#include "snake+/definitions.h"
#include "snake+/components/menu.h"
#include "snake+/components/inputs.h"

// Menus
extern void (*const snake_draw_menu_functions[SNAKE_COUNT_MENUS])();

// Inputs
extern void (*const snake_handle_inputs_functions[SNAKE_COUNT_INPUTS])();

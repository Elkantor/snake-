#pragma once

// Menus
extern uint8_t* id_active_menu_function;

// Main Menu
extern uint8_t* id_active_main_menu_function;

// In Game Menu
extern uint8_t* id_active_in_game_menu_function;

// Inputs
extern uint8_t* id_active_input_function;

void snake_initialize_components();
void snake_default_initialisation();
void snake_free_components();
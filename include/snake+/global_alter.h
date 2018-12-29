#pragma once

// Menus
extern uint8_t* id_active_menu_function;

// Main Menu
extern uint8_t* id_active_main_menu_function;

// Option Menu
extern uint8_t* id_active_options_menu_function;

// In Game Menu
extern uint8_t* id_active_in_game_menu_function;

// Inputs
extern uint8_t* id_active_input_function;

void snake_initialize_components();
void snake_initialise_resolution_1280_720();
void snake_initialise_resolution_1920_1080();
void snake_initialise_resolution_2560_1440();
void snake_default_initialisation();
void snake_free_components();
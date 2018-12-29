#include "pch.h"
#include "snake+/global_alter.h"
#include "snake+/definitions.h"
#include "snake+/global_const.h"

// Menus
uint8_t* id_active_menu_function;

// Main Menu
uint8_t* id_active_main_menu_function;

// Options Menu
uint8_t* id_active_options_menu_function;

// In Game Menu
uint8_t* id_active_in_game_menu_function;

// Inputs
uint8_t* id_active_input_function;


#define ALLOC(type, count) (type*)malloc(count*sizeof(type))
#define CHECK(pointer) if(pointer == NULL) \
    snake_error_exit(__FILE__, __FUNCTION__, __LINE__) 
void snake_initialize_components(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif
    
    // Menus
    id_active_menu_function = ALLOC(uint8_t, 1);
    CHECK(id_active_menu_function);

    // Main Menu
    id_active_main_menu_function = ALLOC(uint8_t, 1);
    CHECK(id_active_main_menu_function);
    
    // Options Menu
    id_active_options_menu_function = ALLOC(uint8_t, 1);
    CHECK(id_active_options_menu_function);
    
    // In Game Menu
    id_active_in_game_menu_function = ALLOC(uint8_t, 1);
    CHECK(id_active_in_game_menu_function);

    // Inputs
    id_active_input_function = ALLOC(uint8_t, 1);
    CHECK(id_active_input_function);

}
#undef ALLOC
#undef CHECK

void snake_initialise_resolution_1280_720(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif

    *id_active_main_menu_function = SNAKE_MAIN_MENU_1280x720;
    *id_active_in_game_menu_function = SNAKE_IN_GAME_MENU_1280x720;
    *id_active_options_menu_function = SNAKE_OPTIONS_MENU_1280x720;
}

void snake_initialise_resolution_1920_1080(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif

    *id_active_main_menu_function = SNAKE_MAIN_MENU_1920x1080;
    *id_active_in_game_menu_function = SNAKE_IN_GAME_MENU_1920x1080;
    *id_active_options_menu_function = SNAKE_OPTIONS_MENU_1920x1080;
}

void snake_initialise_resolution_2560_1440(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif

    *id_active_main_menu_function = SNAKE_MAIN_MENU_2560x1440;
    *id_active_in_game_menu_function = SNAKE_IN_GAME_MENU_2560x1440;
    *id_active_options_menu_function = SNAKE_OPTIONS_MENU_2560x1440;

}

void snake_default_initialisation(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif

    // Default menu
    *id_active_menu_function = SNAKE_MAIN_MENU;

    // Default resolution
    snake_initialise_resolution_1280_720();

    // Default input pressed
    *id_active_input_function = SNAKE_LEFT_INPUT;
    snake_handle_inputs_functions[*id_active_input_function]();
}

void snake_free_components(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif

    // Menus
    free(id_active_menu_function);

    // Main Menu
    free(id_active_main_menu_function);

    // Options Menu
    free(id_active_options_menu_function);
    
    // In Game Menu
    free(id_active_in_game_menu_function);

    // Inputs
    free(id_active_input_function);
}
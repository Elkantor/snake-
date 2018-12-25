#include "pch.h"
#include "snake+/global_alter.h"

// Menus
uint8_t* id_active_menu_function;

// Main Menu
uint8_t* id_active_main_menu_function;

// In Game Menu
uint8_t* id_active_in_game_menu_function;

// Inputs
uint8_t* id_active_input_function;


#define ALLOC(type, count) (type*)malloc(count*sizeof(type))
#define CHECK(pointer) if(pointer == NULL) \
    snake_error_exit(__FILE__, __FUNCTION__, __LINE__) 
void snake_initialize_components(){
    // Menus
    id_active_menu_function = ALLOC(uint8_t, 1);
    CHECK(id_active_menu_function);

    // Main Menu
    id_active_main_menu_function = ALLOC(uint8_t, 1);
    CHECK(id_active_main_menu_function);
    
    // In Game Menu
    id_active_in_game_menu_function = ALLOC(uint8_t, 1);
    CHECK(id_active_in_game_menu_function);

    // Inputs
    id_active_input_function = ALLOC(uint8_t, 1);
    CHECK(id_active_input_function);

}
#undef ALLOC
#undef CHECK


void snake_free_components(){    
    // Menus
    free(id_active_menu_function);

    // Main Menu
    free(id_active_main_menu_function);
    
    // In Game Menu
    free(id_active_in_game_menu_function);

    // Inputs
    free(id_active_input_function);
}
#include "pch.h"
#include "snake+/global_alter.h"

// Menus
uint8_t* id_active_menu;

// Inputs
uint8_t* id_active_input;


#define ALLOC(type, count) (type*)malloc(count*sizeof(type))
#define CHECK(pointer) if(pointer == NULL) \
    snake_error_exit(__FILE__, __FUNCTION__, __LINE__) 
void snake_initialize_components(){
    
    id_active_menu = ALLOC(uint8_t, 1);
    CHECK(id_active_menu);
    
    id_active_input = ALLOC(uint8_t, 1);
    CHECK(id_active_input);

}
#undef ALLOC
#undef CHECK


void snake_free_components(){
    free(id_active_menu);
    free(id_active_input);
}
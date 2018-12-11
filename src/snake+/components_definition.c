#include "pch.h"
#include "snake+/components_definition.h"

// Menus
const snake_menu menus[3] = {
    { 0, snake_draw_none_menu },
    { 1, snake_draw_main_menu },
    { 2, snake_draw_in_game_menu }
};
unsigned short* id_active_menu;



#define ALLOC(type, count) (type*)malloc(count*sizeof(type))
#define CHECK(pointer) if(pointer == NULL) \
    snake_error_exit(__FILE__, __FUNCTION__, __LINE__) 
void snake_initialize_components(){
    
    id_active_menu = ALLOC(unsigned short, 1);
    CHECK(id_active_menu);

}
#undef ALLOC
#undef CHECK


void snake_free_components(){
    free(id_active_menu);
}

void snake_error_exit(
    const char* in_file,
    const char* in_function,
    const unsigned int in_line
){
    DEBUG_LOG(
        "A major problem occured, the application is closing.",
        in_file,
        in_function,
        in_line
    );
}


#include "pch.h"
#include "snake+/global_alter.h"

// Menus
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
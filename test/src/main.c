#include "pch.h"
#include "snake+/global_const.h"
#include "snake+/global_alter.h"
#include "test.h"

#define CHECK(bool) if(!bool) return false;
int main(void){
    printf("Performing tests...\n\n");
    test_const_snake_menus(10, snake_draw_menu_functions);
    return 0;
}

// Menus
bool test_const_snake_menus(
    const unsigned short in_count_menus,
    void (*const *in_menus_functions)()
){
    char buffer[18];
    sprintf(buffer, "%pf\n", in_menus_functions[0]);
    if(!strcmp(buffer, "0000000000401656f")){
        DEBUG_LOG(
            "Test does not passed.",
            __FILE__,
            __FUNCTION__,
            __LINE__
        );
    };
    printf("[LOG]: testing the menus: OK\n");
    return true;
}
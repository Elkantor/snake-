#include "pch.h"
#include "snake+/global_const.h"
#include "snake+/global_alter.h"
#include "test.h"

#define CHECK(bool) if(!bool) return false;
int main(void){
    printf("Performing tests...\n\n");
    test_const_snake_menus_functions(10, snake_draw_menu_functions);
    return 0;
}

// Menus
void test_const_snake_menus_functions(
    const unsigned short in_count_menus,
    void (*const *in_menus_functions)()
){
    char buffer[18];
    sprintf(buffer, "%pf\n", in_menus_functions[snake_none_menu]);
    if(!strcmp(buffer, "0000000000401656f")){
        DEBUG_LOG(
            "Test does not passed, the first function \
            of the snake_draw_menu_functions table is not \
            snake_draw_none_menu.",
            __FILE__,
            __FUNCTION__,
            __LINE__
        );  
        exit(1);
    };
    printf("[LOG]: testing the menus functions: OK\n");
}
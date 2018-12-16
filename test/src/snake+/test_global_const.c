#include "pch.h"
#include "common/ptest.h"
#include "snake+/global_const.h"

void test_menus_functions(void){
    PT_ASSERT(snake_none_menu == 0);
    PT_ASSERT(snake_main_menu == 1);
    PT_ASSERT(snake_in_game_menu == 2);

    char buffer[18];
    sprintf(buffer, "%pf", snake_draw_menu_functions[snake_none_menu]);
    PT_ASSERT(strcmp(buffer, "0000000000401600f") == 0);

    sprintf(buffer, "%pf", snake_draw_menu_functions[snake_main_menu]);
    PT_ASSERT(strcmp(buffer, "0000000000401590f") == 0);
    
    sprintf(buffer, "%pf", snake_draw_menu_functions[snake_in_game_menu]);
    PT_ASSERT(strcmp(buffer, "00000000004015C8f") == 0);
}

void suite_global_const(void) {
    pt_add_test(test_menus_functions, "Test menus functions pointers", "Suite global const");
}
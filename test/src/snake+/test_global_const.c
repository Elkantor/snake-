#include "pch.h"
#include "common/ptest.h"
#include "snake+/global_const.h"
#include "snake+/test_global_const.h"

char function_name[30];

void test_menus_functions(void){
    PT_ASSERT(snake_none_menu == 0);
    PT_ASSERT(snake_main_menu == 1);
    PT_ASSERT(snake_in_game_menu == 2);

    snake_draw_menu_functions[snake_none_menu]();
    PT_ASSERT(strcmp(function_name, "snake_draw_none_menu") == 0);

    snake_draw_menu_functions[snake_main_menu]();
    PT_ASSERT(strcmp(function_name, "snake_draw_main_menu") == 0);

    snake_draw_menu_functions[snake_in_game_menu]();
    PT_ASSERT(strcmp(function_name, "snake_draw_in_game_menu") == 0);
}

void suite_global_const(void) {
    pt_add_test(test_menus_functions, "Test menus functions pointers", "Suite global const");
}
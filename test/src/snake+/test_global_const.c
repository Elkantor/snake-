#include "pch.h"
#include "common/ptest.h"
#include "snake+/global_const.h"
#include "snake+/test_global_const.h"
#include "snake+/global_alter.h"
#include "test.h"


void test_menus_functions(void){
    PT_ASSERT(SNAKE_NONE_MENU == 0);
    PT_ASSERT(SNAKE_MAIN_MENU == 1);
    PT_ASSERT(SNAKE_IN_GAME_MENU == 2);


    test_flush_functions_names(functions_names, &functions_count);
    *id_active_menu_function = SNAKE_NONE_MENU;
    snake_draw_menu_functions[*id_active_menu_function](
        id_active_menu_function,
        *id_active_main_menu_function,
        *id_active_in_game_menu_function
    );
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_none_menu") == 0);

    test_flush_functions_names(functions_names, &functions_count);
    *id_active_menu_function = SNAKE_MAIN_MENU;
    snake_draw_menu_functions[*id_active_menu_function](
        id_active_menu_function,
        *id_active_main_menu_function,
        *id_active_in_game_menu_function
    );
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_main_menu") == 0);

    test_flush_functions_names(functions_names, &functions_count);
    *id_active_menu_function = SNAKE_IN_GAME_MENU;
    snake_draw_menu_functions[*id_active_menu_function](
        id_active_menu_function,
        *id_active_main_menu_function,
        *id_active_in_game_menu_function
    );
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_in_game_menu") == 0);
}

void suite_global_const(void) {
    pt_add_test(test_menus_functions, "Test menus functions pointers", "Suite global const");
}
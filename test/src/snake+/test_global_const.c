#include "pch.h"
#include "common/ptest.h"
#include "snake+/global_const.h"
#include "snake+/test_global_const.h"
#include "snake+/global_alter.h"
#include "test.h"


void test_menus_functions(void){
    PT_ASSERT(SNAKE_NONE_MENU == 0);
    PT_ASSERT(SNAKE_MAIN_MENU == 1);
    PT_ASSERT(SNAKE_OPTIONS_MENU == 2);
    PT_ASSERT(SNAKE_IN_GAME_MENU == 3);


    test_flush_functions_names(functions_names, &functions_count);
    *id_active_menu_function = SNAKE_NONE_MENU;
    snake_draw_menu_functions[*id_active_menu_function]();
    PT_ASSERT(*id_active_menu_function == SNAKE_NONE_MENU);
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_none_menu") == 0);

    test_flush_functions_names(functions_names, &functions_count);
    *id_active_menu_function = SNAKE_MAIN_MENU;
    snake_draw_menu_functions[*id_active_menu_function]();
    PT_ASSERT(*id_active_menu_function == SNAKE_MAIN_MENU);
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_main_menu") == 0);
    
    test_flush_functions_names(functions_names, &functions_count);
    *id_active_menu_function = SNAKE_OPTIONS_MENU;
    snake_draw_menu_functions[*id_active_menu_function]();
    PT_ASSERT(*id_active_menu_function == SNAKE_OPTIONS_MENU);
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_options_menu") == 0);

    test_flush_functions_names(functions_names, &functions_count);
    *id_active_menu_function = SNAKE_IN_GAME_MENU;
    snake_draw_menu_functions[*id_active_menu_function]();
    PT_ASSERT(*id_active_menu_function == SNAKE_IN_GAME_MENU);
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_in_game_menu") == 0);
}

void test_main_menus_functions(void){
    PT_ASSERT(SNAKE_MAIN_MENU_1280x720 == 0);
    PT_ASSERT(SNAKE_MAIN_MENU_1920x1080 == 1);
    PT_ASSERT(SNAKE_MAIN_MENU_2560x1440 == 2);

    *id_active_menu_function = SNAKE_MAIN_MENU;

    test_flush_functions_names(functions_names, &functions_count);
    *id_active_main_menu_function = SNAKE_MAIN_MENU_1280x720;
    snake_draw_main_menu_functions[*id_active_main_menu_function]();
    PT_ASSERT(*id_active_main_menu_function == SNAKE_MAIN_MENU_1280x720);
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_main_menu_1280_720") == 0);

    test_flush_functions_names(functions_names, &functions_count);
    *id_active_main_menu_function = SNAKE_MAIN_MENU_1920x1080;
    snake_draw_main_menu_functions[*id_active_main_menu_function]();
    PT_ASSERT(*id_active_main_menu_function == SNAKE_MAIN_MENU_1920x1080);
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_main_menu_1920_1080") == 0);

    test_flush_functions_names(functions_names, &functions_count);
    *id_active_main_menu_function = SNAKE_MAIN_MENU_2560x1440;
    snake_draw_main_menu_functions[*id_active_main_menu_function]();
    PT_ASSERT(*id_active_main_menu_function == SNAKE_MAIN_MENU_2560x1440);
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_main_menu_2560_1440") == 0);

}

void test_options_menus_functions(void){
    PT_ASSERT(SNAKE_OPTIONS_MENU_1280x720 == 0);
    PT_ASSERT(SNAKE_OPTIONS_MENU_1920x1080 == 1);
    PT_ASSERT(SNAKE_OPTIONS_MENU_2560x1440 == 2);

    *id_active_menu_function = SNAKE_OPTIONS_MENU;

    test_flush_functions_names(functions_names, &functions_count);
    *id_active_options_menu_function = SNAKE_OPTIONS_MENU_1280x720;
    snake_draw_options_menu_functions[*id_active_options_menu_function]();
    PT_ASSERT(*id_active_options_menu_function == SNAKE_OPTIONS_MENU_1280x720);
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_options_menu_1280_720") == 0);
    
    test_flush_functions_names(functions_names, &functions_count);
    *id_active_options_menu_function = SNAKE_OPTIONS_MENU_1920x1080;
    snake_draw_options_menu_functions[*id_active_options_menu_function]();
    PT_ASSERT(*id_active_options_menu_function == SNAKE_OPTIONS_MENU_1920x1080);
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_options_menu_1920_1080") == 0);
    
    test_flush_functions_names(functions_names, &functions_count);
    *id_active_options_menu_function = SNAKE_OPTIONS_MENU_2560x1440;
    snake_draw_options_menu_functions[*id_active_options_menu_function]();
    PT_ASSERT(*id_active_options_menu_function == SNAKE_OPTIONS_MENU_2560x1440);
    PT_ASSERT(strcmp(functions_names[functions_count-1], "snake_draw_options_menu_2560_1440") == 0);
}

void suite_global_const(void) {
    pt_add_test(test_menus_functions, "Test menus functions pointers", "Suite global const");
    pt_add_test(test_main_menus_functions, "Test main menus functions pointers", "Suite global const");
    pt_add_test(test_options_menus_functions, "Test options menus functions pointers", "Suite global const");
}
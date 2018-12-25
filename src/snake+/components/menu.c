#include "pch.h"
#include "snake+/global_const.h"
#include "snake+/global_alter.h"
#include "snake+/components/menu.h"
#include "snake+/components/buttons.h"

#if TEST
    #include "test.h"
#endif

void snake_draw_main_menu(
    const uint8_t in_id_main_menu_function,
    const uint8_t in_id_in_game_menu_function
){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif
    snake_draw_main_menu_functions[in_id_main_menu_function]();
}

void snake_draw_in_game_menu(
    const uint8_t in_id_main_menu_function,
    const uint8_t in_id_in_game_menu_function
){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif

    DEBUG_LOG(
        "Inside in game menu function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}

void snake_draw_none_menu(
    const uint8_t in_id_main_menu_function,
    const uint8_t in_id_in_game_menu_function
){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif
    
    DEBUG_LOG(
        "Inside none menu function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}

// Main Menu
void snake_draw_main_menu_1280_720(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif

    

}
void snake_draw_main_menu_1920_1080(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif
    
    DEBUG_LOG(
        "Inside snake_draw_main_menu_1920_1080 function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}
void snake_draw_main_menu_2560_1440(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif
    
    DEBUG_LOG(
        "Inside snake_draw_main_menu_2560_1440 function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}
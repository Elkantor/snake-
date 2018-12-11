#include "pch.h"
#include "snake+/components/menu.h"
#include "snake+/components_definition.h"

void snake_draw_menu(const unsigned short* in_id){
    menus[*in_id].draw_function();
}

void snake_draw_main_menu(){
    DEBUG_LOG(
        "Inside main menu function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}

void snake_draw_in_game_menu(){
    DEBUG_LOG(
        "Inside in game menu function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}

void snake_draw_none_menu(){
    DEBUG_LOG(
        "Inside none menu function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}




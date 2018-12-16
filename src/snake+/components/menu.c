#include "pch.h"
#include "snake+/components/menu.h"
#include "snake+/global_const.h"

#if TEST
    #include "test.h"
#endif

void snake_draw_main_menu(){
    #if TEST
        sprintf(function_name, "%s", __PRETTY_FUNCTION__);
        return;
    #endif

    DEBUG_LOG(
        "Inside main menu function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}

void snake_draw_in_game_menu(){
    #if TEST
        sprintf(function_name, "%s", __PRETTY_FUNCTION__);
        return;
    #endif

    DEBUG_LOG(
        "Inside in game menu function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}

void snake_draw_none_menu(){
    #if TEST
        sprintf(function_name, "%s", __PRETTY_FUNCTION__);
        return;
    #endif
    
    DEBUG_LOG(
        "Inside none menu function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}




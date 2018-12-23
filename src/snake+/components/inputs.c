#include "pch.h"
#include "snake+/components/inputs.h"

#if TEST
    #include "test.h"
#endif

void snake_move_up(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif

    DEBUG_LOG(
        "Inside move up function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}

void snake_move_down(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif

    DEBUG_LOG(
        "Inside move down function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}

void snake_move_right(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif

    DEBUG_LOG(
        "Inside move right function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}

void snake_move_left(){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #endif

    DEBUG_LOG(
        "Inside move left function",
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
}
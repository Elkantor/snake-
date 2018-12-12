#include "pch.h"
#include "snake+/components_definition.h"
#include "test.h"

#define CHECK(bool) if(!bool) return false;
int main(void){
    printf("Performing tests...\n\n");
    test_const_snake_menus(10, menus);
    return 0;
}

// Menus
bool test_const_snake_menus(
    const unsigned short in_count_menus,
    const snake_menu* in_menus
){
    char buffer[18];
    sprintf(buffer, "%pf\n", in_menus[0].draw_function);
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
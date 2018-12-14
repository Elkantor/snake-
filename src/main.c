#include "pch.h"
#include "snake+/global_const.h"
#include "snake+/global_alter.h"

int main(void){
    InitWindow(1280, 720, "Snake+");
    SetTargetFPS(60);
    DEBUG_LOG(
        "Initialization correclty done", 
        __FILE__,
        __FUNCTION__,
        __LINE__
    );
    
    snake_initialize_components();
    *id_active_menu = snake_main_menu;
    snake_draw_menu_functions[*id_active_menu]();
    while(!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
    snake_free_components();
    return 0;
}


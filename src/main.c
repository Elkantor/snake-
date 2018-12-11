#include "pch.h"
#include "snake+/components_definition.c"

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
    *id_active_menu = 0;
    snake_draw_menu(id_active_menu);
    while(!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
    snake_free_components();
    return 0;
}


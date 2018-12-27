#include "pch.h"
#include "snake+/global_const.h"
#include "snake+/global_alter.h"

int main(void){
    snake_initialize_components();

    snake_default_initialisation();
    InitWindow(1280, 720, "Snake+");
    SetWindowMinSize(1280, 720);

    while(!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(LIGHTGRAY);
            #ifdef DEBUG
                DrawFPS(20, 20);
            #endif
            snake_draw_menu_functions[*id_active_menu_function]();
        EndDrawing();
    }

    CloseWindow();
    snake_free_components();
    return 0;
}
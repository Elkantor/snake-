#include "pch.h"
#include "snake+/global_const.h"
#include "snake+/global_alter.h"

void snake_default_initialisation(){
    // Default menu
    *id_active_menu_function = SNAKE_MAIN_MENU;

    // Default resolution
    *id_active_main_menu_function = SNAKE_MAIN_MENU_1280x720;
    *id_active_in_game_menu_function = SNAKE_IN_GAME_MENU_1280x720;

    // Default input pressed
    *id_active_input_function = SNAKE_LEFT_INPUT;
    snake_handle_inputs_functions[*id_active_input_function]();
}

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
            snake_draw_menu_functions[*id_active_menu_function](
                id_active_menu_function,
                *id_active_main_menu_function,
                *id_active_in_game_menu_function
            );
        EndDrawing();
    }

    CloseWindow();
    snake_free_components();
    return 0;
}
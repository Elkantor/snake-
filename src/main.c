#include "pch.h"
#include "snake+/components/menu.h"
#include "snake+/components_definition.h"

int main(void){
    // InitWindow(800, 600, "Snake+");
    // SetTargetFPS(60);
    DEBUG_LOG(
        "Initialization correclty done", 
        __FILE__,
        __FUNCTION__,
        __LINE__
    );

    SNAKE_DRAW_MENU(in_game_menu);
    // while(!WindowShouldClose()){
    //     BeginDrawing();
    //         ClearBackground(RAYWHITE);
    //     EndDrawing();
    // }
    // CloseWindow();
    return 0;
}


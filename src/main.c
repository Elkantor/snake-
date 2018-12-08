#include "pch.h"

int main(int argc, char** argv){
    printf("test\n");
    InitWindow(800, 600, "Snake+");
    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}


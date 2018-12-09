#include "pch.h"

int main(void){
   InitWindow(800, 600, "Snake+");
   SetTargetFPS(60);
    DEBUG_LOG(
        "Initialization correclty done", 
        __FILE__,
        __FUNCTION__,
        __LINE__
    );

   while(!WindowShouldClose()){
       BeginDrawing();
           ClearBackground(RAYWHITE);
       EndDrawing();
   }
   CloseWindow();
    return 0;
}


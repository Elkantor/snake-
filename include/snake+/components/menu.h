#pragma once

#define _CONCAT(x,y) x##y
#define CONCAT(x,y) _CONCAT(x,y)
#define SNAKE_DRAW_MENU(MENU) CONCAT(snake_draw_, MENU) ();

void snake_draw_main_menu();
void snake_draw_in_game_menu();
void snake_draw_none();
#pragma once

typedef struct snake_menu {
    unsigned int id: 3;
    void (*draw_function)();
} snake_menu;

void snake_draw_menu(const unsigned short* in_id);
void snake_draw_main_menu();
void snake_draw_in_game_menu();
void snake_draw_none_menu();
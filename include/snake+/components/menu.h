#pragma once

// Menus
void snake_draw_main_menu(
    const uint8_t in_id_main_menu_function,
    const uint8_t in_id_in_game_menu_function
);
void snake_draw_in_game_menu(
    const uint8_t in_id_main_menu_function,
    const uint8_t in_id_in_game_menu_function
);
void snake_draw_none_menu(
    const uint8_t in_id_main_menu_function,
    const uint8_t in_id_in_game_menu_function
);

// Main Menus
void snake_draw_main_menu_1280_720();
void snake_draw_main_menu_1920_1080();
void snake_draw_main_menu_2560_1440();
#pragma once

// Menus
void snake_draw_main_menu(
    uint8_t* out_id_menu_function,
    const uint8_t in_id_main_menu_function,
    const uint8_t in_id_in_game_menu_function
);
void snake_draw_in_game_menu(
    uint8_t* out_id_menu_function,
    const uint8_t in_id_main_menu_function,
    const uint8_t in_id_in_game_menu_function
);
void snake_draw_none_menu(
    uint8_t* out_id_menu_function,
    const uint8_t in_id_main_menu_function,
    const uint8_t in_id_in_game_menu_function
);

// Main Menus
void snake_draw_main_menu_1280_720(
    uint8_t* out_id_menu_function
);
void snake_draw_main_menu_1920_1080(
    uint8_t* out_id_menu_function
);
void snake_draw_main_menu_2560_1440(
    uint8_t* out_id_menu_function
);
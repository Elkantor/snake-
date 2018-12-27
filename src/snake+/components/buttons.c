#include "pch.h"
#include "snake+/components/buttons.h"
#include "snake+/definitions.h"
#include "snake+/global_alter.h"


#if TEST
    #include "test.h"
#else
    #define RAYGUI_IMPLEMENTATION
    #include "raygui.h"
#endif

void snake_draw_play_button(
    const uint16_t in_pos_x,
    const uint16_t in_pos_y,
    const uint16_t in_width,
    const uint16_t in_height,
    const uint8_t in_font_size
){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #else
        GuiSetStyle(DEFAULT, TEXT_SIZE, in_font_size);
        if (GuiButton((Rectangle){ in_pos_x, in_pos_y, in_width, in_height }, "PLAY")) {
            printf("PLAY PRESSED \n");
            *id_active_menu_function = SNAKE_NONE_MENU;
        }
    #endif

}

void snake_draw_options_button(
    const uint16_t in_pos_x,
    const uint16_t in_pos_y,
    const uint16_t in_width,
    const uint16_t in_height,
    const uint8_t in_font_size
){
    #if TEST
        test_add_function_name(__PRETTY_FUNCTION__, &functions_count, functions_names);
        return;
    #else
        GuiSetStyle(DEFAULT, TEXT_SIZE, in_font_size);
        if (GuiButton((Rectangle){ in_pos_x, in_pos_y, in_width, in_height }, "OPTIONS")) {
            printf("OPTIONS PRESSED \n");
            *id_active_menu_function = SNAKE_OPTIONS_MENU;
        }
    #endif

}

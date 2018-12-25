#include "pch.h"
#include "snake+/components/buttons.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

#if TEST
    #include "test.h"
#endif

void snake_draw_play_button(
    const uint16_t in_pos_x,
    const uint16_t in_pos_y,
    const uint16_t in_width,
    const uint16_t in_height,
    const uint8_t in_font_size
){
    GuiSetStyle(DEFAULT, TEXT_SIZE, in_font_size);
    if (GuiButton((Rectangle){ in_pos_x, in_pos_y, in_width, in_height }, "PLAY")) {
        printf("OKAY \n");
    }
}
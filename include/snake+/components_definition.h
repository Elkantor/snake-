#pragma once
#include "snake+/components/menu.h"

// Menus
extern const snake_menu menus[3];
extern unsigned short* id_active_menu;


void snake_initialize_components();
void snake_free_components();
void snake_error_exit(
    const char* in_file,
    const char* in_function,
    const unsigned int in_line
);
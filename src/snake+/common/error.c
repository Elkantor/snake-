#include "pch.h"
#include "snake+/common/error.h"
#include "snake+/global_alter.h"

void snake_error_exit(
    const char* in_file,
    const char* in_function,
    const unsigned int in_line
){
    DEBUG_LOG(
        "A major problem occured, the application is closing.",
        in_file,
        in_function,
        in_line
    );
    snake_free_components();
    exit(1);
}
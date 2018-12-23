#pragma once
#include "snake+/test_global_const.h"


extern char functions_names[20][30];
extern uint8_t functions_count;

void test_flush_functions_names(char out_functions_names[][30], uint8_t* out_functions_count);
void test_add_function_name(const char* in_function_name, uint8_t* out_functions_count, char out_functions_names[][30]);
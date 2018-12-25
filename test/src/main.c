#include "pch.h"
#include "common/ptest.h"
#include "test.h"
#include "snake+/global_alter.h"

char functions_names[20][30];
uint8_t functions_count;

void test_flush_functions_names(char out_functions_names[][30], uint8_t* out_functions_count){
    for(uint8_t i = 0; i < *out_functions_count; i++){
        strcpy(out_functions_names[0], "");
    }
    *out_functions_count = 0;
}

void test_add_function_name(const char* in_function_name, uint8_t* out_functions_count, char out_functions_names[][30]){
    uint8_t size_function_name = 0;
    size_function_name = strlen(in_function_name);
    PT_ASSERT(size_function_name < 30);
    strcpy(out_functions_names[0], in_function_name);
    (*out_functions_count)++;
}

int main(void){
    snake_initialize_components();
    snake_default_initialisation();
    pt_add_suite(suite_global_const);
    snake_free_components();
    return pt_run();
}
#include "pch.h"
#include "common/ptest.h"
#include "test.h"

int main(void){
    pt_add_suite(suite_global_const);
    return pt_run();
}
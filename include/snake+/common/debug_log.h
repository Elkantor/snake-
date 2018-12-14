#pragma once
#include <stdio.h>

#if defined(DEBUG)
     #define DEBUG_LOG(LOG, FILE, FUNCTION, LINE) printf("\n[DEBUG_LOG]: %s \n\tIn file [%s], function [%s], line [%d]\n\n", LOG, FILE, FUNCTION, LINE);
#else
    #define DEBUG_LOG(LOG, FILE, FUNCTION, LINE)
#endif
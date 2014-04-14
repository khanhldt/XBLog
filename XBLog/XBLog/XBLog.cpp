//
//  XBLog.cpp
//  XBLog
//
//  Created by Khanh Le Do on 1/12/13.
//  Copyright (c) 2013 Khanh Le Do. All rights reserved.
//

#include "XBLog.h"

#include <iostream>

void _XBLog_C_printLog(const char *logLevel, const char *func, const char *tag, const char *formatString, ...) {
    
    // Print debug info first
    printf("[%s][%s][%s]", logLevel, tag, func);
    
    char *stringToPrint = NULL;
    va_list va;
    va_start(va, formatString);
    vasprintf(&stringToPrint, formatString, va);
    va_end(va);
    
    printf("%s\n", stringToPrint);
    free(stringToPrint);
}

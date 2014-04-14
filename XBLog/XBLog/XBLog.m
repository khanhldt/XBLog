//
//  XBLog.m
//  XBLog
//
//  Created by Khanh Le Do on 30/11/13.
//  Copyright (c) 2013 Khanh Le Do. All rights reserved.
//

#import "XBLog.h"

#pragma mark Private Declaration

#pragma mark Public Functions

void _XBLog_OBJC_printLog(const char *logLevel, Class cls, SEL func, NSString *tag, NSString *formatString, ...) {
    
    va_list va;
    va_start(va, formatString);
    NSString *formattedString = [[NSString alloc]initWithFormat:formatString arguments:va];
    va_end(va);
    
    NSString *stringToPrint = nil;
    if (tag) {
        stringToPrint = [NSString stringWithFormat:@"[%s][%@][%@:%@] %@", logLevel, tag, NSStringFromClass(cls), NSStringFromSelector(func), formattedString];
    }
    else {
        stringToPrint = [NSString stringWithFormat:@"[%s][%@:%@] %@", logLevel, NSStringFromClass(cls), NSStringFromSelector(func), formattedString];
    }
    
    NSLog(@"%@", stringToPrint);
}

#pragma mark Private
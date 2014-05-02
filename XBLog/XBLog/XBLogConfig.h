//
//  XBLogDefines.h
//  XBLog
//
//  Created by Khanh Le Do on 30/11/13.
//  Copyright (c) 2013 XeBuyt. All rights reserved.
//

/**** DO NOT UPDATE ANY MACROS FROM THIS FILE ****/

#ifndef XBLog_XBLogDefines_h
#define XBLog_XBLogDefines_h

// List of all log levels.
#define XB_LOG_TRACE    0x01
#define XB_LOG_DEBUG    XB_LOG_TRACE + 1
#define XB_LOG_INFO     XB_LOG_DEBUG + 1
#define XB_LOG_WARN     XB_LOG_INFO + 1
#define XB_LOG_ERROR    XB_LOG_WARN + 1
#define XB_LOG_NONE     XB_LOG_ERROR + 1

// Log print functions
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __OBJC__
    void _XBLog_OBJC_printLog(const char *logLevel, Class cls, SEL func, NSString *tag, NSString *formatString, ...);
#endif
    void _XBLog_C_printLog(const char *logLevel, const char *func, const char *tag, const char *formatString, ...);
#ifdef __cplusplus
}
#endif

#endif

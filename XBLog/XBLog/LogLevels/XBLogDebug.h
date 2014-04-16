//
//  XBLogDebug.h
//  XBLog
//
//  Created by Khanh Le Do on 1/12/13.
//  Copyright (c) 2013 XeBuyt. All rights reserved.
//

#ifndef XBLog_XBLogDebug_h
#define XBLog_XBLogDebug_h

/*********** SUPPRORTED FUNCTION CALLS **************/

#define XBLog_Debug(tag, fm, ...)
#define XBLog_CDebug(tag, fm, ...)

/*********** DEFINE LOG HERE ****************/

#define XB_LOG_DEBUG_TAG "DEBUG"

#if XB_LOG_LEVEL <= XB_LOG_DEBUG

#undef XBLog_Debug
#define XBLog_Debug(tag, fm, ...) \
({ _XBLog_OBJC_printLog(XB_LOG_DEBUG_TAG, [self class], _cmd, tag, fm, ##__VA_ARGS__); })

#undef XBLog_CDebug
#define XBLog_CDebug(tag, fm, ...) \
({ _XBLog_C_printLog(XB_LOG_DEBUG_TAG, __func__, tag, fm, ##__VA_ARGS__); })

#endif

#endif

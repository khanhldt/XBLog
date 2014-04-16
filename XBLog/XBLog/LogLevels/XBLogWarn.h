//
//  XBLogWarn.h
//  XBLog
//
//  Created by Khanh Le Do on 1/12/13.
//  Copyright (c) 2013 XeBuyt. All rights reserved.
//

#ifndef XBLog_XBLogWarn_h
#define XBLog_XBLogWarn_h

/*********** SUPPRORTED FUNCTION CALLS **************/

#define XBLog_Warn(tag, fm, ...)
#define XBLog_CWarn(tag, fm, ...)

/*********** DEFINE LOG HERE ****************/

#define XB_LOG_WARN_TAG "WARN"

#if XB_LOG_LEVEL <= XB_LOG_WARN

#undef XBLog_Warn
#define XBLog_Warn(tag, fm, ...) \
({ _XBLog_OBJC_printLog(XB_LOG_WARN_TAG, [self class], _cmd, tag, fm, ##__VA_ARGS__); })

#undef XBLog_CWarn
#define XBLog_CWarn(tag, fm, ...) \
({ _XBLog_C_printLog(XB_LOG_WARN_TAG, __func__, tag, fm, ##__VA_ARGS__); })

#endif

#endif

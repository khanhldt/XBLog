//
//  XBLogTrace.h
//  XBLog
//
//  Created by Khanh Le Do on 1/12/13.
//  Copyright (c) 2013 XeBuyt. All rights reserved.
//

#ifndef XBLog_XBLogTrace_h
#define XBLog_XBLogTrace_h

/*********** SUPPRORTED FUNCTION CALLS **************/

#define XBLog_Trace(tag, fm, ...)
#define XBLog_CTrace(tag, fm, ...)

#define XBLogMethod()

/*********** DEFINE LOG HERE ****************/

#define XB_LOG_TRACE_TAG "TRACE"

#if XB_LOG_LEVEL <= XB_LOG_TRACE

#undef XBLog_Trace
#define XBLog_Trace(tag, fm, ...) \
({ _XBLog_OBJC_printLog(XB_LOG_TRACE_TAG, [self class], _cmd, tag, fm, ##__VA_ARGS__); })

#undef XBLog_CTrace
#define XBLog_CTrace(tag, fm, ...) \
({ _XBLog_C_printLog(XB_LOG_TRACE_TAG, __func__, tag, fm, ##__VA_ARGS__); })

#undef XBLogMethod
#define XBLogMethod() ({ \
XBLog_CTrace("CALL", ""); \
})

#endif

#endif

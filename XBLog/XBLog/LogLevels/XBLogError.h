//
//  XBLogError.h
//  XBLog
//
//  Created by Khanh Le Do on 1/12/13.
//  Copyright (c) 2013 Khanh Le Do. All rights reserved.
//

#ifndef XBLog_XBLogError_h
#define XBLog_XBLogError_h

/*********** SUPPRORTED FUNCTION CALLS **************/

#define XBLog_Error(tag, fm, ...)

/*********** DEFINE LOG HERE ****************/

#define XB_LOG_ERROR_TAG "ERROR"

#if XB_LOG_LEVEL <= XB_LOG_ERROR

#undef XBLog_Error
#define XBLog_Error(tag, fm, ...) \
({ _XBLog_OBJC_printLog(XB_LOG_ERROR_TAG, [self class], _cmd, tag, fm, ##__VA_ARGS__); })

#undef XBLog_CError
#define XBLog_CError(tag, fm, ...) \
({ _XBLog_C_printLog(XB_LOG_ERROR_TAG, __func__, tag, fm, ##__VA_ARGS__); })

#endif

#endif

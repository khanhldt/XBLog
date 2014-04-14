//
//  XBLogInfo.h
//  XBLog
//
//  Created by Khanh Le Do on 1/12/13.
//  Copyright (c) 2013 Khanh Le Do. All rights reserved.
//

#ifndef XBLog_XBLogInfo_h
#define XBLog_XBLogInfo_h

/*********** SUPPRORTED FUNCTION CALLS **************/

#define XBLog_Info(tag, fm, ...)
#define XBLog_CInfo(tag, fm, ...)

/*********** DEFINE LOG HERE ****************/

#define XB_LOG_INFO_TAG "INFO"

#if XB_LOG_LEVEL <= XB_LOG_INFO

#undef XBLog_Info
#define XBLog_Info(tag, fm, ...) \
({ _XBLog_OBJC_printLog(XB_LOG_INFO_TAG, [self class], _cmd, tag, fm, ##__VA_ARGS__); })

#undef XBLog_CInfo
#define XBLog_CInfo(tag, fm, ...) \
({ _XBLog_C_printLog(XB_LOG_INFO_TAG, __func__, tag, fm, ##__VA_ARGS__); })

#endif

#endif

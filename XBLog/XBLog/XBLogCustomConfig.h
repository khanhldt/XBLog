//
//  XBLogConfig.h
//  XBLog
//
//  Created by Khanh Le Do on 1/12/13.
//  Copyright (c) 2013 Khanh Le Do. All rights reserved.
//

#ifndef XBLog_XBLogConfig_h
#define XBLog_XBLogConfig_h

// If no log level has been specified, no logs will be printed.
#if !defined(XB_LOG_LEVEL) || !defined(XB_LOG_ON)
#define XB_LOG_LEVEL XB_LOG_NONE
#endif

#endif /** XBLog_XBLogConfig_h **/
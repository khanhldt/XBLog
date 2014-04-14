//
//  XBLogDemo_LogSetup.h
//  XBLogDemo
//
//  Created by Khanh Le Do on 1/12/13.
//  Copyright (c) 2013 Khanh Le Do. All rights reserved.
//

#ifndef XBLogDemo_XBLogDemo_LogSetup_h
#define XBLogDemo_XBLogDemo_LogSetup_h

/********* XB_LOG Configurations **********/
#if defined(DEBUG)

// Enable logs
#define XB_LOG_ON

// Set log level
#define XB_LOG_LEVEL XB_LOG_DEBUG

#endif

#include <XBLog/XBLog.h>

#endif

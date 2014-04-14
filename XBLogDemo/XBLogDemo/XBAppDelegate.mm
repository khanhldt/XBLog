//
//  XBAppDelegate.m
//  XBLogDemo
//
//  Created by Khanh Le Do on 1/12/13.
//  Copyright (c) 2013 Khanh Le Do. All rights reserved.
//

#import "XBAppDelegate.h"

#pragma mark C Function Declaration

static void testPrintCLog();

#pragma mark XBAppDelegate

@implementation XBAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    
    /************** TESTING ***************/
    
    XBLog_Trace(@"TEST", @"This is to test the XBLog with some string {%s} and integer {%d}", @"test string", 1234);
    XBLog_Debug(@"TEST", @"This is to test the XBLog with some string {%s} and integer {%d}", @"test string", 1234);
    
    testPrintCLog();
    
    /**************************************/
    
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end

#pragma mark C Functions

/************** TESTING ***************/

static void testPrintCLog() {
    XBLogMethod();
    XBLog_CWarn("CLOG", "This is to test log printing in C functions with some float %f", 1.2f);
}

/**************************************/
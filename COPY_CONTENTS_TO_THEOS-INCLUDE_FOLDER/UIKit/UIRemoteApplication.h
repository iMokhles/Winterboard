/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UIRemoteApplication : NSObject
{
    NSString *_machServiceName;
    unsigned int _port;
    struct __CFMachPort *_portRef;
}

- (id)initWithBundleIdentifier:(id)fp8;
- (id)initWithMachServiceName:(id)fp8;
- (void)dealloc;
- (void)invalidatePort;
- (void)disconnected;
- (BOOL)updatePort;
- (BOOL)available;
- (BOOL)disableMiniAlerts:(int)fp8;
- (BOOL)enableMiniAlerts:(char *)fp8;
- (BOOL)wantsToShowMiniAlert:(char *)fp8;
- (BOOL)statusBarWillAnimateToHeight:(float)fp8 duration:(double)fp12 fence:(int)fp20;

@end

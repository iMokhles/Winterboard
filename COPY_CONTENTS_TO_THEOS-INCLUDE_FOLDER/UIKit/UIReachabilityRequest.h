/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface UIReachabilityRequest : NSObject
{
    NSString *_hostname;
    struct __SCNetworkReachability *_reachability;
    NSMutableSet *_observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}

- (id)initWithHostname:(id)fp8;
- (void)dealloc;
- (id)description;
- (void)_setReachable:(BOOL)fp8;
- (void)_reachabilityChangedWithFlags:(unsigned int)fp8;
- (BOOL)_start;
- (void)addObserver:(id)fp8;
- (void)removeObserver:(id)fp8;
- (BOOL)hasObservers;
- (void)stop;

@end


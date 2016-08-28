/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface UIAnimator : NSObject
{
    NSMutableArray *_animations;
    double _lastUpdateTime;
    struct __GSHeartbeat *_lcdHeartbeat;
    struct __GSHeartbeat *_tvHeartbeat;
    int _lcdCount;
    int _tvCount;
}

+ (id)sharedAnimator;
+ (void)disableAnimation;
+ (void)enableAnimation;
- (void)dealloc;
- (void)addAnimation:(id)fp8 withDuration:(double)fp12 start:(BOOL)fp20;
- (void)addAnimations:(id)fp8 withDuration:(double)fp12 start:(BOOL)fp20;
- (void)removeAnimationsForTarget:(id)fp8;
- (void)removeAnimationsForTarget:(id)fp8 ofKind:(Class)fp12;
- (void)startAnimation:(id)fp8;
- (void)stopAnimation:(id)fp8;
- (float)fractionForAnimation:(id)fp8;

@end

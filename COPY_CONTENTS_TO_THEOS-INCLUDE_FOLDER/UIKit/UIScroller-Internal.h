/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIScroller.h>

@interface UIScroller (Internal)
+ (void)_registerForNotifications;
+ (void)_unregisterForNotifications;
- (void)_adjustBackgroundShadowsForContentSize:(struct CGSize)fp8;
- (void)_resetScrollingWithEvent:(struct __GSEvent *)fp8;
- (void)_stopScrollingNotify:(BOOL)fp8 dealloc:(BOOL)fp12 pin:(BOOL)fp16;
- (BOOL)_alwaysHandleInteractionEvents;
- (BOOL)_isUserScrolling;
- (id)_topSpecialView;
- (id)_bottomSpecialView;
- (id)_bottomShadowView;
- (void)_adjustSpecialViews;
- (void)_addScrollNotificationView:(id)fp8;
- (void)_removeScrollNotificationView:(id)fp8;
- (void)_cancelContentHighlight;
- (id)_defaultHitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
@end


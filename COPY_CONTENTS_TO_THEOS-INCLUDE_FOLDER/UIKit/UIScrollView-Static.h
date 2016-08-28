/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIScrollView.h>

@interface UIScrollView (Static)
- (void)_notifyDidScroll;
- (void)_smoothScroll:(double)fp8;
- (void)_stopScrollingNotify:(BOOL)fp8 dealloc:(BOOL)fp12 pin:(BOOL)fp16;
- (BOOL)_continueScrollingAtOffset:(struct CGPoint)fp8;
- (void)_popTrackingRunLoopMode;
- (void)_runLoopModePopped:(id)fp8;
- (void)_startTimer:(BOOL)fp8;
- (void)_deferredBeginTouchesInContentView;
- (void)_beginTouchesInContentView:(id)fp8 touches:(id)fp12 withEvent:(id)fp16;
- (void)_adjustScrollerIndicators:(BOOL)fp8 alwaysShowingThem:(BOOL)fp12;
- (void)_adjustContentOffsetIfNecessary;
- (void)_hideScrollIndicators;
@end

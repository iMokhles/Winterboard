/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIScroller.h>

@interface UIScroller (Static)
- (void)_hideScrollIndicators;
- (void)_notifyDidScroll;
- (BOOL)_passControlEvents;
- (void)_controlMouseDown:(struct __GSEvent *)fp8;
- (void)_controlMouseUp:(struct __GSEvent *)fp8;
- (void)_controlMouseDragged:(struct __GSEvent *)fp8;
- (void)_smoothScroll:(double)fp8;
- (BOOL)_continueScrollingAtOffset:(struct CGPoint)fp8;
- (void)_runLoopModePopped:(id)fp8;
- (void)_startTimer:(BOOL)fp8;
- (void)_adjustEndOffset;
- (BOOL)_dragging;
- (void)_doContentHighlight;
- (void)_adjustScrollerIndicators:(BOOL)fp8 alwaysShowingThem:(BOOL)fp12;
- (void)_disableScrollingIfEntirelyVisible;
@end

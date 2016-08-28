/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@interface MPBackstopView : UIView
{
    id <MPBackstopViewTarget> _target;
    struct __CFSet *_ignorableViews;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)addIgnorableView:(id)fp8;
- (void)removeIgnorableView:(id)fp8;
- (BOOL)canHandleSwipes;
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (BOOL)swipe:(int)fp8 withEvent:(struct __GSEvent *)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)_delayedPerformSingleTap;
- (void)view:(id)fp8 handleTapWithCount:(int)fp12 event:(struct __GSEvent *)fp16;
- (double)viewDoubleTapDelay:(id)fp8;
- (double)viewRejectAsTapThrehold:(id)fp8;
- (id)target;
- (void)setTarget:(id)fp8;

@end


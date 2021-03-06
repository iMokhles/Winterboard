/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@interface UIView (Internal)
+ (void)_setInvalidatesViewUponCreation:(BOOL)fp8;
+ (BOOL)_invalidatesViewUponCreation;
+ (void)_setIsResponderAncestorOfFirstResponder:(BOOL)fp8 startingAtFirstResponder:(id)fp12;
- (BOOL)_subclassImplementsDrawRect;
- (id)_layer;
- (id)_scroller;
- (void)_didScroll;
- (void)_invalidateSubviewCache;
- (void)_invalidateLayerContents;
- (void)_setInterceptMouseEvent:(BOOL)fp8;
- (id)_interceptMouseEvent:(struct __GSEvent *)fp8;
- (id)_interceptEvent:(id)fp8;
- (BOOL)_canDrawContent;
- (void)_didMoveFromWindow:(id)fp8 toWindow:(id)fp12;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (BOOL)_alwaysHandleInteractionEvents;
- (BOOL)_isInAWindow;
- (BOOL)_containedInAbsoluteResponderChain;
- (void)_mouseDown:(struct __GSEvent *)fp8;
- (void)_mouseDragged:(struct __GSEvent *)fp8;
- (void)_mouseUp:(struct __GSEvent *)fp8;
- (BOOL)_cancelTapDelegateTracking;
- (BOOL)_canHandleStatusBarMouseEvents:(struct __GSEvent *)fp8;
- (void)_setContentImage:(id)fp8;
- (void)_setContentsTransform:(struct CGAffineTransform)fp8;
- (void)_renderSnapshotWithRect:(struct CGRect)fp8 inContext:(struct CGContext *)fp24;
- (void)_addSubview:(id)fp8 positioned:(int)fp12 relativeTo:(id)fp16;
- (void)_populateArchivedSubviews:(id)fp8;
- (void)_setIsAncestorOfFirstResponder:(BOOL)fp8;
- (BOOL)_isAncestorOfFirstResponder;
@end


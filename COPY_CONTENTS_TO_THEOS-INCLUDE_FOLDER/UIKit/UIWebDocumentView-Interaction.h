/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIWebDocumentView.h>

@interface UIWebDocumentView (Interaction)
+ (id)_calloutViewForWebView:(id)fp8;
+ (id)_createDefaultHighlightView;
+ (id)_highlightView;
- (void)clearInteractionTimer;
- (void)performInteractionSelector:(SEL)fp8 afterDelay:(double)fp12;
- (struct CGPoint)convertWindowPointToViewport:(struct CGPoint)fp8;
- (void)mouseDown:(struct __GSEvent *)fp8;
- (void)mouseUp:(struct __GSEvent *)fp8;
- (void)mouseDragged:(struct __GSEvent *)fp8;
- (void)interactionMouseUp:(struct __GSEvent *)fp8;
- (void)interactionMouseDown:(struct __GSEvent *)fp8;
- (void)defaultMouseDragged:(struct __GSEvent *)fp8;
- (void)defaultMouseUp:(struct __GSEvent *)fp8;
- (BOOL)canHandleHandEvent:(struct __GSEvent *)fp8;
- (BOOL)handleHandEvent:(struct __GSEvent *)fp8;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)webView:(id)fp8 eventRegionsChanged:(id)fp12;
- (BOOL)_directEventsHitTest:(struct CGPoint)fp8;
- (BOOL)_directEventsCheckEvent:(struct __GSEvent *)fp8;
- (BOOL)_directEventsProcessEvent:(struct __GSEvent *)fp8;
- (void)cancelInteractionWithCandidate;
- (void)forwardMouseUpToInteractionCandidate:(struct __GSEvent *)fp8;
- (void)forwardMouseDraggedToInteractionCandidate:(struct __GSEvent *)fp8;
- (void)forwardEventsToInteractionCandidate;
- (void)performCandidateClick:(id)fp8;
- (void)performClick:(id)fp8;
- (void)attemptClick:(id)fp8;
- (void)webView:(id)fp8 didObserveDeferredContentChange:(int)fp12 forFrame:(id)fp16;
- (void)webView:(id)fp8 didPreventDefaultForEvent:(struct __GSEvent *)fp12;
- (id)approximateNodeAtViewportLocation:(struct CGPoint *)fp8;
- (void)calloutApproximateNode;
- (void)highlightApproximateNodeInverted:(BOOL)fp8;
- (void)hideCalloutAndHighlight;
- (void)highlightApproximateNodeAndDisplayCallout;
- (void)resetInteraction;
- (void)completeInteraction;
- (void)cancelInteraction;
- (void)deferInteraction;
- (void)cancelInteractionWithImmediateDisplay:(BOOL)fp8;
- (void)_saveImages:(id)fp8;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (void)modalView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)sendScrollWheelEvents;
- (BOOL)eventCanTriggerGestureScrolling:(struct __GSEvent *)fp8;
- (void)setInteractionDelegate:(id)fp8;
- (id)interactionDelegate;
- (void)setAllowsImageSheet:(BOOL)fp8;
@end


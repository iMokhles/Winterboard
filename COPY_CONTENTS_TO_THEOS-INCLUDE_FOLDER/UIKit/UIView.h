/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIResponder.h>

#import <CoreGraphics/CGGeometry.h>

@class CALayer;

@interface UIView : UIResponder <NSCoding>
{
    CALayer *_layer;
    id _tapInfo;
    id _gestureInfo;
    id _touchData;
    float _charge;
    int _tag;
    struct {
        unsigned int userInteractionDisabled:1;
        unsigned int implementsDrawRect:1;
        unsigned int implementsDidScroll:1;
        unsigned int implementsMouseTracking:1;
        unsigned int hasBackgroundColor:1;
        unsigned int isOpaque:1;
        unsigned int becomeFirstResponderWhenCapable:1;
        unsigned int interceptMouseEvent:1;
        unsigned int deallocating:1;
        unsigned int debugFlash:1;
        unsigned int debugSkippedSetNeedsDisplay:1;
        unsigned int debugScheduledDisplayIsRequired:1;
        unsigned int isInAWindow:1;
        unsigned int isAncestorOfFirstResponder:1;
        unsigned int dontAutoresizeSubviews:1;
        unsigned int autoresizeMask:6;
        unsigned int patternBackground:1;
        unsigned int fixedBackgroundPattern:1;
        unsigned int dontAnimate:1;
        unsigned int superLayerIsView:1;
        unsigned int layerKitPatternDrawing:1;
        unsigned int coreSurfaceImage:1;
        unsigned int multipleTouchEnabled:1;
        unsigned int exclusiveTouch:1;
        unsigned int hasViewController:1;
        unsigned int needsDidAppearOrDisappear:1;
    } _viewFlags;
}

+ (Class)layerClass;
- (id)init;
- (void)_createLayerWithFrame:(struct CGRect)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)dealloc;
- (void)setUserInteractionEnabled:(BOOL)fp8;
- (BOOL)isUserInteractionEnabled;
- (void)setCharge:(float)fp8;
- (float)charge;
- (void)setTapDelegate:(id)fp8;
- (id)tapDelegate;
- (id)nextResponder;
- (void)_clearBecomeFirstResponderWhenCapable;
- (BOOL)_becomeFirstResponderWhenPossible;
- (void)startHeartbeat:(SEL)fp8 inRunLoopMode:(id)fp12;
- (void)stopHeartbeat:(SEL)fp8;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (BOOL)canHandleSwipes;
- (int)swipe:(int)fp8 withEvent:(struct __GSEvent *)fp12;
- (struct CGColor *)_backgroundCGColor;
- (id)layer;
- (int)tag;
- (void)setTag:(int)fp8;

@end

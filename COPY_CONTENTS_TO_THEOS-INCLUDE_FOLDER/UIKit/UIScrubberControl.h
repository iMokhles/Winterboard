/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIOldSliderControl.h>

@class UIView;

@interface UIScrubberControl : UIOldSliderControl
{
    CDAnonymousUnion1 _sliderAvailableFill;
    double _duration;
    float _lastDisplayedWidth;
    float _maxTrackWidth;
    UIView *_elapsedTimeView;
    UIView *_remainingTimeView;
    id _delegate;
    double _trackingStartTime;
    struct CGPoint _lastUpdatedPoint;
    float _valueAvailable;
    unsigned int _didDrag:1;
    unsigned int _sentScrubbingStart:1;
    unsigned int _autoSizesToFitDuration:1;
    unsigned int _layoutTimeParts:2;
    unsigned int _remainingIsDuration:1;
    unsigned int _delegateDidEnterScrubbingState:1;
    unsigned int _delegateDidChangeScrubValue:1;
    unsigned int _delegateShouldBeginScrubbing:1;
    unsigned int _endingTracking:1;
    unsigned int _showKnob:1;
    unsigned int _largeKnob:1;
    unsigned int _rightCapIsDownloadCap:1;
    unsigned int _requireMomentaryDelay:1;
    unsigned int _showFullWidthComponents:1;
    unsigned int _alwaysShowAllComponentsForDuration:1;
    unsigned int _timeLayoutDisabledCount:7;
    unsigned int _timeLayoutSkippedLayout:1;
    unsigned int _timeLayoutSkippedForcedLayout:1;
    unsigned int _showTimeCentered:1;
    unsigned int _leftCapIsDownloadCap:1;
    unsigned int _allowsAnyValue:1;
    unsigned int _unused:3;
}

+ (BOOL)allowLayeredFillForKnob;
- (id)initWithFrame:(struct CGRect)fp8 maxTrackWidth:(float)fp24 showTimes:(BOOL)fp28 knobStyle:(int)fp32;
- (id)initWithFrame:(struct CGRect)fp8 maxTrackWidth:(float)fp24 showTimes:(BOOL)fp28 showKnob:(BOOL)fp32;
- (id)createSliderKnobView;
- (void)setPinTimeToOutsideEdges:(BOOL)fp8;
- (void)setShowTimeCenteredInAvailableArea:(BOOL)fp8;
- (struct CGRect)sliderBounds;
- (id)imageForSliderPiece:(int)fp8;
- (const CDAnonymousStruct4 *)metrics;
- (void)_resetTimeFrames;
- (void)dealloc;
- (void)setDelegate:(id)fp8;
- (float)scrubValue;
- (void)sizeToFit;
- (void)setDuration:(double)fp8;
- (double)duration;
- (double)requiredAutoUpdateDurationForDuration:(double)fp8;
- (BOOL)pointInsideKnob:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (BOOL)pointInside:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (BOOL)pointInsideKnob:(struct CGPoint)fp8 withEvent:(id)fp16;
- (BOOL)pointInside:(struct CGPoint)fp8 withEvent:(id)fp16;
- (struct CGRect)hitRect;
- (struct CGRect)_rectOfTrack;
- (struct CGRect)fillBounds;
- (BOOL)_notAllValueAvailable;
- (void)setAllowsAnyValue:(BOOL)fp8;
- (void)drawSliderPiece:(int)fp8 inRect:(struct CGRect)fp12;
- (void)_updateAvailableFill;
- (void)_setValue:(float)fp8 andSendAction:(BOOL)fp12;
- (void)setValue:(float)fp8 animated:(BOOL)fp12 animationCurve:(int)fp16;
- (void)_updateTimes:(BOOL)fp8;
- (void)disableTimesLayout;
- (void)enableTimesLayout;
- (void)setShowFullWidthComponents:(BOOL)fp8;
- (void)setShowDuration:(BOOL)fp8;
- (void)setScrubbingRequiresMomentaryDelay:(BOOL)fp8;
- (void)_sendDelegateDidEnterScrubbingState:(BOOL)fp8;
- (BOOL)beginTrackingAt:(struct CGPoint)fp8 withEvent:(struct __GSEvent *)fp16;
- (BOOL)continueTrackingAt:(struct CGPoint)fp8 previous:(struct CGPoint)fp16 withEvent:(struct __GSEvent *)fp24;
- (void)endTrackingAt:(struct CGPoint)fp8 previous:(struct CGPoint)fp16 withEvent:(struct __GSEvent *)fp24;
- (BOOL)beginTrackingWithTouch:(id)fp8 withEvent:(id)fp12;
- (BOOL)continueTrackingWithTouch:(id)fp8 withEvent:(id)fp12;
- (void)endTrackingWithTouch:(id)fp8 withEvent:(id)fp12;
- (void)setValueAvailable:(float)fp8;

@end

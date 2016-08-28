/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SBStatusBar, SBStatusBarContentsView, UIColor, UIWindow;

@interface SBStatusBarController : NSObject
{
    UIWindow *_slidingStatusBarWindow;
    int _slidingStatusBarAnimation;
    UIWindow *_animatingCallStatusBarWindow;
    UIWindow *_leftBottomCorner;
    UIWindow *_rightBottomCorner;
    SBStatusBar *_statusBarView;
    SBStatusBarContentsView *_statusBarContentsView;
    SBStatusBar *_transitioningStatusBarView;
    SBStatusBar *_animatingCallStatusBar;
    SBStatusBarContentsView *_transitioningStatusBarContentsView;
    unsigned int _isLockVisible:1;
    unsigned int _isTimeVisible:1;
    unsigned int _lockOrTimeVisibleChanging:1;
    unsigned int _dimmed:1;
    unsigned int _showDimmerOverlay:1;
    unsigned int _animating:1;
    unsigned int _isInWorkOut:1;
    unsigned int _isInCall:1;
    unsigned int _airplaneMode:1;
    unsigned int _showsProgress:1;
    unsigned int _showsProgressOnHomeScreen:1;
    unsigned int _cloakStatusBar:1;
    unsigned int _showAirport:1;
    unsigned int _animateDefaultStatusBarDown:1;
    unsigned int _animateDefaultStatusBarUp:1;
    unsigned int _telephonyControllerCheckedIn:1;
    unsigned int _bluetoothControllerCheckedIn:1;
    unsigned int _enteringAirplaneMode:1;
    NSMutableArray *_statusBarIndicatorNames;
    int _mode;
    int _orientation;
    int _animatingCallStatusBarOrientation;
    NSString *_customText;
    UIColor *_dimmerOverlayColor;
    int _airPortSignalStrength;
    float _duration;
}

+ (id)sharedStatusBarController;
+ (BOOL)isLikeAFullScreenStatusBar:(int)fp8;
+ (id)statusBarImageNamed:(id)fp8 forMode:(int)fp12;
- (id)init;
- (BOOL)_enteringAirplaneMode;
- (void)dealloc;
- (void)preheatStatusBarForMode:(int)fp8 orientation:(int)fp12;
- (id)statusBarWindow;
- (id)statusBarView;
- (id)transitioningStatusBarView;
- (void)addStatusBarItem:(id)fp8;
- (void)setIsLockVisible:(BOOL)fp8 isTimeVisible:(BOOL)fp12;
- (BOOL)isLockVisible;
- (BOOL)isTimeVisible;
- (BOOL)isLockOrTimeVisibleChanging;
- (void)setDimmed:(BOOL)fp8;
- (BOOL)dimmed;
- (BOOL)showDimmerOverlay;
- (void)setShowDimmerOverlay:(BOOL)fp8;
- (id)dimmerOverlayColor;
- (void)setDimmerOverlayColor:(id)fp8;
- (void)tearDownWindowForSlidingStatusBar:(id)fp8 overStatusBar:(id)fp12;
- (void)setupWindowForSlidingStatusBar:(id)fp8 overStatusBar:(id)fp12;
- (void)endDoubleHeightStatusBarAnimationFinished;
- (void)resizeStatusBar:(float)fp8 grow:(BOOL)fp12;
- (void)_setIsInCall:(BOOL)fp8 isInWorkOut:(BOOL)fp12;
- (BOOL)useDoubleHeight;
- (void)setIsInCall:(BOOL)fp8;
- (BOOL)isInCall;
- (void)setIsInWorkOut:(BOOL)fp8;
- (BOOL)isInWorkOut;
- (void)victoriaStatusChanged:(id)fp8;
- (void)animateDefaultStatusBarDown;
- (BOOL)isAnimatingStatusBarDown;
- (void)animateDefaultStatusBarUp:(int)fp8;
- (BOOL)isAnimatingStatusBarUp;
- (BOOL)_isServiceAvailable;
- (id)_SIMStatus;
- (void)_SIMOrServiceStatusChanged;
- (void)_SIMStatusChanged:(id)fp8;
- (void)_serviceStatusChanged:(id)fp8;
- (void)setAirplaneModeIsEnabled:(BOOL)fp8;
- (BOOL)airplaneModeIsEnabled;
- (void)removeStatusBarItem:(id)fp8;
- (id)statusBarIndicatorNames;
- (id)customText;
- (void)setCustomText:(id)fp8;
- (void)setAirPortStrength:(int)fp8;
- (void)setShowsAirPort:(BOOL)fp8;
- (void)dataConnectionTypeChanged;
- (BOOL)showsAirPort;
- (int)airPortStrength;
- (void)setCloakStatusBar:(BOOL)fp8;
- (BOOL)cloakStatusBar;
- (void)updateProgressVisibility;
- (BOOL)showsProgress;
- (void)setShowsProgressOnHomeScreen:(BOOL)fp8;
- (void)setStatusBarMode:(int)fp8 orientation:(int)fp12 duration:(float)fp16 fenceID:(int)fp20 animation:(int)fp24;
- (void)_setStatusBarSize:(BOOL)fp8;
- (void)_setTransitionalStatusBarSize:(BOOL)fp8;
- (void)finishSwitching;
- (void)statusBarDidFinishAnimatingDown;
- (void)restoreLevels;
- (void)statusBarDidFinishAnimatingUp;
- (void)switchBackstopFrom:(int)fp8 to:(int)fp12 fromOrientation:(int)fp16 toOrientation:(int)fp20 duration:(float)fp24 fenceID:(int)fp28 animation:(int)fp32;
- (void)orderStatusBarFront;
- (void)_finishStatusBarAnimation;
- (void)lockCurrentStatusBarForAnimation;
- (void)releaseLockedStatusBarForAnimationForDisplay:(id)fp8;
- (int)statusBarMode;
- (int)statusBarOrientation;
- (float)animationDuration;
- (void)significantTimeChange;
- (void)updateClockFormat;
- (void)signalFormatChanged;
- (void)checkInController:(int)fp8;
- (BOOL)telephonyControllerCheckedIn;
- (BOOL)bluetoothControllerCheckedIn;
- (void)loopCarrierNameIfNecessary;

@end


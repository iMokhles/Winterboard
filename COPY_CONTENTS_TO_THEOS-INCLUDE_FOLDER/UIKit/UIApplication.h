/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIResponder.h>

@class NSArray, NSMutableSet, UIEvent;
@protocol UIApplicationDelegate;

@interface UIApplication : UIResponder
{
    id <UIApplicationDelegate> _delegate;
    struct __CFDictionary *_touchMap;
    NSMutableSet *_exclusiveTouchWindows;
    UIEvent *_event;
    NSArray *_topLevelNibObjects;
    int _orientation;
    struct {
        unsigned int isActive:1;
        unsigned int isSuspended:1;
        unsigned int isSuspendedEventsOnly:1;
        unsigned int isLaunchedSuspended:1;
        unsigned int isHandlingURL:1;
        unsigned int statusBarMode:8;
        unsigned int statusBarShowsProgress:1;
        unsigned int blockInteractionEvents:3;
        unsigned int animatingKeyboard:1;
        unsigned int forceExit:1;
        unsigned int receivesMemoryWarnings:1;
        unsigned int animatedSuspension:1;
        unsigned int pendingSuspension:2;
        unsigned int animateResumeNoPNG:1;
        unsigned int showingProgress:1;
        unsigned int receivesPowerMessages:1;
        unsigned int isSuspendedUnderLock:1;
        unsigned int shouldExitAfterSendSuspend:1;
        unsigned int terminating:1;
        unsigned int useCompatibleSuspendAnimation:3;
        unsigned int isHandlingShortCutURL:1;
        unsigned int proximitySensingEnabled:1;
        unsigned int idleTimerDisabled:1;
        unsigned int statusBarStyle:4;
        unsigned int statusBarHidden:1;
        unsigned int statusBarOrientation:3;
        unsigned int deviceOrientation:3;
        unsigned int delegateShouldBeReleasedUponSet:1;
        unsigned int delegateHandleOpenURL:1;
        unsigned int delegateDidReceiveMemoryWarning:1;
        unsigned int delegateWillTerminate:1;
        unsigned int delegateSignificantTimeChange:1;
        unsigned int delegateWillChangeInterfaceOrientation:1;
        unsigned int delegateDidChangeInterfaceOrientation:1;
        unsigned int delegateWillChangeStatusBarFrame:1;
        unsigned int delegateDidChangeStatusBarFrame:1;
        unsigned int delegateDeviceAccelerated:1;
        unsigned int delegateDeviceChangedOrientation:1;
        unsigned int delegateDidBecomeActive:1;
        unsigned int delegateWillResignActive:1;
        unsigned int idleTimerDisableActive:1;
    } _applicationFlags;
}

+ (id)sharedApplication;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)shouldMakeUIForDefaultPNG;
- (id)init;
- (void)dealloc;
- (BOOL)shouldLaunchSafe;
- (BOOL)firstLaunchAfterBoot;
- (void)_setDelegate:(id)fp8 assumeOwnership:(BOOL)fp12;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)beginIgnoringInteractionEvents;
- (void)endIgnoringInteractionEvents;
- (BOOL)isIgnoringInteractionEvents;
- (void)setProximitySensingEnabled:(BOOL)fp8;
- (BOOL)isProximitySensingEnabled;
- (void)setIdleTimerDisabled:(BOOL)fp8;
- (BOOL)isIdleTimerDisabled;
- (void)_setActivated:(BOOL)fp8;
- (void)performInitializationWithURL:(id)fp8 asPanel:(BOOL)fp12;
- (void)_installAutoreleasePoolsIfNecessaryForMode:(struct __CFString *)fp8;
- (void)_run;
- (void)_runWithURL:(id)fp8;
- (void)reportAppLaunchFinished;
- (void)_registerForAlertItemStateChangeNotification;
- (void)_registerForSignificantTimeChangeNotification;
- (void)_registerForLanguageChangedNotification;
- (void)_registerForLocaleChangedNotification;
- (void)_registerForTimeChangedNotification;
- (void)_unregisterForSignificantTimeChangeNotification;
- (void)_unregisterForLanguageChangedNotification;
- (void)_unregisterForLocaleChangedNotification;
- (void)_unregisterForTimeChangedNotification;
- (void)_loadMainNibFile;
- (void)pushRunLoopMode:(id)fp8;
- (void)popRunLoopMode:(id)fp8;
- (void)sendAction:(SEL)fp8 fromSender:(id)fp12 toTarget:(id)fp16 forEvent:(struct __GSEvent *)fp20;
- (BOOL)sendAction:(SEL)fp8 toTarget:(id)fp12 fromSender:(id)fp16 forEvent:(id)fp20;
- (BOOL)sendAction:(SEL)fp8 to:(id)fp12 from:(id)fp16 forEvent:(id)fp20;
- (void)setNetworkActivityIndicatorVisible:(BOOL)fp8;
- (BOOL)isNetworkActivityIndicatorVisible;
- (void)_setStatusBarStyle:(int)fp8 orientation:(int)fp12 animated:(BOOL)fp16;
- (void)setStatusBarStyle:(int)fp8 animated:(BOOL)fp12;
- (void)setStatusBarStyle:(int)fp8;
- (int)statusBarStyle;
- (void)setStatusBarHidden:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setStatusBarHidden:(BOOL)fp8;
- (BOOL)isStatusBarHidden;
- (void)setStatusBarOrientation:(int)fp8 animated:(BOOL)fp12;
- (void)setStatusBarOrientation:(int)fp8;
- (int)statusBarOrientation;
- (double)statusBarOrientationAnimationDuration;
- (struct CGRect)statusBarFrame;
- (struct CGRect)_statusBarFrameForMode:(int)fp8 orientation:(int)fp12;
- (void)applicationWillSuspend;
- (void)applicationWillSuspendForEventsOnly;
- (void)applicationWillSuspendUnderLock;
- (void)applicationDidResumeFromUnderLock;
- (void)applicationDidResume;
- (void)applicationDidResumeForEventsOnly;
- (void)applicationWillTerminate;
- (BOOL)applicationIsReadyToSuspend;
- (void)_setSuspended:(BOOL)fp8;
- (void)_setForceExit:(BOOL)fp8;
- (BOOL)isSuspended;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)isSuspendedUnderLock;
- (void)_setSuspendedEventsOnly:(BOOL)fp8;
- (void)_setSuspendedUnderLock:(BOOL)fp8;
- (BOOL)_shouldAnimateResumption;
- (BOOL)_isLaunchedSuspended;
- (unsigned int)_portForEvent:(struct __GSEvent *)fp8;
- (void)suspendWithAnimation:(BOOL)fp8;
#if 1 // iPhoneOS 3.x
- (void)suspend;
#endif
- (BOOL)registerForSystemEvents;
- (BOOL)rendersLocally;
- (void)applicationStarted:(struct __GSEvent *)fp8;
- (void)applicationSuspended:(struct __GSEvent *)fp8;
- (void)applicationSuspendedSettingsUpdated:(struct __GSEvent *)fp8;
- (void)applicationExited:(struct __GSEvent *)fp8;
- (void)anotherApplicationFinishedLaunching:(struct __GSEvent *)fp8;
- (void)lockButtonDown:(struct __GSEvent *)fp8;
- (void)lockButtonUp:(struct __GSEvent *)fp8;
- (void)headsetButtonDown:(struct __GSEvent *)fp8;
- (void)headsetButtonUp:(struct __GSEvent *)fp8;
- (void)menuButtonDown:(struct __GSEvent *)fp8;
- (void)menuButtonUp:(struct __GSEvent *)fp8;
- (void)statusBarMouseDown:(struct __GSEvent *)fp8;
- (void)statusBarMouseDragged:(struct __GSEvent *)fp8;
- (void)statusBarMouseUp:(struct __GSEvent *)fp8;
- (void)ringerChanged:(int)fp8;
- (void)volumeChanged:(struct __GSEvent *)fp8;
- (void)acceleratedInX:(float)fp8 Y:(float)fp12 Z:(float)fp16;
- (void)deviceOrientationChanged:(struct __GSEvent *)fp8;
- (void)proximityStateChanged:(BOOL)fp8;
- (void)accessoryAvailabilityChanged:(struct __GSEvent *)fp8;
- (void)_handleAccessoryKeyStateChanged:(struct __GSEvent *)fp8;
- (void)accessoryKeyStateChanged:(struct __GSEvent *)fp8;
- (void)accessoryEvent:(struct __GSEvent *)fp8;
- (void)handleOutOfLineDataResponse:(struct __GSEvent *)fp8;
- (void)handleOutOfLineDataRequest:(struct __GSEvent *)fp8;
- (void)lockDevice:(struct __GSEvent *)fp8;
- (void)quitTopApplication:(struct __GSEvent *)fp8;
- (void)resetIdleDuration:(double)fp8;
- (void)resetIdleTimer;
- (void)_terminateWithStatus:(int)fp8;
- (void)terminate;
- (void)terminateWithSuccess;
- (void)applicationSuspend:(struct __GSEvent *)fp8;
- (void)_sendApplicationSuspend:(struct __GSEvent *)fp8;
- (void)updateSuspendedSettings:(id)fp8;
- (void)applicationResume:(struct __GSEvent *)fp8;
- (id)roleID;
- (id)displayIdentifier;
- (BOOL)shouldShowPreferences;
- (BOOL)_useLegacyEventSystem;
- (void)openURL:(id)fp8 asPanel:(BOOL)fp12;
- (BOOL)openURL:(id)fp8;
- (void)applicationOpenToShortCut:(id)fp8;
- (void)applicationOpenURL:(id)fp8;
- (void)applicationOpenURL:(id)fp8 asPanel:(BOOL)fp12;
- (void)_applicationOpenURL:(id)fp8 asPanel:(BOOL)fp12;
- (BOOL)isHandlingOpenShortCut;
- (void)_setHandlingURL:(BOOL)fp8 url:(id)fp12;
- (BOOL)isHandlingURL;
- (void)applicationShowHideSettings:(struct __GSEvent *)fp8;
- (void)showTTYPromptForNumber:(id)fp8 withID:(int)fp12;
- (void)showNetworkPromptsIfNecessary:(BOOL)fp8;
- (void)setUsesBackgroundNetwork:(BOOL)fp8;
- (BOOL)usesBackgroundNetwork;
- (void)_finishResume;
- (void)_finishSuspension;
- (void)_finishSuspensionEventOnlyAnimation;
- (void)_finishSuspensionEventOnly;
- (int)suspendAnimationType;
- (BOOL)useCompatibleSuspensionAnimation;
- (void)setUseCompatibleSuspensionAnimation:(BOOL)fp8;
- (void)_animateSuspension:(BOOL)fp8 duration:(double)fp12 startTime:(double)fp20 scale:(float)fp28;
- (void)_setupResumeAnimation;
- (void)_animateResumptionWithStartTime:(double)fp8 duration:(double)fp16 withPNG:(BOOL)fp24;
- (void)_animateSlideSuspension:(double)fp8;
- (void)_windowDeallocating:(id)fp8;
- (void)_animateSuspension;
- (BOOL)animateSuspensionReturningToLastApp:(double)fp8;
- (void)otherApplicationWillSuspend:(struct __GSEvent *)fp8;
- (id)userHomeDirectory;
- (id)userLibraryDirectory;
- (struct CGRect)applicationSnapshotRectForOrientation:(int)fp8;
- (struct CGImage *)createApplicationDefaultPNG;
- (void)_writeApplicationSnapshot;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (id)_pathToDefaultImageNamed:(id)fp8;
- (void)_updateDefaultImage;
- (void)removeDefaultImage:(id)fp8;
- (BOOL)_isInteractionEvent:(struct __GSEvent *)fp8;
- (BOOL)_isTouchEvent:(struct __GSEvent *)fp8;
- (BOOL)launchApplicationWithIdentifier:(id)fp8 suspended:(BOOL)fp12;
- (void)_runSpringboardCommand:(id)fp8;
- (void)addStatusBarImageNamed:(id)fp8 removeOnAbnormalExit:(BOOL)fp12;
#if 1 // iPhoneOS 2.2
- (void)addStatusBarImageNamed:(id)fp8 removeOnExit:(BOOL)fp12;
#endif
- (void)addStatusBarImageNamed:(id)fp8;
- (void)removeStatusBarImageNamed:(id)fp8;
- (id)applicationBadge;
- (void)setApplicationBadge:(id)fp8;
#if 1 // iPhoneOS 3.x
- (void)setApplicationBadgeString:(id)fp8;
#endif
- (void)removeApplicationBadge;
- (int)applicationIconBadgeNumber;
- (void)setApplicationIconBadgeNumber:(int)fp8;
- (void)addDownloadingIconToHomeScreen:(id)fp8;
- (void)addWebClipToHomeScreen:(id)fp8;
- (BOOL)homeScreenCanAddIcons;
- (struct CGRect)statusBarRect;
- (void)_fetchInfoPlistFlags;
- (int)orientation;
- (int)statusBarMode;
- (int)_frontMostAppOrientation;
- (void)_setTouchMap:(struct __CFDictionary *)fp8;
- (struct __CFDictionary *)_touchMap;
- (id)_event;
- (id)_exclusiveTouchWindows;
- (BOOL)_isTrackingAnyTouch;
- (void)setStatusBarMode:(int)fp8 orientation:(int)fp12 duration:(float)fp16 fenceID:(int)fp20 animation:(int)fp24;
- (void)setStatusBarMode:(int)fp8 orientation:(int)fp12 duration:(float)fp16 fenceID:(int)fp20;
- (void)setStatusBarMode:(int)fp8 orientation:(int)fp12 duration:(float)fp16;
- (void)setStatusBarMode:(int)fp8 duration:(float)fp12;
- (void)setStatusBarCustomText:(id)fp8;
- (void)removeStatusBarCustomText;
- (void)_setStatusBarShowsProgress:(id)fp8;
- (void)setStatusBarShowsProgress:(BOOL)fp8;
- (void)setIgnoresInteractionEvents:(BOOL)fp8;
- (BOOL)ignoresInteractionEvents;
- (int)blockInteractionEvents;
- (void)significantTimeChange;
- (BOOL)is24HourMode;
- (void)_handleUserDefaultsDidChange:(id)fp8;
- (void)userDefaultsDidChange:(id)fp8;
- (void)_clearTouchesForView:(id)fp8;
- (void)_cancelCurrentTouchEvent;
- (void)_registerForUserDefaultsChanges;
- (void)_unregisterForUserDefaultsChanges;
- (void)vibrateForDuration:(int)fp8;
- (void)setBacklightFactor:(int)fp8;
- (void)setBacklightLevel:(float)fp8;
- (void)setProximitySensorEnabled:(BOOL)fp8;
- (void)setSystemVolumeHUDEnabled:(BOOL)fp8 forAudioCategory:(id)fp12;
- (void)setSystemVolumeHUDEnabled:(BOOL)fp8;
- (void)_dumpUIHierarchy:(struct __GSEvent *)fp8;
- (void)_dumpScreenContents:(struct __GSEvent *)fp8;
- (void)_processScriptEvent:(struct __GSEvent *)fp8;
- (void)_performMemoryWarning;
- (void)didReceiveMemoryWarning;
- (void)didReceiveUrgentMemoryWarning;
- (void)_receivedMemoryNotification;
- (void)setReceivesMemoryWarnings:(BOOL)fp8;
- (void)_registerForSleepWake;
- (void)_unregisterForSleepWake;
- (void)willSleep;
- (void)didWake;
- (void)_noteStatusBarHeightChanged:(float)fp8 fence:(int)fp12;
- (void)statusBarWillAnimateToHeight:(float)fp8 duration:(double)fp12 fence:(int)fp20;
- (int)lastEventType;
- (void)_cancelTouches:(id)fp8 withEvent:(id)fp12;
- (void)_cancelAllTouches;
- (void)_cancelEvent:(id)fp8 forWindow:(id)fp12;
- (void)_cancelEvent:(id)fp8;
- (BOOL)handleEvent:(struct __GSEvent *)fp8;
- (BOOL)handleEvent:(struct __GSEvent *)fp8 withNewEvent:(id)fp12;
- (void)sendEvent:(id)fp8;
- (id)keyWindow;
- (id)windows;
- (void)setUIOrientation:(int)fp8;
- (void)setExpectsFaceContact:(BOOL)fp8;
- (void)setRelaunchesAfterAbnormalExit:(BOOL)fp8;
- (void)didDismissMiniAlert;
- (void)willDisplayMiniAlert:(int *)fp8;
- (void)willDismissMiniAlert:(int *)fp8 andShowAnother:(BOOL)fp12;
- (BOOL)isLocked;
- (BOOL)isPasscodeRequiredToUnlock;
- (void)requestDeviceUnlock;
- (BOOL)canShowAlerts;
- (id)displayIDForURLScheme:(id)fp8 isPublic:(BOOL)fp12;
- (int)alertOrientation;
- (void)runModal:(id)fp8;
- (void)stopModal;

@end


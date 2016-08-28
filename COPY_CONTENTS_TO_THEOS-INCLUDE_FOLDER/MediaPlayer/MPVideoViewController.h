/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <MediaPlayer/MPViewController.h>

#import "MPBackstopViewTarget-Protocol.h"
#import "MPVideoTransferViewController-Protocol.h"
#import "UIModalViewDelegate-Protocol.h"

@class MPBackstopView, MPTVOutWindow, MPVideoBackgroundView, UIAlertView, UIColor, UIProgressIndicator;

@interface MPVideoViewController : MPViewController <MPBackstopViewTarget, MPVideoTransferViewController, UIModalViewDelegate>
{
    UIAlertView *_alertSheet;
    MPVideoBackgroundView *_backgroundView;
    MPBackstopView *_backstopView;
    UIColor *_backstopColor;
    UIProgressIndicator *_loadingIndicator;
    MPTVOutWindow *_tvOutWindow;
    unsigned int _desiredParts;
    unsigned int _disabledParts;
    unsigned int _visibleParts;
    unsigned int _scaleMode;
    unsigned int _canAnimateControlsOverlay:1;
    unsigned int _canShowControlsOverlay:1;
    unsigned int _disableControlsAutohide:1;
    unsigned int _ownsStatusBar:1;
    unsigned int _ownsVideoView:1;
    unsigned int _playAfterPop:1;
    unsigned int _scheduledLoadingIndicator:1;
    unsigned int _tvOutEnabled:1;
}

+ (id)sharedVideoView:(BOOL)fp8;
- (id)init;
- (void)dealloc;
- (void)showAlternateTracksController:(id)fp8;
- (void)showChaptersControllerAndFadeViews:(id)fp8;
- (void)showChaptersController;
- (id)backgroundView;
- (BOOL)canChangeScaleMode;
- (BOOL)disableControlsAutohide;
- (BOOL)ownsStatusBar;
- (void)setItem:(id)fp8;
- (void)setDesiredParts:(unsigned int)fp8;
- (void)setDesiredParts:(unsigned int)fp8 animate:(BOOL)fp12;
- (void)setDisableControlsAutohide:(BOOL)fp8;
- (void)setOwnsStatusBar:(BOOL)fp8;
- (void)setScaleMode:(unsigned int)fp8;
- (void)setScaleMode:(unsigned int)fp8 animated:(BOOL)fp12;
- (void)setVisibleParts:(unsigned int)fp8;
- (void)setVisibleParts:(unsigned int)fp8 animate:(BOOL)fp12;
- (void)toggleScaleMode:(BOOL)fp8;
- (void)loadView;
- (void)noteIgnoredChangeTypes:(unsigned int)fp8;
- (void)removeChildViewController:(id)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)setTVOutEnabled:(BOOL)fp8;
- (BOOL)TVOutEnabled;
- (id)videoView;
- (void)chapterList:(id)fp8 selectedChapter:(unsigned int)fp12;
- (BOOL)viewControllerWillRequestExit;
- (void)modalView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)modalView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)_videoView_playbackErrorNotification:(id)fp8;
- (void)_videoView_playbackStateChangedNotification:(id)fp8;
- (void)_videoView_resumeEventsOnlyNotification:(id)fp8;
- (void)_videoView_scaleModeChangedNotification:(id)fp8;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)fp8;
- (void)_videoView_validityChangedNotification:(id)fp8;
- (void)_hideLoadingForStateChange:(id)fp8;
- (void)_popForTimeJump:(id)fp8;
- (void)_tvOutCapabilityChangedNotification;
- (void)_delayedPopForTimeJump;
- (void)_delayedShowLoading;
- (BOOL)canAnimateControlsOverlay;
- (BOOL)canShowControlsOverlay;
- (void)displayVideoView;
- (void)displayVideoViewOnScreen;
- (void)displayVideoViewOnTV;
- (void)handleScaleModeChange;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)setCanAnimateControlsOverlay:(BOOL)fp8;
- (void)setCanShowControlsOverlay:(BOOL)fp8;
- (void)setControlsOverlayVisible:(BOOL)fp8 animate:(BOOL)fp12;
- (void)setOwnsVideoView:(BOOL)fp8;
- (id)createAlternateTracksTransition;
- (id)createChapterFlipTransition;
- (void)setBackstopColor:(id)fp8;
- (void)_hideLoadingIndicator;
- (id)backstopColor;
- (unsigned int)visibleParts;
- (unsigned int)scaleMode;
- (unsigned int)disabledParts;
- (void)setDisabledParts:(unsigned int)fp8;
- (unsigned int)desiredParts;

@end


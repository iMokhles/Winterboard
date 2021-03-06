/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class AVController, CALayer, MPQueueFeeder, VolumeController;

@interface MPAVController : NSObject
{
    AVController *_avController;
    double _connectionFailTime;
    unsigned int _valid:1;
    MPQueueFeeder *_feeder;
    VolumeController *_volumeController;
    CALayer *_videoLayer;
    unsigned int _videoLayerUsageCount;
    unsigned int _tickTimerEnabled;
    struct __CFRunLoopTimer *_tickTimer;
    int _indexChangeDirection;
    unsigned int _itemIndexAtDeath;
    double _lastKnownTimeBeforeDeath;
    double _lastPlaybackIndexChangeTime;
    double _lastSetTime;
    unsigned int _autoPlayWhenLikelyToKeepUp:1;
    unsigned int _closedCaptioningEnabled:1;
    int _eqPreset;
    double _nextFadeOutDuration;
    double _repeatGap;
    float _rateBeforeSeek;
    int _scanDirection;
    unsigned int _scanLevel;
    unsigned int _isSeeking:1;
    unsigned int _activeRewindHoldingAtStart:1;
    unsigned int _bufferingState;
    unsigned int _interruptedOnscreenVideo:1;
    unsigned int _allowVideoResumeFromInterruption:1;
    unsigned int _state;
    unsigned int _displayOverridePlaybackState;
    id _subtitlesRecipient;
    unsigned int _subtitlesEnabled:1;
}

+ (id)sharedInstance;
+ (void)disableSharedIPCAppInstanceRelease;
+ (void)enableSharedIPCAppInstanceRelease;
+ (id)sharedIPCAppInstance;
+ (void)_releaseSharedIPCInstanceIfNecessary;
- (id)init;
- (void)dealloc;
- (void)beginSeek:(int)fp8;
- (void)changePlaybackIndexBy:(int)fp8;
- (void)changePlaybackIndexBy:(int)fp8 andIgnoreChapters:(BOOL)fp12;
- (void)endSeek;
- (void)fadeOutForQuit;
- (BOOL)isSeeking;
- (BOOL)isRewindHoldingAtStart;
- (double)currentTime;
- (void)endPlayback;
- (void)pauseWithFadeout:(float)fp8;
- (void)pause;
- (void)play;
- (void)playItemAtIndex:(unsigned int)fp8;
- (void)playItemAtIndex:(unsigned int)fp8 forceRestart:(BOOL)fp12;
- (void)playChapterTimeMarkerAtIndex:(unsigned int)fp8;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)fp8;
- (void)setCurrentTime:(double)fp8;
- (void)togglePlayback;
- (void)beginTickTimer;
- (void)endTickTimer;
- (BOOL)isTickTimerEnabled;
- (unsigned int)activeRepeatType;
- (unsigned int)activeShuffleType;
- (BOOL)autoPlayWhenLikelyToKeepUp;
- (BOOL)closedCaptioningEnabled;
- (id)currentItem;
- (BOOL)handlingRemoteEvent;
- (BOOL)_isPlayingForState:(unsigned int)fp8;
- (BOOL)isPlaying;
- (BOOL)shouldDisplayAsPlaying;
- (BOOL)isShuffled;
- (BOOL)isValid;
- (BOOL)allowVideoResumeFromInterruption;
- (void)setAllowVideoResumeFromInterruption:(BOOL)fp8;
- (unsigned int)numberOfItems;
- (float)rate;
- (unsigned int)repeatType;
- (void)setClosedCaptioningEnabled:(BOOL)fp8;
- (void)setEQPreset:(int)fp8;
- (void)setNextFadeOutDuration:(double)fp8;
- (void)setRate:(float)fp8;
- (void)setRepeatGap:(double)fp8;
- (void)setRepeatType:(unsigned int)fp8;
- (void)setShuffleType:(unsigned int)fp8;
- (unsigned int)shuffleType;
- (BOOL)subtitlesEnabled;
- (void)setSubtitlesEnabled:(BOOL)fp8;
- (float)volume;
- (void)setVolume:(float)fp8;
- (void)applicationDidReceiveMemoryWarningAsUrgent:(BOOL)fp8;
- (void)applicationWillTerminate;
- (void)applyRepeatSettings;
- (void)applyShuffleSettings;
- (id)avController;
- (void)beginUsingVideoLayer;
- (void)endUsingVideoLayer;
- (void)feederChangedContents:(id)fp8;
- (void)reloadFeederWithStartIndex:(unsigned int)fp8;
- (void)setCurrentTime:(double)fp8 options:(int)fp16;
- (void)setFeeder:(id)fp8;
- (id)subtitlesRecipient;
- (void)switchToAudioPlayback:(BOOL)fp8;
- (void)switchToVideoPlayback:(BOOL)fp8;
- (id)videoLayer;
- (void)controller:(id)fp8 crossedTimeMarker:(int)fp12 forItem:(id)fp16 context:(id)fp20;
- (void)ensureHasAVController;
- (void)volumeControllerDidFade:(id)fp8 fadeDirection:(int)fp12;
- (void)volumeControllerWillFade:(id)fp8 fadeDirection:(int)fp12;
- (void)_itemAttributeAvailableNotification:(id)fp8;
- (void)_itemCompletedDecodeNotification:(id)fp8;
- (void)_itemDidChangeNotification:(id)fp8;
- (void)_itemFailedToPlayNotification:(id)fp8;
- (void)_itemPlaybackDidEndNotification:(id)fp8;
- (void)_itemReadyToPlayNotification:(id)fp8;
- (void)_itemWillChangeNotification:(id)fp8;
- (void)_playbackInterruptedNotification:(id)fp8;
- (void)_playbackInterruptionDidEndNotification:(id)fp8;
- (void)_rateDidChangeNotification:(id)fp8;
- (void)_serverConnectionDiedNotification:(id)fp8;
- (void)_sizeDidChangeNotification:(id)fp8;
- (void)_streamBufferFullNotification:(id)fp8;
- (void)_streamLikelyToKeepUpNotification:(id)fp8;
- (void)_streamRanDryNotification:(id)fp8;
- (void)_streamUnlikelyToKeepUpNotification:(id)fp8;
- (void)_timeHasJumpedNotification:(id)fp8;
- (void)_lowPowerWarningNotification;
- (void)_resumedEventsOnlyNotification:(id)fp8;
- (void)_resumedNotification:(id)fp8;
- (void)_suspendedEventsOnlyNotification:(id)fp8;
- (void)_suspendedNotification:(id)fp8;
- (void)_delayedPlaybackIndexChange;
- (void)_delayedUpdateScanningRate;
- (void)_delayedUpdateTimeMarker;
- (id)_avController;
- (BOOL)_changeChapterTimeMarkerIndexBy:(int)fp8;
- (void)_clearVideoLayer;
- (void)_configureAVController:(id)fp8;
- (BOOL)_connectAVController;
- (void)_endSeekAndChangeRate:(BOOL)fp8;
- (unsigned int)_playbackIndexForDelta:(int)fp8 fromIndex:(unsigned int)fp12;
- (void)_prepareToPlayItem:(id)fp8;
- (id)chapterAndArtworkTimesForItem:(id)fp8;
- (void)_registerForAVItemNotifications:(id)fp8;
- (void)_registerForAVNotifications:(id)fp8;
- (void)_resetInternalState;
- (void)_resetQueue:(BOOL)fp8 videoLayer:(id)fp12;
- (void)_setBufferingState:(unsigned int)fp8;
- (void)_setActionAtEndAttributeForState:(unsigned int)fp8;
- (void)setDisplayOverridePlaybackState:(unsigned int)fp8;
- (unsigned int)_displayPlaybackState;
- (void)_setState:(unsigned int)fp8;
- (void)_setVideoLayerOnAVController:(id)fp8 force:(BOOL)fp12;
- (void)_setValid:(BOOL)fp8;
- (void)_unregisterForAVItemNotifications:(id)fp8;
- (void)_unregisterForAVNotifications:(id)fp8;
- (void)_updateBookkeepingNow;
- (void)_updateProgress:(struct __CFRunLoopTimer *)fp8;
- (void)_updateScanningRate;
- (id)volumeController;
- (unsigned int)state;
- (double)repeatGap;
- (double)nextFadeOutDuration;
- (id)feeder;
- (int)EQPreset;
- (unsigned int)bufferingState;

@end


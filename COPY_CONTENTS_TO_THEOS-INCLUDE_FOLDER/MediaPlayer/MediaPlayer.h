#ifndef MEDIAPLAYER_MEDIAPLAYER_H_
#define MEDIAPLAYER_MEDIAPLAYER_H_

typedef enum {
    MPMovieScalingModeNone,
    MPMovieScalingModeAspectFit,
    MPMovieScalingModeAspectFill,
    MPMovieScalingModeFill,
} MPMovieScalingMode;

#import <MediaPlayer/MPMoviePlayerController.h>
#import <MediaPlayer/MPVideoView.h>

#import <MediaPlayer/UIEventObservableWindow.h>
#import <MediaPlayer/UIMoviePlayerController.h>

#ifdef __cplusplus
extern "C" {
#endif

extern NSString * const MPMoviePlayerPlaybackDidFinishNotification;

#ifdef __cplusplus
}
#endif

#endif/*MEDIAPLAYER_MEDIAPLAYER_H_*/

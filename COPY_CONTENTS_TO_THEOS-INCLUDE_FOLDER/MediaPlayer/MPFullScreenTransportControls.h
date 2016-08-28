/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <MediaPlayer/MPTransportControls.h>

@class UIImage;

@interface MPFullScreenTransportControls : MPTransportControls
{
    UIImage *_backgroundImage;
    float _requiredFrameSizeWidth;
}

- (id)init;
- (void)dealloc;
- (void)drawRect:(struct CGRect)fp8;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)layoutSubviews;
- (id)createVolumeSlider;
- (void)reloadForAdditions:(id)fp8 removals:(id)fp12 animate:(BOOL)fp16;

@end

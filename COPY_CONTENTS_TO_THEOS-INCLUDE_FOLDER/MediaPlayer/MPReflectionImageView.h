/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView;

@interface MPReflectionImageView : UIView
{
    UIImageView *_imageView;
    UIImageView *_reflection;
}

- (void)dealloc;
- (struct CGSize)imageSize;
- (void)setAlbumArtImage:(id)fp8 maxSize:(float)fp12;
- (id)albumArtImage;
- (void)setAlbumAlpha:(float)fp8 reflectionAlpha:(float)fp12;
- (void)setReflectionVisible:(BOOL)fp8 withDuration:(float)fp12;

@end


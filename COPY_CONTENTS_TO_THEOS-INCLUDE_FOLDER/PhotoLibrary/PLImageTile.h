/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UITile.h"

@class PLImageScroller, PLRotationView, UITiledView;

@interface PLImageTile : UITile
{
    UITiledView *_tiledView;
    PLRotationView *_rotationView;
    PLImageScroller *_imageScroller;
    int _index;
}

+ (Class)tileViewClass;
+ (id)_createImageTileWithFrame:(struct CGRect)fp8 imageSize:(struct CGSize)fp24 allowZoomToFill:(BOOL)fp32;
+ (id)createImageTileWithFrame:(struct CGRect)fp8 image:(struct CGImage *)fp24 orientation:(int)fp28 allowZoomToFill:(BOOL)fp32;
+ (id)createImageTileWithFrame:(struct CGRect)fp8 modelImage:(id)fp24;
- (void)setEnabledGestures:(int)fp8;
- (void)_clearImageScroller;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)setFrame:(struct CGRect)fp8;
- (BOOL)_drawsContent;
- (BOOL)_canDrawContent;
- (void)drawRect:(struct CGRect)fp8;
- (struct CGRect)imageRect;
- (int)imageIndex;
- (id)rotationView;
- (id)imageScroller;
- (void)setImageScroller:(id)fp8;
- (id)tiledView;
- (void)setTiledView:(id)fp8;
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)removeFromSuperview;
- (void)setNeedsDisplayInDirtyRect;
- (void)_zoomOut;
- (void)_handleDoubleTap:(struct __GSEvent *)fp8;
- (void)view:(id)fp8 handleTapWithCount:(int)fp12 event:(struct __GSEvent *)fp16 fingerCount:(int)fp20;
- (void)viewHandleTouchPause:(id)fp8 isDown:(BOOL)fp12;

@end


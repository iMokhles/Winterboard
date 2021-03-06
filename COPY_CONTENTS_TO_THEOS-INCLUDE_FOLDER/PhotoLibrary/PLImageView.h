/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UITiledView.h"

@class MLPhoto;

@interface PLImageView : UITiledView
{
    id _delegate;
    id _orientationDelegate;
    struct CGImage *_fullSizeImageRef;
    struct CGImage *_thumbnailImageRef;
    struct CGImage *_contentsImageRef;
    struct CGAffineTransform _contentsTransform;
    struct CGAffineTransform _imageTransform;
    int _imageOrientation;
    int _orientationWhenLastDisplayed;
    struct CGSize _fullSize;
    MLPhoto *_modelImage;
    BOOL _setOriginDuringAnimation;
    float _startScale;
    float _endScale;
    struct CGSize _endContentSize;
    struct CGSize _startContentSize;
    float _zoomProgress;
    BOOL _zoomToFillInsteadOfToFit;
    BOOL _useLessThanMinZoomForZoomedOutTest;
    BOOL _allowZoomToFill;
}

+ (Class)tileClass;
- (id)initWithFrame:(struct CGRect)fp8;
- (struct CGRect)visibleRect;
- (void)setDelegate:(id)fp8;
- (void)setOrientationDelegate:(id)fp8;
- (void)dealloc;
- (void)_setOriginForContentSize:(struct CGSize)fp8;
- (void)centerInScrollerIfNeeded;
- (void)setZoomScale:(float)fp8 duration:(double)fp12;
- (int)orientationWhenLastDisplayed;
- (void)setOrientationWhenLastDisplayed:(int)fp8;
- (struct CGSize)_scrollerContentSize;
- (void)zoomToScale:(float)fp8;
- (void)animator:(id)fp8 stopAnimation:(id)fp12;
- (void)_prepareForAnimatedZoomToScale:(float)fp8 duration:(double)fp12;
- (void)_zoomToScrollPoint:(struct CGPoint)fp8 scale:(float)fp16 duration:(float)fp20 event:(struct __GSEvent *)fp24;
- (struct CGImage *)imageRef;
- (int)imageOrientation;
- (BOOL)_canDrawContent;
- (void)drawRect:(struct CGRect)fp8;
- (BOOL)hasFullSizeImage;
- (void)ensureFullSizeImageLoaded;
- (void)setAllowsZoomToFill:(BOOL)fp8;
- (void)updateZoomScales;
- (int)defaultZoomStyle;
- (BOOL)_getContentsTransform:(struct CGAffineTransform *)fp8 contentsGravity:(id *)fp12 forSize:(struct CGSize)fp16;
- (struct CGRect)_visibleRect;
- (void)_updateLayerContents;
- (struct CGImage *)_createLayerContentsForTileFrame:(struct CGRect)fp8 contentsTransform:(struct CGAffineTransform *)fp24 contentsGravity:(id *)fp28;
- (void)setFullSizeImageRef:(struct CGImage *)fp8 orientation:(int)fp12;
- (void)_finishedLoadingImageRef:(id)fp8;
- (void)setTilingEnabled:(BOOL)fp8;
- (void)movedFromSuperview:(id)fp8;
- (float)minRotatedScale;
- (float)_calculateZoomScale:(BOOL)fp8;
- (float)minZoomScale;
- (float)zoomToFillScale;
- (float)defaultZoomScale;
- (void)setThumbnail:(struct CGImage *)fp8;
- (BOOL)isZoomedOut;
- (id)modelImage;
- (void)setModelImage:(id)fp8;
- (id)description;
- (void)_gestureChanged:(int)fp8 event:(struct __GSEvent *)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <QuartzCore/CALayer.h>

#import "CAPropertyInfo-Protocol.h"

@interface CALayer (CALayerPrivate) <CAPropertyInfo>
+ (id)properties;
+ (void *)CA_setterForType:(int)fp8;
+ (void *)CA_getterForType:(int)fp8;
+ (BOOL)resolveInstanceMethod:(SEL)fp8;
- (BOOL)hasBeenCommitted;
- (BOOL)clearsContext;
- (void)setClearsContext:(BOOL)fp8;
- (BOOL)sortsSublayers;
- (void)setSortsSublayers:(BOOL)fp8;
- (BOOL)isFlipped;
- (void)setFlipped:(BOOL)fp8;
- (BOOL)contentsAreFlipped;
- (void)invalidateContents;
- (void)setContentsChanged;
- (void *)regionBeingDrawn;
- (BOOL)needsDisplay;
- (void)displayIfNeeded;
- (BOOL)_shouldSmoothFonts;
- (BOOL)needsLayout;
- (BOOL)layoutIsActive;
- (BOOL)ignoresHitTesting;
- (id)hitTest:(struct CGPoint)fp8 fromLayer:(id)fp16;
- (BOOL)isDescendantOf:(id)fp8;
- (id)ancestorSharedWithLayer:(id)fp8;
- (struct CGSize)size;
- (id)animationKeys;
- (struct _CARenderLayer *)_copyRenderLayer:(struct _CATransaction *)fp8 flags:(unsigned int *)fp12;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)fp8;
- (_Bool)_renderLayerPropertyAffectsGeometry:(unsigned int)fp8;
- (void)layerDidBecomeVisible:(BOOL)fp8;
- (BOOL)hidden;
- (BOOL)opaque;
- (BOOL)doubleSided;
- (float)anchorPointZ;
- (void)setAnchorPointZ:(float)fp8;
- (struct CGAffineTransform)contentsTransform;
- (void)setContentsTransform:(struct CGAffineTransform)fp8;
- (float)minificationFilterBias;
- (void)setMinificationFilterBias:(float)fp8;
@end


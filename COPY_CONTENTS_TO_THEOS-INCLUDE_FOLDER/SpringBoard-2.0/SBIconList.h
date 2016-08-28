/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UITextLabel;

@interface SBIconList : UIView
{
    NSMutableArray *_iconMatrix;
    NSMutableArray *_removedIcons;
    unsigned int _scattered:1;
    unsigned int _needsLayout:1;
    unsigned int _stateIsDirty:1;
    unsigned int _allowJitter:1;
    unsigned int _showsInfoText:1;
    unsigned int _isJittering:1;
    UITextLabel *_infoTextView;
}

+ (id)sharedInstance;
+ (float)defaultHeight;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithDefaultSize;
- (void)dealloc;
- (int)maxIconRows;
- (int)maxIconColumns;
- (id)icons;
- (id)iconAtX:(int)fp8 Y:(int)fp12;
- (BOOL)firstFreeSlotX:(int *)fp8 Y:(int *)fp12;
- (BOOL)isEmpty;
- (BOOL)needsCompacting;
- (void)compactIconsInIconList:(BOOL)fp8;
- (void)showIconAnimationDidStop:(id)fp8 didFinish:(id)fp12 icon:(id)fp16;
- (id)placeIcon:(id)fp8 atX:(int)fp12 Y:(int)fp16 animate:(BOOL)fp20 moveNow:(BOOL)fp24;
- (id)insertIcon:(id)fp8 atX:(int)fp12 Y:(int)fp16 moveNow:(BOOL)fp20;
- (BOOL)getX:(int *)fp8 Y:(int *)fp12 forIcon:(id)fp16;
- (BOOL)containsIcon:(id)fp8;
- (void)removeIconAtX:(int)fp8 Y:(int)fp12 compactEmptyLists:(BOOL)fp16 animate:(BOOL)fp20;
- (void)removeIcon:(id)fp8 compactEmptyLists:(BOOL)fp12 animate:(BOOL)fp16;
- (void)removeAllIcons;
- (BOOL)isScattered;
- (void)setIconAlphaForRow:(int)fp8 column:(int)fp12 alpha:(float)fp16;
- (void)scatter:(BOOL)fp8;
- (void)unscatter:(BOOL)fp8 startTime:(double)fp12;
- (void)removeAllIconAnimations;
- (float)verticalIconPadding;
- (float)topIconPadding;
- (void)setIconsNeedLayout;
- (int)visibleIconsInRow:(id)fp8;
- (void)cleanseRemovedIcons;
- (float)leftMarginForIconRowArray:(id)fp8;
- (void)layoutIconsNow;
- (float)layoutIconsIfNeeded:(float)fp8 domino:(BOOL)fp12;
- (struct CGPoint)originForIconAtX:(int)fp8 Y:(int)fp12;
- (struct CGPoint)originForIcon:(id)fp8;
- (id)iconAtPoint:(struct CGPoint)fp8 X:(int *)fp16 Y:(int *)fp20;
- (id)iconAtPoint:(struct CGPoint)fp8 X:(int *)fp16 Y:(int *)fp20 proposedOrder:(int *)fp24;
- (BOOL)canShowInfoText;
- (void)removeInfoAnimation:(id)fp8 didFinish:(id)fp12 view:(id)fp16;
- (void)setShowsInfoText:(BOOL)fp8;
- (void)stopJittering;
- (void)startJittering;
- (void)noteEditingStateChanged;
- (void)setStateIsDirty:(BOOL)fp8;
- (BOOL)stateIsDirty;
- (BOOL)isDock;
- (void)resetWithDictionaryRepresentation:(id)fp8;
- (id)initWithDictionaryRepresentation:(id)fp8;
- (id)dictionaryRepresentation;

@end


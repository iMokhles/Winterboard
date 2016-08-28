/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class NSMutableArray, UIColor, UIView;

@interface UISegmentedControl : UIControl <NSCoding>
{
    NSMutableArray *_segments;
    int _selectedSegment;
    int _highlightedSegment;
    UIView *_selectionIndicator;
    UIView *_highlightIndicator;
    id _delegate;
    UIColor *_tintColor;
    struct {
        unsigned int style:3;
        unsigned int size:2;
        unsigned int showsDisclosure:1;
        unsigned int delegateSelectedSegmentChanged:1;
        unsigned int delegateDisclosureButtonClicked:1;
        unsigned int delegateAlwaysNotifiesDelegateOfSegmentClicks:1;
        unsigned int momentaryClick:1;
        unsigned int dontAlwaysToggleForTwoSegments:1;
        unsigned int tracking:1;
        unsigned int mouseInside:1;
        unsigned int autosizeToFitSegments:1;
        unsigned int isSizingToFit:1;
    } _segmentedControlFlags;
}

+ (float)defaultHeightForStyle:(int)fp8 size:(int)fp12;
+ (float)defaultHeightForStyle:(int)fp8;
- (void)_commonSegmentedControlInit;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithItems:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)_populateArchivedSubviews:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)dealloc;
- (int)segmentedControlStyle;
- (void)setSegmentedControlStyle:(int)fp8;
- (int)controlSize;
- (void)setControlSize:(int)fp8;
- (int)segmentControlStyle;
- (void)setSegmentControlStyle:(int)fp8;
- (BOOL)isMomentary;
- (void)setMomentary:(BOOL)fp8;
- (void)setAlwaysToggleForTwoSegments:(BOOL)fp8;
- (void)setTintColor:(id)fp8;
- (void)insertSegmentWithTitle:(id)fp8 atIndex:(unsigned int)fp12 animated:(BOOL)fp16;
- (void)insertSegmentWithImage:(id)fp8 atIndex:(unsigned int)fp12 animated:(BOOL)fp16;
- (void)removeSegmentAtIndex:(unsigned int)fp8 animated:(BOOL)fp12;
- (void)removeAllSegments;
- (void)setTitle:(id)fp8 forSegmentAtIndex:(unsigned int)fp12;
- (id)titleForSegmentAtIndex:(unsigned int)fp8;
- (void)setImage:(id)fp8 forSegmentAtIndex:(unsigned int)fp12;
- (id)imageForSegmentAtIndex:(unsigned int)fp8;
- (void)setWidth:(float)fp8 forSegmentAtIndex:(unsigned int)fp12;
- (float)widthForSegmentAtIndex:(unsigned int)fp8;
- (void)setContentOffset:(struct CGSize)fp8 forSegmentAtIndex:(unsigned int)fp16;
- (struct CGSize)contentOffsetForSegmentAtIndex:(unsigned int)fp8;
- (void)setEnabled:(BOOL)fp8 forSegmentAtIndex:(unsigned int)fp12;
- (BOOL)isEnabledForSegmentAtIndex:(unsigned int)fp8;
- (unsigned int)numberOfSegments;
- (int)selectedSegmentIndex;
- (void)setSelectedSegmentIndex:(int)fp8;
- (void)sizeToFit;
- (void)setFrame:(struct CGRect)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)layoutSubviews;
- (BOOL)shouldTrack;
- (void)updateHighlight;
- (void)highlightSegment:(int)fp8;
- (void)mouseDown:(struct __GSEvent *)fp8;
- (BOOL)pointMostlyInside:(struct CGPoint)fp8 withEvent:(id)fp16;
- (BOOL)pointMostlyInside:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (void)mouseDragged:(struct __GSEvent *)fp8;
- (void)mouseUp:(struct __GSEvent *)fp8;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (id)tintColor;

@end

/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UISegmentedControl.h>

@interface UISegmentedControl (DeprecatedMethods)
+ (float)defaultHeight;
- (id)initWithFrame:(struct CGRect)fp8 withStyle:(int)fp24 withItems:(id)fp28;
- (void)setDelegate:(id)fp8;
- (void)setShowsDisclosure:(BOOL)fp8;
- (void)setMomentaryClick:(BOOL)fp8;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)fp8;
- (void)setImagePadding:(struct CGSize)fp8 forSegment:(unsigned int)fp16;
- (void)selectSegment:(int)fp8;
- (void)addSegmentWithTitle:(id)fp8;
- (void)insertSegment:(unsigned int)fp8 withTitle:(id)fp12 animated:(BOOL)fp16;
- (void)insertSegment:(unsigned int)fp8 withImage:(id)fp12 animated:(BOOL)fp16;
- (void)removeSegment:(unsigned int)fp8 animated:(BOOL)fp12;
- (void)setTitle:(id)fp8 forSegment:(unsigned int)fp12;
- (id)titleForSegment:(unsigned int)fp8;
- (void)setImage:(id)fp8 forSegment:(unsigned int)fp12;
- (id)imageForSegment:(unsigned int)fp8;
- (void)setWidth:(float)fp8 forSegment:(unsigned int)fp12;
- (float)widthForSegment:(unsigned int)fp8;
- (void)setContentOffset:(struct CGSize)fp8 forSegment:(unsigned int)fp16;
- (struct CGSize)contentOffsetForSegment:(unsigned int)fp8;
- (void)setEnabled:(BOOL)fp8 forSegment:(unsigned int)fp12;
- (BOOL)isEnabledForSegment:(unsigned int)fp8;
- (void)setSelectedSegment:(int)fp8;
- (int)selectedSegment;
@end

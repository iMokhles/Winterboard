/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString;

@interface UISectionHeaderCell : UIView
{
    NSString *_title;
    struct {
        unsigned int style:1;
        unsigned int reserved:31;
    } _sectionHeaderCellFlags;
}

+ (id)defaultTitleFont;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)setStyle:(int)fp8;
- (struct CGRect)_rectForTitle:(id)fp8;
- (void)setTitle:(id)fp8;
- (void)drawTitle:(id)fp8 withColor:(id)fp12 withShadowColor:(id)fp16 inRect:(struct CGRect)fp20;
- (void)drawTitle:(id)fp8 inRect:(struct CGRect)fp12;
- (void)drawRect:(struct CGRect)fp8;
- (id)title;
- (BOOL)isEqualToView:(id)fp8;
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;
- (void)mouseUp:(struct __GSEvent *)fp8;

@end


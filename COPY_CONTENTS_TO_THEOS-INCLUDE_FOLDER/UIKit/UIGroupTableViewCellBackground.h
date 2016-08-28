/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface UIGroupTableViewCellBackground : UIView
{
    int _sectionLocation;
    int _animationCount;
    int _externalAnimationCount;
    UIImageView *_fixedView;
    BOOL _disableSeparator;
    UIView *_separatorView;
    UIImageView *_upperLeftView;
    UIImageView *_upperRightView;
    UIImageView *_lowerLeftView;
    UIImageView *_lowerRightView;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)setSectionLocation:(int)fp8;
- (void)setSectionLocation:(int)fp8 animated:(BOOL)fp12;
- (int)sectionLocation;

@end


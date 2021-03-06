/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIButton.h>

@class UIColor;

@interface UIGlassButton : UIButton
{
    UIColor *_tintColor;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)setTintColor:(id)fp8;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (struct CGRect)titleRectForContentRect:(struct CGRect)fp8;
- (void)setTitleColor:(id)fp8 forStates:(unsigned int)fp12;
- (id)titleColorForState:(unsigned int)fp8;
- (void)setTitleShadowColor:(id)fp8 forStates:(unsigned int)fp12;
- (id)titleShadowColorForState:(unsigned int)fp8;
- (void)setBackgroundImage:(id)fp8 forStates:(unsigned int)fp12;
- (id)backgroundImageForState:(unsigned int)fp8;
- (id)tintColor;

@end


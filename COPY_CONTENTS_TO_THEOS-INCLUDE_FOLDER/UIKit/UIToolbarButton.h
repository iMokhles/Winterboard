/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class UIColor, UILabel, UISelectionIndicatorView, UIToolbarButtonBadge, UIView;

@interface UIToolbarButton : UIControl
{
    struct CGRect _hitRect;
    UIView *_info;
    UILabel *_label;
    UIToolbarButtonBadge *_badge;
    UISelectionIndicatorView *_selectedIndicator;
    int _barStyle;
    int _style;
    BOOL _onState;
    BOOL _barHeight;
    BOOL _badgeAnimated;
    BOOL _bezel;
    float _width;
    float _labelHeight;
    CDAnonymousStruct2 _infoInsets;
    UIColor *_tintColor;
}

+ (id)_defaultLabelFont;
+ (id)_defaultLabelColor;
+ (id)_pushButtonWithBarStyle:(int)fp8 withStyle:(int)fp12 withTintColor:(id)fp16;
+ (void)_adjustPushButton:(id)fp8 withBarStyle:(int)fp12 withStyle:(int)fp16 withTintColor:(id)fp20;
- (id)initWithImage:(id)fp8 selectedImage:(id)fp12 label:(id)fp16 labelHeight:(float)fp20 withBarStyle:(int)fp24 withStyle:(int)fp28 withInsets:(CDAnonymousStruct2)fp32 possibleTitles:(id)fp48 withTintColor:(id)fp52 bezel:(BOOL)fp56 imageInsets:(CDAnonymousStruct2)fp60;
- (void)dealloc;
- (void)setSizesToFitImage:(BOOL)fp8;
- (void)_sizeView:(id)fp8 toPossibleTitles:(id)fp12 selectedTitle:(id)fp16;
- (void)setImage:(id)fp8;
- (void)_setButtonBarHitRect:(struct CGRect)fp8;
- (struct CGRect)_buttonBarHitRect;
- (void)_showSelectedIndicator:(BOOL)fp8 changeSelection:(BOOL)fp12;
- (void)_setSelected:(BOOL)fp8;
- (void)_positionBadge;
- (void)setFrame:(struct CGRect)fp8;
- (void)_setBadgeValue:(id)fp8;
- (void)_badgeAnimationDidStop:(id)fp8 finished:(id)fp12;
- (void)_setBadgeAnimated:(BOOL)fp8;
- (void)_setInfoWidth:(float)fp8;
- (void)setEnabled:(BOOL)fp8;
- (BOOL)pointInside:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (BOOL)pointInside:(struct CGPoint)fp8 withEvent:(id)fp16;
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)setHighlighted:(BOOL)fp8;
- (void)_adjustPushButton:(BOOL)fp8;
- (void)layoutSubviews;
- (BOOL)_isBordered;
- (void)_setOn:(BOOL)fp8;
- (BOOL)_isOn;
- (void)_animateImage:(float)fp8 withButtonBar:(id)fp12;
- (void)_setBarHeight:(float)fp8;
- (BOOL)_useBarHeight;
- (void)_adjustPushButtonWithBarStyle:(int)fp8 withTintColor:(id)fp12;

@end

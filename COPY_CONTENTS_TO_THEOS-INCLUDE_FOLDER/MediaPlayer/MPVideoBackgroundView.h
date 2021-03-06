/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView, UITextLabel;

@interface MPVideoBackgroundView : UIView
{
    int _orientation;
    UIImageView *_imageView;
    UIImageView *_iconView;
    UITextLabel *_infoTitle;
    UITextLabel *_infoSubTitle;
    UIView *_hackView;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)setOrientation:(int)fp8;
- (void)setShowQTAudioOnlyUI:(BOOL)fp8;
- (void)_createInformationalTitleView:(id *)fp8 systemFont:(id)fp12 lineBreakMode:(int)fp16;
- (void)setInformationalTitle:(id)fp8 infoSubTitle:(id)fp12;
- (void)layoutForCurrentOrientation;
- (BOOL)shouldShowInformationalTextForOrientation:(int)fp8;
- (void)setInformationalTextShown:(BOOL)fp8;
- (void)layoutSubviews;

@end


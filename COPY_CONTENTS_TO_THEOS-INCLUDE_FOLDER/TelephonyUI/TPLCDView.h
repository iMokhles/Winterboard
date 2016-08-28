/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIImageView.h"

@class TPLCDSubImageView, TPLCDTextView;

@interface TPLCDView : UIImageView
{
    TPLCDTextView *_textView;
    TPLCDTextView *_secondLineTextView;
    TPLCDTextView *_labelView;
    TPLCDSubImageView *_imageView;
    unsigned int _layoutAsLabelled:1;
}

+ (void)preloadImages;
+ (float)defaultHeight;
+ (id)backgroundImage;
+ (float)textFontSize;
+ (float)labelFontSize;
- (id)initWithDefaultSize;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)setContentsAlpha:(float)fp8;
- (struct CGRect)_text1Frame;
- (void)setText:(id)fp8;
- (id)text;
- (struct CGRect)textFrame;
- (struct CGRect)_text2Frame;
- (void)setSecondLineText:(id)fp8;
- (id)secondLineText;
- (struct CGRect)_labelFrame;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)fp8 finished:(id)fp12 context:(id)fp16;
- (void)setLabel:(id)fp8 animate:(BOOL)fp12;
- (void)setLabel:(id)fp8;
- (id)label;
- (void)blinkLabel;
- (void)setSubImage:(id)fp8;
- (id)subImage;
- (void)setShadowColor:(id)fp8;
- (void)setLayoutAsLabelled:(BOOL)fp8;
- (void)layoutSubviews;

@end

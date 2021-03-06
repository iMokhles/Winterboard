/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIProgressIndicator, UIPushButton;

@interface SBInfoBubble : UIView
{
    NSString *_title;
    NSString *_string;
    struct CGRect _titleRect;
    struct CGRect _stringRect;
    UIPushButton *_backspace;
    UIProgressIndicator *_progressIndicator;
}

- (id)initWithTitle:(id)fp8 string:(id)fp12;
- (void)dealloc;
- (struct CGRect)_progressRect;
- (void)showProgressIndicator:(BOOL)fp8;
- (void)showBackspace:(BOOL)fp8;
- (void)highlight:(id)fp8;
- (void)unhighlight:(id)fp8;
- (void)backspace:(id)fp8;
- (void)resize;
- (void)setTitle:(id)fp8 string:(id)fp12;
- (id)title;
- (void)setTitle:(id)fp8;
- (void)drawRect:(struct CGRect)fp8;

@end


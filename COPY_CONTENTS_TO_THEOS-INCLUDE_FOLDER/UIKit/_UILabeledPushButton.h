/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIThreePartButton.h>

@class UILabel;

@interface _UILabeledPushButton : UIThreePartButton
{
    UILabel *_textLabel;
}

- (void)dealloc;
- (void)setLabel:(id)fp8;
- (void)setLabelFontSize:(float)fp8;
- (float)labelFontSize;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)fp8;
- (void)drawTitleAtPoint:(struct CGPoint)fp8 width:(float)fp16;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class NSMutableArray;

@interface SMSTranscriptTopCell : UIView
{
    id _delegate;
    NSMutableArray *_buttonViews;
}

+ (float)defaultHeight;
- (void)dealloc;
- (void)_addButtonWithTitle:(id)fp8 frame:(struct CGRect)fp12;
- (void)setFirstButton:(id)fp8 secondButton:(id)fp12;
- (void)setDelegate:(id)fp8;
- (id)buttonViews;
- (void)_buttonClicked:(id)fp8;

@end

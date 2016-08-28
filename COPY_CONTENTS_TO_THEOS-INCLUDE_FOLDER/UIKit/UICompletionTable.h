/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UICompletionTablePrivate;

@interface UICompletionTable : UIView
{
    UICompletionTablePrivate *_private;
}

+ (id)_cellFont;
+ (id)_shadowImage;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setDelegate:(id)fp8;
- (void)reloadData;
- (void)setTopStrokeColor:(id)fp8;
- (int)numberOfRowsInTable:(id)fp8;
- (id)_completionForRow:(int)fp8;
- (id)table:(id)fp8 cellForRow:(int)fp12 column:(id)fp16 reusing:(id)fp20;
- (void)tableSelectionDidChange:(id)fp8;

@end


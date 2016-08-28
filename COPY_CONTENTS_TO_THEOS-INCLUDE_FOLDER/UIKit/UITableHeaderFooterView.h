/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIImage, UILabel;

@interface UITableHeaderFooterView : UIView
{
    UILabel *_label;
    UIImage *_backgroundImage;
    int _tableViewStyle;
    BOOL _sectionHeader;
}

+ (id)_defaultFontForTableViewStyle:(int)fp8 isSectionHeader:(BOOL)fp12;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)setFrame:(struct CGRect)fp8;
- (struct CGRect)frame;
- (void)setText:(id)fp8;
- (id)text;
- (struct CGSize)_textSizeForWidth:(float)fp8;
- (struct CGRect)_labelFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)_updateBackgroundImage;
- (void)setTableViewStyle:(int)fp8;
- (void)setOpaque:(BOOL)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (BOOL)sectionHeader;
- (void)setSectionHeader:(BOOL)fp8;

@end

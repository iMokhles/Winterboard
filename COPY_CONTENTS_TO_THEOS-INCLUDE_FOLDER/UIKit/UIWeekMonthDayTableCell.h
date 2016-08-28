/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIDateTableCell.h>

@class NSDate, UILabel;

@interface UIWeekMonthDayTableCell : UIDateTableCell
{
    UILabel *_weekdayLabel;
    NSDate *_date;
    float _weekdayWidth;
    BOOL _weekdayLast;
}

- (void)dealloc;
- (id)date;
- (void)setDate:(id)fp8;
- (void)setWeekdayLast:(BOOL)fp8;
- (void)setWeekdayWidth:(float)fp8;
- (id)_weekdayLabelColor;
- (void)setBackgroundColor:(id)fp8;
- (void)setWeekdayString:(id)fp8;
- (void)updateHighlightColors;
- (void)layoutSubviews;

@end

/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString;

@interface UIKeyboardKeyView : UIView
{
    int m_orientation;
    int m_type;
    int m_state;
    int m_style;
    int m_mode;
    NSString *m_labelID;
    int m_labelAdjustmentX;
    int m_labelAdjustmentY;
}

- (id)initWithFrame:(struct CGRect)fp8 orientation:(int)fp24 style:(int)fp28;
- (struct __CFData *)createCacheKey;
- (id)image;
- (int)type;
- (void)setType:(int)fp8;
- (int)state;
- (void)setState:(int)fp8;
- (int)style;
- (void)setStyle:(int)fp8;
- (int)mode;
- (void)setMode:(int)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (id)labelID;
- (void)setLabelID:(id)fp8;

@end


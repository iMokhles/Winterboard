/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString, UIFont;

@interface UIAutocorrectTextView : UIView
{
    NSString *m_string;
    int m_type;
    int m_edgeType;
    UIFont *m_textFont;
    BOOL m_animating;
}

- (id)initWithFrame:(struct CGRect)fp8 string:(id)fp24 type:(int)fp28 edgeType:(int)fp32;
- (void)dealloc;
- (void)setEdgeType:(int)fp8;
- (void)setAnimating:(BOOL)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (BOOL)needsWebDocumentViewEventsDirectly;

@end

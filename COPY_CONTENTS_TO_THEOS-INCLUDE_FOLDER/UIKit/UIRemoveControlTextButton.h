/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class NSString, UITableCell;

@interface UIRemoveControlTextButton : UIControl
{
    UITableCell *_tableCell;
    NSString *_label;
}

- (id)initWithRemoveControl:(id)fp8 withTarget:(id)fp12 withLabel:(id)fp16;
- (void)_controlMouseDragged:(struct __GSEvent *)fp8;
- (void)dealloc;
- (void)_controlMouseDown:(struct __GSEvent *)fp8;
- (void)_controlMouseUp:(struct __GSEvent *)fp8;
- (void)_controlTouchBegan:(id)fp8 withEvent:(id)fp12;
- (void)_controlTouchMoved:(id)fp8 withEvent:(id)fp12;
- (void)_controlTouchEnded:(id)fp8 withEvent:(id)fp12;
- (void)sizeToFit;
- (float)buttonWidth;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)drawRect:(struct CGRect)fp8;
- (id)_scriptingInfo;

@end

/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class UITableCell;

@interface _UITableCellGrabber : UIControl
{
    UITableCell *_cell;
    struct CGPoint _downPoint;
}

- (id)initWithCell:(id)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (BOOL)shouldTrack;
- (BOOL)beginTrackingAt:(struct CGPoint)fp8 withEvent:(struct __GSEvent *)fp16;
- (BOOL)continueTrackingAt:(struct CGPoint)fp8 previous:(struct CGPoint)fp16 withEvent:(struct __GSEvent *)fp24;
- (void)endTrackingAt:(struct CGPoint)fp8 previous:(struct CGPoint)fp16 withEvent:(struct __GSEvent *)fp24;
- (void)_controlMouseDown:(struct __GSEvent *)fp8;
- (void)_controlMouseUp:(struct __GSEvent *)fp8;
- (void)_controlMouseDragged:(struct __GSEvent *)fp8;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;

@end

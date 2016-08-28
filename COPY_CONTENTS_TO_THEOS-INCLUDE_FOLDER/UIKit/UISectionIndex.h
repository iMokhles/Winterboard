/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class UISectionTable;

@interface UISectionIndex : UIControl
{
    UISectionTable *_sectionTable;
    struct CGPoint _lastMousePoint;
}

+ (float)visibleWidth;
+ (float)opaqueVisibleWidth;
- (id)_sectionTitles;
- (id)initWithSectionTable:(id)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (id)_titleForPoint:(struct CGPoint)fp8 pastTop:(char *)fp16 pastBottom:(char *)fp20;
- (void)_scrollToClosestSectionAtPoint:(struct CGPoint)fp8;
- (void)noteIndexTitlesDidChangeInSectionList:(id)fp8;
- (BOOL)beginTrackingAt:(struct CGPoint)fp8 withEvent:(struct __GSEvent *)fp16;
- (BOOL)beginTrackingWithTouch:(id)fp8 withEvent:(id)fp12;
- (BOOL)continueTrackingAt:(struct CGPoint)fp8 previous:(struct CGPoint)fp16 withEvent:(struct __GSEvent *)fp24;
- (BOOL)continueTrackingWithTouch:(id)fp8 withEvent:(id)fp12;
- (void)endTrackingAt:(struct CGPoint)fp8 previous:(struct CGPoint)fp16 withEvent:(struct __GSEvent *)fp24;
- (void)endTrackingWithTouch:(id)fp8 withEvent:(id)fp12;

@end

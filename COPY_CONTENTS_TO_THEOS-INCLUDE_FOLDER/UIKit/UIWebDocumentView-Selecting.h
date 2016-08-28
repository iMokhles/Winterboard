/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIWebDocumentView.h>

@interface UIWebDocumentView (Selecting)
- (BOOL)mouseEventsChangeSelection;
- (BOOL)shouldChangeSelectionForEvent:(struct __GSEvent *)fp8;
- (struct CGRect)visibleRectForSelecting;
- (struct CGPoint)constrainedPoint:(struct CGPoint)fp8;
- (void)startAutoscroll:(struct CGPoint)fp8;
- (void)cancelAutoscroll;
- (void)textLoupeTimerAction;
- (void)selectionMouseDown:(struct __GSEvent *)fp8;
- (void)selectionMouseDragged:(struct __GSEvent *)fp8;
- (void)selectionMouseUp:(struct __GSEvent *)fp8;
- (BOOL)textLoupeActive;
- (void)setTextLoupeActive:(BOOL)fp8;
- (void)createTextLoupeIfNeeded;
- (id)textLoupe;
- (void)updateTextLoupe:(struct CGPoint)fp8;
- (void)removeTextLoupe;
- (void)fadeTextLoupe;
- (BOOL)autocorrectPromptCapturedMouseDown:(struct __GSEvent *)fp8;
@end

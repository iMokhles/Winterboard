/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIWebDocumentView.h>

@interface UIWebDocumentView (Forms)
- (void)_updateFormElementBoundaries;
- (void)setAllowsUnapprovedFocus:(BOOL)fp8;
- (BOOL)allowsUnapprovedFocus;
- (void)setFormEditingDelegate:(id)fp8;
- (id)formEditingDelegate;
- (BOOL)zoomsFocusedFormControl;
- (void)setZoomsFocusedFormControl:(BOOL)fp8;
- (BOOL)isFormEdited;
- (BOOL)webView:(id)fp8 shouldChangeSelectedDOMRange:(id)fp12 toDOMRange:(id)fp16 affinity:(int)fp20 stillSelecting:(BOOL)fp24;
- (struct CGPoint)constrainScrollOffset:(struct CGPoint)fp8 toDeviceRect:(struct CGRect)fp16 factor:(float)fp32;
- (void)scrollCaretToVisible:(id)fp8;
@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UITextView.h"

@interface SMSTextView : UITextView
{
    BOOL _ignoresEnsureSelection;
    int _lastCursorLocation;
}

- (int)lastCursorPosition;
- (void)ensureSelection;
- (void)setText:(id)fp8;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)_forceSetContentSize:(struct CGSize)fp8;
- (void)_setCursorLocation:(int)fp8;
- (int)_cursorLocation;
- (void)restoreCursorPosition;
- (id)initWithFrame:(struct CGRect)fp8;
- (BOOL)becomeFirstResponder;
- (void)saveCursorPosition;
- (id)automaticallySelectedOverlay;

@end


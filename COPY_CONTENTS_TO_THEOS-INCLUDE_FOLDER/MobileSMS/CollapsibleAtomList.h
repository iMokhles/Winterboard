/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class LabelledAtomList, UIPushButton, UITextLabel;

@interface CollapsibleAtomList : UIView
{
    LabelledAtomList *_atomList;
    UITextLabel *_recipientListLabel;
    UIPushButton *_detailsButton;
    UIPushButton *_hideDetailsButton;
    id _delegate;
    unsigned int _expanded:1;
}

- (id)initWithLabel:(id)fp8 totalWidth:(float)fp12 addresses:(id)fp16 arePhoneNumbers:(BOOL)fp20;
- (void)dealloc;
- (id)_createButtonWithTitle:(id)fp8;
- (void)_buttonTouchUpEvent:(id)fp8;
- (void)setDelegate:(id)fp8;
- (void)setAddressAtomTarget:(id)fp8 action:(SEL)fp12;
- (BOOL)isExpanded;
- (void)setExpanded:(BOOL)fp8 animate:(BOOL)fp12;
- (void)_setSizeAndAlphasAnimating:(BOOL)fp8;
- (void)_updateInactiveModeText;
- (void)displayStringsDidChangeForLabelledAtomList:(id)fp8;

@end

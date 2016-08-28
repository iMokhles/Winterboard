/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

#import "CKOverlayViewProtocol-Protocol.h"

@class CKAtomListView, UIImageView, UIScrollView;

@interface CKRecipientListView : UIView <CKOverlayViewProtocol>
{
    UIScrollView *_recipientScrollView;
    CKAtomListView *_toField;
    UIImageView *_recipientSeparatorShadow;
    struct CGSize _contentSize;
    id _delegate;
}

- (id)initWithFrame:(struct CGRect)fp8 toFieldRecipients:(id)fp24 delegate:(id)fp28;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setExpanded:(BOOL)fp8 animate:(BOOL)fp12;
- (float)heightWithoutSeparator;
- (void)addressAtomClicked:(id)fp8;
- (void)atomListView:(id)fp8 sizeDidChange:(struct CGSize)fp12;
- (void)_clearToField;
- (void)_adjustContentSize;
- (void)_setupToFieldWithRecipients:(id)fp8;
- (struct CGSize)contentSize;
- (id)delegate;
- (void)setDelegate:(id)fp8;

@end


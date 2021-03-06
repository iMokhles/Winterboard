/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <ChatKit/CKTextContentView.h>

#import "DOMEventListener-Protocol.h"

@interface CKRichContentView : CKTextContentView <DOMEventListener>
{
    id _richContentDelegate;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (id)brElement;
- (void)insertImage:(id)fp8 ID:(id)fp12 URL:(id)fp16;
- (id)nodeForImage:(id)fp8 ID:(id)fp12 URL:(id)fp16;
- (id)createDocumentFragment;
- (void)_wvHelperThawSelectionTag;
- (void)_wvInsertHTML:(id)fp8;
- (void)_wvRegisterForDOMEvents;
- (void)_wvUnregisterForDOMEvents;
- (void)handleEvent:(id)fp8;
- (void)setHTML:(id)fp8;
- (void)insertHTML:(id)fp8;
- (id)richContentDelegate;
- (void)setRichContentDelegate:(id)fp8;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIWebDocumentView.h>

@class DOMHTMLDocument, DOMHTMLElement, GenericAttachmentStore, NSMutableArray;

@interface ComposeBodyField : UIWebDocumentView
{
    DOMHTMLElement *_body;
    DOMHTMLDocument *_document;
    DOMHTMLElement *_blockquote;
    struct CGSize _originalSize;
    struct CGSize _layoutSize;
    unsigned int _isDirty:1;
    unsigned int _forwardingNotification:1;
    unsigned int _replaceAttachments:1;
    unsigned int _isLoading:1;
    NSMutableArray *_contentToAppend;
    struct _NSRange _rangeToSelect;
    GenericAttachmentStore *_attachmentStore;
}

- (float)contentWidth;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)setDirty:(BOOL)fp8;
- (BOOL)isDirty;
- (BOOL)becomeFirstResponder;
- (void)ensureSelectionVisible;
- (void)ensureSelection;
- (struct _NSRange)selectedRange;
- (void)setSelectedRange:(struct _NSRange)fp8;
- (void)setLayoutInterval:(int)fp8;
- (void)replaceImages;
- (void)webView:(id)fp8 didFinishLoadForFrame:(id)fp12;
- (void)setAttachmentStore:(id)fp8;
- (void)setReplaceAttachmentsWithFilename:(BOOL)fp8;
- (void)webViewDidChange:(id)fp8;
- (void)_finishedLoadingURLRequest:(id)fp8 success:(BOOL)fp12;
- (void)webView:(id)fp8 resource:(id)fp12 didFinishLoadingFromDataSource:(id)fp16;
- (void)webView:(id)fp8 resource:(id)fp12 didFailLoadingWithError:(id)fp16 fromDataSource:(id)fp20;
- (id)webView:(id)fp8 identifierForInitialRequest:(id)fp12 fromDataSource:(id)fp16;
- (BOOL)webView:(id)fp8 shouldDeleteDOMRange:(id)fp12;
- (BOOL)webView:(id)fp8 shouldInsertText:(id)fp12 replacingDOMRange:(id)fp16 givenAction:(int)fp20;
- (void)setPinHeight:(float)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (BOOL)endEditing:(BOOL)fp8;
- (void)setLoading:(BOOL)fp8;
- (void)setMarkupString:(id)fp8;
- (void)addMarkupString:(id)fp8 quote:(BOOL)fp12 baseURL:(id)fp16 emptyFirst:(BOOL)fp20 prepended:(BOOL)fp24;
- (void)prependMarkupString:(id)fp8 quote:(BOOL)fp12 baseURL:(id)fp16 emptyFirst:(BOOL)fp20;
- (void)appendMarkupString:(id)fp8 quote:(BOOL)fp12;
- (void)setMarkupString:(id)fp8 baseURL:(id)fp12 quote:(BOOL)fp16;
- (void)appendQuotedMarkupString:(id)fp8 baseURL:(id)fp12;
- (void)prependString:(id)fp8;
- (void)prependMarkupString:(id)fp8 quote:(BOOL)fp12;
- (BOOL)containsRichText;
- (id)plainTextAlternative;
- (id)plainTextContentWithAttachmentSource:(id)fp8;
- (void)htmlString:(id *)fp8 otherHtmlStringsAndAttachments:(id *)fp12 withAttachmentSource:(id)fp16;
- (void)webViewDidBeginEditing:(id)fp8;
- (void)webViewDidEndEditing:(id)fp8;
- (id)htmlString;
- (struct CGRect)rectOfElementWithID:(id)fp8;

@end


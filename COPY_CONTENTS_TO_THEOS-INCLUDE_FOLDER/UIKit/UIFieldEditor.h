/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIWebDocumentView.h>

@class DOMDocument, DOMHTMLElement, NSString, UIView, WebFrameBridge;

@interface UIFieldEditor : UIWebDocumentView
{
    WebFrameBridge *_bridge;
    DOMDocument *_document;
    DOMHTMLElement *_textElement;
    DOMHTMLElement *_sizeElement;
    NSString *_initialText;
    NSString *_initialStyle;
    UIView *_proxiedView;
    unsigned int _changingView:1;
    unsigned int _mouseWasDragged:1;
    unsigned int _isShowingPlaceholder:1;
    unsigned int _disableNotifications:1;
    unsigned int _shouldMaintainFirstResponderWhenEndEditing:1;
    unsigned int _isResigningFirstResponder:1;
    unsigned int _delegateRespondsToFieldEditorDidChange:1;
    unsigned int _delegateRespondsToShouldInsertText:1;
    unsigned int _delegateRespondsToShouldReplaceWithText:1;
    unsigned int _fieldEditorReentrancyGuard:1;
    unsigned int _reserved:22;
}

+ (id)activeFieldEditor;
+ (id)sharedFieldEditor;
+ (void)releaseSharedInstance;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)selectAll;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)_responderForBecomeFirstResponder;
- (BOOL)shouldChangeSelectionForEvent:(struct __GSEvent *)fp8;
- (struct _NSRange)selectionRange;
- (void)setSelection:(struct _NSRange)fp8;
- (void)setTextSelectionBehavior:(int)fp8;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint)fp8;
- (BOOL)_proxySupportsPlaceholderText;
- (id)_proxyPlaceholderText;
- (id)_proxyPlaceholderStyle;
- (BOOL)_setupPlaceholderText;
- (id)textInputTraits;
- (BOOL)keyboardInput:(id)fp8 shouldInsertText:(id)fp12 isMarkedText:(BOOL)fp16;
- (BOOL)keyboardInputShouldDelete:(id)fp8;
- (BOOL)keyboardInputChanged:(id)fp8;
- (void)keyboardInputChangedSelection:(id)fp8;
- (id)keyboardInputOverlayContainer:(id)fp8;
- (int)keyboardInput:(id)fp8 positionForAutocorrection:(id)fp12;
- (void)becomeFieldEditorForView:(id)fp8 inRect:(struct CGRect)fp12;
- (void)maintainFieldEditorWhenEndEditingForView:(id)fp8;
- (void)_setTextElementStyle:(id)fp8;
- (void)setStyle:(id)fp8;
- (BOOL)isShowingPlaceholder;
- (id)style;
- (id)textColorForCaretSelection;
- (void)_setTextElementString:(id)fp8;
- (void)setText:(id)fp8;
- (id)text;
- (BOOL)hasText;
- (void)setCaretColor:(id)fp8;
- (int)scrollXOffset;
- (int)scrollYOffset;
- (void)setScrollXOffset:(int)fp8 scrollYOffset:(int)fp12;
- (void)setScrollXOffset:(int)fp8 scrollYOffset:(int)fp12 adjustForPurpleCaret:(BOOL)fp16;
- (void)webView:(id)fp8 didFinishLoadForFrame:(id)fp12;
- (struct CGSize)contentSize;
- (void)scrollToMakeCaretVisible:(BOOL)fp8;
- (void)scrollToMakeInlineHoleVisible;
- (void)webViewDidChange:(id)fp8;
- (void)webViewDidChangeSelection:(id)fp8;
- (BOOL)webView:(id)fp8 shouldChangeSelectedDOMRange:(id)fp12 toDOMRange:(id)fp16 affinity:(int)fp20 stillSelecting:(BOOL)fp24;
- (void)clearPlaceholder;
- (BOOL)webView:(id)fp8 shouldInsertText:(id)fp12 replacingDOMRange:(id)fp16 givenAction:(int)fp20;
- (BOOL)webView:(id)fp8 shouldDeleteDOMRange:(id)fp12;
- (void)setupPlaceholderTextIfNeeded;
- (BOOL)hasMarkedText;
- (id)proxiedView;
- (void)setFrame:(struct CGRect)fp8;
- (void)mouseDown:(struct __GSEvent *)fp8;
- (void)mouseDragged:(struct __GSEvent *)fp8;
- (void)mouseUp:(struct __GSEvent *)fp8;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (BOOL)isProxyFor:(id)fp8;
- (void)autoscrollTimerFired:(id)fp8;
- (void)resumeWithNotification:(id)fp8;
- (id)automaticallySelectedOverlay;

@end


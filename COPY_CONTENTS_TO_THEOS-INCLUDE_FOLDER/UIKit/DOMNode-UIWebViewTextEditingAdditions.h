/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "DOMNode.h"

@interface DOMNode (UIWebViewTextEditingAdditions)
- (void)takeTraitsFrom:(id)fp8;
- (BOOL)isSecure;
- (id)textInputTraits;
- (void)setSecure:(BOOL)fp8;
- (BOOL)isProxyFor:(id)fp8;
- (BOOL)requiresKeyEvents;
- (void)handleKeyEvent:(struct __GSEvent *)fp8;
- (struct __CFCharacterSet *)textTrimmingSet;
- (void)setTextTrimmingSet:(struct __CFCharacterSet *)fp8;
- (void)deleteBackward;
- (void)insertText:(id)fp8;
- (unsigned short)characterInRelationToCaretSelection:(int)fp8;
- (unsigned short)characterBeforeCaretSelection;
- (void)setMarkedText:(id)fp8;
- (void)confirmMarkedText:(id)fp8;
- (struct CGRect)rectForNSRange:(struct _NSRange)fp8;
- (id)markedText;
- (void)replaceCurrentWordWithText:(id)fp8;
- (unsigned short)characterAfterCaretSelection;
- (void *)fontForCaretSelection;
- (id)textColorForCaretSelection;
- (struct CGRect)autocorrectionRect;
- (struct CGRect)rectContainingCaretSelection;
- (id)wordRangeContainingCaretSelection;
- (id)wordContainingCaretSelection;
- (id)wordInRange:(id)fp8;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (int)wordOffsetInRange:(id)fp8;
- (BOOL)spaceFollowsWordInRange:(id)fp8;
- (id)previousNGrams:(unsigned int)fp8;
- (struct _NSRange)selectionRange;
- (id)selectedDOMRange;
- (void)setSelectedDOMRange:(id)fp8 affinityDownstream:(BOOL)fp12;
- (id)rangeByMovingCurrentSelection:(int)fp8;
- (id)rangeByExtendingCurrentSelection:(int)fp8;
- (BOOL)hasSelection;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtSentenceStart;
- (BOOL)selectionAtWordStart;
- (BOOL)rangeAtSentenceStart:(id)fp8;
- (void)markCurrentWordForAutoCorrection:(id)fp8 correction:(id)fp12;
- (void)moveBackward:(unsigned int)fp8;
- (void)moveForward:(unsigned int)fp8;
- (void)selectAll;
- (void)setText:(id)fp8;
- (id)text;
- (void)updateSelectionWithPoint:(struct CGPoint)fp8;
- (void)setCaretChangeListener:(id)fp8;
- (struct CGRect)caretRect;
- (struct CGRect)convertCaretRect:(struct CGRect)fp8;
- (id)keyboardInputView;
- (BOOL)isShowingPlaceholder;
- (id)textSuggestionDelegate;
- (void)setTextSuggestionDelegate:(id)fp8;
- (BOOL)contentsIsSingleValue;
- (void)setContentsIsSingleValue:(BOOL)fp8;
- (int)textLoupeVisibility;
- (void)setTextLoupeVisibility:(int)fp8;
- (int)returnKeyType;
- (void)setReturnKeyType:(int)fp8;
- (int)initialSelectionBehavior;
- (void)setInitialSelectionBehavior:(int)fp8;
- (id)editingDelegate;
- (void)setEditingDelegate:(id)fp8;
- (id)keyboardInputOverlayContainer:(id)fp8;
- (id)automaticallySelectedOverlay;
- (void)autoscrollTimerFired:(id)fp8;
- (struct CGPoint)constrainedPoint:(struct CGPoint)fp8;
@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "DOMElement.h"

@interface DOMElement (MailExtras)
+ (BOOL)isRichTextStyle:(id)fp8;
- (BOOL)isRichTextElementType;
- (BOOL)isRichTextElement;
- (int)quoteLevelDelta;
- (void)recursivelyRemoveMailAttributes;
@end

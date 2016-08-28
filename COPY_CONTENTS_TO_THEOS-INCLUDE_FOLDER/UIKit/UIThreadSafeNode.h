/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class DOMNode;

@interface UIThreadSafeNode : NSObject
{
    DOMNode *_node;
}

+ (id)threadSafeNodeWithNode:(id)fp8;
- (id)initWithNode:(id)fp8;
- (id)description;
- (void)dealloc;
- (BOOL)isKindOfClass:(Class)fp8;
- (BOOL)isEqual:(id)fp8;
- (BOOL)isEqualToNode:(id)fp8;
- (BOOL)respondsToSelector:(SEL)fp8;
- (void)setupPlaceholderTextIfNeeded;
- (void)forwardInvocation:(id)fp8;
- (id)methodSignatureForSelector:(SEL)fp8;
- (id)nextFormControl;
- (id)previousFormControl;
- (int)compareTabIndex:(id)fp8;

@end

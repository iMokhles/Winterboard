/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface UIInformalDelegate : NSObject
{
    id _target;
    id _default;
}

+ (id)informalDelegateWithDefaultTarget:(id)fp8;
- (id)initWithDefaultTarget:(id)fp8;
- (void)dealloc;
- (void)setTarget:(id)fp8;
- (id)target;
- (void)forwardInvocation:(id)fp8;
- (id)methodSignatureForSelector:(SEL)fp8;
- (BOOL)respondsToSelector:(SEL)fp8;

@end


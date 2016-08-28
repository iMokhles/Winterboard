/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface CAMediaTimingFunction : NSObject
{
    struct CAMediaTimingFunctionPrivate *_priv;
}

+ (id)functionWithControlPoints:(float)fp8:(float)fp12:(float)fp16:(float)fp20;
+ (id)functionWithName:(id)fp8;
- (id)initWithControlPoints:(float)fp8:(float)fp12:(float)fp16:(float)fp20;
- (void)dealloc;
- (void)_getPoints:(float *)fp8;
- (void)getControlPointAtIndex:(unsigned long)fp8 values:(float [2])fp12;
- (id)description;

@end

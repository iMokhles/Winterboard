/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSArray.h"

@interface CALayerArray : NSArray
{
    struct _CALayerArrayIvars _ivars;
}

- (id)initWithLayers:(id *)fp8 count:(unsigned long)fp12 retain:(BOOL)fp16;
- (void)dealloc;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned int)fp8;
- (void)getObjects:(id *)fp8;
- (void)getObjects:(id *)fp8 range:(struct _NSRange)fp12;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)mutableCopyWithZone:(struct _NSZone *)fp8;
- (unsigned int)countByEnumeratingWithState:(CDAnonymousStruct1 *)fp8 objects:(id *)fp12 count:(unsigned int)fp16;

@end


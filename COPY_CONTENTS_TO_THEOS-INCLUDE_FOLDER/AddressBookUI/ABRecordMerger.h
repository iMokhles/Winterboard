/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@interface ABRecordMerger : NSObject
{
}

- (BOOL)mergeSingleValueProperty:(int)fp8 fromRecord:(void *)fp12 intoRecord:(void *)fp16;
- (void)addValue:(void *)fp8 withProperty:(int)fp12 toExistingValues:(struct __CFSet *)fp16;
- (BOOL)addMultiValueEntry:(void *)fp8 atIndex:(unsigned int)fp12 toMultiValue:(void *)fp16 withProperty:(int)fp20 existingValues:(struct __CFSet *)fp24;
- (BOOL)mergeMultiValueProperty:(int)fp8 fromRecord:(void *)fp12 intoRecord:(void *)fp16;
- (void)mergeVCardRecord:(void *)fp8 withProperties:(struct __CFArray *)fp12 intoRecord:(void *)fp16;

@end

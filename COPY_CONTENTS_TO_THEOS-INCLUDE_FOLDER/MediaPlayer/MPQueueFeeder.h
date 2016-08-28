/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "AVQueueFeeder.h"

@class MPAVController;

@interface MPQueueFeeder : AVQueueFeeder
{
    MPAVController *_avController;
    struct __CFSet *_items;
    unsigned int _repeatType;
    unsigned int _shuffleType;
    struct __CFDictionary *_nextStartTimes;
}

- (void)dealloc;
- (void)setNextStartTime:(double)fp8 forIndex:(unsigned int)fp16;
- (void)shuffleItemsWithAnchor:(unsigned int *)fp8;
- (Class)itemClass;
- (unsigned int)itemTypeForIndex:(unsigned int)fp8;
- (id)preferredLanguages;
- (void)addReferenceToItem:(id)fp8;
- (void)clearReferencesToItem:(id)fp8;
- (unsigned int)realRepeatType;
- (unsigned int)realShuffleType;
- (void)contentsDidChangeByInsertingRange:(struct _NSRange)fp8;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange)fp8;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned int)fp8;
- (id)playbackInfoAtIndex:(unsigned int)fp8;
- (id)copyRawItemAtIndex:(unsigned int)fp8;
- (id)itemForIndex:(unsigned int)fp8;
- (unsigned int)shuffleType;
- (void)setShuffleType:(unsigned int)fp8;
- (unsigned int)repeatType;
- (void)setRepeatType:(unsigned int)fp8;
- (id)AVController;
- (void)setAVController:(id)fp8;

@end


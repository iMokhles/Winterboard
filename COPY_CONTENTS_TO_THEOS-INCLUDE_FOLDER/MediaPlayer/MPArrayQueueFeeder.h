/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <MediaPlayer/MPQueueFeeder.h>

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder
{
    NSArray *_paths;
}

- (id)initWithPaths:(id)fp8;
- (void)dealloc;
- (unsigned int)numberOfPaths;
- (id)pathAtIndex:(unsigned int)fp8;

@end

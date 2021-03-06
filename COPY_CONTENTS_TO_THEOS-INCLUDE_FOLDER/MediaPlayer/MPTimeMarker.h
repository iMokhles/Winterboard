/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MPTimeMarker : NSObject
{
    double _duration;
    unsigned int _index;
    id _thumbnail;
    double _time;
    NSString *_title;
    int _chapterProperty;
}

- (id)initWithChapterProperty:(int)fp8;
- (id)description;
- (void)dealloc;
- (double)comparableTime;
- (int)chapterProperty;
- (id)title;
- (void)setTitle:(id)fp8;
- (double)time;
- (void)setTime:(double)fp8;
- (id)thumbnail;
- (void)setThumbnail:(id)fp8;
- (unsigned int)index;
- (void)setIndex:(unsigned int)fp8;
- (double)duration;
- (void)setDuration:(double)fp8;

@end


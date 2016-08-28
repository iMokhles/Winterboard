/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSIndexPath;

@interface UIUpdateItem : NSObject
{
    int _action;
    NSIndexPath *_indexPath;
    int _animation;
    float _offset;
}

- (id)initWithAction:(int)fp8 forIndexPath:(id)fp12 animation:(int)fp16;
- (void)dealloc;
- (float)offset;
- (void)setOffset:(float)fp8;
- (int)animation;
- (id)indexPath;
- (int)action;

@end

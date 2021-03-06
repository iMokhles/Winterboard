/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@interface AVByteStream : NSObject
{
    struct AVByteStreamPrivate *_priv;
}

- (id)initWithURL:(id)fp8;
- (void)dealloc;
- (void)openComplete:(id)fp8;
- (void)open;
- (void)cancel;
- (struct OpaqueFigByteStream *)figByteStream;
- (struct OpaqueFigCachedByteStream *)crabs;

@end


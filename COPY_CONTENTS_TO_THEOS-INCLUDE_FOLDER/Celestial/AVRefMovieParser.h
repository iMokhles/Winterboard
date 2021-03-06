/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class AVByteStream, NSThread, NSURL;

@interface AVRefMovieParser : NSObject
{
    NSURL *_url;
    AVByteStream *_byteStream;
    NSThread *_processingThread;
}

- (id)initWithURL:(id)fp8 byteStream:(id)fp12;
- (void)dealloc;
- (void)work:(id)fp8;
- (void)parse;
- (void)cancel;

@end


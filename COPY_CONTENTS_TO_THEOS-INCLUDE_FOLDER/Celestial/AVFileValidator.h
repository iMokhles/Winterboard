/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@interface AVFileValidator : NSObject
{
    struct AVFileValidatorPrivate *_priv;
}

- (id)initWithURL:(id)fp8;
- (void)dealloc;
- (id)url;
- (void)setUrl:(id)fp8;
- (id)byteStream;
- (void)fileCheckResult:(id)fp8;
- (void)refMovieResolved:(id)fp8;
- (void)refMovieLeaf:(id)fp8;
- (void)streamOpened:(id)fp8;
- (void)streamFailed:(id)fp8;
- (void)validate;
- (void)cancel;
- (BOOL)isCompleted;
- (float)progress;

@end


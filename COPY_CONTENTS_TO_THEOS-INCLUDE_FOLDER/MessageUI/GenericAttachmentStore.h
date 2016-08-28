/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WebAttachmentSource.h"

@class NSMutableDictionary;

@interface GenericAttachmentStore : WebAttachmentSource
{
    NSMutableDictionary *_attachmentsByURL;
    int _priority;
}

- (void)dealloc;
- (void)addAttachment:(id)fp8;
- (void)removeAttachmentsForURLs:(id)fp8;
- (id)attachmentForURL:(id)fp8;
- (id)attachments;
- (void)setPriority:(int)fp8;
- (int)priority;

@end

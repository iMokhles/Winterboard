/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface PLMobileMeAlbum : NSObject
{
    NSString *_name;
    NSString *_email;
    int _type;
}

- (id)initWithAlbumInformation:(id)fp8;
- (void)dealloc;
- (id)albumInformation;
- (id)name;
- (id)emailAddress;
- (int)type;

@end


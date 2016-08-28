/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ABFavoritesEntry : NSObject
{
    int _abUid;
    int _abIdentifier;
    NSString *_value;
    int _property;
    unsigned int _dirty:1;
    NSString *_label;
    NSString *_name;
    NSString *_abDatabaseUUID;
}

- (id)initWithPerson:(void *)fp8 property:(int)fp12 identifier:(int)fp16;
- (id)initWithDictionaryRepresentation:(id)fp8;
- (id)dictionaryRepresentation;
- (void)dictionaryRepresentation:(id *)fp8 isDirty:(char *)fp12;
- (void)dealloc;
- (id)displayName;
- (int)property;
- (id)label;
- (id)value;
- (int)identifier;
- (void *)ABPerson;
- (int)_abUid;
- (BOOL)isEqual:(id)fp8;
- (void)recheckAddressBook;

@end

/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UITableColumn : NSObject
{
    NSString *_identifier;
    NSString *_title;
    float _width;
}

- (id)initWithTitle:(id)fp8 identifier:(id)fp12 width:(float)fp16;
- (void)dealloc;
- (id)title;
- (void)setTitle:(id)fp8;
- (void)setIdentifier:(id)fp8;
- (id)identifier;
- (float)width;
- (void)setWidth:(float)fp8;

@end


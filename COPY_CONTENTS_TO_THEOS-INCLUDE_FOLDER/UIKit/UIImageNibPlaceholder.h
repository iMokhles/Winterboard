/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIImage.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface UIImageNibPlaceholder : UIImage <NSCoding>
{
    NSString *runtimeResourceName;
}

- (id)initWithContentsOfFile:(id)fp8 andRuntimeResourceName:(id)fp12;
- (id)initWithData:(id)fp8 andRuntimeResourceName:(id)fp12;
- (void)dealloc;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;

@end

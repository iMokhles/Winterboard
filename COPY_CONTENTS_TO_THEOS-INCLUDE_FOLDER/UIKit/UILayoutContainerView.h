/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "NSCoding-Protocol.h"

@interface UILayoutContainerView : UIView <NSCoding>
{
    id _delegate;
}

- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)layoutSubviews;

@end


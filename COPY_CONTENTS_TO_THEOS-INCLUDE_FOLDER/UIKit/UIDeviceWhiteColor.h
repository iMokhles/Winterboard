/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIColor.h>

@interface UIDeviceWhiteColor : UIColor
{
    float whiteComponent;
    float alphaComponent;
    struct CGColor *cachedColor;
}

- (id)initWithWhite:(float)fp8 alpha:(float)fp12;
- (id)initWithCGColor:(struct CGColor *)fp8;
- (void)dealloc;
- (struct CGColor *)_createCGColorWithAlpha:(float)fp8;
- (id)colorWithAlphaComponent:(float)fp8;
- (void)set;
- (void)setFill;
- (void)setStroke;
- (id)colorSpaceName;
- (id)description;
- (BOOL)isEqual:(id)fp8;
- (unsigned int)hash;
- (struct CGColor *)CGColor;

@end

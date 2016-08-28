/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface UIHardware : NSObject
{
}

+ (float)statusBarHeight;
+ (void)_setStatusBarHeight:(float)fp8;
+ (struct CGSize)mainScreenSize;
+ (struct CGRect)fullScreenApplicationContentRect;
+ (struct CGRect)fullScreenApplicationContentRectForDeviceOrientation:(int)fp8;
+ (struct CGRect)fullScreenApplicationContentRectForCurrentDeviceOrientation;
+ (int)ringerState;
+ (int)deviceOrientation:(BOOL)fp8;
+ (BOOL)setSpeakerPhoneEnabled:(BOOL)fp8;
+ (BOOL)isTTYEnabled;
+ (struct CGSize)TVScreenSize;
+ (float)TVHorizontalPixelScale;
+ (BOOL)_TVOutStatus:(BOOL)fp8;
+ (BOOL)TVOutCapableAndPreferred;
+ (BOOL)TVOutCapable;
+ (void)TVOutResetPreferred;
+ (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
+ (void)accessoryAvailabilityChanged;
+ (id)deviceName;
+ (id)localizedDeviceName;

@end

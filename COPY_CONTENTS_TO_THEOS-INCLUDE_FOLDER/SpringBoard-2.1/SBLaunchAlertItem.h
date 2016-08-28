/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSString, SBDisplay;

@interface SBLaunchAlertItem : SBAlertItem
{
    SBDisplay *_associatedDisplay;
    int _type;
    NSString *_bundleID;
    BOOL _isDataAlert;
    BOOL _usesCellNetwork;
}

- (id)initWithLaunchAlertType:(int)fp8 dataAlert:(BOOL)fp12 usesCellNetwork:(BOOL)fp16 bundleID:(id)fp20;
- (void)dealloc;
- (void)setAssociatedWithDisplay:(id)fp8;
- (void)_displayDeactivated:(id)fp8;
- (BOOL)dismissOnLock;
- (id)_customAirplaneModeAlertPrompt;
- (id)alertSheet;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;

@end


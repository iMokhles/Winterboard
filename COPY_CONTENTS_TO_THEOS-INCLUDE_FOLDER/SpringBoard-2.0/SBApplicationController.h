/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableDictionary, SBApplication;

@interface SBApplicationController : NSObject
{
    NSMutableDictionary *_applications;
    SBApplication *_springBoard;
    BOOL _logChanges;
    unsigned int _ignoreInstallationEventCount;
    BOOL _uninstallationThreadRunning;
    NSLock *_uninstallationLock;
    NSMutableArray *_uninstallationQueue;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (id)allApplications;
- (id)applicationsWithBundleIdentifier:(id)fp8;
- (id)applicationWithDisplayIdentifier:(id)fp8;
- (id)applicationWithPid:(int)fp8;
- (id)allDisplayIdentifiers:(BOOL)fp8;
- (id)springBoard;
- (id)iPod;
- (void)setAppsUseDemoRole:(BOOL)fp8;
- (void)loadApplications:(BOOL)fp8;
- (id)_dequeueApplicationToUninstall;
- (void)_uninstallApplicationsThread;
- (void)_uninstallationThreadFinished;
- (void)_enqueueApplicationToUninstall:(id)fp8;
- (void)uninstallApplication:(id)fp8;
- (void)_applicationInstallationCallback;
- (void)loadApplicationsWithPath:(id)fp8 isSystemApplication:(BOOL)fp12 defaultTags:(id)fp16 signerIdentity:(id)fp20 seatbeltProfilePath:(id)fp24 seatbeltEnvironmentVariables:(id)fp28;
- (void)updateSchemesForRoleDefinition:(id)fp8 displayIdentifier:(id)fp12 application:(id)fp16;
- (id)rolesForRoleDefinitions:(id)fp8;
- (id)rolesForInfoPlist:(id)fp8;
- (id)displayNameForRoleDefinition:(id)fp8 inBundle:(id)fp12 infoDictionary:(id)fp16;
- (unsigned int)ignoreInstallationEventCount;
- (void)setIgnoreInstallationEventCount:(unsigned int)fp8;

@end


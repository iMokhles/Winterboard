/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "Foundation/NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, SBButtonBar, SBImageCache;

@interface SBIconModel : NSObject
{
    NSDictionary *_iconState;
    NSMutableArray *_iconLists;
    SBButtonBar *_buttonBar;
    NSMutableDictionary *_allAppIcons;
    NSMutableSet *_hiddenIconTags;
    NSMutableSet *_visibleIconTags;
    SBImageCache *_iconImageCache;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)changeVisibilityOfIconsWithVisibleTags:(id)fp8 hiddenTags:(id)fp12;
- (BOOL)iconIsVisible:(id)fp8;
- (void)replaceDownloadingDisplayIdentifier:(id)fp8 withDisplayIdentifier:(id)fp12;
- (void)_completedUninstall:(id)fp8;
- (id)downloadingIconForDownload:(id)fp8;
- (void)_addDownloadingApplications;
- (id)downloadingIconForDisplayIdentifier:(id)fp8;
- (id)addBookmarkIconForWebClip:(id)fp8;
- (void)reloadIconImage:(id)fp8;
- (void)reloadIconImageForDisplayIdentifier:(id)fp8;
- (void)cacheImageForIcon:(id)fp8;
- (id)getCachedImagedForIcon:(id)fp8;
- (void)addIconForApplication:(id)fp8;
- (void)loadAllIcons;
- (id)iconForDisplayIdentifier:(id)fp8;
- (id)iconState;
- (void)noteIconStateChangedExternally;
- (id)buttonBar;
- (id)iconLists;
- (void)uninstallBookmarkIcon:(id)fp8;
- (id)iconListContainingIcon:(id)fp8;
- (id)iconListContainingIconWithDisplayIdentifier:(id)fp8;
- (id)addEmptyIconList;
- (void)removeEmptyIconList:(id)fp8;
- (void)compactIconLists;
- (id)firstAvailableIconListX:(int *)fp8 Y:(int *)fp12;
- (BOOL)iconPositionInPlatformState:(id)fp8 X:(int *)fp12 Y:(int *)fp16 inIconListNumber:(int *)fp20;
- (void)addNewIconToDesignatedLocation:(id)fp8 animate:(BOOL)fp12 scrollToList:(BOOL)fp16;
- (BOOL)iconListsAreDirty;
- (void)deleteIconState;
- (void)_writeIconState;
- (void)saveIconState;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)_replaceAppIconWithDownloadingIcon:(id)fp8 sourceList:(id)fp12;
- (void)relayout;
- (void)uninstallApplicationIcon:(id)fp8;

@end

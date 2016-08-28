/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class ABGroupWrapper, NSLock, NSMutableArray;

@interface ABModel : NSObject
{
    void *_addressBook;
    struct __CFArray *_displayedMembers;
    NSMutableArray *_displayedGroups;
    CDAnonymousStruct3 *_sectionLists;
    struct __CFDictionary *_headerSortKeyToHeaderString;
    struct _NSRange _displayedMemberPreparedRange;
    unsigned int _numberOfDisplayedMembers;
    BOOL _displayedMembersAreSearchResults;
    void *_selectedPerson;
    ABGroupWrapper *_selectedGroupWrapper;
    ABGroupWrapper *_lastSelectedGroupWrapper;
    unsigned int _displayOrdering;
    struct __CFArray *_databaseChangeDelegates;
    NSMutableArray *_cachedModelRecords;
    NSLock *_memberLock;
    BOOL _loadingInBackground;
    NSLock *_backgroundLoadingLock;
    BOOL _backgroundInvalidated;
}

+ (void)initialize;
+ (unsigned int)sortOrdering;
- (id)initWithUIController:(id)fp8 addressBook:(void *)fp12;
- (void)dealloc;
- (void)_waitUntilBackgroundThreadFinished;
- (void)setSortOrdering:(unsigned int)fp8;
- (void)setDisplayNameOrdering:(unsigned int)fp8;
- (void)resetSortKeyToHeaderStringDictionary;
- (struct __CFDictionary *)headerSortKeyToHeaderStringDictionary;
- (BOOL)shouldUsePartialLoadingForGroupWrapper:(id)fp8;
- (void)resetSectionList;
- (void)setFilteredDisplayedMembers:(struct __CFArray *)fp8;
- (int)displayedMemberSectionListsCount;
- (id)allDisplayedMembers;
- (unsigned int)numberOfDisplayedMembers;
- (id)_createModelRecordFromRecord:(void *)fp8;
- (void)_cachePeople:(struct __CFArray *)fp8 atEnd:(BOOL)fp12;
- (void)_loadMembersInBackground:(id)fp8;
- (void)_startBackgroundThreadIfNecessaryScanningForward:(BOOL)fp8;
- (id)_partialDisplayedGroupMembersInRange:(struct _NSRange)fp8;
- (id)_displayedGroupMembersInRange:(struct _NSRange)fp8;
- (id)displayedMembersInRange:(struct _NSRange)fp8;
- (void *)displayedMemberAtIndex:(unsigned int)fp8;
- (void)copyDisplayedNamePieces:(id *)fp8 isGroup:(char *)fp12 highlightIndex:(int *)fp16 forMember:(const void **)fp20 atindex:(unsigned int)fp24;
- (CDAnonymousStruct3 *)displayedMemberSectionLists;
- (void)prepareDisplayedMembersInRange:(struct _NSRange)fp8;
- (void)invalidateDisplayedGroups;
- (void)setSelectedPerson:(void *)fp8;
- (void *)selectedPerson;
- (void)setSelectedGroup:(void *)fp8;
- (void *)selectedGroup;
- (id)lastSelectedGroupWrapper;
- (void)setLastSelectedGroupWrapper:(id)fp8;
- (void)setSelectedGroupWrapper:(id)fp8;
- (id)selectedGroupWrapper;
- (void)invalidateDisplayedMembers;
- (void)modifiedDisplayedMember:(void *)fp8;
- (void)addDisplayedMember:(void *)fp8;
- (void)removeDisplayedMember:(void *)fp8;
- (void)setAddressBook:(void *)fp8;
- (void *)addressBook;
- (void)_notifyDelegatesOfDatabaseChangeWithDeletedGroup:(BOOL)fp8 deletedPerson:(BOOL)fp12;
- (void)_modelDatabaseChanged:(struct __CFDictionary *)fp8;
- (void)setAutoInvalidateOnDatabaseChange:(BOOL)fp8;
- (void)addDatabaseChangeDelegate:(id)fp8;
- (void)removeDatabaseChangeDelegate:(id)fp8;

@end

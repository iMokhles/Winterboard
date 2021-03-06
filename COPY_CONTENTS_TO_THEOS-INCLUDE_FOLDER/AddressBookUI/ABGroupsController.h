/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <AddressBookUI/ABContentController.h>

#import "UITableViewDelegate-Protocol.h"

@class ABAccountsAndGroupDataSource;

@interface ABGroupsController : ABContentController <UITableViewDelegate>
{
    ABAccountsAndGroupDataSource *_dataSource;
}

- (void)dealloc;
- (BOOL)shouldShowGroups;
- (void)deselectAllRowsWithAnimation:(BOOL)fp8;
- (id)contentView;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 viewForHeaderInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (void)reload;
- (void)displayedGroupsListChanged;
- (void)refreshListIfNeeded;

@end


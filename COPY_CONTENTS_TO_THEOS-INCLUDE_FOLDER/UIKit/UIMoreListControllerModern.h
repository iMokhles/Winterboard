/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIMoreListController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class UITableView;

@interface UIMoreListControllerModern : UIMoreListController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;
}

- (void)dealloc;
- (id)table;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)fp8;
- (int)numberOfSectionsInTableView:(id)fp8;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 accessoryTypeForRowWithIndexPath:(id)fp12;

@end


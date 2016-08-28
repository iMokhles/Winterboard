/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    int _tableViewStyle;
    void *_reserved;
}

- (id)init;
- (id)initWithStyle:(int)fp8;
- (void)dealloc;
- (id)existingTableView;
- (id)tableView;
- (void)setTableView:(id)fp8;
- (void)loadView;
- (void)_deselectAllRowsAnimated:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 willBeginEditingRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didEndEditingRowAtIndexPath:(id)fp12;

@end

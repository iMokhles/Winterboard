/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIViewController.h"

@interface ABPersonViewController : UIViewController
{
    id <ABPersonViewControllerDelegate> _personViewDelegate;
    BOOL _allowsActions;
    BOOL _allowsDeletion;
    BOOL _animatedRight;
    struct __CFArray *_displayedProperties;
    id _personView;
    id _helper;
}

+ (id)arrayByWrappingIntegersInCFArray:(struct __CFArray *)fp8;
+ (struct __CFArray *)createCFArrayByUnwrappingIntegersInArray:(id)fp8;
- (id)init;
- (void)dealloc;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)fp8;
- (BOOL)allowsCancel;
- (void)setAllowsCancel:(BOOL)fp8;
- (id)personViewDelegate;
- (void)setPersonViewDelegate:(id)fp8;
- (void *)addressBook;
- (void)setAddressBook:(void *)fp8;
- (void *)displayedPerson;
- (void)setDisplayedPerson:(void *)fp8;
- (id)displayedProperties;
- (void)setDisplayedProperties:(id)fp8;
- (void)setDisplayedPropertiesAsIntegers:(struct __CFArray *)fp8;
- (void)setHighlightedItemForProperty:(int)fp8 withIdentifier:(int)fp12;
- (void)setHighlightedItemForProperty:(int)fp8 withIdentifier:(int)fp12 important:(BOOL)fp16;
- (id)model;
- (void)setModel:(id)fp8;
- (void)modelDatabaseChange:(id)fp8;
- (void)loadView;
- (void)viewWillAppear:(BOOL)fp8;
- (BOOL)canHandleSnapbackIdentifier:(id)fp8 animated:(BOOL)fp12;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)cardViewer:(id)fp8 selectedPerson:(void *)fp12 property:(int)fp16 identifier:(int)fp20;
- (void)cardViewer:(id)fp8 presentActionsSheet:(id)fp12;
- (void)cardViewer:(id)fp8 dismissActionsSheet:(id)fp12;
- (BOOL)allowsActions;
- (void)setAllowsActions:(BOOL)fp8;
- (BOOL)allowsDeletion;
- (void)setAllowsDeletion:(BOOL)fp8;

@end


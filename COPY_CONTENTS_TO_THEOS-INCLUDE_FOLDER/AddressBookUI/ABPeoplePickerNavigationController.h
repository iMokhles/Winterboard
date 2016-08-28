/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UINavigationController.h"

@class ABModel, NSString;

@interface ABPeoplePickerNavigationController : UINavigationController
{
    void *_addressBook;
    id _peoplePickerDelegate;
    ABModel *_model;
    int _behavior;
    struct __CFArray *_displayedProperties;
    NSString *_prompt;
    id _insertionValue;
    int _insertionProperty;
    struct {
        unsigned int allowsEditing:1;
        unsigned int allowsCancel:1;
        unsigned int allowsActions:1;
    } _flags;
}

- (id)initAsAddressBook:(BOOL)fp8;
- (id)init;
- (void)dealloc;
- (void)setBehavior:(int)fp8;
- (int)behavior;
- (void *)addressBook;
- (void)setAddressBook:(void *)fp8;
- (void)setDisplayedProperties:(id)fp8;
- (id)displayedProperties;
- (void)setAllowsCardEditing:(BOOL)fp8;
- (BOOL)allowsCardEditing;
- (void)setAllowsCancel:(BOOL)fp8;
- (BOOL)allowsCancel;
- (BOOL)allowsActions;
- (void)setPrompt:(id)fp8;
- (id)prompt;
- (void)setInsertionValue:(id)fp8 property:(int)fp12;
- (id)insertionValue;
- (int)insertionProperty;
- (void)saveState;
- (id)model;
- (BOOL)shouldShowGroups;
- (void)_performCancel:(id)fp8;
- (void)_updateViewControllerNavigationButtons;
- (id)peoplePickerDelegate;
- (void)setPeoplePickerDelegate:(id)fp8;

@end

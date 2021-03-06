/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIPreferencesTable.h"

@class ABCardController, ABCardTableController;

@interface ABAbstractCardView : UIPreferencesTable
{
    void *_addressBook;
    ABCardController *_cardController;
    BOOL _showPersonImage;
    ABCardTableController *_cardTableController;
}

+ (id)createCardTableControllerWithCardController:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8 addressBook:(void *)fp24 suspendReloads:(BOOL)fp28;
- (id)initWithFrame:(struct CGRect)fp8 addressBook:(void *)fp24;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void *)addressBook;
- (void)setCardViewerDelegate:(id)fp8;
- (id)cardViewerDelegate;
- (id)cardTableController;
- (id)cardController;
- (void)deselectAllRowsWithAnimation:(BOOL)fp8;
- (void)setDisplayedPerson:(void *)fp8;
- (void)setDisplayedProperties:(struct __CFArray *)fp8;
- (struct __CFArray *)displayedProperties;
- (void)setAllowsActions:(BOOL)fp8;
- (void)setShowPersonImage:(BOOL)fp8;
- (void)setDatesMessageFormat:(id)fp8;
- (void)setDates:(id)fp8 withMessageFormat:(id)fp12;
- (void)setTitleIsImportant:(BOOL)fp8;
- (void)setTitle:(id)fp8 withMessage:(id)fp12;
- (void)setHighlightedItemForProperty:(int)fp8 withIdentifier:(int)fp12 important:(BOOL)fp16;
- (id)navigationBarTitle;

@end


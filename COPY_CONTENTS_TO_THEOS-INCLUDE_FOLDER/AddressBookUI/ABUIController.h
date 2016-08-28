/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

#import "ABMembersControllerDelegate-Protocol.h"
#import "UIModalViewDelegate-Protocol.h"

@class ABCardController, ABCountryCodePicker, ABEditorController, ABGroupsController, ABImagePickerController, ABItemLabelPicker, ABMembersController, ABModel, ABPeoplePicker, ABRingtonePicker, ABServerSearchController, ABSimpleTextInputLayer, ABUnknownCardController, NSMutableArray, NSString, UIModalView, UINavigationBar, UIPreferencesTable, UITransitionView, UIView, UIWindow;

@interface ABUIController : NSObject <UIModalViewDelegate, ABMembersControllerDelegate>
{
    void *_addressBook;
    ABPeoplePicker *_peoplePicker;
    NSMutableArray *_controllerStack;
    ABGroupsController *_groupsController;
    ABMembersController *_membersController;
    ABServerSearchController *_serverSearchController;
    ABUnknownCardController *_unknownCardForServerSearchController;
    ABCardController *_cardController;
    ABEditorController *_editorController;
    ABImagePickerController *_imagePickerController;
    ABSimpleTextInputLayer *_activeSimpleTextInputLayer;
    int _preTextInputDisplayMode;
    UIView *_preTextInputBaseView;
    ABModel *_model;
    struct __CFArray *_displayedProperties;
    UINavigationBar *_navBar;
    id _navBarButtonTarget;
    SEL _navBarLeftButtonAction;
    SEL _navBarRightButtonAction;
    NSString *_prompt;
    NSString *_rightButtonTitle;
    UITransitionView *_cardTransitionLayer;
    UITransitionView *_baseTransitionLayer;
    UITransitionView *_navAndContentTransitionLayer;
    UIView *_placardedContent;
    UIView *_contentView;
    UIWindow *_previousKeyWindow;
    int _previousStatusBarMode;
    ABRingtonePicker *_ringtonePicker;
    ABCountryCodePicker *_countryCodePicker;
    ABItemLabelPicker *_itemLabelPicker;
    int _displayMode;
    BOOL _skipUpdate;
    UIModalView *_alertSheet;
    int _behavior;
    id _value;
    UIPreferencesTable *_cardTable;
    struct {
        unsigned int allowsCancel:1;
        unsigned int allowsOtherValue:1;
        unsigned int allowsCardEditing:1;
        unsigned int wasAllowingCardEditing:1;
        unsigned int shouldRestoreAllowsCardEditing:1;
        unsigned int notifyDelegateOfEndEditing:1;
        unsigned int haveLoadedCurrentMembers:1;
        unsigned int disableHideNavigationButtons:1;
        unsigned int canceling:1;
        unsigned int unused:23;
    } _controllerFlags;
}

+ (id)sharedInstance;
- (id)initWithPeoplePicker:(id)fp8 addressBook:(void *)fp12;
- (id)initWithPeoplePicker:(id)fp8;
- (void)dealloc;
- (id)controllerStack;
- (void)reflowForCurrentPickerSize;
- (void)reflowForPickerSize:(struct CGSize)fp8;
- (id)peoplePicker;
- (void)updateNavBarButtons;
- (void)updateNavBarButtonsAndAnimate:(BOOL)fp8;
- (void)setDisplayedProperties:(struct __CFArray *)fp8;
- (struct __CFArray *)displayedProperties;
- (void)setPrompt:(id)fp8;
- (void)setRightButtonTitle:(id)fp8;
- (void)setBannerTitle:(id)fp8 value:(id)fp12;
- (void)displayScrollerIndicators;
- (void)setAllowsCancel:(BOOL)fp8;
- (BOOL)allowsCancel;
- (void)setAllowsOtherValue:(BOOL)fp8;
- (BOOL)allowsOtherValue;
- (void)setAllowsCardEditing:(BOOL)fp8;
- (BOOL)allowsCardEditing;
- (void)setAllowsOtherValue:(int)fp8 cancel:(int)fp12 editing:(int)fp16;
- (id)membersController;
- (id)groupsController;
- (id)cardController;
- (id)imagePickerController;
- (id)editorController;
- (void *)selectedPerson;
- (id)model;
- (int)displayMode;
- (void)showGroups;
- (void)_notifyDelegateOfFullScreenDismissal:(id)fp8;
- (void)insertGroupNavItemIfNeeded;
- (id)createNavigationItemForSelectedGroupWrapper;
- (void)showMembersOfGroupWrapper:(id)fp8 animate:(BOOL)fp12;
- (void)showMembersOfGroup:(void *)fp8 animate:(BOOL)fp12;
- (void)didChangeNavigationTitleView:(id)fp8;
- (void)showCardForPerson:(void *)fp8 animate:(BOOL)fp12;
- (void)toggleEditing;
- (void)beginEditing:(BOOL)fp8;
- (void)endEditing:(BOOL)fp8 postponeUITeardown:(BOOL)fp12;
- (BOOL)isTransitioning;
- (void)setValue:(id)fp8;
- (id)value;
- (void)setBehavior:(int)fp8;
- (int)behavior;
- (void)cancel:(BOOL)fp8;
- (void)cancel;
- (void)newContactViewCancelled:(id)fp8;
- (void)newContactViewCompleted:(id)fp8 withNewPerson:(void *)fp12;
- (void)newContactViewFinishedAnimatingToCardView:(id)fp8 context:(id)fp12;
- (void)add;
- (void)displayAlertSheet:(id)fp8 inView:(id)fp12;
- (void)closeAlertSheetAndAnimate:(BOOL)fp8;
- (void)closeAlertSheet;
- (void)remove;
- (void)enterOtherValue;
- (void)removeRecord:(void *)fp8;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (void)membersControllerWillStartSearching:(id)fp8;
- (void)membersControllerWillEndSearching:(id)fp8;
- (void)membersController:(id)fp8 needsTitleUpdate:(id)fp12;
- (void)cancelSearchingAnimated:(BOOL)fp8;
- (void)cancelSearching:(id)fp8;
- (void)showActionsView:(id)fp8 withTitle:(id)fp12;
- (void)dismissActionPickerAndUpdateNavBarButtons:(BOOL)fp8 animate:(BOOL)fp12;
- (void)dismissActionPicker;
- (void)showRingtonePicker;
- (void)hideRingtonePicker;
- (void)showEditorForItems:(id)fp8 navTitle:(id)fp12 displayMode:(int)fp16 isNameParts:(BOOL)fp20 isNew:(BOOL)fp24;
- (void)personWasSelected:(void *)fp8;
- (void)showInsertEditorForPerson:(void *)fp8;
- (void)showCountryCodeEditorForItem:(id)fp8;
- (void)countryCodePicker:(id)fp8 endedWithSelectionConfirmed:(BOOL)fp12 animate:(BOOL)fp16;
- (void)showPropertyPicker:(id)fp8 navTitle:(id)fp12 displayMode:(int)fp16;
- (void)itemLabelPickerListChanged:(id)fp8;
- (void)toggleItemLabelEditing;
- (void)showLabelEditorForItem:(id)fp8 additionalLabels:(id)fp12 property:(int)fp16;
- (void)itemLabelPicker:(id)fp8 endedWithSelectionConfirmed:(BOOL)fp12 animate:(BOOL)fp16;
- (id)itemLabelPickerPresentSimpleTextInputLayerWithContext:(id)fp8;
- (void)itemLabelPicker:(id)fp8 dismissSimpleTextInputLayer:(id)fp12;
- (void)showSimpleTextInputLayer:(id)fp8;
- (void)imagePickerWillBeShown:(id)fp8;
- (void)imagePickerFinishedShowing:(id)fp8;
- (void)showImageMenu;
- (void)imagePickerWillBeRemoved:(id)fp8;
- (void)tearDownImagePickerController;
- (void)imagePicker:(id)fp8 pickedPhoto:(id)fp12;
- (void)imagePicker:(id)fp8 presentAlertSheet:(id)fp12;
- (void)imagePicker:(id)fp8 dismissAlertSheet:(id)fp12;
- (struct CGSize)contentSize;
- (struct CGSize)fullScreenSize;
- (struct CGSize)fullScreenContentSize;
- (void)navigationBar:(id)fp8 buttonClicked:(int)fp12;
- (void)registerNavBarButtonsWithTarget:(id)fp8 left:(id)fp12 right:(id)fp16 leftAction:(SEL)fp20 rightAction:(SEL)fp24 leftStyle:(int)fp28 rightStyle:(int)fp32;
- (BOOL)navigationBar:(id)fp8 shouldPopItem:(id)fp12;
- (void)navigationBar:(id)fp8 poppedItem:(id)fp12;
- (void)transitionViewDidStart:(id)fp8;
- (void)transitionViewDidComplete:(id)fp8;
- (void)backAnimate:(BOOL)fp8;
- (void)back;
- (void)restoreDefaultState;
- (void)suspend;
- (void)resume;
- (void)loadState;
- (BOOL)saveState;
- (void)jumpToMembersList:(BOOL)fp8 save:(BOOL)fp12;
- (void)reloadTopController;
- (void)addressBookChangedExternally:(struct __CFDictionary *)fp8;
- (void)editingFieldChanged;
- (void)_performAccountRefreshIfNeeded;
- (void)_performGroupListRefreshIfNeeded;

@end

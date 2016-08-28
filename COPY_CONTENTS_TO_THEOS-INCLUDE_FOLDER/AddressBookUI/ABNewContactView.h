/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class ABCardController, ABCardTableController, ABEditorController, ABImagePickerController, ABRingtonePicker, NSString, UINavigationBar, UIPreferencesTable, UITransitionView;

@interface ABNewContactView : UIView
{
    UITransitionView *_fullTransitionView;
    UIView *_mainFullView;
    UINavigationBar *_navBar;
    UITransitionView *_contentTransitionView;
    UIView *_currentPicker;
    UIPreferencesTable *_cardTable;
    ABCardTableController *_cardTableController;
    ABCardController *_cardController;
    NSString *_contactPropertyInsertionValue;
    NSString *_label;
    int _contactPropertyID;
    id _delegate;
    int _displayedAuxType;
    void *_addressBook;
    void *_person;
    ABEditorController *_editorController;
    ABImagePickerController *_imagePickerController;
    ABRingtonePicker *_ringtonePicker;
}

- (id)initWithFrame:(struct CGRect)fp8 person:(void *)fp24 addressBook:(void *)fp28 updateNavigationBar:(BOOL)fp32;
- (id)initWithFrame:(struct CGRect)fp8 person:(void *)fp24 addressBook:(void *)fp28;
- (id)initWithFrame:(struct CGRect)fp8 insertionValue:(id)fp24 contactProperty:(int)fp28 suggestedFirstName:(id)fp32 suggestedLastName:(id)fp36 addressBook:(void *)fp40 store:(void *)fp44;
- (id)initWithFrame:(struct CGRect)fp8 insertionValue:(id)fp24 contactProperty:(int)fp28 suggestedFirstName:(id)fp32 suggestedLastName:(id)fp36 addressBook:(void *)fp40;
- (void)dealloc;
- (void)setDelegate:(id)fp8;
- (void)suspend;
- (id)value;
- (id)peoplePicker;
- (void)animateToCardView:(id)fp8 withNavigationBar:(id)fp12 buttonBar:(id)fp16 context:(id)fp20;
- (void)animationDidStop:(id)fp8 finished:(id)fp12 context:(CDAnonymousStruct1 *)fp16;
- (void)_buildUI;
- (id)viewForAuxilaryViewType:(int)fp8;
- (id)viewForAuxilaryViewType:(int)fp8 withFrame:(struct CGRect)fp12 context:(id)fp28;
- (void)_setInsertionValue:(id)fp8 contactProperty:(int)fp12;
- (void)_setSuggestedFirstName:(id)fp8 suggestedLastName:(id)fp12;
- (BOOL)allFieldsHaveData;
- (void)transitionViewDidComplete:(id)fp8;
- (struct CGSize)fullScreenContentSize;
- (void)showEditorForItems:(id)fp8 navTitle:(id)fp12 displayMode:(int)fp16 isNameParts:(BOOL)fp20 isNew:(BOOL)fp24;
- (void)editingFieldChanged;
- (void)cardController:(id)fp8 deletedProperty:(int)fp12 withIdentifier:(int)fp16;
- (BOOL)allowsCardEditing;
- (void)showPropertyPicker:(id)fp8 navTitle:(id)fp12 displayMode:(int)fp16;
- (void)_cancel:(id)fp8;
- (void)_save:(id)fp8;
- (void)updateRightButtonEnabledState;
- (void)updateNavigationBar;
- (void)navigationBar:(id)fp8 buttonClicked:(int)fp12;
- (void)navigationBar:(id)fp8 poppedItem:(id)fp12;
- (id)itemLabelPicker;
- (void)itemLabelPickerListChanged:(id)fp8;
- (void)toggleItemLabelEditing;
- (void)showLabelEditorForItem:(id)fp8 additionalLabels:(id)fp12 property:(int)fp16;
- (void)itemLabelPicker:(id)fp8 endedWithSelectionConfirmed:(BOOL)fp12 animate:(BOOL)fp16;
- (id)itemLabelPickerPresentSimpleTextInputLayerWithContext:(id)fp8;
- (void)itemLabelPicker:(id)fp8 dismissSimpleTextInputLayer:(id)fp12;
- (id)countryCodePicker;
- (void)showCountryCodeEditorForItem:(id)fp8;
- (void)countryCodePicker:(id)fp8 endedWithSelectionConfirmed:(BOOL)fp12 animate:(BOOL)fp16;
- (id)cardController;
- (void *)selectedPerson;
- (id)imagePickerController;
- (void)imagePickerWillBeShown:(id)fp8;
- (void)imagePickerFinishedShowing:(id)fp8;
- (void)showImageMenu;
- (void)imagePickerWillBeRemoved:(id)fp8;
- (void)tearDownImagePickerController;
- (void)imagePicker:(id)fp8 pickedPhoto:(id)fp12;
- (id)ringtonePicker;
- (void)showRingtonePicker;

@end

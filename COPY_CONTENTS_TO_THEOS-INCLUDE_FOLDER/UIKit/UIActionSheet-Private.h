/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIActionSheet.h>

@interface UIActionSheet (Private)
+ (struct CGSize)minimumSize;
+ (id)topMostAlert;
+ (id)visibleAlert;
+ (BOOL)atLeastOneAlertVisible;
+ (void)_reorientAlertWindowTo:(int)fp8 animated:(BOOL)fp12;
+ (void)noteOrientationChangingTo:(int)fp8;
+ (void)hideTopmostMiniAlert:(int)fp8;
+ (void)hideAlertsForTermination;
+ (void)showTopmostMiniAlert:(char *)fp8;
+ (void)wantsToShowMiniAlerts:(char *)fp8;
+ (BOOL)_hideTopMostAlertAnimated:(BOOL)fp8;
+ (id)_popupAlertBackground;
- (id)initWithTitle:(id)fp8 buttons:(id)fp12 defaultButtonIndex:(int)fp16 delegate:(id)fp20 context:(id)fp24;
- (BOOL)requiresPortraitOrientation;
- (int)_currentOrientation;
- (void)_setAlertSheetStyleFromButtonBar:(id)fp8;
- (id)buttons;
- (void)_createTitleLabelIfNeeded;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createBodyTextLabelIfNeeded;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_setupTitleStyle;
- (void)setBodyText:(id)fp8;
- (void)setTaglineText:(id)fp8;
- (void)setSubtitle:(id)fp8;
- (id)subtitle;
- (id)bodyText;
- (void)setTitleMaxLineCount:(int)fp8;
- (int)titleMaxLineCount;
- (void)setBodyTextMaxLineCount:(int)fp8;
- (int)bodyMaxLineCount;
- (id)addTextFieldWithValue:(id)fp8 label:(id)fp12;
- (id)textFieldAtIndex:(int)fp8;
- (int)textFieldCount;
- (id)textField;
- (void)_alertSheetTextFieldReturn:(id)fp8;
- (id)keyboard;
- (void)setDefaultButton:(id)fp8;
- (id)defaultButton;
- (void)setDestructiveButton:(id)fp8;
- (id)destructiveButton;
- (id)_addButtonWithTitle:(id)fp8 label:(id)fp12 buttonClass:(Class)fp16;
- (id)addButtonWithTitle:(id)fp8 label:(id)fp12;
- (id)_addButtonWithTitle:(id)fp8;
- (id)addButtonWithTitle:(id)fp8 buttonClass:(Class)fp12;
- (int)buttonCount;
- (void)setContext:(id)fp8;
- (id)context;
- (void)_buttonClicked:(id)fp8;
- (void)_cleanupAfterPopupAnimation;
- (void)setTableShouldShowMinimumContent:(BOOL)fp8;
- (BOOL)tableShouldShowMinimumContent;
- (id)table;
- (BOOL)_needsKeyboard;
- (void)setShowsOverSpringBoardAlerts:(BOOL)fp8;
- (BOOL)showsOverSpringBoardAlerts;
- (void)_performPopup:(BOOL)fp8;
- (void)_growAnimationDidStop:(id)fp8 finished:(id)fp12;
- (void)_bubbleAnimationShrinkDidStop:(id)fp8 finished:(id)fp12;
- (void)_bubbleAnimationNormalDidStop:(id)fp8 finished:(id)fp12;
- (BOOL)_isAnimating;
- (void)_addToStack;
- (void)_removeFromStack;
- (void)_popoutAnimationDidStop:(id)fp8 finished:(id)fp12;
- (void)_performPopoutAnimationAnimated:(BOOL)fp8;
- (void)_repopup;
- (void)_tellSpringboardShowingSheet:(BOOL)fp8;
- (BOOL)_dimsBackground;
- (void)_tellSpringboardHidingSheet:(BOOL)fp8;
- (void)_createAlertWindowIfNeeded:(BOOL)fp8;
- (BOOL)_canShowAlerts;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (void)_temporarilyHideAnimated:(BOOL)fp8;
- (void)_setupInitialFrame;
- (void)_rotatingAnimationDidStop:(id)fp8;
- (void)layoutAnimated:(BOOL)fp8;
- (BOOL)isBodyTextTruncated;
- (void)_layoutPopupAlertWithOrientation:(int)fp8 animated:(BOOL)fp12;
- (void)_layoutIfNeeded;
- (void)_adjustLabelFontSizes;
- (void)popupAlertAnimated:(BOOL)fp8 atOffset:(float)fp12;
- (void)popupAlertAnimated:(BOOL)fp8;
- (void)_presentSheetFromView:(id)fp8 above:(BOOL)fp12;
- (void)presentSheetFromBehindView:(id)fp8;
- (void)presentSheetFromAboveView:(id)fp8;
- (void)presentSheetInView:(id)fp8;
- (void)presentSheetToAboveView:(id)fp8;
- (void)setDimView:(id)fp8;
- (id)_dimView;
- (void)_presentSheetStartingFromYCoordinate:(double)fp8;
- (void)_slideSheetOut:(BOOL)fp8;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)fp8;
- (struct CGSize)backgroundSize;
- (float)_titleVerticalTopInset;
- (float)_titleVerticalBottomInset;
- (float)_titleHorizontalInset;
- (float)_bottomVerticalInset;
- (void)drawRect:(struct CGRect)fp8;
- (void)_appSuspended:(id)fp8;
- (void)_alertSheetAnimationDidStop:(id)fp8 finished:(id)fp12;
- (void)setNumberOfRows:(int)fp8;
- (int)numberOfRows;
- (int)alertSheetStyle;
- (void)setAlertSheetStyle:(int)fp8;
- (void)setDimsBackground:(BOOL)fp8;
- (BOOL)dimsBackground;
- (void)setSuspendTag:(int)fp8;
- (int)suspendTag;
- (void)setBlocksInteraction:(BOOL)fp8;
- (BOOL)blocksInteraction;
- (void)setRunsModal:(BOOL)fp8;
- (BOOL)runsModal;
- (struct CGRect)titleRect;
- (float)_maxHeight;
- (float)_buttonHeight;
- (void)layout;
- (void)presentSheetFromButtonBar:(id)fp8;
@end


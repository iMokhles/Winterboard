#ifndef UIKIT_UIKIT_H_
#define UIKIT_UIKIT_H_

@class NSString;

#import <Foundation/Foundation.h>
#import <GraphicsServices/GraphicsServices.h>
#import <CoreGraphics/CoreGraphics.h>

typedef double UIAccelerationValue;

/*XXX:*/typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
    id _field6;
    id _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    id _field11;
} CDAnonymousStruct9;

/*XXX:*/typedef struct {
    float top;
    float left;
    float bottom;
    float right;
} CDAnonymousStruct2;

/*XXX:*/typedef struct {
    unsigned int numberOfRows:7;
    unsigned int delegateAlertSheetButtonClicked:1;
    unsigned int delegateDidPresentAlertSheet:1;
    unsigned int delegateDidDismissAlertSheet:1;
    unsigned int hideButtonBar:1;
    unsigned int alertStyle:3;
    unsigned int dontDimBackground:1;
    unsigned int dismissSuspended:1;
    unsigned int dontBlockInteraction:1;
    unsigned int sheetWasPoppedUp:1;
    unsigned int animating:1;
    unsigned int hideWhenDoneAnimating:1;
    unsigned int layoutWhenDoneAnimating:1;
    unsigned int titleMaxLineCount:2;
    unsigned int bodyTextMaxLineCount:3;
    unsigned int runsModal:1;
    unsigned int runningModal:1;
    unsigned int addedTextView:1;
    unsigned int addedTableShadows:1;
    unsigned int showOverSBAlerts:1;
    unsigned int showMinTableContent:1;
    unsigned int bodyTextTruncated:1;
    unsigned int orientation:3;
    unsigned int delegateBodyTextAlignment:1;
    unsigned int delegateClickedButtonAtIndex:1;
    unsigned int delegateClickedButtonAtIndex2:1;
    unsigned int delegateCancel:1;
    unsigned int delegateCancel2:1;
    unsigned int delegateWillPresent:1;
    unsigned int delegateWillPresent2:1;
    unsigned int delegateDidPresent:1;
    unsigned int delegateDidPresent2:1;
    unsigned int delegateWillDismiss:1;
    unsigned int delegateWillDismiss2:1;
    unsigned int delegateDidDismiss:1;
    unsigned int delegateDidDismiss2:1;
} CDAnonymousStruct7;

typedef enum {
    UIBarButtonItemStylePlain,
    UIBarButtonItemStyleBordered,
    UIBarButtonItemStyleDone,
} UIBarButtonItemStyle;

typedef enum {
    UIBarStyleDefault,
    UIBarStyleBlackOpaque,
    UIBarStyleBlackTranslucent,
} UIBarStyle;

typedef enum {
    UIButtonTypeCustom,
    UIButtonTypeRoundedRect,
    UIButtonTypeDetailDisclosure,
    UIButtonTypeInfoLight,
    UIButtonTypeInfoDark,
    UIButtonTypeContactAdd,
} UIButtonType;

enum {
    UIControlEventTouchDown           = 1 <<  0,
    UIControlEventTouchDownRepeat     = 1 <<  1,
    UIControlEventTouchDragInside     = 1 <<  2,
    UIControlEventTouchDragOutside    = 1 <<  3,
    UIControlEventTouchDragEnter      = 1 <<  4,
    UIControlEventTouchDragExit       = 1 <<  5,
    UIControlEventTouchUpInside       = 1 <<  6,
    UIControlEventTouchUpOutside      = 1 <<  7,
    UIControlEventTouchCancel         = 1 <<  8,
    UIControlEventValueChanged        = 1 << 12,

    UIControlEventEditingDidBegin     = 1 << 16,
    UIControlEventEditingChanged      = 1 << 17,
    UIControlEventEditingDidEnd       = 1 << 18,
    UIControlEventEditingDidEndOnExit = 1 << 19,

    UIControlEventAllTouchEvents      = 0x00000fff,
    UIControlEventAllEditingEvents    = 0x000f0000,
    UIControlEventApplicationReserved = 0x0f000000,
    UIControlEventSystemReserved      = 0xf0000000,
    UIControlEventAllEvents           = 0xffffffff,
}; typedef NSUInteger UIControlEvents;

enum {
    UIControlStateNormal      = 0,
    UIControlStateHighlighted = 1 << 0,
    UIControlStateDisabled    = 1 << 1,
    UIControlStateSelected    = 1 << 2,
    UIControlStateApplication = 0x00ff0000,
    UIControlStateReserved    = 0xff000000,
}; typedef NSUInteger UIControlState;

typedef enum {
    UIDeviceOrientationUnknown,
    UIDeviceOrientationPortrait,
    UIDeviceOrientationPortraitUpsideDown,
    UIDeviceOrientationLandscapeLeft,
    UIDeviceOrientationLandscapeRight,
    UIDeviceOrientationFaceUp,
    UIDeviceOrientationFaceDown,
} UIDeviceOrientation;

typedef enum {
    UIGestureAttributeMinDegrees,                 /*float*/
    UIGestureAttributeMaxDegrees,                 /*float*/
    UIGestureAttributeMinScale,                   /*float*/
    UIGestureAttributeMaxScale,                   /*float*/
    UIGestureAttributeIsZoomRubberBandEnabled,    /*BOOL*/
    UIGestureAttributeZoomsFromCurrentToMinOrMax, /*BOOL*/
    UIGestureAttributeVisibleSize,                /*CGSize*/
    UIGestureAttributeUpdatesScroller,            /*BOOL*/
} UIGestureAttribute;

typedef enum {
    UIInterfaceOrientationPortrait           = UIDeviceOrientationPortrait,
    UIInterfaceOrientationPortraitUpsideDown = UIDeviceOrientationPortraitUpsideDown,
    UIInterfaceOrientationLandscapeLeft      = UIDeviceOrientationLandscapeRight,
    UIInterfaceOrientationLandscapeRight     = UIDeviceOrientationLandscapeLeft,
} UIInterfaceOrientation;

typedef enum {
    UIKeyboardTypeDefault,
    UIKeyboardTypeASCIICapable,
    UIKeyboardTypeNumbersAndPunctuation,
    UIKeyboardTypeURL,
    UIKeyboardTypeNumberPad,
    UIKeyboardTypePhonePad,
    UIKeyboardTypeNamePhonePad,
    UIKeyboardTypeEmailAddress,
} UIKeyboardType;

typedef enum {
    UILineBreakModeWordWrap,
    UILineBreakModeCharacterWrap,
    UILineBreakModeClip,
    UILineBreakModeHeadTruncation,
    UILineBreakModeTailTruncation,
    UILineBreakModeMiddleTruncation,
} UILineBreakMode;

typedef enum {
    UINavigationButtonStyleNormal,
    UINavigationButtonStyleBack,
    UINavigationButtonStyleHighlighted,
    UINavigationButtonStyleDestructive
} UINavigationButtonStyle;

typedef enum {
    UIProgressIndicatorStyleLargeWhite,
    UIProgressIndicatorStyleMediumWhite,
    UIProgressIndicatorStyleMediumBrown,
    UIProgressIndicatorStyleSmallWhite,
    UIProgressIndicatorStyleSmallBlack,
    UIProgressIndicatorStyleTinyWhite,
} UIProgressIndicatorStyle;

typedef enum {
    UIReturnKeyDefault,
    UIReturnKeyGo,
    UIReturnKeyGoogle,
    UIReturnKeyJoin,
    UIReturnKeyNext,
    UIReturnKeyRoute,
    UIReturnKeySearch,
    UIReturnKeySend,
    UIReturnKeyYahoo,
    UIReturnKeyDone,
    UIReturnKeyEmergencyCall,
} UIReturnKeyType;

typedef enum {
    UISegmentedControlStylePlain,
    UISegmentedControlStyleBordered,
    UISegmentedControlStyleBar,
} UISegmentedControlStyle;

typedef enum {
   UITableViewCellAccessoryNone,
   UITableViewCellAccessoryDisclosureIndicator,
   UITableViewCellAccessoryDetailDisclosureButton,
   UITableViewCellAccessoryCheckmark,
   UITableViewCellAccessoryDetailButton
} UITableViewCellAccessoryType;

typedef enum {
    UITableViewCellEditingStyleNone,
    UITableViewCellEditingStyleDelete,
    UITableViewCellEditingStyleInsert
} UITableViewCellEditingStyle;

typedef enum {
    UITableViewCellSeparatorStyleNone,
    UITableViewCellSeparatorStyleSingleLine
} UITableViewCellSeparatorStyle;

typedef enum {
    UITableViewRowAnimationFade,
    UITableViewRowAnimationRight,
    UITableViewRowAnimationLeft,
    UITableViewRowAnimationTop,
    UITableViewRowAnimationBottom,
} UITableViewRowAnimation;

typedef enum {
    UITableViewScrollPositionNone,
    UITableViewScrollPositionTop,
    UITableViewScrollPositionMiddle,
    UITableViewScrollPositionBottom,
} UITableViewScrollPosition;

typedef enum {
    UITableViewStylePlain,
    UITableViewStyleGrouped,
} UITableViewStyle;

typedef enum {
    UITextAlignmentLeft,
    UITextAlignmentCenter,
    UITextAlignmentRight,
} UITextAlignment;

typedef enum {
    UITextAutocapitalizationTypeNone,
    UITextAutocapitalizationTypeWords,
    UITextAutocapitalizationTypeSentences,
    UITextAutocapitalizationTypeAllCharacters,
} UITextAutocapitalizationType;

typedef enum {
    UITextAutocorrectionTypeDefault,
    UITextAutocorrectionTypeNo,
    UITextAutocorrectionTypeYes,
} UITextAutocorrectionType;

typedef enum {
    UITransitionNone           = 0,
    UITransitionPushFromRight  = 1,
    UITransitionPushFromLeft   = 2,
    UITransitionPushFromBottom = 3,
    UITransitionFade           = 6,
    UITransitionPushFromTop    = 7,
} UITransition;

typedef enum {
    UIViewAnimationCurveEaseInOut,
    UIViewAnimationCurveEaseIn,
    UIViewAnimationCurveEaseOut,
    UIViewAnimationCurveLinear,
} UIViewAnimationCurve;

enum {
    UIViewAutoresizingNone                 = 0,
    UIViewAutoresizingFlexibleLeftMargin   = 1 << 0,
    UIViewAutoresizingFlexibleWidth        = 1 << 1,
    UIViewAutoresizingFlexibleRightMargin  = 1 << 2,
    UIViewAutoresizingFlexibleTopMargin    = 1 << 3,
    UIViewAutoresizingFlexibleHeight       = 1 << 4,
    UIViewAutoresizingFlexibleBottomMargin = 1 << 5,
}; typedef NSUInteger UIViewAutoresizing;

#import <UIKit/UIAcceleration.h>
#import <UIKit/UIAccelerometer.h>
#import <UIKit/UIActionSheet.h>
#import <UIKit/UIActionSheet-Private.h>
#import <UIKit/UIAlertView.h>
#import <UIKit/UIAnimator.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIBarButtonItem.h>
#import <UIKit/UIBezierPath.h>
#import <UIKit/UIBezierPath-UIInternal.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIButton-UIButtonPrivate.h>
#import <UIKit/UIColor.h>
#import <UIKit/UIColor-UIColorSystemColors.h>
#import <UIKit/UIControl-UIControlPrivate.h>
#import <UIKit/UICoverFlowLayer.h>
#import <UIKit/UIDefaultKeyboardInput.h>
#import <UIKit/UIDevice.h>
#import <UIKit/UIEvent.h>
#import <UIKit/UIFieldEditor.h>
#import <UIKit/UIFrameAnimation.h>
#import <UIKit/UIFont.h>
#import <UIKit/UIFormAssistant.h>
#import <UIKit/UIHardware.h>
#import <UIKit/UIFieldEditor.h>
#import <UIKit/UIImage.h>
#import <UIKit/UIImage-UIImageDeprecated.h>
#import <UIKit/UIImage-UIImageInternal.h>
#import <UIKit/UIImage-UIImagePrivate.h>
#import <UIKit/UIImageAndTextTableCell.h>
#import <UIKit/UIImageView.h>
#import <UIKit/UIKeyboard.h>
#import <UIKit/UIKeyboardImpl.h>
#import <UIKit/UIKeyboardLayoutRoman.h>
#import <UIKit/UIKeyboardSublayout.h>
#import <UIKit/UIModalView.h>
#import <UIKit/UIModalView-Private.h>
#import <UIKit/UINavigationBar.h>
#import <UIKit/UINavigationBar-Static.h>
#import <UIKit/UINavigationButton.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationItem.h>
#import <UIKit/UIOldSliderControl.h>
#import <UIKit/UIPreferencesControlTableCell.h>
#import <UIKit/UIPreferencesTable.h>
#import <UIKit/UIPreferencesTableCell.h>
#import <UIKit/UIPreferencesTextTableCell.h>
#import <UIKit/UIProgressBar.h>
#import <UIKit/UIProgressHUD.h>
#import <UIKit/UIProgressHUD-Deprecated.h>
#import <UIKit/UIProgressIndicator.h>
#import <UIKit/UIPushButton.h>
#import <UIKit/UIScreen.h>
#import <UIKit/UISearchField.h>
#import <UIKit/UISegmentedControl.h>
#import <UIKit/UISectionList.h>
#import <UIKit/UISimpleTableCell.h>
#import <UIKit/_UISwitchSlider.h>
#import <UIKit/UITableCell.h>
#import <UIKit/UITableColumn.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITableViewCell-UITableViewCellInternal.h>
#import <UIKit/UITableViewCell-UITableViewCellStatic.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDelegate-Protocol.h>
#import <UIKit/UITextField.h>
#import <UIKit/UITextInputTraits.h>
#import <UIKit/UITextLabel.h>
#import <UIKit/UITextView.h>
#import <UIKit/UIThreePartButton.h>
#import <UIKit/UITabBar.h>
#import <UIKit/UITabBar-UITabBarPrivate.h>
#import <UIKit/UITabBarItem.h>
#import <UIKit/UIToolbar.h>
#import <UIKit/UIToolbar-UIButtonBarPrivate.h>
#import <UIKit/UITouch.h>
#import <UIKit/UITransitionView.h>
#import <UIKit/UIView-Animation.h>
#import <UIKit/UIView-Deprecated.h>
#import <UIKit/UIView-Geometry.h>
#import <UIKit/UIView-Gestures.h>
#import <UIKit/UIView-Hierarchy.h>
#import <UIKit/UIView-Internal.h>
#import <UIKit/UIView-Rendering.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebDocumentView.h>
#import <UIKit/UIWebDocumentView-Forms.h>
#import <UIKit/UIWebDocumentView-Interaction.h>
#import <UIKit/UIWebDocumentView-Messaging.h>
#import <UIKit/UIWebView.h>
#import <UIKit/UIWindow.h>
#import <UIKit/UIWindow-Static.h>

#import <UIKit/NSIndexPath-UITableView.h>

#import <UIKit/NSString-UIKBExtras.h>
#import <UIKit/NSString-UIStringDrawing.h>
#import <UIKit/NSString-UIStringDrawingDeprecated.h>

#import <UIKit/NSURL-UIKitAdditions.h>

@protocol UIApplicationDelegate<NSObject>
@end

#ifdef __cplusplus
extern "C" {
#endif

int UIApplicationMain(int argc, char *argv[], NSString *principalClassName, NSString *delegateClassName);

UIImage *_UIImageWithName(NSString *name);

NSData *UIImageJPEGRepresentation(UIImage *image);
NSData *UIImagePNGRepresentation(UIImage *image);

CGContextRef UIGraphicsGetCurrentContext(void);
UIWindow *UIWindowFindWithWindowRef(GSWindowRef window);

NSString *UIFormattedPhoneNumberFromString(NSString *string);
NSString *UIUnformattedPhoneNumberFromString(NSString *string);

void UIRectFill(CGRect rect);
void UISetColor(CGColorRef color);
void UISetSystemColor(unsigned color);

GSFontRef UISystemFontCreate(unsigned size, bool bold);
GSFontRef UISystemFontForSize(unsigned size);
GSFontRef UISystemFontBoldForSize(unsigned size);

void UIApplicationUseLegacyEvents(BOOL use);
void UIKeyboardEnableAutomaticAppearance(void);
void UIKeyboardDisableAutomaticAppearance(void);

BOOL UIKeyboardInputModeUsesKBStar(NSString *);

extern NSString * const kUIButtonBarButtonAction;
extern NSString * const kUIButtonBarButtonInfo;
extern NSString * const kUIButtonBarButtonInfoOffset;
extern NSString * const kUIButtonBarButtonSelectedInfo;
extern NSString * const kUIButtonBarButtonStyle;
extern NSString * const kUIButtonBarButtonTag;
extern NSString * const kUIButtonBarButtonTarget;
extern NSString * const kUIButtonBarButtonTitle;
extern NSString * const kUIButtonBarButtonTitleVerticalHeight;
extern NSString * const kUIButtonBarButtonTitleWidth;
extern NSString * const kUIButtonBarButtonType;

extern NSString * const UIKeyboardWillShowNotification;
extern NSString * const UIKeyboardDidShowNotification;
extern NSString * const UIKeyboardWillHideNotification;
extern NSString * const UIKeyboardDidHideNotification;
extern NSString * const UIKeyboardCenterBeginUserInfoKey;
extern NSString * const UIKeyboardCenterEndUserInfoKey;
extern NSString * const UIKeyboardBoundsUserInfoKey;

extern NSString * const UIWebViewDidReceiveMessageNotification;
extern NSString * const UIWebViewDidClearMessagesNotification;

extern float const UIWebViewGrowsAndShrinksToFitHeight;
extern float const UIWebViewGrowsAndShrinksToFitWidth;
extern float const UIWebViewScalesToFitScale;

extern UIApplication * const UIApp;

//UIFont *UISystemFontWithSize(CGFloat size);

void UIGraphicsPushContext(CGContextRef);
void UIGraphicsPopContext();

#ifdef __cplusplus
}
#endif

#endif//UIKIT_UIKIT_H_

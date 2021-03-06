/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

#import "DADSearchQueryConsumer-Protocol.h"
#import "MailComposeViewDelegate-Protocol.h"

#import <CoreGraphics/CGGeometry.h>

@class ComposeBodyField, ComposeRecipientView, ComposeSubjectView, GenericAttachmentStore, MFError, MailComposeView, MailCompositionContext, MailboxUid, MutableMessageHeaders, NSArray, NSString, NSTimer, OutgoingMessage, OutgoingMessageDelivery;

@interface MailComposeController : NSObject <MailComposeViewDelegate, DADSearchQueryConsumer>
{
    id _delegate;
    MailComposeView *_view;
    ComposeRecipientView *_toField;
    ComposeRecipientView *_ccField;
    ComposeSubjectView *_subjectField;
    ComposeBodyField *_bodyField;
    struct CGSize _size;
    MailCompositionContext *_compositionContext;
    unsigned int _showKeyboardImmediately:1;
    unsigned int _isDirty:1;
    unsigned int _shouldAutosaveWithSuspendInfo:1;
    unsigned int _suspendedPickingTo:1;
    unsigned int _suspendedPickingCC:1;
    unsigned int _suspendedToWasSelected:1;
    unsigned int _suspendedCCWasSelected:1;
    unsigned int _suspendedSubjectWasSelected:1;
    unsigned int _suspendedBodyWasSelected:1;
    unsigned int _keyboardWasVisible:1;
    unsigned int _pickerWasVisible:1;
    unsigned int _initialAttachmentCount:10;
    unsigned int _stillLoading:1;
    NSString *_lastDraftMessageID;
    MailboxUid *_lastDraftMailboxUid;
    GenericAttachmentStore *_attachmentStore;
    OutgoingMessageDelivery *_delivery;
    OutgoingMessage *_message;
    NSString *_originalSendingEmailAddress;
    NSString *_sendingEmailAddress;
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSArray *_bccAddresses;
    NSString *_subject;
    id _content;
    MutableMessageHeaders *_savedHeaders;
    struct _NSRange _selectedRange;
    int _resolution;
    NSTimer *_autosaveTimer;
    MFError *_error;
}

+ (void)initialize;
+ (void)_refreshMailAccountsIfNecessary;
+ (BOOL)isSetupForDelivery;
+ (id)_defaultAccount;
+ (id)accountEmailAddresses;
+ (id)dotMacUsernames;
+ (id)defaultSignature;
+ (id)signature;
+ (id)_autosavePath;
+ (BOOL)hasAutosavedMessage;
+ (void)removeAutosavedMessage;
- (void)initializeUI;
- (void)tearDownUI;
- (id)topView;
- (id)bottomView;
- (id)initForContentSize:(struct CGSize)fp8;
- (id)initForContentSize:(struct CGSize)fp8 showKeyboardImmediately:(BOOL)fp16;
- (id)init;
- (void)_pickInitialFirstResponder;
- (int)composeType;
- (void)setCompositionContext:(id)fp8;
- (void)_setupForDraft:(id)fp8;
- (void)_setupForReplyToMessage:(id)fp8;
- (void)_setupForReplyAllToMessage:(id)fp8;
- (void)_setupForForwardOfMessage:(id)fp8;
- (void)_setupForAutosavedMessage:(id)fp8;
- (void)_setupForExistingNewMessage:(id)fp8 headers:(id)fp12;
- (void)_setupForMessageWithURL:(id)fp8;
- (void)_quoteReplyMessage:(id)fp8 content:(id)fp12;
- (void)_quoteForwardedMessage:(id)fp8 content:(id)fp12;
- (void)_quoteBody:(id)fp8;
- (void)_loadAttachments:(id)fp8;
- (void)_loadingContextDidLoad:(id)fp8;
- (BOOL)_shouldPrependBlankLineForAttachments;
- (void)setQuotedContent:(id)fp8 includeAttachments:(BOOL)fp12;
- (void)setDelegate:(id)fp8;
- (id)view;
- (void)dealloc;
- (void)setPercentDone:(double)fp8;
- (id)sendingEmailAddress;
- (id)_sendingEmailAddressIfExists;
- (void)setSendingEmailAddress:(id)fp8;
- (BOOL)sendingEmailDirtied;
- (BOOL)canShowFromField;
- (void)setupForURL:(id)fp8;
- (void)_focusGained:(id)fp8;
- (void)_bodyFieldDidBeginEditing:(id)fp8;
- (void)suspend;
- (void)resumeWithSize:(struct CGSize)fp8;
- (void)resume;
- (void)_textChanged:(id)fp8;
- (void)_bodyTextChanged:(id)fp8;
- (void)_close;
- (void)close:(id)fp8;
- (void)emptyContent;
- (id)navigationBarTitle;
- (void)setContent:(id)fp8;
- (void)prependQuotedMarkup:(id)fp8;
- (void)prependPreamble:(id)fp8;
- (void)_addSignature:(BOOL)fp8;
- (void)_addSignature;
- (void)setSubject:(id)fp8;
- (void)setToRecipients:(id)fp8;
- (void)setCcRecipients:(id)fp8;
- (void)setSendingEmailAddress:(id)fp8 addIfNotPresent:(BOOL)fp12;
- (void)_tryAddSenderToBccRecipients;
- (void)setDraftMessageID:(id)fp8 mailbox:(id)fp12;
- (id)attachments;
- (struct CGRect)rectOfAttachment:(id)fp8;
- (void)setContentVisible:(BOOL)fp8;
- (void)addAttachment:(id)fp8;
- (id)markupForInlineAttachment:(id)fp8 willBeIncluded:(BOOL)fp12;
- (void)addInlineAttachmentAtPath:(id)fp8 includeDirectoryContents:(BOOL)fp12;
- (void)insertInlineAttachment:(id)fp8;
- (void)addInlineAttachmentWithData:(id)fp8 preferredFilename:(id)fp12 mimeType:(id)fp16;
- (void)attachmentsRemoved:(id)fp8;
- (void)_inlinedAttachmentFinishedLoading:(id)fp8;
- (void)attachmentFinishedLoading:(id)fp8;
- (void)recoverAutosavedMessage;
- (void)_reallyAutosaveImmediately:(id)fp8;
- (void)scheduleAutosaveAfterDelay:(id)fp8;
- (void)autosaveImmediately;
- (void)cancelAutosave;
- (id)_autosavedMessage;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(id)fp8;
- (id)headersUseSuspendInfo:(BOOL)fp8;
- (id)messageUseSuspendInfo:(BOOL)fp8 endingEditing:(BOOL)fp12;
- (id)messageUseSuspendInfo:(BOOL)fp8;
- (id)message;
- (id)messageEndingEditing:(BOOL)fp8;
- (id)_lastDraftWithLibrary:(id)fp8;
- (void)_removeLastDraftWithStore:(id)fp8;
- (void)markMessageAsReplied:(id)fp8;
- (void)markMessageAsForwarded:(id)fp8;
- (void)_setUpDeliveryObject;
- (void)send:(id)fp8;
- (void)sendMessage;
- (id)addressesForField:(int)fp8;
- (void)addAddress:(id)fp8 field:(int)fp12;
- (void)setAddresses:(id)fp8 field:(int)fp12;
- (void)removeAddressAtIndex:(int)fp8 field:(int)fp12;
- (int)resolution;
- (BOOL)needsDelivery;
- (BOOL)deliverMessage;
- (id)error;
- (id)errorTitle;
- (id)errorDescription;
- (void)setRecipientsKeyboardType:(int)fp8;
- (void)composeHeaderViewDidChangeValue:(id)fp8;
- (void)composeHeaderViewDidConfirmValue:(id)fp8;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (int)numberOfComponentsInPickerView:(id)fp8;
- (unsigned int)pickerView:(id)fp8 numberOfRowsInComponent:(unsigned int)fp12;
- (id)pickerView:(id)fp8 viewForRow:(unsigned int)fp12 forComponent:(unsigned int)fp16 reusingView:(id)fp20;
- (void)didSelectCellAtRow:(unsigned int)fp8;
- (void)selectCurrentEntryForPickerView:(id)fp8;
- (id)runDASearchIfNecessary:(id)fp8;
- (void)cancelSearchQuery:(id)fp8;
- (void *)_createSimpleABRecordForSearchResult:(id)fp8;
- (void)resultsForSearchQuery:(id)fp8 results:(id)fp12;
- (void)actionFailed:(int)fp8 forQuery:(id)fp12 error:(id)fp16;

@end


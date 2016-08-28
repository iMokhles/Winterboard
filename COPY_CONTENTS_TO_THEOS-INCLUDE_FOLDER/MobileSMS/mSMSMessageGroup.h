/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSCalendarDate, NSMutableArray, NSMutableDictionary, NSString, SMSMessage;

@interface mSMSMessageGroup : NSObject
{
    NSMutableArray *_messages;
    NSCalendarDate *_nextEligibleTimestamp;
    NSString *_name;
    int _unreadCount;
    SMSMessage *_latestFailedMessage;
    NSMutableArray *_pendingMessages;
    SMSMessage *_latestIncomingMessage;
    void *_abRecord;
    int _identifier;
    BOOL _hasPlaceholder;
    SMSMessage *_placeholderMessage;
    NSArray *_abRecords;
    int *_identifiers;
    NSArray *_names;
    NSArray *_recipients;
    int _groupID;
    NSMutableDictionary *_groupMessages;
    NSMutableArray *_queuedGroupMessages;
    int _groupAddStack;
    NSString *_unsentMessage;
    int _unsentCursorPosition;
    BOOL _moreMessagesToLoad;
    int _limitToLoad;
}

- (int)groupID;
- (id)initWithGroupID:(int)fp8;
- (void *)recipient;
- (void)dealloc;
- (void)setName:(id)fp8;
- (id)name;
- (void *)abRecord;
- (int)identifier;
- (id)latestMessage;
- (id)date;
- (void)setRecipients:(id)fp8;
- (id)recipients;
- (void)_setupNextEligibleTimestamp:(id)fp8;
- (BOOL)_shouldShowTimestampForDate:(id)fp8;
- (void)_recalculateUnreadCounts;
- (void)removeMessage:(struct __CTSMSMessage *)fp8;
- (void)_setLatestFailedMessage:(id)fp8 delete:(BOOL)fp12;
- (void)resetFailedMessageDeletingFailure:(BOOL)fp8;
- (BOOL)isEmpty;
- (BOOL)isPlaceholder;
- (id)placeholderMessage;
- (void)_setPlaceholderMessage:(id)fp8;
- (int)addSMSMessage:(id)fp8 incrementUnreadCount:(BOOL)fp12;
- (void)_beginGroupAdd;
- (void)_addGroupMessage:(id)fp8;
- (int)_endGroupAdd:(BOOL)fp8;
- (int)addMessage:(struct __CTSMSMessage *)fp8 incrementUnreadCount:(BOOL)fp12;
- (void)resetPendingMessages;
- (void)removeAllMessages;
- (void)_deleteAllMessagesAndRemoveGroup:(BOOL)fp8;
- (void)deleteAllMessages;
- (void)deleteAllMessagesAndRemoveGroup;
- (struct __CFArray *)_createMessagesForGroup:(int)fp8 limit:(int)fp12 moreToLoad:(char *)fp16;
- (BOOL)moreMessagesToLoad;
- (void)_reloadMessagesToLimit;
- (void)loadAllMessages;
- (void)loadMoreMessages;
- (id)pendingMessages;
- (id)messages;
- (id)latestFailedMessage;
- (id)latestIncomingMessage;
- (void)setUnreadCount:(int)fp8;
- (int)unreadCount;
- (BOOL)hasUnreadMessages;
- (int)compareByDateDescending:(id)fp8;
- (void)resetCaches;
- (id)groupMessageWithAssociationID:(int)fp8;
- (int)unsentCursorPosition;
- (void)setUnsentCursorPosition:(int)fp8;
- (id)unsentMessage;
- (void)setUnsentMessage:(id)fp8;

@end

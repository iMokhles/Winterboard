/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableData, NSMutableURLRequest, NSURLConnection;

@interface PLMobileMeHelper : NSObject
{
    NSMutableURLRequest *_request;
    NSURLConnection *_connection;
    id _delegate;
    BOOL _performedFullAccountScan;
    NSArray *_albums;
    NSMutableArray *_usernamesToCheck;
    NSMutableData *_responseData;
    int _lastStatusCode;
}

+ (void)initialize;
+ (id)_copyPasswordForUsername:(id)fp8;
+ (id)_createAlbumFetchRequestForUsernames:(id)fp8 includeTimeStamp:(BOOL)fp12;
+ (id)serviceName;
+ (id)userAgentString;
+ (id)languageString;
- (id)init;
- (void)dealloc;
- (BOOL)canPostToDotMac;
- (void)setDelegate:(id)fp8;
- (void)cancel;
- (id)albums;
- (id)preferredUsername;
- (id)_accountsWeThinkAreValid;
- (void)_noValidAccountsFound;
- (void)enableApplicationNetworkFlags:(BOOL)fp8;
- (void)validateAlbums;
- (BOOL)_setAlbumsFromServerResponse:(id)fp8;
- (BOOL)canValidateAlbums;
- (void)connection:(id)fp8 didReceiveResponse:(id)fp12;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;

@end


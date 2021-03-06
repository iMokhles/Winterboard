/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class UIWindow;

@interface UISuspendInfo : NSObject
{
    UIWindow *_window;
    struct CGAffineTransform _transform;
    float _alpha;
    float _level;
    float _suspendedScale;
    BOOL _restoreOnResume;
}

+ (void)createInfoWithWindows:(id)fp8;
+ (void)updateSuspendedInfo;
- (void)_addWindowToSnapshot;
- (id)initWithWindow:(id)fp8;
- (void)synchronizeDrawingWithID:(int)fp8;
- (void)restoreWindow;
- (void)setSuspendedScale:(float)fp8;
- (float)suspendedScale;
- (void)setRestoreOnResume:(BOOL)fp8;
- (BOOL)restoreOnResume;

@end


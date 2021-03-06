/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

#import "UIModalViewDelegate-Protocol.h"

@class UIModalView;

@interface UISystemAlertRequest : NSObject <UIModalViewDelegate>
{
    int _alertID;
    UIModalView *_sheet;
    id _target;
    SEL _action;
}

- (id)initWithAlertID:(int)fp8 sheet:(id)fp12 target:(id)fp16 action:(SEL)fp20;
- (void)dealloc;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;

@end


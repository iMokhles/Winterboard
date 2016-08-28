/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIKeyboard.h>

#import "UIFormPeripheral-Protocol.h"

@interface UIKeyboardPeripheral : UIKeyboard <UIFormPeripheral>
{
    id <UITextControl> _control;
    int _orientation;
}

+ (BOOL)isUniqueForEachFormControl;
- (id)initFormPeripheral;
- (void)dealloc;
- (void)endEditing;
- (void)willChangeToFormControl:(id)fp8;
- (void)setFormControl:(id)fp8;
- (int)orientation;
- (void)resumeWithNotification:(id)fp8;

@end

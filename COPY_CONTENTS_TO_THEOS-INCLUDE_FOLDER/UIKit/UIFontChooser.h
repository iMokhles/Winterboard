/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class UITable, UITextField;

@interface UIFontChooser : UIView <UITextFieldDelegate>
{
    UITable *_nameTable;
    UITable *_sizeTable;
    UITextField *_sizeField;
    struct __CFArray *_familyNames;
    id _delegate;
    unsigned int _sizes[15];
    unsigned int _sizeBeforeEditing;
}

+ (id)sharedFontChooser;
- (id)_tableWithFrame:(struct CGRect)fp8;
- (struct CGRect)_nameTableFrame;
- (struct CGRect)_separatorFrame;
- (struct CGRect)_fieldBackgroundFrame;
- (struct CGRect)_sizeFieldFrame;
- (struct CGRect)_sizeTableFrame;
- (void)_updateSublayerFrames;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (int)numberOfRowsInTable:(id)fp8;
- (id)table:(id)fp8 cellForRow:(int)fp12 column:(id)fp16;
- (void)selectFamilyName:(id)fp8;
- (void)selectSize:(float)fp8;
- (void)selectFont:(id)fp8;
- (void)acceptSizeFromSizeField;
- (void)_finishedEditing:(id)fp8;
- (void)tableSelectionDidChange:(id)fp8;
- (void)textFieldDidBecomeFirstResponder:(id)fp8;
- (void)textFieldDidResignFirstResponder:(id)fp8;
- (id)selectedFamilyName;
- (float)selectedSize;
- (void)setDelegate:(id)fp8;
- (id)delegate;

@end


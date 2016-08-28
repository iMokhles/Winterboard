/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@interface UISwitch : UIControl <NSCoding>
{
    id _control;
}

- (id)init;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithCoder:(id)fp8;
- (void)_populateArchivedSubviews:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)dealloc;
- (BOOL)isOn;
- (void)setOn:(BOOL)fp8;
- (void)setOn:(BOOL)fp8 animated:(BOOL)fp12;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)fp8;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)fp8;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)fp8;
- (unsigned int)state;
- (void)addTarget:(id)fp8 action:(SEL)fp12 forControlEvents:(unsigned int)fp16;
- (void)removeTarget:(id)fp8 action:(SEL)fp12 forControlEvents:(unsigned int)fp16;

@end

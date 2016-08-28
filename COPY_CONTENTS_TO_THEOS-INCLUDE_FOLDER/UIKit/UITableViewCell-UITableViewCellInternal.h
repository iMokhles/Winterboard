/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UITableViewCell.h>

@interface UITableViewCell (UITableViewCellInternal)
- (id)_tableView;
- (void)_setEditingStyle:(int)fp8;
- (void)_setShouldIndentWhileEditing:(BOOL)fp8;
- (void)_setDrawsTopSeparator:(BOOL)fp8;
- (void)_drawSeparatorInRect:(struct CGRect)fp8;
#if 1 // iPhoneOS 1.x
- (void)_drawContentInRect:(struct CGRect)fp8 selected:(BOOL)fp24;
#endif
- (void)_drawBackgroundInRect:(struct CGRect)fp8 withFade:(float)fp24;
- (id)_removeControl;
- (void)_grabberBeganReorder:(id)fp8;
- (void)_grabberDragged:(id)fp8 yDelta:(float)fp12;
- (void)_grabberReleased:(id)fp8;
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)fp8;
- (void)_willBeDeleted;
- (void)removeControl:(id)fp8 willRemoveTarget:(id)fp12;
- (void)insertControl:(id)fp8 shouldInsertWithTarget:(id)fp12;
- (void)removeControlWillHideRemoveConfirmation:(id)fp8;
- (struct CGRect)removeControl:(id)fp8 startFrameForTarget:(id)fp12;
- (struct CGRect)removeControl:(id)fp8 endFrameForTarget:(id)fp12;
- (void)removeControl:(id)fp8 wasCanceledForTarget:(id)fp12;
- (int)tableViewStyle;
- (void)setTableViewStyle:(int)fp8;
- (id)_scriptingInfo;
@end


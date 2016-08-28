/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface UIFingerInfo : NSObject
{
    struct __CFDictionary *_fingers;
    int _activeFinger;
    BOOL _activeFingerLocked;
}

- (void)dealloc;
- (void)startTouch:(CDAnonymousStruct16)fp8 withEvent:(struct __GSEvent *)fp44 adjustLocation:(BOOL)fp48;
- (BOOL)chordChanged:(CDAnonymousStruct16)fp8 withEvent:(struct __GSEvent *)fp44 adjustLocation:(BOOL)fp48;
- (BOOL)fingersMoved:(CDAnonymousStruct16)fp8 withEvent:(struct __GSEvent *)fp44 adjustLocation:(BOOL)fp48;
- (BOOL)hasActiveFinger;

@end


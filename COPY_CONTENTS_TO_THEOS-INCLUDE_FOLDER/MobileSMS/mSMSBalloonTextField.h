/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UITableCell.h>

@interface mSMSBalloonTextField : UITableCell
{
    id _delegate;
    int _orientation;
    float _bubbleAlpha;
    float _tightenedWidth;
    unsigned int _hasURLs:1;
    unsigned int _draws:1;
    unsigned int _forceTighten:1;
}

+ (struct CGSize)defaultSize;
+ (id)defaultFont;
+ (float)heightForText:(id)fp8;
+ (struct CGContext *)sharedSizingContext;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)setOrientation:(int)fp8;
- (void)animateToBubbleWithDuration:(float)fp8;
- (void)setBubbleAlpha:(float)fp8;
- (void)setText:(id)fp8;
- (void)setDraws:(BOOL)fp8;
- (id)text;
- (void)setFrame:(struct CGRect)fp8;
- (float)tightenedWidth;
- (void)setForceTighten:(BOOL)fp8;
- (void)tighten;
- (void)drawBalloonImage:(id)fp8 inRect:(struct CGRect)fp12;
- (struct CGRect)balloonBounds;
- (void)drawRect:(struct CGRect)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (BOOL)hasURLs;
- (BOOL)becomeFirstResponder;
- (void)animator:(id)fp8 stopAnimation:(id)fp12;

@end

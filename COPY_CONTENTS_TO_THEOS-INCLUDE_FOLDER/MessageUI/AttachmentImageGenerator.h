/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIImage;

@interface AttachmentImageGenerator : UIView
{
    struct CGSize _textSize;
    NSString *_displayString;
    UIImage *_image;
}

+ (id)pngDataForAttachment:(id)fp8 dimensions:(struct CGSize *)fp12;
+ (void)imageData:(id *)fp8 mimeType:(id *)fp12 dimensions:(struct CGSize *)fp16 forAttachment:(id)fp20;
- (id)initWithAttachment:(id)fp8;
- (void)dealloc;
- (void)drawRect:(struct CGRect)fp8;

@end


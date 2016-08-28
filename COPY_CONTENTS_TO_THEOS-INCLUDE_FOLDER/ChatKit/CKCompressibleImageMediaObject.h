/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <ChatKit/CKMediaObject.h>

@class CKImageData;

@interface CKCompressibleImageMediaObject : CKMediaObject
{
    CKImageData *_imageData;
}

+ (id)mimeTypesToFileExtensions;
+ (id)previewDataMIMEType;
+ (struct CGSize)transcodeMaxSize;
- (void)dealloc;
- (int)mediaType;
- (id)imageData;
- (BOOL)shouldTranscodeForMMS;
- (Class)balloonPreviewClassWithPreviewData:(id)fp8;
- (float)balloonHeightWithPreviewData:(id)fp8;
- (void)configureBalloon:(id)fp8 withPreviewData:(id)fp12;
- (id)_newTranscodedMediaObjectWithMaxByteLength:(int)fp8;
- (id)newTranscodingForMMSWithMaxByteLength:(int)fp8;
- (id)newPreview:(int)fp8 highlight:(BOOL)fp12;
- (void)copyToPasteboard:(id)fp8;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <AddressBookUI/ABContentController.h>

#import "UIModalViewDelegate-Protocol.h"

@class ABImagePickerWindow, UIView<ABPLPhotoPickerProtocol>;

@interface ABImagePickerController : ABContentController <UIModalViewDelegate>
{
    BOOL _hasExistingPhoto;
    BOOL _confirmingDelete;
    UIView<ABPLPhotoPickerProtocol> *_photoPicker;
    ABImagePickerWindow *_imagePickerWindow;
    void *_person;
    int _animations;
}

- (void)dealloc;
- (BOOL)hasMultipleActions;
- (id)contentView;
- (void)animationsComplete;
- (void)finishedSlidingPickerDown;
- (id)imagePickerWindow;
- (void)_finshedShowImagePickerWindow;
- (void)showImagePickerWindow:(id)fp8 andNotifyController:(BOOL)fp12;
- (void)showImagePickerWindow:(id)fp8;
- (void)slidePickerDownWindow:(SEL)fp8;
- (void)slideCompleteNoImage;
- (void)resume;
- (void)suspend;
- (void)photoPickerDidCancel:(id)fp8;
- (void)photoPicker:(id)fp8 didCropPhotoToRect:(struct CGRect)fp12 fullSizeImageData:(id)fp28 fullScreenImageData:(id)fp32 croppedImageData:(id)fp36;
- (struct CGRect)photoPickerCroppedPhotoDestination:(id)fp8 imageView:(id)fp12;
- (void)photoPickerDidCancelAnimatingThrow:(id)fp8 imageView:(id)fp12;
- (void)photoPickerDidFinishAnimatingThrow:(id)fp8 imageView:(id)fp12;
- (void)_fillWindowWithPicker:(BOOL)fp8;
- (void)takePhoto;
- (void)chooseExisting;
- (void)deletePhoto;
- (void)finishEditPhoto:(id)fp8;
- (void)doEditPhoto:(id)fp8;
- (void)editPhoto;
- (void)cancelImageMenu;
- (void)orderOut:(id)fp8;
- (void)back:(BOOL)fp8 save:(BOOL)fp12;
- (void)reload;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;

@end


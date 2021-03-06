/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class MLPhotoAlbum, PLEmptyAlbumView, PLImageCountCell, PLSelectableTable, PLThumbnailTableCell;

@interface PLAlbumView : UIView
{
    MLPhotoAlbum *_album;
    PLSelectableTable *_indexTable;
    struct CGSize _gridSize;
    struct CGSize _cellSize;
    BOOL _showImageCount;
    id _delegate;
    PLThumbnailTableCell *_highlightedCell;
    PLImageCountCell *_imageCountCell;
    PLEmptyAlbumView *_emptyAlbumView;
    float _bottomBuffer;
    unsigned int _pad:1;
}

- (float)_padding:(float *)fp8;
- (void)_updateScrollerIndicatorSubrect;
- (void)setFrame:(struct CGRect)fp8;
- (void)_setupIndexTable;
- (void)setBottomBufferHeight:(float)fp8;
- (struct CGSize)_calculateGridSizeForCount:(int)fp8;
- (struct CGSize)_indexCellSizeForCount:(int)fp8;
- (void)_pictureWasTaken:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)setRequiresPadding:(BOOL)fp8;
- (void)cameraAlbumDidChange;
- (void)statusBarHeightDidChange:(id)fp8;
- (void)storeCurrentConfiguration:(id)fp8;
- (void)loadCurrentConfiguration:(id)fp8;
- (id)album;
- (void)setAlbum:(id)fp8;
- (void)setDelegate:(id)fp8;
- (void)scrollRowToVisible:(int)fp8;
- (int)numberOfRowsInTable:(id)fp8;
- (id)_imageCountCell;
- (id)table:(id)fp8 cellForRow:(int)fp12 column:(id)fp16 reusing:(id)fp20;
- (void)thumbnailSelected:(id)fp8;
- (void)tableSelectionDidChange:(id)fp8;
- (void)reloadIndexTable;
- (id)indexTable;
- (void)clearSelection;
- (void)updateButtonBar:(id)fp8 duration:(float)fp12 visible:(BOOL)fp16;
- (void)viewWillBeDisplayed;
- (void)setHighlightedCell:(id)fp8;

@end


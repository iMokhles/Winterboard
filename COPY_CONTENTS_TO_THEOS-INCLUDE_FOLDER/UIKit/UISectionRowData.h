/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface UISectionRowData : NSObject <NSCopying>
{
    BOOL _valid;
    float _headerHeight;
    float _footerHeight;
    float _headerOffset;
    float _footerOffset;
    int _numRows;
    int _arrayLength;
    float *_rowHeights;
    float *_rowOffsets;
    float _sectionHeight;
}

- (void)dealloc;
- (void)invalidate;
- (float)_headerOrFooterSizeForTable:(id)fp8 title:(id)fp12 isHeader:(BOOL)fp16;
- (void)addOffset:(float)fp8 fromRow:(int)fp12;
- (float)_defaultSectionHeaderHeightForSection:(int)fp8 tableView:(id)fp12 tableViewRowData:(id)fp16;
- (float)_defaultSectionFooterHeightForSection:(int)fp8 tableView:(id)fp12 tableViewRowData:(id)fp16;
- (void)refreshWithSection:(int)fp8 tableView:(id)fp12 tableViewRowData:(id)fp16;
- (void)insertRowAtIndex:(int)fp8 inSection:(int)fp12 rowHeight:(float)fp16 tableViewRowData:(id)fp20;
- (void)deleteRowAtIndex:(int)fp8;
- (int)sectionLocationForRow:(int)fp8;
- (int)sectionLocationForReorderedRow:(int)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;

@end


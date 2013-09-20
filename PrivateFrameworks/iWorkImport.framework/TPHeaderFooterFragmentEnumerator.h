/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TPPageMaster;

@interface TPHeaderFooterFragmentEnumerator : NSEnumerator {
    int _fragmentIndex;
    int _headerFooterType;
    TPPageMaster *_pageMaster;
}

@property int fragmentIndex;
@property int headerFooterType;
@property(retain) TPPageMaster * pageMaster;

- (void)dealloc;
- (int)fragmentIndex;
- (int)headerFooterType;
- (id)initWithPageMaster:(id)arg1;
- (id)nextObject;
- (id)pageMaster;
- (void)setFragmentIndex:(int)arg1;
- (void)setHeaderFooterType:(int)arg1;
- (void)setPageMaster:(id)arg1;

@end
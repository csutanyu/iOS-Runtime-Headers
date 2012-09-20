/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMNode, NSObject<WebOpenPanelResultListener>, UIFallbackCompatibleViewController, UIActionSheet, UIImagePickerController, UIWebRotatingNodePopover, UIViewController, <UIWebFileUploadPanelDelegate>, UIWebDocumentView, NSArray;

@interface UIWebFileUploadPanel : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIWebRotatingNodePopoverDelegate> {
    UIActionSheet *_selectPickerTypeSheet;
    UIImagePickerController *_imagePicker;
    UIFallbackCompatibleViewController *_rootViewController;
    UIViewController *_fallbackViewController;
    UIWebRotatingNodePopover *_fileUploadPopover;
    BOOL _documentViewPresentedViewController;
    struct CGPoint { 
        float x; 
        float y; 
    } _interactionPoint;
    DOMNode *_interactionElement;
    NSArray *_mimeTypes;
    UIWebDocumentView *_documentView;
    NSObject<WebOpenPanelResultListener> *_resultListener;
    BOOL _allowMultipleFiles;
    BOOL _isUsingCamera;
    <UIWebFileUploadPanelDelegate> *_delegate;
}

@property <UIWebFileUploadPanelDelegate> * delegate;
@property(copy) NSArray * mimeTypes;
@property UIWebDocumentView * documentView;
@property(retain) NSObject<WebOpenPanelResultListener> * resultListener;
@property BOOL allowMultipleFiles;
@property BOOL isUsingCamera;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (BOOL)isUsingCamera;
- (BOOL)allowMultipleFiles;
- (id)resultListener;
- (void)_chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (void)_chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (id)_thumbnailSizedImageForImage:(id)arg1;
- (BOOL)_willMultipleSelectionDelegateBeCalled;
- (void)_filePathFromMediaInfo:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (void)_temporaryFilePathForOriginalImage:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (id)_displayStringForPhotos:(unsigned int)arg1 videos:(unsigned int)arg2;
- (float)_compressionQuality;
- (id)_filePathForMediaURL:(id)arg1;
- (void)_dismissDisplayAnimated:(BOOL)arg1;
- (void)_showMediaSourceSelectionSheet;
- (void)_showPhotoPickerWithSourceType:(int)arg1;
- (void)_cancel;
- (void)_ensureInteractionElement;
- (id)_photoPickerWithSourceType:(int)arg1;
- (id)_mediaTypesForPickerSourceType:(int)arg1;
- (BOOL)_string:(id)arg1 hasPrefixCaseInsensitive:(id)arg2;
- (id)mimeTypes;
- (void)_dispatchDidDismiss;
- (void)setIsUsingCamera:(BOOL)arg1;
- (void)setAllowMultipleFiles:(BOOL)arg1;
- (void)setResultListener:(id)arg1;
- (void)setMimeTypes:(id)arg1;
- (void)setDocumentView:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)present;
- (id)initWithResultListener:(id)arg1 mimeTypes:(id)arg2 allowMultipleFiles:(BOOL)arg3 documentView:(id)arg4;
- (void)dismiss;
- (void)popoverWasDismissed:(id)arg1;
- (id)documentView;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;

@end
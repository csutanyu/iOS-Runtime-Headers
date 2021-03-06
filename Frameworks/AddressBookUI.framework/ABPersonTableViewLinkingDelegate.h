/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonTableViewDataSource, ABPersonViewControllerHelper, NSArray, NSMutableArray;

@interface ABPersonTableViewLinkingDelegate : NSObject <ABPersonLinkingUIDelegate> {
    BOOL _appearsInLinkingPeoplePicker;
    int _currentIndexInLinkedInfos;
    ABPersonTableViewDataSource *_dataSource;
    BOOL _hasLinkChanges;
    ABPersonViewControllerHelper *_helper;
    BOOL _ignoresReloadLinkedInfos;
    NSMutableArray *_linkedInfos;
    BOOL _shouldAllowLinkingAnotherContact;
    BOOL _shouldShowLinkingUIOnCard;
    BOOL _showsLinkedPeople;
    BOOL _updateShouldAllowLinkingAnotherContact;
}

@property BOOL appearsInLinkingPeoplePicker;
@property ABPersonTableViewDataSource * dataSource;
@property(readonly) BOOL hasLinkChanges;
@property(readonly) ABPersonViewControllerHelper * helper;
@property(readonly) NSArray * linkedInfos;
@property BOOL shouldShowLinkedPeople;
@property BOOL shouldShowLinkingUIOnCard;
@property BOOL updateShouldAllowLinkingAnotherContact;

- (void)_finalizeLinkChanges;
- (id)allNonUnifiedPeople;
- (BOOL)appearsInLinkingPeoplePicker;
- (BOOL)canUnlinkCardAtRow:(int)arg1;
- (id)dataSource;
- (void)dealloc;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2;
- (BOOL)hasLinkChanges;
- (id)helper;
- (int)indexOfLinkedInfoAtRow:(int)arg1;
- (id)initWithHelper:(id)arg1;
- (BOOL)isLinkedCard;
- (id)linkedInfoAtRow:(int)arg1;
- (id)linkedInfos;
- (BOOL)manuallyLinkPerson:(id)arg1;
- (BOOL)manuallyUnlinkCardAtRow:(int)arg1;
- (id)newLinkedInfoForPerson:(id)arg1;
- (id)newPeoplePickerForLinking;
- (id)newPersonViewControllerForLinkedCardAtRow:(int)arg1;
- (int)numberOfLinkedCardRows;
- (id)personNameForCardAtRow:(int)arg1;
- (BOOL)reloadLinkedInfos;
- (void)reloadLinkingUI;
- (void)setAppearsInLinkingPeoplePicker:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setShouldShowLinkedPeople:(BOOL)arg1;
- (void)setShouldShowLinkingUIOnCard:(BOOL)arg1;
- (void)setUpdateShouldAllowLinkingAnotherContact:(BOOL)arg1;
- (BOOL)shouldAllowLinkingAnotherContact;
- (BOOL)shouldAllowLinkingPersonWithRecordID:(int)arg1;
- (BOOL)shouldIncludeLinkingUISectionWhenEditing:(BOOL)arg1;
- (BOOL)shouldShowLinkedPeople;
- (BOOL)shouldShowLinkingUIOnCard;
- (id)sourceNameForCardAtRow:(int)arg1;
- (id)sourceNameForCurrentCard;
- (BOOL)updateShouldAllowLinkingAnotherContact;

@end

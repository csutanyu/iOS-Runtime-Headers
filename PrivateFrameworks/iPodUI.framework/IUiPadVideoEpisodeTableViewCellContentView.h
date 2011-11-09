/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIImageView, NSArray, NSString, UIView, MPButton;

@interface IUiPadVideoEpisodeTableViewCellContentView : IUiPadVideoPartTableViewCellContentView  {
    NSString *_expirationText;
    struct CGSize { 
        float width; 
        float height; 
    } _expirationTextSize;
    BOOL _expiresSoon;
    NSString *_title;
    NSString *_summary;
    NSArray *_supertitles;
    MPButton *_moreButton;
    id _moreButtonTarget;
    SEL _moreButtonAction;
    BOOL _expanded;
    int _unplayedState;
    UIImageView *_unplayedIndicator;
    UIView *_disabledView;
}

@property BOOL expanded;
@property SEL moreButtonAction;
@property id moreButtonTarget;
@property(retain) NSString * title;
@property(retain) NSString * summary;
@property(retain) NSArray * supertitles;
@property int unplayedState;
@property BOOL expiresSoon;
@property(retain) NSString * expirationText;


- (id)summary;
- (void)setSummary:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (BOOL)expanded;
- (id)title;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)unplayedState;
- (id)expirationText;
- (void)setExpiresSoon:(BOOL)arg1;
- (BOOL)expiresSoon;
- (void)setExpirationText:(id)arg1;
- (id)supertitles;
- (void)setHighlightedOrSelected:(BOOL)arg1;
- (struct __CFAttributedString { }*)_newSummaryAttributedString:(id)arg1 withLineBreakMode:(unsigned char)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 expanded:(BOOL)arg2;
- (void)_drawText;
- (void)setSupertitles:(id)arg1;
- (SEL)moreButtonAction;
- (id)moreButtonTarget;
- (void)setUnplayedState:(int)arg1;
- (void)setMoreButtonTarget:(id)arg1;
- (void)setMoreButtonAction:(SEL)arg1;
- (void)_moreButtonSelected:(id)arg1;
- (void)dealloc;

@end
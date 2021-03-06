//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBCollectionAbstractCell.h"

#import "FBPopoverControllerDelegate-Protocol.h"

@class FBCollectionProfileFieldSection, FBNetworkImageView, FBPopoverActionSheet, FBRichTextView, FBUserSession, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIButton, UILabel, UIView;
@protocol FBCollectionTextListsCellDelegate;

@interface FBCollectionTextListsCell : FBCollectionAbstractCell <FBPopoverControllerDelegate>
{
    FBUserSession *_session;
    FBRichTextView *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_expandArrow;
    FBPopoverActionSheet *_popoverActionSheet;
    NSArray *_menu;
    NSMutableDictionary *_tags;
    UIView *_bottomBorder;
    _Bool _isViewingSelf;
    NSMutableArray *_subtitleLabels;
    NSMutableArray *_bottomBorders;
    FBNetworkImageView *_icon;
    id <FBCollectionTextListsCellDelegate> _delegate;
    FBCollectionProfileFieldSection *_collectionItem;
    NSIndexPath *_currentIndex;
}

+ (double)desiredHeightForCollectionItem:(id)arg1;
+ (double)availableWidth;
+ (double)bottomBorderHeight;
+ (double)calculateHeightForCollectionItem:(id)arg1 shouldUpdateCell:(_Bool)arg2 withBottomBorders:(id)arg3 bottomBorder:(id)arg4 subtitleLabels:(id)arg5 subtitleLabel:(id)arg6 tags:(id)arg7 selfCell:(id)arg8;
@property(retain, nonatomic) NSIndexPath *currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) FBCollectionProfileFieldSection *collectionItem; // @synthesize collectionItem=_collectionItem;
@property(nonatomic) __weak id <FBCollectionTextListsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBNetworkImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)_tapAction;
- (void)_didTapMenuOption:(id)arg1;
- (void)didTapArrow;
- (void)_textTapped:(id)arg1;
- (id)updateInfo;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1 collectionItem:(id)arg2 session:(id)arg3 isViewingSelf:(_Bool)arg4 showCustomBorder:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


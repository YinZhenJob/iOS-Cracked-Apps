//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "AuthorityViewControllerDelegate.h"
#import "FriendDataManagerDelegate.h"
#import "SSEditUserProfileViewControllerDelegate.h"

@class ArticleAvatarView, ArticleFriend, ArticleUserIntroActionButton, FriendDataManager, NSString, SSThemedImageView, SSThemedLabel, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIPopoverController;

@interface ArticleUserIntroView : SSViewBase <SSEditUserProfileViewControllerDelegate, AuthorityViewControllerDelegate, FriendDataManagerDelegate>
{
    _Bool _fromWidget;
    _Bool _isFlip;
    NSString *_from;
    ArticleAvatarView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    ArticleFriend *_friend;
    UIImageView *_bgView;
    ArticleUserIntroActionButton *_likeButton;
    ArticleUserIntroActionButton *_followedButton;
    ArticleUserIntroActionButton *_followingButton;
    UIButton *_relationButton;
    UIActivityIndicatorView *_indicator;
    FriendDataManager *_friendManager;
    SSThemedLabel *_verifyAgencyLabel;
    SSThemedLabel *_verifyContentLabel;
    SSThemedLabel *_commonFriendsLabel;
    SSThemedImageView *_platformImageView;
    SSThemedLabel *_platformScreenNameLabel;
    UIPopoverController *_padPopoverController;
}

@property(retain, nonatomic) UIPopoverController *padPopoverController; // @synthesize padPopoverController=_padPopoverController;
@property(retain, nonatomic) SSThemedLabel *platformScreenNameLabel; // @synthesize platformScreenNameLabel=_platformScreenNameLabel;
@property(retain, nonatomic) SSThemedImageView *platformImageView; // @synthesize platformImageView=_platformImageView;
@property(retain, nonatomic) SSThemedLabel *commonFriendsLabel; // @synthesize commonFriendsLabel=_commonFriendsLabel;
@property(retain, nonatomic) SSThemedLabel *verifyContentLabel; // @synthesize verifyContentLabel=_verifyContentLabel;
@property(retain, nonatomic) SSThemedLabel *verifyAgencyLabel; // @synthesize verifyAgencyLabel=_verifyAgencyLabel;
@property(nonatomic) _Bool isFlip; // @synthesize isFlip=_isFlip;
@property(retain, nonatomic) FriendDataManager *friendManager; // @synthesize friendManager=_friendManager;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIButton *relationButton; // @synthesize relationButton=_relationButton;
@property(retain, nonatomic) ArticleUserIntroActionButton *followingButton; // @synthesize followingButton=_followingButton;
@property(retain, nonatomic) ArticleUserIntroActionButton *followedButton; // @synthesize followedButton=_followedButton;
@property(retain, nonatomic) ArticleUserIntroActionButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) ArticleFriend *friend; // @synthesize friend=_friend;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) ArticleAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) _Bool fromWidget; // @synthesize fromWidget=_fromWidget;
- (void).cxx_destruct;
- (void)friendDataManager:(id)arg1 finishActionType:(int)arg2 error:(id)arg3 result:(id)arg4;
- (void)friendDataManager:(id)arg1 gotFollowersCount:(long long)arg2 followingCount:(long long)arg3 newFriendCount:(long long)arg4 pgcLikeCount:(long long)arg5 error:(id)arg6;
- (void)authorityViewControllerDoneUserInfo:(id)arg1;
- (void)dismissForDelay:(id)arg1;
- (void)editUserProfileController:(id)arg1 goBack:(id)arg2;
- (_Bool)hideDescriptionCellInEditUserProfileController:(id)arg1;
- (void)showEditUserView:(id)arg1;
- (void)refreshPlatformImage;
- (void)refreshUI;
- (void)countButtonClicked:(id)arg1;
- (void)refreshArticleFriend:(id)arg1;
- (void)refreshCountButtons;
- (void)refreshRelationButton;
- (void)stopIndicatorAnimation;
- (void)startIndicatorAnimation;
- (void)refreshFrame;
- (struct CGRect)frameForAvatarView;
- (struct CGRect)frameForDescLabel;
- (struct CGRect)frameForNameLabel;
- (void)themeChanged:(id)arg1;
- (void)refreshRelationButtonUI;
- (_Bool)needShowLikeButton;
- (void)setLikeCount:(long long)arg1 followedCount:(long long)arg2 followingCount:(long long)arg3;
- (void)relationButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isFlipView:(_Bool)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


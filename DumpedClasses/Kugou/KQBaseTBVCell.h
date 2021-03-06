//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "KuQunPlayStatusChangeDelegate.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, KGThemeLine, KQItemEntity, NSString, UIButton, UIImageView, UILabel, UIView;

@interface KQBaseTBVCell : UITableViewCell <KuQunPlayStatusChangeDelegate>
{
    _Bool _isRecentLiveCell;
    _Bool _isLastCell;
    _Bool _isGrayImage;
    UIImageView *_coverShadowImgView;
    UIButton *_avatarBtn;
    KGThemeButton *_lockedKQBtnBg;
    UIImageView *_lockedIconImageV;
    KGThemeLabel *_titleLab;
    KGThemeLabel *_songNameLab;
    KGThemeImageView *_introAudioImageV;
    KGThemeLabel *_introAudioLabel;
    KGThemeButton *_introAudioBtn;
    KGThemeButton *_introMaxButton;
    UIView *_accountNumV;
    KGThemeLabel *_accountNumLab;
    KGThemeLine *_bottonLine;
    double _marginForBottonLine;
    KQItemEntity *_item_model;
    NSString *_sectionName;
    long long _cellAccessoryTp;
    long long _playStatus;
    long long _introPlayStatus;
    KGThemeImageView *_accessoryImageV;
    KGThemeLabel *_introLab;
    KGThemeLabel *_freezingLabel;
    KGThemeLabel *_blackHouseLabel;
    UILabel *_leftCategoryLabel;
    UILabel *_middleCategoryLabel;
    UILabel *_rightCategoryLabel;
    UILabel *_radioLiveLabel;
    UIImageView *_radioLiveImageView;
    UIImageView *_vipGroupImageView;
    UIImageView *_fullCapacityImageView;
    id <KGKQCustomerTBVCellDelegate> _delegate;
}

@property(nonatomic) __weak id <KGKQCustomerTBVCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *fullCapacityImageView; // @synthesize fullCapacityImageView=_fullCapacityImageView;
@property(nonatomic) _Bool isGrayImage; // @synthesize isGrayImage=_isGrayImage;
@property(retain, nonatomic) UIImageView *vipGroupImageView; // @synthesize vipGroupImageView=_vipGroupImageView;
@property(retain, nonatomic) UIImageView *radioLiveImageView; // @synthesize radioLiveImageView=_radioLiveImageView;
@property(retain, nonatomic) UILabel *radioLiveLabel; // @synthesize radioLiveLabel=_radioLiveLabel;
@property(retain, nonatomic) UILabel *rightCategoryLabel; // @synthesize rightCategoryLabel=_rightCategoryLabel;
@property(retain, nonatomic) UILabel *middleCategoryLabel; // @synthesize middleCategoryLabel=_middleCategoryLabel;
@property(retain, nonatomic) UILabel *leftCategoryLabel; // @synthesize leftCategoryLabel=_leftCategoryLabel;
@property(retain, nonatomic) KGThemeLabel *blackHouseLabel; // @synthesize blackHouseLabel=_blackHouseLabel;
@property(retain, nonatomic) KGThemeLabel *freezingLabel; // @synthesize freezingLabel=_freezingLabel;
@property(retain, nonatomic) KGThemeLabel *introLab; // @synthesize introLab=_introLab;
@property(retain, nonatomic) KGThemeImageView *accessoryImageV; // @synthesize accessoryImageV=_accessoryImageV;
@property(nonatomic) long long introPlayStatus; // @synthesize introPlayStatus=_introPlayStatus;
@property(nonatomic) long long playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) long long cellAccessoryTp; // @synthesize cellAccessoryTp=_cellAccessoryTp;
@property(copy, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(retain, nonatomic) KQItemEntity *item_model; // @synthesize item_model=_item_model;
@property(nonatomic) double marginForBottonLine; // @synthesize marginForBottonLine=_marginForBottonLine;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(retain, nonatomic) KGThemeLine *bottonLine; // @synthesize bottonLine=_bottonLine;
@property(retain, nonatomic) KGThemeLabel *accountNumLab; // @synthesize accountNumLab=_accountNumLab;
@property(retain, nonatomic) UIView *accountNumV; // @synthesize accountNumV=_accountNumV;
@property(retain, nonatomic) KGThemeButton *introMaxButton; // @synthesize introMaxButton=_introMaxButton;
@property(retain, nonatomic) KGThemeButton *introAudioBtn; // @synthesize introAudioBtn=_introAudioBtn;
@property(retain, nonatomic) KGThemeLabel *introAudioLabel; // @synthesize introAudioLabel=_introAudioLabel;
@property(retain, nonatomic) KGThemeImageView *introAudioImageV; // @synthesize introAudioImageV=_introAudioImageV;
@property(retain, nonatomic) KGThemeLabel *songNameLab; // @synthesize songNameLab=_songNameLab;
@property(retain, nonatomic) KGThemeLabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *lockedIconImageV; // @synthesize lockedIconImageV=_lockedIconImageV;
@property(retain, nonatomic) KGThemeButton *lockedKQBtnBg; // @synthesize lockedKQBtnBg=_lockedKQBtnBg;
@property(retain, nonatomic) UIButton *avatarBtn; // @synthesize avatarBtn=_avatarBtn;
@property(retain, nonatomic) UIImageView *coverShadowImgView; // @synthesize coverShadowImgView=_coverShadowImgView;
@property(nonatomic) _Bool isRecentLiveCell; // @synthesize isRecentLiveCell=_isRecentLiveCell;
- (void).cxx_destruct;
- (void)introMaxButtonTouchDownEvent:(id)arg1;
- (void)introMaxButtonClicked:(id)arg1;
- (void)introButtonTouchDownEvent:(id)arg1;
- (void)playIntro:(id)arg1;
- (void)clickAvatar;
- (void)VoiceMessageStoped:(id)arg1;
- (void)voiceMessageStarted:(id)arg1;
- (void)groupPaused:(_Bool)arg1;
- (void)kqSongsStoped;
- (void)playSongChanged:(id)arg1 andGroupID:(int)arg2 andPlayedSongs:(id)arg3;
- (id)imageName:(id)arg1 withColorType:(long long)arg2;
- (void)backgroundConfigInCell;
- (void)layoutSubviews;
- (void)contentConfig:(id)arg1;
- (void)playStatusConfi;
- (void)avatarConfig;
- (id)coverShadowImage;
- (void)createViewInCell;
- (void)onChangeTheme:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)removeNotifi;
- (void)registNotifi;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


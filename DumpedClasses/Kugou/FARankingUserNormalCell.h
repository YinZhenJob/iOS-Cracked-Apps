//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FABaseTableStyleCell.h"

#import "FARankingUserCellProtocol.h"

@class FAThemeLabel, FAThemeView, NSString, UIImageView, UILabel, UIView;

@interface FARankingUserNormalCell : FABaseTableStyleCell <FARankingUserCellProtocol>
{
    id <FARankingUserCellDelegate> delegate;
    UIImageView *_rankNumImgView;
    FAThemeLabel *_rankNumLabel;
    UIImageView *_headerImgView;
    UIImageView *_vipIconImgView;
    UIView *_midBgView;
    FAThemeLabel *_nameLabel;
    UIImageView *_starLevelView;
    UIImageView *_liveTypeIconImgView;
    UILabel *_liveTypeLabel;
    UIView *_tailBgView;
    UIImageView *_numIconImgView;
    UILabel *_numLabel;
    FAThemeView *_bottomLineView;
}

+ (double)cellHeight;
@property(retain, nonatomic) FAThemeView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UIImageView *numIconImgView; // @synthesize numIconImgView=_numIconImgView;
@property(retain, nonatomic) UIView *tailBgView; // @synthesize tailBgView=_tailBgView;
@property(retain, nonatomic) UILabel *liveTypeLabel; // @synthesize liveTypeLabel=_liveTypeLabel;
@property(retain, nonatomic) UIImageView *liveTypeIconImgView; // @synthesize liveTypeIconImgView=_liveTypeIconImgView;
@property(retain, nonatomic) UIImageView *starLevelView; // @synthesize starLevelView=_starLevelView;
@property(retain, nonatomic) FAThemeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *midBgView; // @synthesize midBgView=_midBgView;
@property(retain, nonatomic) UIImageView *vipIconImgView; // @synthesize vipIconImgView=_vipIconImgView;
@property(retain, nonatomic) UIImageView *headerImgView; // @synthesize headerImgView=_headerImgView;
@property(retain, nonatomic) FAThemeLabel *rankNumLabel; // @synthesize rankNumLabel=_rankNumLabel;
@property(retain, nonatomic) UIImageView *rankNumImgView; // @synthesize rankNumImgView=_rankNumImgView;
@property(nonatomic) __weak id <FARankingUserCellDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateViewWithIndex:(long long)arg1;
- (void)fillWithData:(id)arg1;
- (void)configSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImage, UIImageView, UILabel;

@interface FAMobileLiveHomeListCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_topicLabel;
    UIImageView *_topicRecommendImgView;
    UILabel *_nickNameLbl;
    UIImageView *_vipImgView;
    UILabel *_viewerNumLbl;
    UIImageView *_viewerIconView;
    double _greenDotLeft;
    UIImageView *_headerView;
    UILabel *_locationLbl;
    UIImageView *_locationIconView;
    UIImage *_placeHoldImg;
}

@property(retain, nonatomic) UIImage *placeHoldImg; // @synthesize placeHoldImg=_placeHoldImg;
@property(retain, nonatomic) UIImageView *locationIconView; // @synthesize locationIconView=_locationIconView;
@property(retain, nonatomic) UILabel *locationLbl; // @synthesize locationLbl=_locationLbl;
@property(retain, nonatomic) UIImageView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double greenDotLeft; // @synthesize greenDotLeft=_greenDotLeft;
@property(retain, nonatomic) UIImageView *viewerIconView; // @synthesize viewerIconView=_viewerIconView;
@property(retain, nonatomic) UILabel *viewerNumLbl; // @synthesize viewerNumLbl=_viewerNumLbl;
@property(retain, nonatomic) UIImageView *vipImgView; // @synthesize vipImgView=_vipImgView;
@property(retain, nonatomic) UILabel *nickNameLbl; // @synthesize nickNameLbl=_nickNameLbl;
@property(retain, nonatomic) UIImageView *topicRecommendImgView; // @synthesize topicRecommendImgView=_topicRecommendImgView;
@property(retain, nonatomic) UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)updateViewWithInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

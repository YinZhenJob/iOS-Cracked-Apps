//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, XYPHStoreGoodsCountDownView;

@interface XYPHStoreGoodsCell : UICollectionViewCell
{
    UIImageView *_goodsImageView;
    UIImageView *_soldoutCover;
    UIImageView *_previewCover;
    UILabel *_goodsTitleLabel;
    UILabel *_goodsDescLabel;
    UILabel *_goodsPriceLabel;
    UILabel *_goodsPromotionLabel;
    UILabel *_goodsTipsLabel;
    XYPHStoreGoodsCountDownView *_countdownView;
}

@property(retain, nonatomic) XYPHStoreGoodsCountDownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) UILabel *goodsTipsLabel; // @synthesize goodsTipsLabel=_goodsTipsLabel;
@property(retain, nonatomic) UILabel *goodsPromotionLabel; // @synthesize goodsPromotionLabel=_goodsPromotionLabel;
@property(retain, nonatomic) UILabel *goodsPriceLabel; // @synthesize goodsPriceLabel=_goodsPriceLabel;
@property(retain, nonatomic) UILabel *goodsDescLabel; // @synthesize goodsDescLabel=_goodsDescLabel;
@property(retain, nonatomic) UILabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) UIImageView *previewCover; // @synthesize previewCover=_previewCover;
@property(retain, nonatomic) UIImageView *soldoutCover; // @synthesize soldoutCover=_soldoutCover;
@property(retain, nonatomic) UIImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end


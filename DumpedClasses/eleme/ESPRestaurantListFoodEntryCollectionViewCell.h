//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ESPRestaurantListCommonEntryShopFood, UIButton, UIImageView, UILabel;

@interface ESPRestaurantListFoodEntryCollectionViewCell : UICollectionViewCell
{
    ESPRestaurantListCommonEntryShopFood *_data;
    UIImageView *_imageView;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    UIButton *_restaurantActivityLabel;
    UILabel *_satisfyLabel;
}

@property(retain, nonatomic) UILabel *satisfyLabel; // @synthesize satisfyLabel=_satisfyLabel;
@property(retain, nonatomic) UIButton *restaurantActivityLabel; // @synthesize restaurantActivityLabel=_restaurantActivityLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) ESPRestaurantListCommonEntryShopFood *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEOperationCell.h"

@class TROperationCellCarModel, UIButton, UIImageView, UILabel;

@interface TROperationCellCar : ONEOperationCell
{
    TROperationCellCarModel *_model;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIImageView *_iconImageView;
    UILabel *_callForOtherNameLabel;
    UILabel *_callForOtherPhoneNumberLabel;
    UILabel *_tipLabel;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *callForOtherPhoneNumberLabel; // @synthesize callForOtherPhoneNumberLabel=_callForOtherPhoneNumberLabel;
@property(retain, nonatomic) UILabel *callForOtherNameLabel; // @synthesize callForOtherNameLabel=_callForOtherNameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) TROperationCellCarModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)updateCallOtherData;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (void)layoutSubviews;
- (void)setDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


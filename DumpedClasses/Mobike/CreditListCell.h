//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface CreditListCell : UITableViewCell
{
    _Bool _isSelect;
    UIImageView *_icon;
    UILabel *_creditNuber;
    UIImageView *_selectState;
    UILabel *_addNewCard;
    unsigned long long _type;
    UIImageView *_dot1;
    UIImageView *_dot2;
    UIImageView *_dot3;
}

@property(retain, nonatomic) UIImageView *dot3; // @synthesize dot3=_dot3;
@property(retain, nonatomic) UIImageView *dot2; // @synthesize dot2=_dot2;
@property(retain, nonatomic) UIImageView *dot1; // @synthesize dot1=_dot1;
@property _Bool isSelect; // @synthesize isSelect=_isSelect;
@property unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *addNewCard; // @synthesize addNewCard=_addNewCard;
@property(retain, nonatomic) UIImageView *selectState; // @synthesize selectState=_selectState;
@property(retain, nonatomic) UILabel *creditNuber; // @synthesize creditNuber=_creditNuber;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end


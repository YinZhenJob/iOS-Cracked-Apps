//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ONEUserCellModel, UIImageView, UILabel;

@interface ONEUserCenterTableViewCell : UITableViewCell
{
    UILabel *_titleLb;
    UILabel *_contentLb;
    UIImageView *_userIconImageView;
    UIImageView *_arrowImageView;
    ONEUserCellModel *_userCenterModel;
}

@property(retain, nonatomic, setter=setUserCenterModel:) ONEUserCellModel *userCenterModel; // @synthesize userCenterModel=_userCenterModel;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)initWithSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

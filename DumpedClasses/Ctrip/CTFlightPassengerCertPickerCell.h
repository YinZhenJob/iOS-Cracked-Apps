//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class UIImageView, UILabel;

@interface CTFlightPassengerCertPickerCell : CTCustomeGroupTableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_selectTagImageView;
}

+ (double)setupCell:(id)arg1 withNormalTitle:(id)arg2 selected:(_Bool)arg3;
+ (double)setupCell:(id)arg1 withCertificateTitle:(id)arg2 selected:(_Bool)arg3;
@property(retain, nonatomic) UIImageView *selectTagImageView; // @synthesize selectTagImageView=_selectTagImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

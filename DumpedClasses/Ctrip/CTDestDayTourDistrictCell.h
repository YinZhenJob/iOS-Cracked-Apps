//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface CTDestDayTourDistrictCell : UITableViewCell
{
    UILabel *_districtLabel;
    UIImageView *_selectedImageView;
}

@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UILabel *districtLabel; // @synthesize districtLabel=_districtLabel;
- (void).cxx_destruct;
- (void)initContraints;
- (void)fillDistrictCell:(id)arg1 isSelected:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class UIImageView, UILabel, UIView;

@interface NMPrivateCloudHeaderCell : NMCommonCell
{
    UILabel *_label;
    UIImageView *_progressBgImageView;
    UIView *_progressView;
    UILabel *_percentLabel;
    double _percent;
}

+ (double)height;
- (void).cxx_destruct;
- (void)setPercent:(double)arg1 size:(id)arg2 maxSize:(id)arg3;
- (void)layoutSubviews;
- (void)setNightColor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


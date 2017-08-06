//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

@class UIImageView, UILabel;

@interface FALCRichLevelNoDataView : FAView
{
    UIImageView *_centerImageView;
    UILabel *_tipLabel;
    UILabel *_enterDetailLabel;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UILabel *enterDetailLabel; // @synthesize enterDetailLabel=_enterDetailLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *centerImageView; // @synthesize centerImageView=_centerImageView;
- (void).cxx_destruct;
- (void)updateRichLevelNoDataViewTip:(id)arg1;
- (void)enterDetailPageHandler:(id)arg1;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1 andStyle:(long long)arg2;

@end

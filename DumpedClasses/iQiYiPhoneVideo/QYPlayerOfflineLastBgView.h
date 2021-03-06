//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYTouchButton, UIButton, UILabel;

@interface QYPlayerOfflineLastBgView : UIView
{
    float _titleHeight;
    CDUnknownBlockType _backClickBc;
    CDUnknownBlockType _playClickBc;
    QYTouchButton *_backBtn;
    UILabel *_tipLab;
    UIButton *_playImgBtn;
}

@property(nonatomic) float titleHeight; // @synthesize titleHeight=_titleHeight;
@property(retain, nonatomic) UIButton *playImgBtn; // @synthesize playImgBtn=_playImgBtn;
@property(retain, nonatomic) UILabel *tipLab; // @synthesize tipLab=_tipLab;
@property(retain, nonatomic) QYTouchButton *backBtn; // @synthesize backBtn=_backBtn;
@property(copy, nonatomic) CDUnknownBlockType playClickBc; // @synthesize playClickBc=_playClickBc;
@property(copy, nonatomic) CDUnknownBlockType backClickBc; // @synthesize backClickBc=_backClickBc;
- (void).cxx_destruct;
- (void)playPlayer:(id)arg1;
- (void)backPlayer:(id)arg1;
- (float)heightForString:(id)arg1 fontSize:(float)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


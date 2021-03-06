//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DRCOrderInfoSettingViewModel, UILabel;

@interface DRCProductOrderSettingInfoView : UIView
{
    DRCOrderInfoSettingViewModel *_infoSettingModel;
    UILabel *_getCarAddrLabel;
    UILabel *_returnCarAddrLabel;
    UILabel *_getCarTimeLabel;
    UILabel *_returnCarTimeLabel;
    CDUnknownBlockType _changeOrderInfoSettingBlock;
}

@property(copy, nonatomic) CDUnknownBlockType changeOrderInfoSettingBlock; // @synthesize changeOrderInfoSettingBlock=_changeOrderInfoSettingBlock;
@property(retain, nonatomic) UILabel *returnCarTimeLabel; // @synthesize returnCarTimeLabel=_returnCarTimeLabel;
@property(retain, nonatomic) UILabel *getCarTimeLabel; // @synthesize getCarTimeLabel=_getCarTimeLabel;
@property(retain, nonatomic) UILabel *returnCarAddrLabel; // @synthesize returnCarAddrLabel=_returnCarAddrLabel;
@property(retain, nonatomic) UILabel *getCarAddrLabel; // @synthesize getCarAddrLabel=_getCarAddrLabel;
@property(retain, nonatomic) DRCOrderInfoSettingViewModel *infoSettingModel; // @synthesize infoSettingModel=_infoSettingModel;
- (void).cxx_destruct;
- (void)changeReturnCarAddrTap;
- (void)changeGetCarAddrTap;
- (void)changeTimeTap;
- (void)updateView;
- (void)runChangeOrderInfoSettingBlock;
- (void)willRunChangeOrderInfoSettingBlock;
- (void)addRac;
- (id)initWithFrame:(struct CGRect)arg1 changeOrderInfoSettingBlock:(CDUnknownBlockType)arg2;

@end


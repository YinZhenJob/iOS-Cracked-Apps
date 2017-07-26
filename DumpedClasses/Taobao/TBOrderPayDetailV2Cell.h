//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOrderBasicCell.h"

@class NSMutableArray, UIView;

@interface TBOrderPayDetailV2Cell : TBOrderBasicCell
{
    NSMutableArray *_orderPriceDetailViews;
    NSMutableArray *_payDetailViews;
    UIView *_payDetailBackgroundView;
    UIView *_payDetailSepLineView;
    UIView *_payDetailSepLineUpwardArrowView;
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3 controller:(id)arg4;
@property(retain, nonatomic) UIView *payDetailSepLineUpwardArrowView; // @synthesize payDetailSepLineUpwardArrowView=_payDetailSepLineUpwardArrowView;
@property(retain, nonatomic) UIView *payDetailSepLineView; // @synthesize payDetailSepLineView=_payDetailSepLineView;
@property(retain, nonatomic) UIView *payDetailBackgroundView; // @synthesize payDetailBackgroundView=_payDetailBackgroundView;
@property(retain, nonatomic) NSMutableArray *payDetailViews; // @synthesize payDetailViews=_payDetailViews;
@property(retain, nonatomic) NSMutableArray *orderPriceDetailViews; // @synthesize orderPriceDetailViews=_orderPriceDetailViews;
- (void).cxx_destruct;
- (void)bindData:(id)arg1 controller:(id)arg2 styleKitContext:(id)arg3;
- (void)layoutSubviews;
- (void)viewLayout;

@end

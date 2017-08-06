//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSheetItemView.h"

@class UIButton, UIImageView, UIView;

@interface SPayButtonView : SSheetItemView
{
    id <SPayButtonViewDelegate> _delegate;
    UIButton *_payButton;
    UIView *_backgroundView;
    UIImageView *_animatedImageView;
}

+ (double)height;
@property(retain, nonatomic) UIImageView *animatedImageView; // @synthesize animatedImageView=_animatedImageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *payButton; // @synthesize payButton=_payButton;
@property(nonatomic) __weak id <SPayButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showLoading:(_Bool)arg1;
- (void)setEnable:(_Bool)arg1 withDisableType:(_Bool)arg2;
- (void)setPayButtonTitle:(id)arg1;
- (void)payButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

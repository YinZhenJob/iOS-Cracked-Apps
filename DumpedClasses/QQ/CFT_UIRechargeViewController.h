//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UICustomNaviBarViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CFT_UICustomTextField, CFT_UIGroupStyleView, NSDictionary, NSString, UIButton, UIEnteringView, UIScrollView, UITapGestureRecognizer;

@interface CFT_UIRechargeViewController : CFT_UICustomNaviBarViewController <UITextFieldDelegate, UIScrollViewDelegate, UIAlertViewDelegate>
{
    CFT_UIGroupStyleView *group1;
    CFT_UICustomTextField *moneyField;
    UIButton *nextButton;
    UIButton *_teleCardChargeButton;
    UIScrollView *pScrollView_;
    double per_limit;
    double balance;
    _Bool haveValidCard;
    _Bool isTouchPayOpen;
    UITapGestureRecognizer *singleTouch;
    UIEnteringView *_enteringView;
    NSDictionary *_bankInfo;
    NSString *_inputMoney;
    NSString *_userType;
}

@property(copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *inputMoney; // @synthesize inputMoney=_inputMoney;
@property(retain, nonatomic) NSDictionary *bankInfo; // @synthesize bankInfo=_bankInfo;
- (void)dealloc;
- (void)onRightButtonClick:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, NSTimer, UIButton, UIFont, UIImageView;

@interface CTCallCustomAlertView : UIView
{
    _Bool useMotionEffects;
    _Bool _isVoipCheckSuccess;
    _Bool _isLoading;
    _Bool _isShowLoading;
    _Bool _isClosedByClickButton;
    _Bool _isVoipShowing;
    UIView *parentView;
    UIView *containerView;
    UIView *dialogView;
    CDUnknownBlockType onButtonTouchUpInside;
    id <CTCallCustomAlertViewDelegate> delegate;
    NSArray *buttonTitles;
    UIFont *_buttonTitleFont;
    NSString *_title;
    UIImageView *_indicator;
    UIButton *_refreshImgeView;
    UIButton *_VoipCallButton;
    double _startTime;
    double _buttonWidth;
    NSTimer *_rolateTimer;
}

@property(nonatomic) _Bool isVoipShowing; // @synthesize isVoipShowing=_isVoipShowing;
@property(retain, nonatomic) NSTimer *rolateTimer; // @synthesize rolateTimer=_rolateTimer;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(nonatomic) _Bool isClosedByClickButton; // @synthesize isClosedByClickButton=_isClosedByClickButton;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UIButton *VoipCallButton; // @synthesize VoipCallButton=_VoipCallButton;
@property(retain, nonatomic) UIButton *refreshImgeView; // @synthesize refreshImgeView=_refreshImgeView;
@property(retain, nonatomic) UIImageView *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) _Bool isShowLoading; // @synthesize isShowLoading=_isShowLoading;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isVoipCheckSuccess; // @synthesize isVoipCheckSuccess=_isVoipCheckSuccess;
@property(nonatomic) UIFont *buttonTitleFont; // @synthesize buttonTitleFont=_buttonTitleFont;
@property(nonatomic) _Bool useMotionEffects; // @synthesize useMotionEffects;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles;
@property(nonatomic) id <CTCallCustomAlertViewDelegate> delegate; // @synthesize delegate;
@property(copy) CDUnknownBlockType onButtonTouchUpInside; // @synthesize onButtonTouchUpInside;
@property(retain, nonatomic) UIView *dialogView; // @synthesize dialogView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)dealloc;
- (void)applyMotionEffects;
- (struct CGSize)countScreenSize;
- (struct CGSize)countDialogSize;
- (void)addButtonsToView:(id)arg1;
- (id)createContainerView;
- (void)setVoipButtonEnabled:(_Bool)arg1;
- (void)stopLoadingWithResult:(_Bool)arg1;
- (void)startLoadingWithDuration:(float)arg1;
- (void)startLoading;
- (void)stopAnimation;
- (void)rolateAnimation:(id)arg1;
- (void)startAnimation:(id)arg1;
- (_Bool)isLogin;
- (id)setTitleView;
- (void)setSubView:(id)arg1;
- (void)close;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)customDialogButtonTouchUpInside:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)customDialogButtonTouchUpInside:(id)arg1;
- (void)customDialogButtonTouchDown:(id)arg1;
- (void)customDialogButtonTouchUp:(id)arg1;
- (void)customDialogButtonDragExit:(id)arg1;
- (void)showWithLoading:(_Bool)arg1;
- (void)show;
- (id)initWithTitle:(id)arg1 buttonTitles:(id)arg2 delegate:(id)arg3;
- (id)initCallOtherWithdelegate:(id)arg1;
- (id)initWithdelegate:(id)arg1;
- (id)initWithParentView:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSTimer, UIButton, UIImageView, UINavigationController;

@interface PAAdFakeViewController : UIViewController
{
    _Bool _isOriginNavBarHidden;
    UINavigationController *_navController;
    UIViewController *_originController;
    unsigned long long _state;
    UIImageView *_imageView;
    UIButton *_closeBtn;
    NSTimer *_retryPopTimer;
    unsigned long long _retryPopTimes;
}

@property(nonatomic) unsigned long long retryPopTimes; // @synthesize retryPopTimes=_retryPopTimes;
@property(retain, nonatomic) NSTimer *retryPopTimer; // @synthesize retryPopTimer=_retryPopTimer;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIViewController *originController; // @synthesize originController=_originController;
@property(retain, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
- (void).cxx_destruct;
- (void)popVCToOriginVC;
- (void)pushNewVC:(id)arg1 originVC:(id)arg2;
- (id)getSnapshotImage:(id)arg1;
- (void)onCloseBtnClick:(id)arg1;
- (void)updateImage:(id)arg1;
- (void)resetFakeVC;
- (void)changeViewOrientation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)isSupportRightDragToGoBack;
- (void)handleTitleBar;
- (void)cancelRetryPop;
- (void)checkNavChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)loadView;

@end


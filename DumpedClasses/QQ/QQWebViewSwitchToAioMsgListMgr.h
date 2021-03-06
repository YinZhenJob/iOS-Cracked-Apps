//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSNumber, NSString, NSTimer, NSURL, QQTabBarController, UINavigationController, UIViewController;

@interface QQWebViewSwitchToAioMsgListMgr : NSObject
{
    _Bool _isHideSwitchButton;
    _Bool _isHasHotDot;
    id <QQWebViewSwitchToAioMsgListDelegate> _delegate;
    NSNumber *_isLastWebStateLockLandscape;
    UIViewController *_curViewController;
    unsigned long long _curTabBarIndex;
    unsigned long long _dstTabBarIndex;
    NSURL *_reqUrl;
    NSMutableArray *_viewControllers;
    QQTabBarController *_tabBarController;
    UINavigationController *_curNavigationController;
    UINavigationController *_curTabNavigationController;
    NSTimer *_aioBannerTimer;
    long long _timeoutInterval;
    long long _dismissType;
    NSString *_curUrl;
}

+ (_Bool)isUseSwitchToAioModuleForUrl:(id)arg1;
@property(nonatomic) _Bool isHasHotDot; // @synthesize isHasHotDot=_isHasHotDot;
@property(retain, nonatomic) NSString *curUrl; // @synthesize curUrl=_curUrl;
@property(nonatomic) long long dismissType; // @synthesize dismissType=_dismissType;
@property(nonatomic) long long timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) NSTimer *aioBannerTimer; // @synthesize aioBannerTimer=_aioBannerTimer;
@property(nonatomic) __weak UINavigationController *curTabNavigationController; // @synthesize curTabNavigationController=_curTabNavigationController;
@property(nonatomic) __weak UINavigationController *curNavigationController; // @synthesize curNavigationController=_curNavigationController;
@property(retain, nonatomic) QQTabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) NSURL *reqUrl; // @synthesize reqUrl=_reqUrl;
@property(nonatomic) unsigned long long dstTabBarIndex; // @synthesize dstTabBarIndex=_dstTabBarIndex;
@property(nonatomic) unsigned long long curTabBarIndex; // @synthesize curTabBarIndex=_curTabBarIndex;
@property(nonatomic) __weak UIViewController *curViewController; // @synthesize curViewController=_curViewController;
@property(retain, nonatomic) NSNumber *isLastWebStateLockLandscape; // @synthesize isLastWebStateLockLandscape=_isLastWebStateLockLandscape;
@property(nonatomic) _Bool isHideSwitchButton; // @synthesize isHideSwitchButton=_isHideSwitchButton;
@property(nonatomic) __weak id <QQWebViewSwitchToAioMsgListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateUnReadMsgNum;
- (void)reportAction:(long long)arg1;
- (void)dismissOldMgr:(id)arg1;
- (void)hideHotDotNotificationFun:(id)arg1;
- (void)AioReceiveNewMsgNotificationFun:(id)arg1;
- (void)stopAioBannerTimer;
- (void)timerFireFun:(id)arg1;
- (id)aioSwitchBannerIconName;
- (_Bool)isSwitchModuleValid;
@property(nonatomic) _Bool isHadSwitchToAio; // @dynamic isHadSwitchToAio;
- (void)setShowHotDot:(_Bool)arg1;
- (_Bool)isShowHotDot;
- (void)dismissSwitchToWebViewBanner;
- (_Bool)isShowSwitchQQButton;
- (id)webViewSwitchQQButtonIcon;
- (void)backToQQWebView;
- (void)removeFakeVC;
- (void)switchToAioMsgListWithTitle:(id)arg1 url:(id)arg2 iconName:(id)arg3;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 url:(id)arg2;

@end


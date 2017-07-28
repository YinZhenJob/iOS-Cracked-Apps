//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSURL, UIView, WXSDKInstance;

@interface WXBaseViewController : UIViewController
{
    WXSDKInstance *_instance;
    UIView *_weexView;
    NSURL *_sourceURL;
}

@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) WXSDKInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (void)_removeObservers;
- (void)_addObservers;
- (void)_appStateDidChange:(id)arg1;
- (void)_updateInstanceState:(long long)arg1;
- (void)_renderWithURL:(id)arg1;
- (void)refreshWeex;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithSourceURL:(id)arg1;
- (void)dealloc;

@end

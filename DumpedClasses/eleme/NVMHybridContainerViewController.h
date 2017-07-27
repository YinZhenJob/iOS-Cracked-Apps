//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "NVMHybridContainerViewControllerProtocol.h"

@class NSDictionary, NSString, NVMEAPWeexViewController, NVMSiteInfo, NVMWebViewController, UIColor;

@interface NVMHybridContainerViewController : NVMViewController <NVMHybridContainerViewControllerProtocol>
{
    NSDictionary *_parametersForSiteMap;
    NSString *_defaultWebURLString;
    NSString *_defaultWeexURLString;
    unsigned long long _naviBarStyle;
    UIColor *_naviBarColor;
    NSString *_siteMapKey;
    NVMWebViewController *_webViewController;
    NVMEAPWeexViewController *_weexViewController;
    NVMViewController *_viewController;
    NVMSiteInfo *_siteInfo;
}

@property(retain, nonatomic) NVMSiteInfo *siteInfo; // @synthesize siteInfo=_siteInfo;
@property(retain, nonatomic) NVMViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NVMEAPWeexViewController *weexViewController; // @synthesize weexViewController=_weexViewController;
@property(retain, nonatomic) NVMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(copy, nonatomic) NSString *siteMapKey; // @synthesize siteMapKey=_siteMapKey;
@property(copy, nonatomic) UIColor *naviBarColor; // @synthesize naviBarColor=_naviBarColor;
@property(nonatomic) unsigned long long naviBarStyle; // @synthesize naviBarStyle=_naviBarStyle;
@property(copy, nonatomic) NSString *defaultWeexURLString; // @synthesize defaultWeexURLString=_defaultWeexURLString;
@property(copy, nonatomic) NSString *defaultWebURLString; // @synthesize defaultWebURLString=_defaultWebURLString;
@property(retain, nonatomic) NSDictionary *parametersForSiteMap; // @synthesize parametersForSiteMap=_parametersForSiteMap;
- (void).cxx_destruct;
- (void)fallbackToWeb:(id)arg1;
- (void)fallbackFromCurrentType:(unsigned long long)arg1;
- (id)navBarBackgroundImage;
- (id)navBarAlternativeImage;
- (void)refreshContentIfNeeded;
- (void)loadChildWebViewControllerWithURLString:(id)arg1;
- (void)openHotReloadWithURL:(id)arg1 forController:(id)arg2;
- (void)loadChildWeexViewControllerWithURLString:(id)arg1;
- (void)showErrorWithTip:(id)arg1;
- (void)loadSiteMapInfo;
- (void)loadChildViewControllerViaSitemapInfo;
- (void)viewDidLoad;
- (id)initWithSiteMapKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

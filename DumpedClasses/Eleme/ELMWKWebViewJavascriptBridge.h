//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ELMWebViewJavascriptDelegate.h"
#import "WKNavigationDelegate.h"

@class ELMWebViewJavascriptHelper, NSArray, NSString, WKWebView;

@interface ELMWKWebViewJavascriptBridge : NSObject <ELMWebViewJavascriptDelegate, WKNavigationDelegate>
{
    WKWebView *_webView;
    id _webViewDelegate;
    ELMWebViewJavascriptHelper *_helper;
    NSArray *_jsInjectableHosts;
}

+ (void)setLogMaxLength:(unsigned long long)arg1;
+ (void)enableLogging;
+ (id)bridgeForWebView:(id)arg1 webViewDelegate:(id)arg2 handler:(CDUnknownBlockType)arg3 resourceBundle:(id)arg4;
+ (id)bridgeForWebView:(id)arg1 webViewDelegate:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)bridgeForWebView:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSArray *jsInjectableHosts; // @synthesize jsInjectableHosts=_jsInjectableHosts;
- (void).cxx_destruct;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)WKFlushMessageQueue;
- (id)_evaluateJavascript:(id)arg1;
- (void)reset;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2;
- (void)callHandler:(id)arg1;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addJavascriptInterface:(id)arg1 withName:(id)arg2;
- (void)send:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)send:(id)arg1;
- (void)dealloc;
- (void)setup:(id)arg1 webViewDelgate:(id)arg2 handler:(CDUnknownBlockType)arg3 resourceBundle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LifeTracePluginDelegate.h"

@class CCard, DTRpcAsyncCaller, NSString, SOHomeCard;

@protocol LTHomePluginDelegate <LifeTracePluginDelegate>

@optional
- (CCard *)pluginSOHomeCard2SDKCard:(SOHomeCard *)arg1;
- (DTRpcAsyncCaller *)pluginMarkCard:(CCard *)arg1 withOperation:(NSString *)arg2 success:(void (^)(void))arg3 failure:(void (^)(NSError *))arg4;
@end

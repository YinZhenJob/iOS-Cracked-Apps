//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ANXRPCRequestProtocol.h"

@class ANXLogManager, ANXPayQueryReq, ANXRuntimeConfig, NSString;

@interface ANXPayQueryServiceModel : NSObject <ANXRPCRequestProtocol>
{
    ANXLogManager *_logManager;
    ANXRuntimeConfig *_runtimeConfig;
    NSString *_appName;
    NSString *_sid;
    ANXPayQueryReq *_payQueryReq;
    NSString *_isTrojan;
    NSString *_isPrisonBreak;
    NSString *_currentOperateMobile;
    NSString *_dynamicId;
    NSString *_havanaId;
}

@property(copy, nonatomic) NSString *havanaId; // @synthesize havanaId=_havanaId;
@property(copy, nonatomic) NSString *dynamicId; // @synthesize dynamicId=_dynamicId;
@property(copy, nonatomic) NSString *currentOperateMobile; // @synthesize currentOperateMobile=_currentOperateMobile;
@property(copy, nonatomic) NSString *isPrisonBreak; // @synthesize isPrisonBreak=_isPrisonBreak;
@property(copy, nonatomic) NSString *isTrojan; // @synthesize isTrojan=_isTrojan;
@property(retain, nonatomic) ANXPayQueryReq *payQueryReq; // @synthesize payQueryReq=_payQueryReq;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) ANXRuntimeConfig *runtimeConfig; // @synthesize runtimeConfig=_runtimeConfig;
@property(retain, nonatomic) ANXLogManager *logManager; // @synthesize logManager=_logManager;
- (void).cxx_destruct;
- (void)buildRuntimeConfig;
- (id)ANXRPCComponentBody;
- (id)ANXRPCComponentHeaders;
- (id)ANXRPCComponentMethod;
- (_Bool)validateParams;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

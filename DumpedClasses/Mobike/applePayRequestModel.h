//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface applePayRequestModel : NSObject
{
    NSString *_userId;
    NSString *_userType;
    NSString *_payType;
    NSString *_paySource;
    NSString *_payTotalFee;
    NSString *_payIndex;
    NSString *_payClient;
    NSString *_cardId;
}

@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *payClient; // @synthesize payClient=_payClient;
@property(retain, nonatomic) NSString *payIndex; // @synthesize payIndex=_payIndex;
@property(retain, nonatomic) NSString *payTotalFee; // @synthesize payTotalFee=_payTotalFee;
@property(retain, nonatomic) NSString *paySource; // @synthesize paySource=_paySource;
@property(retain, nonatomic) NSString *payType; // @synthesize payType=_payType;
@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)init;

@end


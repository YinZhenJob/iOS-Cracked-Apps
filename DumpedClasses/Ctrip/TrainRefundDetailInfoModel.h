//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainRefundDetailInfoModel : CTBusinessBean
{
    NSString *refundTime;
    NSString *refundTypeName;
    NSString *refundAmount;
    int refundDetailState;
    NSString *refundSuccessTime;
    NSString *refundToBankExpectedTime;
    NSString *refundToUserAccountExpectedTime;
    NSString *refundSuccessTitle;
    NSString *refundToBankExpectedTitle;
    NSString *refundToUserAccountExpectedTitle;
    NSString *refundBottomDesc;
}

@property(copy, nonatomic) NSString *refundBottomDesc; // @synthesize refundBottomDesc;
@property(copy, nonatomic) NSString *refundToUserAccountExpectedTitle; // @synthesize refundToUserAccountExpectedTitle;
@property(copy, nonatomic) NSString *refundToBankExpectedTitle; // @synthesize refundToBankExpectedTitle;
@property(copy, nonatomic) NSString *refundSuccessTitle; // @synthesize refundSuccessTitle;
@property(copy, nonatomic) NSString *refundToUserAccountExpectedTime; // @synthesize refundToUserAccountExpectedTime;
@property(copy, nonatomic) NSString *refundToBankExpectedTime; // @synthesize refundToBankExpectedTime;
@property(copy, nonatomic) NSString *refundSuccessTime; // @synthesize refundSuccessTime;
@property(nonatomic) int refundDetailState; // @synthesize refundDetailState;
@property(copy, nonatomic) NSString *refundAmount; // @synthesize refundAmount;
@property(copy, nonatomic) NSString *refundTypeName; // @synthesize refundTypeName;
@property(copy, nonatomic) NSString *refundTime; // @synthesize refundTime;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEAnchorFansRankResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSString *jcev2_p_1_o_errMsg;
    NSArray *jcev2_p_2_o_items__b0x9i_VOQLJCEAnchorFansItem;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_items, setter=setJce_items:) NSArray *jcev2_p_2_o_items__b0x9i_VOQLJCEAnchorFansItem; // @synthesize jcev2_p_2_o_items__b0x9i_VOQLJCEAnchorFansItem;
@property(retain, nonatomic, getter=jce_errMsg, setter=setJce_errMsg:) NSString *jcev2_p_1_o_errMsg; // @synthesize jcev2_p_1_o_errMsg;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

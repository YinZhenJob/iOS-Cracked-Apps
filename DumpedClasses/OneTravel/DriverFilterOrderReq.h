//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class DriverFilterOrderReq_LastFilter, NSString;

@interface DriverFilterOrderReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLastFilter; // @dynamic hasLastFilter;
@property(nonatomic) _Bool hasPhone; // @dynamic hasPhone;
@property(nonatomic) _Bool hasPushToken; // @dynamic hasPushToken;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(retain, nonatomic) DriverFilterOrderReq_LastFilter *lastFilter; // @dynamic lastFilter;
@property(copy, nonatomic) NSString *phone; // @dynamic phone;
@property(copy, nonatomic) NSString *pushToken; // @dynamic pushToken;
@property(copy, nonatomic) NSString *token; // @dynamic token;

@end

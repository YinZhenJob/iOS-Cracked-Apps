//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GovPCarRunningInfo, GovPDriverInfo, NSString;

@interface GovPOrderStatusChangedReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *aid; // @dynamic aid;
@property(nonatomic) unsigned int distance; // @dynamic distance;
@property(retain, nonatomic) GovPDriverInfo *driverInfo; // @dynamic driverInfo;
@property(retain, nonatomic) GovPCarRunningInfo *driverLocation; // @dynamic driverLocation;
@property(nonatomic) _Bool hasAid; // @dynamic hasAid;
@property(nonatomic) _Bool hasDistance; // @dynamic hasDistance;
@property(nonatomic) _Bool hasDriverInfo; // @dynamic hasDriverInfo;
@property(nonatomic) _Bool hasDriverLocation; // @dynamic hasDriverLocation;
@property(nonatomic) _Bool hasMsg; // @dynamic hasMsg;
@property(nonatomic) _Bool hasMsgBanner; // @dynamic hasMsgBanner;
@property(nonatomic) _Bool hasOid; // @dynamic hasOid;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasWaitTime; // @dynamic hasWaitTime;
@property(copy, nonatomic) NSString *msg; // @dynamic msg;
@property(copy, nonatomic) NSString *msgBanner; // @dynamic msgBanner;
@property(copy, nonatomic) NSString *oid; // @dynamic oid;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) unsigned int waitTime; // @dynamic waitTime;

@end

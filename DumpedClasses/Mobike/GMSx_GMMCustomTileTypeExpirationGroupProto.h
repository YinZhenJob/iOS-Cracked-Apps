//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_PBMutableArray;

@interface GMSx_GMMCustomTileTypeExpirationGroupProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int expirationSeconds; // @dynamic expirationSeconds;
@property(nonatomic) _Bool hasExpirationSeconds; // @dynamic hasExpirationSeconds;
@property(nonatomic) _Bool hasTileTypeArray; // @dynamic hasTileTypeArray;
@property(retain, nonatomic) GMSx_PBMutableArray *tileTypeArray; // @dynamic tileTypeArray;

@end


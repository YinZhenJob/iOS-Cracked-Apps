//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMMMapsEngineInfoProto, NSString;

@interface GMSx_GMMMapsEngineFeatureProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *featureId; // @dynamic featureId;
@property(nonatomic) _Bool hasFeatureId; // @dynamic hasFeatureId;
@property(nonatomic) _Bool hasLayerInfo; // @dynamic hasLayerInfo;
@property(retain, nonatomic) GMSx_GMMMapsEngineInfoProto *layerInfo; // @dynamic layerInfo;

@end

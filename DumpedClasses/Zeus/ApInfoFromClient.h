//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AppBaseAttr, GPBInt32Array, GpsCoordinate, NSMutableArray, NSString;

@interface ApInfoFromClient : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AppBaseAttr *appBaseAttr; // @dynamic appBaseAttr;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) _Bool arpAbnormal; // @dynamic arpAbnormal;
@property(nonatomic) int certificationRobust; // @dynamic certificationRobust;
@property(copy, nonatomic) NSString *channel; // @dynamic channel;
@property(nonatomic) int clientColletorTime; // @dynamic clientColletorTime;
@property(nonatomic) int currentNumberOfUsers; // @dynamic currentNumberOfUsers;
@property(copy, nonatomic) NSString *dhid; // @dynamic dhid;
@property(retain, nonatomic) GPBInt32Array *dnsListArray; // @dynamic dnsListArray;
@property(readonly, nonatomic) unsigned long long dnsListArray_Count; // @dynamic dnsListArray_Count;
@property(retain, nonatomic) NSMutableArray *domainResultsArray; // @dynamic domainResultsArray;
@property(readonly, nonatomic) unsigned long long domainResultsArray_Count; // @dynamic domainResultsArray_Count;
@property(nonatomic) int extraParamsVer; // @dynamic extraParamsVer;
@property(nonatomic) int gateway; // @dynamic gateway;
@property(retain, nonatomic) GpsCoordinate *gpsCoordinate; // @dynamic gpsCoordinate;
@property(nonatomic) _Bool hasAppBaseAttr; // @dynamic hasAppBaseAttr;
@property(nonatomic) _Bool hasAppId; // @dynamic hasAppId;
@property(nonatomic) _Bool hasArpAbnormal; // @dynamic hasArpAbnormal;
@property(nonatomic) _Bool hasCertificationRobust; // @dynamic hasCertificationRobust;
@property(nonatomic) _Bool hasChannel; // @dynamic hasChannel;
@property(nonatomic) _Bool hasClientColletorTime; // @dynamic hasClientColletorTime;
@property(nonatomic) _Bool hasCurrentNumberOfUsers; // @dynamic hasCurrentNumberOfUsers;
@property(nonatomic) _Bool hasDhid; // @dynamic hasDhid;
@property(nonatomic) _Bool hasExtraParamsVer; // @dynamic hasExtraParamsVer;
@property(nonatomic) _Bool hasGateway; // @dynamic hasGateway;
@property(nonatomic) _Bool hasGpsCoordinate; // @dynamic hasGpsCoordinate;
@property(nonatomic) _Bool hasIsVpnOpened; // @dynamic hasIsVpnOpened;
@property(nonatomic) _Bool hasMac; // @dynamic hasMac;
@property(nonatomic) _Bool hasNeighbourPercent; // @dynamic hasNeighbourPercent;
@property(nonatomic) _Bool hasNetWorkSpeed; // @dynamic hasNetWorkSpeed;
@property(nonatomic) _Bool hasNetmask; // @dynamic hasNetmask;
@property(nonatomic) _Bool hasOuterNetIp; // @dynamic hasOuterNetIp;
@property(nonatomic) _Bool hasPortalDetected; // @dynamic hasPortalDetected;
@property(nonatomic) _Bool hasProtocolVer; // @dynamic hasProtocolVer;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasSsid; // @dynamic hasSsid;
@property(nonatomic) _Bool hasSuggestAcceptRating; // @dynamic hasSuggestAcceptRating;
@property(nonatomic) _Bool isVpnOpened; // @dynamic isVpnOpened;
@property(copy, nonatomic) NSString *mac; // @dynamic mac;
@property(retain, nonatomic) NSMutableArray *nearbyApsArray; // @dynamic nearbyApsArray;
@property(readonly, nonatomic) unsigned long long nearbyApsArray_Count; // @dynamic nearbyApsArray_Count;
@property(retain, nonatomic) NSMutableArray *neighbourLitsArray; // @dynamic neighbourLitsArray;
@property(readonly, nonatomic) unsigned long long neighbourLitsArray_Count; // @dynamic neighbourLitsArray_Count;
@property(nonatomic) int neighbourPercent; // @dynamic neighbourPercent;
@property(nonatomic) int netWorkSpeed; // @dynamic netWorkSpeed;
@property(nonatomic) int netmask; // @dynamic netmask;
@property(copy, nonatomic) NSString *outerNetIp; // @dynamic outerNetIp;
@property(nonatomic) _Bool portalDetected; // @dynamic portalDetected;
@property(nonatomic) int protocolVer; // @dynamic protocolVer;
@property(retain, nonatomic) NSMutableArray *runningSoftwareArray; // @dynamic runningSoftwareArray;
@property(readonly, nonatomic) unsigned long long runningSoftwareArray_Count; // @dynamic runningSoftwareArray_Count;
@property(nonatomic) int source; // @dynamic source;
@property(copy, nonatomic) NSString *ssid; // @dynamic ssid;
@property(retain, nonatomic) NSMutableArray *sslCertResultsArray; // @dynamic sslCertResultsArray;
@property(readonly, nonatomic) unsigned long long sslCertResultsArray_Count; // @dynamic sslCertResultsArray_Count;
@property(nonatomic) int suggestAcceptRating; // @dynamic suggestAcceptRating;
@property(retain, nonatomic) NSMutableArray *webMd5ResultsArray; // @dynamic webMd5ResultsArray;
@property(readonly, nonatomic) unsigned long long webMd5ResultsArray_Count; // @dynamic webMd5ResultsArray_Count;

@end


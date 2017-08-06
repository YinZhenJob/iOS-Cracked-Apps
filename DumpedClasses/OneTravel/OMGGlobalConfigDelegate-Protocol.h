//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@protocol OMGGlobalConfigDelegate <NSObject>

@optional
- (_Bool)apolloToggleForKey:(NSString *)arg1;
- (long long)parameterValue:(NSString *)arg1 Paramkey:(NSString *)arg2;
- (long long)batteryStandard;
- (long long)timeoffset;
- (_Bool)putBattery;
- (NSArray *)currentPatchList;
- (NSArray *)currentPluginList;
- (NSMutableArray *)extUploadLogFiles;
- (NSString *)currentLogPath;
- (NSArray *)logPaths;
- (NSString *)cid;
- (long long)cityId;
- (double)longitude;
- (double)latitude;
- (NSString *)appVersion;
- (NSString *)bundleId;
- (NSString *)userToken;
- (NSString *)deviceId;
- (NSString *)idfa;
- (NSString *)userName;
- (NSString *)uid;
- (NSString *)channelId;
- (NSString *)appKey;
- (NSString *)appId;
@end

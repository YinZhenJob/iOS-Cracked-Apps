//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _priv_NBSProbe : NSObject
{
    id lm;
    unsigned long long memUsedAvg;
    int avgCount;
}

+ (id)getVisibleViewControllerFrom:(id)arg1;
+ (id)visibleViewController;
+ (float)folderSizeAtPath:(id)arg1;
+ (long long)fileSizeAtPath:(id)arg1;
+ (int)isJailBreak;
+ (long long)freeDiskSpaceInBytes;
+ (id)getANRAppInfoOverride;
+ (id)getANRDeviceData;
+ (id)probeWithLocationPermission:(_Bool)arg1 sampleInterval:(int)arg2;
+ (id)getDocumentsPath;
+ (void)saveUDIDToDocumentWithFileName:(id)arg1 UDID:(id)arg2;
+ (id)getUDIDValueFromDocumentsWithFileName:(id)arg1;
+ (void)deleteOldKey:(id)arg1;
+ (void)clearLocalUDID;
+ (void)saveLocalUDID:(id)arg1;
+ (id)getLocalUDID;
+ (void)setValueInKeychainWithName:(id)arg1 withValue:(id)arg2;
+ (id)getValueInKeychainWithName:(id)arg1;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)getAppInfo;
- (id)getDynamicData;
- (id)getDeviceInfo;
- (unsigned long long)getUsedMemAvg;
- (id)initWithLocationNeed:(_Bool)arg1 sampleInterval:(int)arg2;
- (void)updateMemAvg;
- (void)clearMemCount;

@end


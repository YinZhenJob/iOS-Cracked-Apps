//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface GXGBDConfigInfo : NSObject
{
    _Bool _gbdEnable;
    _Bool _gbdGPSEnable;
    _Bool _gbdReportCacheEnable;
    _Bool _gbdType12Enable;
    _Bool _gbdT27Enable;
    _Bool _gbdT27PingEnable;
    _Bool _gbdT29Enable;
    _Bool _gbdLiveEnable;
    _Bool _gbdLowEnable;
    _Bool _gbdMiddleEnable;
    _Bool _gbdT36Enable;
    int _gbdFreq;
    int _gbdPnEnableNum;
    int _gbdTypePnFreq;
    int _gbdType12Freq;
    int _gbdT27Interval;
    int _gbdT27ReportCount;
    int _gbdT27PingCount;
    int _gbdLiveFreq;
    int _gbdLiveLimit;
    int _gbdLowFreq;
    int _gbdMiddleFreq;
    int _gbdT36Interval;
    int _gbdT36ReportCount;
    int _gbdT36MinFreq;
    NSString *_gbdCellCidMask;
    NSString *_gbdT29Keyword;
    NSDictionary *_dyncDic;
}

+ (void)clearGBDConfig;
+ (void)saveDyncConfig:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *dyncDic; // @synthesize dyncDic=_dyncDic;
@property(readonly, nonatomic) int gbdT36MinFreq; // @synthesize gbdT36MinFreq=_gbdT36MinFreq;
@property(readonly, nonatomic) int gbdT36ReportCount; // @synthesize gbdT36ReportCount=_gbdT36ReportCount;
@property(readonly, nonatomic) int gbdT36Interval; // @synthesize gbdT36Interval=_gbdT36Interval;
@property(readonly, nonatomic) _Bool gbdT36Enable; // @synthesize gbdT36Enable=_gbdT36Enable;
@property(readonly, nonatomic) int gbdMiddleFreq; // @synthesize gbdMiddleFreq=_gbdMiddleFreq;
@property(readonly, nonatomic) _Bool gbdMiddleEnable; // @synthesize gbdMiddleEnable=_gbdMiddleEnable;
@property(readonly, nonatomic) int gbdLowFreq; // @synthesize gbdLowFreq=_gbdLowFreq;
@property(readonly, nonatomic) _Bool gbdLowEnable; // @synthesize gbdLowEnable=_gbdLowEnable;
@property(readonly, nonatomic) int gbdLiveLimit; // @synthesize gbdLiveLimit=_gbdLiveLimit;
@property(readonly, nonatomic) int gbdLiveFreq; // @synthesize gbdLiveFreq=_gbdLiveFreq;
@property(readonly, nonatomic) _Bool gbdLiveEnable; // @synthesize gbdLiveEnable=_gbdLiveEnable;
@property(readonly, nonatomic) NSString *gbdT29Keyword; // @synthesize gbdT29Keyword=_gbdT29Keyword;
@property(readonly, nonatomic) _Bool gbdT29Enable; // @synthesize gbdT29Enable=_gbdT29Enable;
@property(readonly, nonatomic) int gbdT27PingCount; // @synthesize gbdT27PingCount=_gbdT27PingCount;
@property(readonly, nonatomic) int gbdT27ReportCount; // @synthesize gbdT27ReportCount=_gbdT27ReportCount;
@property(readonly, nonatomic) int gbdT27Interval; // @synthesize gbdT27Interval=_gbdT27Interval;
@property(readonly, nonatomic) _Bool gbdT27PingEnable; // @synthesize gbdT27PingEnable=_gbdT27PingEnable;
@property(readonly, nonatomic) _Bool gbdT27Enable; // @synthesize gbdT27Enable=_gbdT27Enable;
@property(readonly, nonatomic) int gbdType12Freq; // @synthesize gbdType12Freq=_gbdType12Freq;
@property(readonly, nonatomic) _Bool gbdType12Enable; // @synthesize gbdType12Enable=_gbdType12Enable;
@property(readonly, nonatomic) NSString *gbdCellCidMask; // @synthesize gbdCellCidMask=_gbdCellCidMask;
@property(readonly, nonatomic) int gbdTypePnFreq; // @synthesize gbdTypePnFreq=_gbdTypePnFreq;
@property(readonly, nonatomic) int gbdPnEnableNum; // @synthesize gbdPnEnableNum=_gbdPnEnableNum;
@property(readonly, nonatomic) _Bool gbdReportCacheEnable; // @synthesize gbdReportCacheEnable=_gbdReportCacheEnable;
@property(readonly, nonatomic) _Bool gbdGPSEnable; // @synthesize gbdGPSEnable=_gbdGPSEnable;
@property(readonly, nonatomic) int gbdFreq; // @synthesize gbdFreq=_gbdFreq;
@property(readonly, nonatomic) _Bool gbdEnable; // @synthesize gbdEnable=_gbdEnable;
- (void).cxx_destruct;
- (id)readPropertyStringForLocalValue:(id)arg1 forDyncKey:(id)arg2;
- (int)readPropertyIntForLocalValue:(int)arg1 forDyncKey:(id)arg2;
- (_Bool)readPropertyBoolForLocalValue:(_Bool)arg1 forDyncKey:(id)arg2;
- (id)readDyncDicFromUD;
- (void)setGBDConfig;

@end


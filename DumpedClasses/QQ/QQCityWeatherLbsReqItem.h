//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@interface QQCityWeatherLbsReqItem : SAMRequestItem
{
    unsigned int _lat;
    unsigned int _lng;
    unsigned long long _uin;
}

@property(nonatomic) unsigned int lng; // @synthesize lng=_lng;
@property(nonatomic) unsigned int lat; // @synthesize lat=_lat;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

@end


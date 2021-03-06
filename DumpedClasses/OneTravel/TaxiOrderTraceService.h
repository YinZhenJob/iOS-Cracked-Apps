//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, TaxiOrderTraceModel;

@interface TaxiOrderTraceService : NSObject
{
    int _tickCount;
    NSTimer *_timer;
    TaxiOrderTraceModel *_orderTraceModel;
    struct CLLocationCoordinate2D _traceCoordinate;
}

+ (id)sharedInstance;
@property(nonatomic) struct CLLocationCoordinate2D traceCoordinate; // @synthesize traceCoordinate=_traceCoordinate;
@property(retain, nonatomic) TaxiOrderTraceModel *orderTraceModel; // @synthesize orderTraceModel=_orderTraceModel;
@property(nonatomic) int tickCount; // @synthesize tickCount=_tickCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (_Bool)shouldUploadLoc:(int)arg1 locDate:(id)arg2;
- (void)uploadOrderLoglocWithOid:(id)arg1 operation:(long long)arg2;
- (void)logLocation:(id)arg1;
- (void)onTimer;
- (_Bool)tracking;
- (void)stopTrack;
- (void)startTrack;
- (void)addTrackWithOrderId:(id)arg1 robTime:(id)arg2;
- (void)deleteOrderTraceModel:(id)arg1;
- (id)loadOrderTraceModel;
- (void)saveOrderTraceModel:(id)arg1;
- (id)init;

@end


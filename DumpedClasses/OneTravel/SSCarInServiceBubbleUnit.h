//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSInServiceBubbleCom.h"

@class RACDisposable;

@interface SSCarInServiceBubbleUnit : SSInServiceBubbleCom
{
    _Bool _isDrvArvdFreeTimeout;
    RACDisposable *_orderStatusSignal;
}

@property(nonatomic) _Bool isDrvArvdFreeTimeout; // @synthesize isDrvArvdFreeTimeout=_isDrvArvdFreeTimeout;
@property(retain, nonatomic) RACDisposable *orderStatusSignal; // @synthesize orderStatusSignal=_orderStatusSignal;
- (void).cxx_destruct;
- (void)goToFeeDetail;
- (id)attributedString:(id)arg1 lightFont:(id)arg2 normalFont:(id)arg3 lightColor:(id)arg4 normalColor:(id)arg5;
- (id)getCallBack;
- (id)createPackCarBubbleModel;
- (id)createToDistanceBubbleModel;
- (id)createInTravelBubbleModel;
- (id)createTimeOutBubbleModel;
- (id)createArriveBubbleModel;
- (id)createDriverNotArrivedRightPosBubbleModel;
- (id)createDistanceBubbleModel;
- (id)bubbleModel;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DCFloatLayerModel<Optional>;

@interface DCMainPageFloatLayerInfo : JSONModel
{
    DCFloatLayerModel<Optional> *_mainpage;
    DCFloatLayerModel<Optional> *_driverpage;
    DCFloatLayerModel<Optional> *_passengerpage;
}

@property(retain, nonatomic) DCFloatLayerModel<Optional> *passengerpage; // @synthesize passengerpage=_passengerpage;
@property(retain, nonatomic) DCFloatLayerModel<Optional> *driverpage; // @synthesize driverpage=_driverpage;
@property(retain, nonatomic) DCFloatLayerModel<Optional> *mainpage; // @synthesize mainpage=_mainpage;
- (void).cxx_destruct;

@end

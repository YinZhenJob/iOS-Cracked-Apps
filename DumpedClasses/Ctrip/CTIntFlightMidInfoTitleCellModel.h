//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTIntFlightMidInfoTitleCellModel : NSObject
{
    int _tripType;
    long long _index;
    NSString *_departCity;
    NSString *_arriveCity;
    NSString *_displayTime;
    long long _bgType;
}

@property(nonatomic) long long bgType; // @synthesize bgType=_bgType;
@property(copy, nonatomic) NSString *displayTime; // @synthesize displayTime=_displayTime;
@property(copy, nonatomic) NSString *arriveCity; // @synthesize arriveCity=_arriveCity;
@property(copy, nonatomic) NSString *departCity; // @synthesize departCity=_departCity;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) int tripType; // @synthesize tripType=_tripType;
- (void).cxx_destruct;
- (id)init;

@end


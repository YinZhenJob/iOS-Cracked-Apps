//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;

@interface OneEvaluateDriverModel : JSONModel
{
    float _fRatingStar;
    NSString *_strOrderId;
    NSString *_strDriverId;
    NSString *_strExtraMsg;
    NSArray *_selectedOptions;
}

@property(retain, nonatomic) NSArray *selectedOptions; // @synthesize selectedOptions=_selectedOptions;
@property(nonatomic) float fRatingStar; // @synthesize fRatingStar=_fRatingStar;
@property(retain, nonatomic) NSString *strExtraMsg; // @synthesize strExtraMsg=_strExtraMsg;
@property(retain, nonatomic) NSString *strDriverId; // @synthesize strDriverId=_strDriverId;
@property(retain, nonatomic) NSString *strOrderId; // @synthesize strOrderId=_strOrderId;
- (void).cxx_destruct;

@end

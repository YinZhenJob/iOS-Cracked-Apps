//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, ZXBitMatrix;

@interface ZXPDF417DetectorResult : NSObject
{
    ZXBitMatrix *_bits;
    NSArray *_points;
}

@property(readonly, nonatomic) NSArray *points; // @synthesize points=_points;
@property(readonly, nonatomic) ZXBitMatrix *bits; // @synthesize bits=_bits;
- (void).cxx_destruct;
- (id)initWithBits:(id)arg1 points:(id)arg2;

@end


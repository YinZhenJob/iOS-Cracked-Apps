//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

#import "NSCoding.h"

@class NSNumber;

@interface NVMBadge : NVMModel <NSCoding>
{
    _Bool _isVisual;
    unsigned long long _type;
    NSNumber *_effectiveTimestamp;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *effectiveTimestamp; // @synthesize effectiveTimestamp=_effectiveTimestamp;
@property(nonatomic) _Bool isVisual; // @synthesize isVisual=_isVisual;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


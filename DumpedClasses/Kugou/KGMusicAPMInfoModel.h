//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KGMusicAPMInfoModel : NSObject
{
    int _type;
    int _nodeState;
    long long _nodeIndex;
    NSString *_sequence;
    double _makedDateTime;
}

@property(nonatomic) int nodeState; // @synthesize nodeState=_nodeState;
@property(nonatomic) double makedDateTime; // @synthesize makedDateTime=_makedDateTime;
@property(retain, nonatomic) NSString *sequence; // @synthesize sequence=_sequence;
@property(nonatomic) long long nodeIndex; // @synthesize nodeIndex=_nodeIndex;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end


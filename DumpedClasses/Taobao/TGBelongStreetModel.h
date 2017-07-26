//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBaseModel.h"

@class NSArray, NSString;

@interface TGBelongStreetModel : TGBaseModel
{
    NSString *_groupCover;
    NSString *_groupName;
    long long _groupId;
    long long _userId;
    long long _sourceCount;
    long long _followerCount;
    NSArray *_sources;
}

@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(nonatomic) long long followerCount; // @synthesize followerCount=_followerCount;
@property(nonatomic) long long sourceCount; // @synthesize sourceCount=_sourceCount;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupCover; // @synthesize groupCover=_groupCover;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg1;

@end

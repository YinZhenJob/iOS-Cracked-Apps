//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class NSString;

@interface HTSLiveAccountBindedModel : MTLModel <MTLJSONSerializing>
{
    unsigned long long _platform;
    NSString *_nickname;
    NSString *_avatarURL;
}

+ (id)platformJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned long long platform; // @synthesize platform=_platform;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FMFishpondRankUserDO : NSObject
{
    NSDictionary *_rankNumIcon;
    NSString *_userNick;
    NSString *_nick;
    long long _userId;
}

@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSDictionary *rankNumIcon; // @synthesize rankNumIcon=_rankNumIcon;
- (void).cxx_destruct;

@end

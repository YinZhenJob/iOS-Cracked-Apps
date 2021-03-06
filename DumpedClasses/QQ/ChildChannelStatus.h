//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface ChildChannelStatus : NSObject <NSCoding>
{
    unsigned int _ccid;
    unsigned int _followed;
    unsigned int _subscriptionCount;
    unsigned int _isSystemRecomm;
    NSString *_headerImgUrl;
}

@property(nonatomic) unsigned int isSystemRecomm; // @synthesize isSystemRecomm=_isSystemRecomm;
@property(nonatomic) unsigned int subscriptionCount; // @synthesize subscriptionCount=_subscriptionCount;
@property(retain, nonatomic) NSString *headerImgUrl; // @synthesize headerImgUrl=_headerImgUrl;
@property(nonatomic) unsigned int followed; // @synthesize followed=_followed;
@property(nonatomic) unsigned int ccid; // @synthesize ccid=_ccid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end


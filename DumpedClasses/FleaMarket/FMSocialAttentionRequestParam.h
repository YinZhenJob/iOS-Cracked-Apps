//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMSocialAttentionRequestParam : NSObject
{
    unsigned long long _action;
    long long _pageNumber;
    long long _rowsPerPage;
    NSString *_beginTimestamp;
    NSString *_beginId;
    NSString *_otherUserId;
}

@property(copy, nonatomic) NSString *otherUserId; // @synthesize otherUserId=_otherUserId;
@property(copy, nonatomic) NSString *beginId; // @synthesize beginId=_beginId;
@property(copy, nonatomic) NSString *beginTimestamp; // @synthesize beginTimestamp=_beginTimestamp;
@property(nonatomic) long long rowsPerPage; // @synthesize rowsPerPage=_rowsPerPage;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (void).cxx_destruct;

@end

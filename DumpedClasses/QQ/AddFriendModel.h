//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface AddFriendModel : NSObject <NSCopying>
{
    int _sendReqFlag;
    int _sendResult;
    NSString *_mobileNum;
    NSString *_remark;
    long long _allowType;
}

@property(nonatomic) int sendResult; // @synthesize sendResult=_sendResult;
@property(nonatomic) int sendReqFlag; // @synthesize sendReqFlag=_sendReqFlag;
@property(nonatomic) long long allowType; // @synthesize allowType=_allowType;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *mobileNum; // @synthesize mobileNum=_mobileNum;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

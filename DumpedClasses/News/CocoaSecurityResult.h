//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CocoaSecurityResult : NSObject
{
    NSData *_data;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *base64;
@property(readonly, nonatomic) NSString *hexLower;
@property(readonly, nonatomic) NSString *hex;
@property(readonly, nonatomic) NSString *utf8String;
- (id)initWithBytes:(char *)arg1 length:(unsigned long long)arg2;

@end


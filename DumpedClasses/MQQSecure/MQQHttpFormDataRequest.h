//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQHttpRequest.h"

@class NSMutableArray;

@interface MQQHttpFormDataRequest : MQQHttpRequest
{
    NSMutableArray *_postData;
}

@property(retain, nonatomic) NSMutableArray *postData; // @synthesize postData=_postData;
- (void)startSynchronous;
- (void)startAsynchronous;
- (void)setupFormData;
- (void)addData:(id)arg1 withFileName:(id)arg2 andContentType:(id)arg3 forKey:(id)arg4;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class QLASIHTTPRequest;

@interface QLDataRequestModel : QLRequestModel
{
    QLASIHTTPRequest *_dataRequest;
}

@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
- (void).cxx_destruct;
- (void)cancel;
- (void)cancelDataRequest;
- (void)requestDidRetryRequest:(id)arg1;
- (void)dealloc;

@end


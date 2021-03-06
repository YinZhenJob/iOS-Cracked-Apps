//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Header, NSData;

@interface ONEPushMsgDecoder : NSObject
{
    const struct message_t2 *_msg;
    NSData *_data;
    Header *_header;
}

@property(retain, nonatomic) Header *header; // @synthesize header=_header;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)decodePayloadWithClass:(Class)arg1;
- (void)parseHeaderData:(id)arg1 error:(id *)arg2;
- (id)payloadData;
- (void *)payload;
- (unsigned long long)payloadLength;
- (unsigned short)payloadOffset;
- (unsigned int)dataLength;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end


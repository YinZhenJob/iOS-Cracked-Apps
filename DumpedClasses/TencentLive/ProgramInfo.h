//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChannelInfo, NSString;

@interface ProgramInfo : NSObject
{
    NSString *_id;
    NSString *_name;
    ChannelInfo *_channelInfo;
    id _rawData;
}

@property(retain, nonatomic) id rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) ChannelInfo *channelInfo; // @synthesize channelInfo=_channelInfo;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TFESessionIDService : NSObject
{
    Class _utDeviceClasz;
    unsigned long long _seq;
    NSString *_random;
}

+ (id)sharedInstance;
@property(retain) NSString *random; // @synthesize random=_random;
@property unsigned long long seq; // @synthesize seq=_seq;
@property(retain) Class utDeviceClasz; // @synthesize utDeviceClasz=_utDeviceClasz;
- (void).cxx_destruct;
- (int)getRandomNumber:(int)arg1 to:(int)arg2;
- (id)getUTDID;
- (id)init;
- (id)getDeviceId;
- (id)getSessionId;
- (unsigned long long)getSequence;

@end

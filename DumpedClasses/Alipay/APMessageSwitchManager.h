//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APMessageSwitchManager : NSObject
{
}

- (id)handleMessageSwitchData:(id)arg1;
- (id)getLogonUserId;
- (_Bool)saveMessageSwitchToCache:(id)arg1;
- (id)getMessageSwitchFromCache;
- (void)updateMessageSwitch:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryMessageSwitch:(CDUnknownBlockType)arg1;
- (void)courierCoreUpdateMessageSwitch:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)courierCoreQueryMessageSwitch:(CDUnknownBlockType)arg1;

@end

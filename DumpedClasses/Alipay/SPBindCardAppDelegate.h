//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQPBaseAppDelegate.h"

@class NSString;

@interface SPBindCardAppDelegate : MQPBaseAppDelegate
{
    NSString *_source;
    NSString *_succAddNoti;
    NSString *_returnUrl;
}

@property(copy, nonatomic) NSString *returnUrl; // @synthesize returnUrl=_returnUrl;
@property(copy, nonatomic) NSString *succAddNoti; // @synthesize succAddNoti=_succAddNoti;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)startBindCardWithApp:(id)arg1 andOptions:(id)arg2;
- (_Bool)isNewApp:(id)arg1 withOptions:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;

@end

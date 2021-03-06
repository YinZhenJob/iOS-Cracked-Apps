//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DDLogMessage, NSString;
@protocol DDLogFormatter;

@protocol DDLogger <NSObject>
- (void)setLogFormatter:(id <DDLogFormatter>)arg1;
- (id <DDLogFormatter>)logFormatter;
- (void)logMessage:(DDLogMessage *)arg1;

@optional
- (NSString *)loggerName;
- (struct dispatch_queue_s *)loggerQueue;
- (void)flush;
- (void)willRemoveLogger;
- (void)didAddLogger;
@end


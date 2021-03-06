//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSURL;

@protocol IHttpStateDelegate <NSObject>
- (void)onHttpState:(int)arg1 transferType:(int)arg2 success:(_Bool)arg3 error:(NSError *)arg4 isUnifiedDownloader:(_Bool)arg5;

@optional
- (void)onHttpDownloadSuccess:(int)arg1 receivedData:(NSData *)arg2;
- (void)onHttpSuccess:(NSURL *)arg1;
@end


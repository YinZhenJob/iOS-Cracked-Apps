//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBMy3DFileCache : NSObject
{
    NSString *cacheDir;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)downLoadAndCacheFileForUrl:(id)arg1 ofType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downLoadAndCacheFileForUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fileCacheForUrl:(id)arg1;
- (id)fileCacheForUrl:(id)arg1 ofType:(id)arg2;
- (id)genFilePathForUrl:(id)arg1 ofType:(id)arg2;
- (id)init;

@end

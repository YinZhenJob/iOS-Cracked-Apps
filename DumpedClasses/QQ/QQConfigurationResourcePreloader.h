//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>, QQLockDictionary;

@interface QQConfigurationResourcePreloader : NSObject
{
    QQLockDictionary *_resourceInfoMap;
    QQLockDictionary *_config;
    long long _unMatchNetResourceCount;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    _Bool _isJSPreloader;
}

+ (_Bool)isNetworkFitResourceDownload:(id)arg1;
- (void).cxx_destruct;
- (void)handleDownloadFileMD5WrongNotification:(id)arg1;
- (void)handleMSFNetworkApnStateNotification:(id)arg1;
- (void)_cleanResourceForURL:(id)arg1;
- (void)_innnerDealConfig:(id)arg1;
- (void)_prepareValidResource;
- (id)_cacheDirectoryForModule:(id)arg1;
- (id)_cachePathForURL:(id)arg1 module:(id)arg2;
- (id)_resourceForURL:(id)arg1;
- (id)_filenameForURL:(id)arg1;
- (id)cachePathForResID:(id)arg1;
- (id)videoPathForModuleId:(id)arg1;
- (_Bool)isBackControlResourceUrl:(id)arg1;
- (id)moduleIdForURL:(id)arg1;
- (id)cachePathForURL:(id)arg1;
- (id)allURLsForModule:(id)arg1 checkValid:(_Bool)arg2;
- (id)cacheImageForURL:(id)arg1;
- (id)configsForModule:(id)arg1;
- (_Bool)confirmExistDirectory:(id)arg1;
- (void)cleanAllConfig;
- (void)dealConfigJSONStrings:(id)arg1;
- (id)handleJSConfig:(id)arg1;
- (void)readConfig;
- (void)writeConfig;
- (id)cacheRootDirectory;
- (id)cacheConfigPath;
- (id)init;
- (void)dealloc;

@end


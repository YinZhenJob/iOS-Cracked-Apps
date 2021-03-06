//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQCollectionViewItem.h"

@class MQQInfomationDownloadInfo, MQQLoginUserInfo, MQQUnifiedAccountInfo;

@interface MQQInfomationTopViewItem : MQQCollectionViewItem
{
    MQQLoginUserInfo *_userInfo;
    MQQUnifiedAccountInfo *_accountInfo;
    MQQInfomationDownloadInfo *_downloadInfo;
}

@property(retain, nonatomic) MQQInfomationDownloadInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(retain, nonatomic) MQQUnifiedAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(retain, nonatomic) MQQLoginUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void)cancelDownload;
- (void)downloadImageIfNeed;
- (void)willDisplay;
- (id)_image;
- (id)image;
- (id)_greetings;
- (id)title;
- (id)init;
- (id)initWithAccountInfo:(id)arg1;
- (id)initWithUserInfo:(id)arg1;
- (void)dealloc;

@end


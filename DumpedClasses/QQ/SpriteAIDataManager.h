//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BDHUploadDelegate.h"
#import "IEngineDispatchDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, QQLockDictionary;

@interface SpriteAIDataManager : NSObject <BDHUploadDelegate, IEngineDispatchDelegate>
{
    QQLockDictionary *_uploadTasks;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isShowFloat;
}

+ (id)spriteChatMP3Path;
+ (id)spriteRichDir:(id)arg1;
+ (id)spriteRichChatDir;
+ (id)getInstance;
- (void)parseSubMsgType0xca:(const void *)arg1 DataLen:(int)arg2 sourceType:(int)arg3;
- (id)parseDownloadUrl:(char *)arg1 DataLen:(int)arg2;
- (void)removeLocalFile:(long long)arg1;
- (void)notifyBDHCancel:(long long)arg1 uploadDetail:(id)arg2;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (struct Sc2cPttUpload *)setPttUploadBody:(struct Sc2cPttUpload *)arg1 uploadModel:(id)arg2;
- (void)uploadSpriteFileWithModel:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)sendSSOWithCmd:(id)arg1 data:(id)arg2;
- (void)reportAIEventWithName:(id)arg1 eventType:(unsigned int)arg2 externParam:(id)arg3;
- (void)openSpriteAIState;
- (void)sendSpriteMessageBySSO:(int)arg1 content:(id)arg2;
- (void)sendSpriteMessageToAI:(id)arg1;
- (void)deleteHotPushLocal;
- (id)getLocalHotPushWithinEffectiveTime;
- (void)writeHotPushToLocal:(id)arg1;
- (void)setIsShowFloat:(_Bool)arg1;
- (void)downloadRichMessageResource:(id)arg1;
- (void)dealWithMessage:(id)arg1;
- (void)cleanSpriteChatDir;
- (void)cleanSpriteUpload;
- (void)cleanSpriteAIData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPbMsgSenderBase.h"

@interface QQRichStatusMessageSender : QQPbMsgSenderBase
{
}

+ (id)GetInstance;
- (struct RoutingHead *)genRoutingHead:(id)arg1;
- (id)SendingModelToUin:(long long)arg1 TimeStamp:(int)arg2 MsgId:(int)arg3 pkgNum:(BOOL)arg4 divSeq:(short)arg5 DispContent:(id)arg6 MsgType:(int)arg7 BodyType:(int)arg8;
- (int)getMsgSendType:(id)arg1;

@end


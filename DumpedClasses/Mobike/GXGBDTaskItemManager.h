//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GXGBDTaskItem.h"

@class NSData;

@interface GXGBDTaskItemManager : GXGBDTaskItem
{
    int curTryTimes_;
    int nextTryTime_;
    _Bool _isUploadingFinish;
    _Bool _isReportSuccess;
    id <GXGBDTaskItemManagerDelegate> _delegate;
    NSData *_postBodyData;
}

@property(nonatomic) _Bool isReportSuccess; // @synthesize isReportSuccess=_isReportSuccess;
@property(nonatomic) _Bool isUploadingFinish; // @synthesize isUploadingFinish=_isUploadingFinish;
@property(retain, nonatomic) NSData *postBodyData; // @synthesize postBodyData=_postBodyData;
@property(nonatomic) __weak id <GXGBDTaskItemManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendRquestToRemote;
- (void)onTimer;
- (id)initWithTaskId:(int)arg1 taskType:(int)arg2 postBody:(id)arg3 delegate:(id)arg4;

@end


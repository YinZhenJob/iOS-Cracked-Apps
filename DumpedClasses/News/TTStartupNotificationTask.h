//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStartupTask.h"

@interface TTStartupNotificationTask : TTStartupTask
{
}

- (void)showIntroductionView;
- (void)addFeedbackLaunchCheck;
- (void)connectionChanged:(id)arg1;
- (void)installIDAvailable:(id)arg1;
- (void)shareToPlatformNeedEnterBackground:(id)arg1;
- (void)introductionViewControllerDismissed:(id)arg1;
- (void)autoLoginFinished:(id)arg1;
- (void)accountStateDidChanged:(id)arg1;
- (void)mainViewDidShow:(id)arg1;
- (void)userInfoReceived:(id)arg1;
- (void)registerNotification;
- (void)startWithApplication:(id)arg1 options:(id)arg2;
- (_Bool)isResistent;
- (id)taskIdentifier;

@end


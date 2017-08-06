//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "ConcertHorizontalChatToolBarDelegate.h"
#import "ConcertPlayerVllDelegate.h"
#import "FXKGLiveShareViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class ConcertGiftVll, ConcertHorizontalChatToolBar, ConcertPlayerVll, FXKGLiveShareViewController, KGLiveConcertLiveRoomVll, NSString;

@interface KGLiveConcertHorizontalPlayerController : KGViewController <ConcertPlayerVllDelegate, ConcertHorizontalChatToolBarDelegate, UIAlertViewDelegate, FXKGLiveShareViewControllerDelegate>
{
    id <KGLiveConcertHorizontalPlayerControllerDelegate> _delegate;
    ConcertPlayerVll *_playerVll;
    ConcertGiftVll *_chatGiftVll;
    KGLiveConcertLiveRoomVll *_liveRoomVll;
    long long _currentOrientation;
    ConcertHorizontalChatToolBar *_hChatToolBar;
    FXKGLiveShareViewController *_shareVC;
}

+ (id)shareInstance;
@property(retain, nonatomic) FXKGLiveShareViewController *shareVC; // @synthesize shareVC=_shareVC;
@property(retain, nonatomic) ConcertHorizontalChatToolBar *hChatToolBar; // @synthesize hChatToolBar=_hChatToolBar;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) __weak KGLiveConcertLiveRoomVll *liveRoomVll; // @synthesize liveRoomVll=_liveRoomVll;
@property(nonatomic) __weak ConcertGiftVll *chatGiftVll; // @synthesize chatGiftVll=_chatGiftVll;
@property(nonatomic) __weak ConcertPlayerVll *playerVll; // @synthesize playerVll=_playerVll;
@property(nonatomic) __weak id <KGLiveConcertHorizontalPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (void)kgLiveTouchHeart:(id)arg1;
- (void)liveBottomClickSendChatMessage:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)showGiftView;
- (void)liveBottomisShowing:(_Bool)arg1;
- (void)showShareStatusTips:(id)arg1;
- (void)showShareSheet;
- (void)hideShareView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)kgLiveTouchShowGiftView;
- (void)forceExitRoom;
- (void)showExitAlert:(id)arg1;
- (void)roomShowLoginTips:(id)arg1;
- (void)roomShowErrorTips:(id)arg1;
- (void)roomShowSuccessStatus:(id)arg1;
- (void)roomShowExitAlert:(id)arg1;
- (void)intallHorizonChatToolBar;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

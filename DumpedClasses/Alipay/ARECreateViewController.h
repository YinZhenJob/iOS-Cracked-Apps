//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AREBaseViewController.h"

#import "ARESchemeProtocol.h"

@class ARECameraView, ARECommonButton, AREPOIView, AREScanIndicatorView, AREScanTipsView, ARESimpleTipsView, GIFTPRODGiftCrowdCreateResult, NSDictionary, NSString, UIButton, UIViewController;

@interface ARECreateViewController : AREBaseViewController <ARESchemeProtocol>
{
    AREPOIView *_poiView;
    ARESimpleTipsView *_changePOITipsView;
    ARECommonButton *_createEnvelopeButton;
    AREScanIndicatorView *_scanIndicatorView;
    AREScanTipsView *_scanTipsView;
    UIViewController *_sendController;
    GIFTPRODGiftCrowdCreateResult *_createdResult;
    UIButton *_changePlaceButton;
    NSDictionary *_options;
}

+ (unsigned long long)canInitWithOptions:(id)arg1;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) UIButton *changePlaceButton; // @synthesize changePlaceButton=_changePlaceButton;
@property(retain, nonatomic) GIFTPRODGiftCrowdCreateResult *createdResult; // @synthesize createdResult=_createdResult;
@property(nonatomic) __weak UIViewController *sendController; // @synthesize sendController=_sendController;
@property(retain, nonatomic) AREScanTipsView *scanTipsView; // @synthesize scanTipsView=_scanTipsView;
@property(retain, nonatomic) AREScanIndicatorView *scanIndicatorView; // @synthesize scanIndicatorView=_scanIndicatorView;
@property(retain, nonatomic) ARECommonButton *createEnvelopeButton; // @synthesize createEnvelopeButton=_createEnvelopeButton;
@property(retain, nonatomic) ARESimpleTipsView *changePOITipsView; // @synthesize changePOITipsView=_changePOITipsView;
@property(retain, nonatomic) AREPOIView *poiView; // @synthesize poiView=_poiView;
- (void).cxx_destruct;
- (_Bool)isArCameraReady;
- (_Bool)isPOIViewReady;
- (void)updateTipsViewText:(id)arg1;
- (void)resetTipsViewText;
- (void)resumeScan;
- (void)resumeRecognize;
- (void)pauseRecognize;
- (void)startScan;
- (void)animateShowCreateButton;
- (void)animateHideCreateButton;
- (void)cameraViewNotFoundObject:(id)arg1;
- (void)cameraViewMoveFast:(id)arg1;
- (void)cameraView:(id)arg1 didLostObject:(id)arg2;
- (void)cameraView:(id)arg1 didFindObject:(id)arg2;
- (void)cameraViewDidFinishLoading:(id)arg1;
- (void)POIView:(id)arg1 didChangeState:(unsigned long long)arg2 withOldState:(unsigned long long)arg3;
- (struct CGPoint)ARSendVCHeaderCenter;
- (void)ARSendVCCloseButtonClicked;
- (void)onEnvelopeWillSend;
- (void)handleAfterPaySuccess:(id)arg1 extInfo:(id)arg2;
- (void)cancelCreateEnvelope;
- (void)showCreateEnvelope:(id)arg1 orImageData:(id)arg2;
- (void)assitLogForBI_createAREnvelope;
- (void)createEnvelope;
- (void)enableFalconScan;
- (void)disableFalconScan;
- (void)didReadyCreateEnvelope;
- (void)checkCreateEnvelopeConditions;
- (void)showTipsIfChatFirst;
- (_Bool)isFromChat;
- (void)setupViews;
- (void)viewWillDestroy;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) ARECameraView *view; // @dynamic view;

@end

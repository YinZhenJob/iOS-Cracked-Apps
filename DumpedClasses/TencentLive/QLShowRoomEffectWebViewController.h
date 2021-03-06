//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLSpecialEffectH5ViewCtl.h"

#import "QLSRWebviewControlProtocol.h"

@class NSString, QLShowRoomH5Ctl;

@interface QLShowRoomEffectWebViewController : QLSpecialEffectH5ViewCtl <QLSRWebviewControlProtocol>
{
    id <QLSRH5HandlerProtocol> _bindingSRDelegate;
    QLShowRoomH5Ctl *bindingSRH5Ctl;
}

@property(nonatomic) __weak QLShowRoomH5Ctl *bindingSRH5Ctl; // @synthesize bindingSRH5Ctl;
@property(nonatomic) __weak id <QLSRH5HandlerProtocol> bindingSRDelegate; // @synthesize bindingSRDelegate=_bindingSRDelegate;
- (void).cxx_destruct;
- (void)resetBridgeHandleDelegate;
- (id)extendHandlerNames;
- (void)openURLWithCookie:(id)arg1;
- (void)openURL:(id)arg1;
- (void)clickCloseH5:(id)arg1;
- (void)clickClose:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


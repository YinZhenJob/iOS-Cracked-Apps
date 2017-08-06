//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPPopupView.h"

@class CAShapeLayer;

@interface GWUserIntroduceView : WPPopupView
{
    int _type;
    CAShapeLayer *_fillLayer;
    struct CGRect _wantFrame;
    struct CGRect _ticketFrame;
    struct CGRect _disFrame;
    struct CGRect _vFrame;
}

+ (id)createIntroduceViewWithWantFrame:(struct CGRect)arg1 myTicketFrame:(struct CGRect)arg2 disCardFrame:(struct CGRect)arg3 vCardFrame:(struct CGRect)arg4;
@property(retain, nonatomic) CAShapeLayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) struct CGRect vFrame; // @synthesize vFrame=_vFrame;
@property(nonatomic) struct CGRect disFrame; // @synthesize disFrame=_disFrame;
@property(nonatomic) struct CGRect ticketFrame; // @synthesize ticketFrame=_ticketFrame;
@property(nonatomic) struct CGRect wantFrame; // @synthesize wantFrame=_wantFrame;
- (void).cxx_destruct;
- (void)okAction:(id)arg1;
- (void)showGuide;
- (void)show;
- (id)init;

@end

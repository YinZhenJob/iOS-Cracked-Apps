//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWPartnerShareView.h"

@class UIButton;

@interface GWPreViewShareView : GWPartnerShareView
{
    UIButton *_downLoadButton;
}

@property(retain, nonatomic) UIButton *downLoadButton; // @synthesize downLoadButton=_downLoadButton;
- (void).cxx_destruct;
- (void)startAnimationNomatter:(_Bool)arg1;
- (void)startAnimation:(_Bool)arg1;
- (void)button:(id)arg1 animation:(_Bool)arg2 delay:(double)arg3;
- (void)resetButtonRect:(_Bool)arg1;
- (double)topEdge:(_Bool)arg1;
- (_Bool)needAnimation:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)createButtonByImage:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IQZUrlDownloaderDelegate.h"

@class CAEmitterCell, CAEmitterLayer, NSString, NSTimer, QZFloatItemInfo;

@interface QZFloatView : UIView <IQZUrlDownloaderDelegate>
{
    long long _source;
    CAEmitterLayer *_emitterLayer;
    CAEmitterCell *_emitterCell;
    NSTimer *_removeEmitterTimer;
    long long _uin;
    QZFloatItemInfo *_floatInfo;
}

@property(retain, nonatomic) QZFloatItemInfo *floatInfo; // @synthesize floatInfo=_floatInfo;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSTimer *removeEmitterTimer; // @synthesize removeEmitterTimer=_removeEmitterTimer;
@property(retain, nonatomic) CAEmitterCell *emitterCell; // @synthesize emitterCell=_emitterCell;
@property(retain, nonatomic) CAEmitterLayer *emitterLayer; // @synthesize emitterLayer=_emitterLayer;
@property(nonatomic) long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)handleEnterForeground;
- (void)handleEnterBackground;
- (void)onRemoveEmitter;
- (void)stopRemoveEmitterTimer;
- (void)startRemoveEmitterTimer;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)requestFinished:(id)arg1;
- (id)reSizeImage:(id)arg1 toSize:(struct CGSize)arg2;
- (void)loadFloat:(id)arg1;
- (_Bool)isFloatItemValid:(id)arg1;
- (void)refreshFloat:(id)arg1;
- (void)startAnimation;
- (void)loadDefaultFloat;
- (void)dealloc;
- (void)resetFloatView;
- (id)initWithFrame:(struct CGRect)arg1 uin:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


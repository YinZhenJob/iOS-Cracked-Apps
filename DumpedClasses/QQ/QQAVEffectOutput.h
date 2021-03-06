//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, NSMutableArray, QQAVEffectFramebuffer;

@interface QQAVEffectOutput : NSObject
{
    EAGLContext *currentContext;
    QQAVEffectFramebuffer *outputFramebuffer;
    NSMutableArray *targets;
    NSMutableArray *targetTextureIndices;
    struct CGSize inputTextureSize;
    struct CGSize cachedMaximumOutputSize;
    struct CGSize forcedMaximumSize;
    _Bool overrideInputSize;
    _Bool allTargetsWantMonochromeData;
    _Bool _shouldIgnoreUpdatesToThisTarget;
    _Bool _enabled;
    id <QQAVEffectInput> _targetToIgnoreForUpdates;
    struct GPUTextureOptions _outputTextureOptions;
}

@property(nonatomic) struct GPUTextureOptions outputTextureOptions; // @synthesize outputTextureOptions=_outputTextureOptions;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) id <QQAVEffectInput> targetToIgnoreForUpdates; // @synthesize targetToIgnoreForUpdates=_targetToIgnoreForUpdates;
@property(nonatomic) _Bool shouldIgnoreUpdatesToThisTarget; // @synthesize shouldIgnoreUpdatesToThisTarget=_shouldIgnoreUpdatesToThisTarget;
- (_Bool)providesMonochromeOutput;
- (void)removeAllTargets;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)addTarget:(id)arg1;
- (id)targets;
- (id)framebufferForOutput;
- (void)setInputFramebufferForTarget:(id)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext;

@interface RCTSGFrameBuffer : NSObject
{
    unsigned int _frameBuffer;
    unsigned int _texture;
    EAGLContext *_context;
    struct CGSize _size;
    struct RCTSGTextureOptions _textureOptions;
}

@property(readonly, nonatomic) unsigned int texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) struct RCTSGTextureOptions textureOptions; // @synthesize textureOptions=_textureOptions;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGImage *)getCGImageFromBuffer;
- (void)activateFrameBuffer;
- (id)initWithContext:(id)arg1 size:(struct CGSize)arg2 inputTexture:(unsigned int)arg3;
- (id)initWithContext:(id)arg1 size:(struct CGSize)arg2 textureOptions:(struct RCTSGTextureOptions)arg3;
- (id)initWithContext:(id)arg1 size:(struct CGSize)arg2;
- (void)generateFrameBuffer;
- (void)generateTexture;

@end


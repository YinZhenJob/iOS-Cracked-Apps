//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAudioPlayerBase.h"

@interface QQAmrPlayer : QQAudioPlayerBase
{
    struct IXVECodec *mXVECodec;
    void *mDecoder;
    _Bool _isFirstRead;
    unsigned int _amrMode;
    struct __sFILE *_fp;
}

@property(nonatomic) unsigned int amrMode; // @synthesize amrMode=_amrMode;
@property(nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
- (void)setFileOffset:(float)arg1;
- (void)releaseAmrCodec;
- (id)getAudioData:(unsigned int)arg1;
- (_Bool)shouldFinishPlay;
- (_Bool)shouldStartPlay;
- (void)initAmrCodec;
- (_Bool)checkAmrModeAndSetFileOffset;
- (unsigned int)getAmrMode:(BOOL)arg1;
- (void)dealloc;

@end


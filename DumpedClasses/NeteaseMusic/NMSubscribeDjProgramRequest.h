//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NMDjProgram, NMSong, NMSongFile, NSString;

@interface NMSubscribeDjProgramRequest : NMBaseRequest
{
    _Bool _isSubscribe;
    NSString *_programId;
    NMDjProgram *_djProgram;
    NMSongFile *_targetSongFile;
    NMSong *_targetDjSong;
}

@property(retain, nonatomic) NMSong *targetDjSong; // @synthesize targetDjSong=_targetDjSong;
@property(retain, nonatomic) NMSongFile *targetSongFile; // @synthesize targetSongFile=_targetSongFile;
@property(retain, nonatomic) NMDjProgram *djProgram; // @synthesize djProgram=_djProgram;
@property(nonatomic) _Bool isSubscribe; // @synthesize isSubscribe=_isSubscribe;
@property(retain, nonatomic) NSString *programId; // @synthesize programId=_programId;
- (void).cxx_destruct;
- (void)start;
- (id)initWithProgramId:(id)arg1 isSubscribe:(_Bool)arg2;

@end


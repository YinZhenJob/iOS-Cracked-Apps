//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDBDao.h"

@interface FXTop1WSongDBDao : BaseDBDao
{
}

+ (id)sharedInstance;
- (_Bool)deleteAllRecord;
- (_Bool)addSongNames:(id)arg1;
- (_Bool)isExistSongName:(id)arg1;
- (_Bool)isExistSong:(id)arg1;
- (id)tableName;

@end

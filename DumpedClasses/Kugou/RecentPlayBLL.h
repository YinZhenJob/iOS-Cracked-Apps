//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition;

@interface RecentPlayBLL : NSObject
{
    NSCondition *listLock;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (int)allCount;
- (_Bool)delItem:(id)arg1;
- (void)clearPlayList;
- (id)selectTodayMenunGuessLikeDetailsFromDB;
- (id)selectGuessULikeDetailsFromDB;
- (id)hashWithCertainPlaytime;
- (_Bool)updateItemPlayTime:(int)arg1 songid:(unsigned long long)arg2;
- (_Bool)addRecentPlayItem:(id)arg1 itemType:(int)arg2;
- (id)getAllSongs;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYDbBase.h"

@class NSString;

@interface QY_Favorite : QYDbBase
{
    NSString *Album_Id;
    long long Category_Id;
    NSString *PH_Title;
    NSString *Seek_Time;
    NSString *MEMBERID;
    long long tvorder;
    NSString *videoEpisodeTime;
    NSString *tvID;
    NSString *videoId;
    NSString *videoName;
    NSString *albumUrl;
    NSString *addtime;
    NSString *terminalId;
    NSString *allSet;
    NSString *nextTvid;
    NSString *nextVideoUrl;
    NSString *charge;
    NSString *islookEnd;
}

+ (id)getplayFavoriteWithTvid:(id)arg1;
+ (void)initQYFavorite:(id)arg1 ByResResult:(id)arg2;
+ (id)tableName;
@property(copy, nonatomic) NSString *islookEnd; // @synthesize islookEnd;
@property(copy, nonatomic) NSString *charge; // @synthesize charge;
@property(copy, nonatomic) NSString *nextVideoUrl; // @synthesize nextVideoUrl;
@property(copy, nonatomic) NSString *nextTvid; // @synthesize nextTvid;
@property(copy, nonatomic) NSString *allSet; // @synthesize allSet;
@property(copy, nonatomic) NSString *terminalId; // @synthesize terminalId;
@property(copy, nonatomic) NSString *addtime; // @synthesize addtime;
@property(copy, nonatomic) NSString *albumUrl; // @synthesize albumUrl;
@property(copy, nonatomic) NSString *videoName; // @synthesize videoName;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId;
@property(copy, nonatomic) NSString *tvID; // @synthesize tvID;
@property(copy, nonatomic) NSString *videoEpisodeTime; // @synthesize videoEpisodeTime;
@property(nonatomic) long long tvorder; // @synthesize tvorder;
@property(copy, nonatomic) NSString *MEMBERID; // @synthesize MEMBERID;
@property(copy, nonatomic) NSString *Seek_Time; // @synthesize Seek_Time;
@property(copy, nonatomic) NSString *PH_Title; // @synthesize PH_Title;
@property(nonatomic) long long Category_Id; // @synthesize Category_Id;
@property(copy, nonatomic) NSString *Album_Id; // @synthesize Album_Id;
- (void).cxx_destruct;
- (id)getplayFavorite:(long long)arg1;
- (_Bool)insertPlayHistory:(id)arg1;
- (long long)writePlayFavorite;
- (id)init;

@end


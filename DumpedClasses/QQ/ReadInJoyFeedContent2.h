//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ReadInJoyFeedArticleSummary;

@interface ReadInJoyFeedContent2 : NSObject
{
    unsigned long long _publishTime;
    NSString *_recommendStatement;
    unsigned long long _recommendUin;
    ReadInJoyFeedArticleSummary *_summary;
}

@property(retain) ReadInJoyFeedArticleSummary *summary; // @synthesize summary=_summary;
@property unsigned long long recommendUin; // @synthesize recommendUin=_recommendUin;
@property(copy) NSString *recommendStatement; // @synthesize recommendStatement=_recommendStatement;
@property unsigned long long publishTime; // @synthesize publishTime=_publishTime;
- (void)dealloc;

@end

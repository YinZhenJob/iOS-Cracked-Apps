//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBStoryVideoVisualEffectsItem.h"

@class UIImageView, UIView;

@interface TBStoryTimerFilterItem : TBStoryVideoVisualEffectsItem
{
    UIView *_timeView;
    UIImageView *_timeHourOne;
    UIImageView *_timeHourTwo;
    UIImageView *_timeColon;
    UIImageView *_timeMinuteOne;
    UIImageView *_timeMinuteTwo;
}

- (void)adjustTime;
- (void)updateItem;
- (_Bool)isPublish;
- (void)dealloc;

@end


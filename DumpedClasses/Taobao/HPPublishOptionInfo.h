//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class HPPublishPushMessageOption, NSString;

@interface HPPublishOptionInfo : TBJSONModel
{
    HPPublishPushMessageOption *_pushMessageOption;
    NSString *_activityId;
}

@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) HPPublishPushMessageOption *pushMessageOption; // @synthesize pushMessageOption=_pushMessageOption;
- (void).cxx_destruct;

@end

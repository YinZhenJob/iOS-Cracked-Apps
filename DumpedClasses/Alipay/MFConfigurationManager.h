//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCalendar, NSDateFormatter, NSMutableDictionary;

@interface MFConfigurationManager : NSObject
{
    NSDateFormatter *_dateFormatter;
    NSCalendar *_gregorian;
    NSMutableDictionary *_dataCenter;
}

+ (id)sharedMFConfigurationManager;
@property(retain, nonatomic) NSMutableDictionary *dataCenter; // @synthesize dataCenter=_dataCenter;
@property(retain, nonatomic) NSCalendar *gregorian; // @synthesize gregorian=_gregorian;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (id)calcLabel;
- (void)regEmoji:(id)arg1 withPathKey:(id)arg2;
- (void)registerEmojiMap;
- (id)getValueWithKey:(id)arg1;
- (id)init;
- (id)vrLabel;
- (id)richLabel;

@end

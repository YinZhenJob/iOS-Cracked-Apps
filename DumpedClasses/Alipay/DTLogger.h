//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DTLogger : NSObject
{
    NSString *_name;
}

+ (id)loggerWithName:(id)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)error:(id)arg1;
- (void)debug:(id)arg1;
- (void)info:(id)arg1;

@end

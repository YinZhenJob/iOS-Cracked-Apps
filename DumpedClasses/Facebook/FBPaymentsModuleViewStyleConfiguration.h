//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPaymentsViewStyleConfigurating-Protocol.h"

@class NSString;

@interface FBPaymentsModuleViewStyleConfiguration : NSObject <FBPaymentsViewStyleConfigurating>
{
}

- (long long)participantViewImageStyle;
- (id)separatorColor;
- (id)backgroundWashColor;
- (id)themeColor;
- (id)loadingIndicatorFactory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


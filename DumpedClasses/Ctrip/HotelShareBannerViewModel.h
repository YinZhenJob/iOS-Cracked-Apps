//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelShareBannerViewModel : CTBusinessBean
{
    NSString *_showURL;
    NSString *_showTitle;
    NSString *_shareTitle;
    NSString *_shareURL;
    NSString *_shareIcon;
    NSString *_shareMessage;
}

@property(copy, nonatomic) NSString *shareMessage; // @synthesize shareMessage=_shareMessage;
@property(copy, nonatomic) NSString *shareIcon; // @synthesize shareIcon=_shareIcon;
@property(copy, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
@property(copy, nonatomic) NSString *showURL; // @synthesize showURL=_showURL;
- (void).cxx_destruct;
- (id)init;

@end

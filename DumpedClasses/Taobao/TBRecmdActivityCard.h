//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRecmdCard.h"

@class UIImageView;

@interface TBRecmdActivityCard : TBRecmdCard
{
    UIImageView *_activityImgView;
}

+ (double)cardHeight;
+ (double)cardWidth;
@property(retain, nonatomic) UIImageView *activityImgView; // @synthesize activityImgView=_activityImgView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)addSubviews;
- (id)init;

@end

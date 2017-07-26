//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface RecommendInfoModel : CTBusinessBean
{
    NSString *recommendType;
    NSString *title;
    NSString *subTitle;
    NSString *content;
    NSString *remark;
    NSString *urlSchema;
    NSString *subContent;
    PriceType *price;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) PriceType *price; // @synthesize price;
@property(copy, nonatomic) NSString *subContent; // @synthesize subContent;
@property(copy, nonatomic) NSString *urlSchema; // @synthesize urlSchema;
@property(copy, nonatomic) NSString *remark; // @synthesize remark;
@property(copy, nonatomic) NSString *content; // @synthesize content;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *recommendType; // @synthesize recommendType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

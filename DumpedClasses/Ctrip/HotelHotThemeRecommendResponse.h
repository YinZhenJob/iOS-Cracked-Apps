//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, ResponseHead;

@interface HotelHotThemeRecommendResponse : CTBusinessBean
{
    int _resultCode;
    ResponseHead *_head;
    NSString *_resultMessage;
    NSMutableArray *_themeList;
}

@property(retain, nonatomic) NSMutableArray *themeList; // @synthesize themeList=_themeList;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) ResponseHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

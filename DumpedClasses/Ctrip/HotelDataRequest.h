//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, RequestHead;

@interface HotelDataRequest : CTBusinessBean
{
    RequestHead *_head;
    NSMutableArray *_downloadableDataList;
}

@property(retain, nonatomic) NSMutableArray *downloadableDataList; // @synthesize downloadableDataList=_downloadableDataList;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end


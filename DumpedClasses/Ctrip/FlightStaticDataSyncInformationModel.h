//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightStaticDataSyncInformationModel : CTBusinessBean
{
    int _operateType;
    int _dataType;
    NSString *_itemKey;
    NSString *_itemContent;
    long long _dataVersion;
}

@property(nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(copy, nonatomic) NSString *itemContent; // @synthesize itemContent=_itemContent;
@property(copy, nonatomic) NSString *itemKey; // @synthesize itemKey=_itemKey;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(nonatomic) int operateType; // @synthesize operateType=_operateType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end


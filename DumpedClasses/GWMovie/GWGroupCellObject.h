//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GWGroupCellObject : NSObject
{
    _Bool _isSubTitleWithDeleteLine;
    int _index;
    NSString *_title;
    NSString *_topIconImageFile;
    NSString *_subTitleString;
    unsigned long long _cellState;
}

@property(nonatomic) unsigned long long cellState; // @synthesize cellState=_cellState;
@property(nonatomic) _Bool isSubTitleWithDeleteLine; // @synthesize isSubTitleWithDeleteLine=_isSubTitleWithDeleteLine;
@property(copy, nonatomic) NSString *subTitleString; // @synthesize subTitleString=_subTitleString;
@property(copy, nonatomic) NSString *topIconImageFile; // @synthesize topIconImageFile=_topIconImageFile;
@property(nonatomic) int index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end


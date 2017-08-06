//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OMGH5TestItemModel : NSObject
{
    _Bool _readRecord;
    long long _h5id;
    NSString *_title;
    NSString *_h5Url;
    NSString *_desc;
    NSString *_thumbnail;
    NSString *_announcePic;
    long long _pv;
    double _updateTime;
    double _endTime;
    NSString *_webViewClassName;
}

+ (id)modelFromDict:(id)arg1;
@property(retain, nonatomic) NSString *webViewClassName; // @synthesize webViewClassName=_webViewClassName;
@property(nonatomic) _Bool readRecord; // @synthesize readRecord=_readRecord;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) long long pv; // @synthesize pv=_pv;
@property(retain, nonatomic) NSString *announcePic; // @synthesize announcePic=_announcePic;
@property(retain, nonatomic) NSString *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long h5id; // @synthesize h5id=_h5id;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

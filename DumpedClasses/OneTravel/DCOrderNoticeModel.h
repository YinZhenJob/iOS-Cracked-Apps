//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DCNoteInfoModel<Optional>, NSArray<Optional><DCOrderNoticeActionModel>, NSString<Optional>;

@interface DCOrderNoticeModel : JSONModel
{
    NSString<Optional> *_ad_id;
    NSString<Optional> *_url;
    NSString<Optional> *_click_close;
    NSArray<Optional><DCOrderNoticeActionModel> *_btns;
    DCNoteInfoModel<Optional> *_title;
    DCNoteInfoModel<Optional> *_content;
    NSString<Optional> *_image_url;
}

@property(copy, nonatomic) NSString<Optional> *image_url; // @synthesize image_url=_image_url;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *content; // @synthesize content=_content;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray<Optional><DCOrderNoticeActionModel> *btns; // @synthesize btns=_btns;
@property(copy, nonatomic) NSString<Optional> *click_close; // @synthesize click_close=_click_close;
@property(copy, nonatomic) NSString<Optional> *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString<Optional> *ad_id; // @synthesize ad_id=_ad_id;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCTipPushModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface DCOrderPushModel : DCTipPushModel
{
    NSString<Optional> *_order_new_status;
    NSString<Optional> *_route_status;
    NSNumber<Optional> *_activity_id;
    NSString<Optional> *_extra_text;
    NSString<Optional> *_is_order_strived;
    NSNumber<Optional> *_order_list_type;
    NSString<Optional> *_change_text;
    NSString<Optional> *_nav_text;
    NSString<Optional> *_tts_delay;
    NSNumber<Optional> *_is_play_in_back;
    NSString<Optional> *_back_url;
    NSString<Optional> *_ori_oid;
    NSString<Optional> *_extra_is_tmp_route;
    NSString<Optional> *_left_carpool_count;
    NSString<Optional> *_can_carpool;
    NSString<Optional> *_extra_carpool_id;
}

@property(copy, nonatomic) NSString<Optional> *extra_carpool_id; // @synthesize extra_carpool_id=_extra_carpool_id;
@property(copy, nonatomic) NSString<Optional> *can_carpool; // @synthesize can_carpool=_can_carpool;
@property(copy, nonatomic) NSString<Optional> *left_carpool_count; // @synthesize left_carpool_count=_left_carpool_count;
@property(copy, nonatomic) NSString<Optional> *extra_is_tmp_route; // @synthesize extra_is_tmp_route=_extra_is_tmp_route;
@property(copy, nonatomic) NSString<Optional> *ori_oid; // @synthesize ori_oid=_ori_oid;
@property(copy, nonatomic) NSString<Optional> *back_url; // @synthesize back_url=_back_url;
@property(copy, nonatomic) NSNumber<Optional> *is_play_in_back; // @synthesize is_play_in_back=_is_play_in_back;
@property(copy, nonatomic) NSString<Optional> *tts_delay; // @synthesize tts_delay=_tts_delay;
@property(copy, nonatomic) NSString<Optional> *nav_text; // @synthesize nav_text=_nav_text;
@property(copy, nonatomic) NSString<Optional> *change_text; // @synthesize change_text=_change_text;
@property(retain, nonatomic) NSNumber<Optional> *order_list_type; // @synthesize order_list_type=_order_list_type;
@property(copy, nonatomic) NSString<Optional> *is_order_strived; // @synthesize is_order_strived=_is_order_strived;
@property(copy, nonatomic) NSString<Optional> *extra_text; // @synthesize extra_text=_extra_text;
@property(retain, nonatomic) NSNumber<Optional> *activity_id; // @synthesize activity_id=_activity_id;
@property(copy, nonatomic) NSString<Optional> *route_status; // @synthesize route_status=_route_status;
@property(copy, nonatomic) NSString<Optional> *order_new_status; // @synthesize order_new_status=_order_new_status;
- (void).cxx_destruct;

@end


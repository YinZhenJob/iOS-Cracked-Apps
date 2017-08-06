//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SSThemedLabel, SSThemedView, TTAsyncCornerImageView;

@interface TTMessageNotificationTipsView : UIView
{
    SSThemedView *_calloutView;
    NSString *_actionType;
    NSString *_msgID;
    TTAsyncCornerImageView *_avatarView;
    SSThemedLabel *_nameLabel;
    SSThemedLabel *_actionLabel;
    SSThemedLabel *_contentLabel;
}

@property(retain, nonatomic) SSThemedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) SSThemedLabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) TTAsyncCornerImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID=_msgID;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) SSThemedView *calloutView; // @synthesize calloutView=_calloutView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tabCenterX:(double)arg2;

@end

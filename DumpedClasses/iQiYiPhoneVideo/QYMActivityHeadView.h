//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol QYMActivityHeadViewDelegate;

@interface QYMActivityHeadView : UIView
{
    UIView *_topLine;
    id <QYMActivityHeadViewDelegate> _delegate;
    id _ActivityData;
    UIImageView *_ActivityTitle;
    UILabel *_ActivityDetail;
    UIImageView *_ActivityIndicator;
}

@property(retain, nonatomic) UIImageView *ActivityIndicator; // @synthesize ActivityIndicator=_ActivityIndicator;
@property(retain, nonatomic) UILabel *ActivityDetail; // @synthesize ActivityDetail=_ActivityDetail;
@property(retain, nonatomic) UIImageView *ActivityTitle; // @synthesize ActivityTitle=_ActivityTitle;
@property(nonatomic) __weak id ActivityData; // @synthesize ActivityData=_ActivityData;
@property(nonatomic) __weak id <QYMActivityHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ClickActivityDetail:(id)arg1;
- (void)layoutSubviews;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end


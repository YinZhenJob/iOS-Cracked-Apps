//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYCinemaSessionData, UIButton, UIImageView, UILabel;
@protocol QYMUpcomingViewDelegate;

@interface QYMUpcomingView : UIView
{
    id <QYMUpcomingViewDelegate> _delegate;
    QYCinemaSessionData *_Data;
    UIImageView *_moviePic;
    UIImageView *_movieTimeBgImage;
    UILabel *_movieTimeLabel;
    UILabel *_movieNameLabel;
    UILabel *_watchNumberLabel;
    UIButton *_watchBtn;
    UIImageView *_watchImage;
}

@property(retain, nonatomic) UIImageView *watchImage; // @synthesize watchImage=_watchImage;
@property(retain, nonatomic) UIButton *watchBtn; // @synthesize watchBtn=_watchBtn;
@property(retain, nonatomic) UILabel *watchNumberLabel; // @synthesize watchNumberLabel=_watchNumberLabel;
@property(retain, nonatomic) UILabel *movieNameLabel; // @synthesize movieNameLabel=_movieNameLabel;
@property(retain, nonatomic) UILabel *movieTimeLabel; // @synthesize movieTimeLabel=_movieTimeLabel;
@property(retain, nonatomic) UIImageView *movieTimeBgImage; // @synthesize movieTimeBgImage=_movieTimeBgImage;
@property(retain, nonatomic) UIImageView *moviePic; // @synthesize moviePic=_moviePic;
@property(retain, nonatomic) QYCinemaSessionData *Data; // @synthesize Data=_Data;
@property(nonatomic) __weak id <QYMUpcomingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)heartBeatAnimation;
- (_Bool)movieEventDispatchWithType:(long long)arg1 data:(id)arg2;
- (void)doActionWithType:(id)arg1;
- (void)wantToSeeCancelAction:(id)arg1;
- (void)wantToSeeAction:(id)arg1;
- (void)toMovieCinemaList:(id)arg1;
- (void)moviePicTapAction:(id)arg1;
- (double)getHeightForView;
- (void)refreshMovieLikeSubViews;
- (void)refreshUpcomingView:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


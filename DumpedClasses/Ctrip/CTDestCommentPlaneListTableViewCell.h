//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTDestImageView, FlightModelModel, NSString, UIImageView, UILabel, UIView;

@interface CTDestCommentPlaneListTableViewCell : UITableViewCell
{
    UIView *_bottomLine;
    CTDestImageView *_logoImageView;
    UILabel *_logoNameLabel;
    UILabel *_planeNumberLabel;
    UILabel *_timeLabel;
    UILabel *_destLabel;
    UIImageView *_arrowImageView;
    UILabel *_commentedLabel;
    FlightModelModel *_flightModel;
    NSString *_dateString;
    NSString *_startTimeString;
    NSString *_endTimeString;
}

@property(retain, nonatomic) NSString *endTimeString; // @synthesize endTimeString=_endTimeString;
@property(retain, nonatomic) NSString *startTimeString; // @synthesize startTimeString=_startTimeString;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(retain, nonatomic) FlightModelModel *flightModel; // @synthesize flightModel=_flightModel;
@property(retain, nonatomic) UILabel *commentedLabel; // @synthesize commentedLabel=_commentedLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *destLabel; // @synthesize destLabel=_destLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *planeNumberLabel; // @synthesize planeNumberLabel=_planeNumberLabel;
@property(retain, nonatomic) UILabel *logoNameLabel; // @synthesize logoNameLabel=_logoNameLabel;
@property(retain, nonatomic) CTDestImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void).cxx_destruct;
- (void)initContraints;
- (void)transformTimeString:(id)arg1;
- (void)fillCellContentWith:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

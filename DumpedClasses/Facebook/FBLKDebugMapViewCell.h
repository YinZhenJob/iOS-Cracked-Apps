//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MKMapView, UILabel;

@interface FBLKDebugMapViewCell : UITableViewCell
{
    UILabel *_mapLabel;
    UILabel *_mapDetailLabel;
    MKMapView *_mapView;
}

@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) UILabel *mapDetailLabel; // @synthesize mapDetailLabel=_mapDetailLabel;
@property(readonly, nonatomic) UILabel *mapLabel; // @synthesize mapLabel=_mapLabel;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;

@end


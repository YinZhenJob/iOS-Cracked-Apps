//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTLocationDelegate.h"
#import "CTSBasicFloatViewDelegate.h"
#import "CTSDepartSelectDelegate.h"

@class BasicCoordinateModel, CTLocationClient, CTSCardDetailCacheBean, CTSDepartSelectView, CTSNCardDetailBaseCell, CTSNavigatorWidget, CTWxModel, NSString, TravelCardInformationModel, UIView, UIViewController;

@interface CTSCardDetailController : CTRootViewController <CTLocationDelegate, CTSDepartSelectDelegate, CTSBasicFloatViewDelegate>
{
    int _locationNationType;
    TravelCardInformationModel *_model;
    UIViewController *_h5ViewController;
    UIView *_addReusltView;
    CTSCardDetailCacheBean *_cardDetailCacheBean;
    CTSNCardDetailBaseCell *_detailContentCell;
    CTSDepartSelectView *_departSelectView;
    CTSNavigatorWidget *_navigator;
    CTWxModel *_shareModel;
    BasicCoordinateModel *_locationModel;
    CTLocationClient *_locationClient;
}

@property(nonatomic) int locationNationType; // @synthesize locationNationType=_locationNationType;
@property(retain, nonatomic) CTLocationClient *locationClient; // @synthesize locationClient=_locationClient;
@property(retain, nonatomic) BasicCoordinateModel *locationModel; // @synthesize locationModel=_locationModel;
@property(retain, nonatomic) CTWxModel *shareModel; // @synthesize shareModel=_shareModel;
@property(retain, nonatomic) CTSNavigatorWidget *navigator; // @synthesize navigator=_navigator;
@property(retain, nonatomic) CTSDepartSelectView *departSelectView; // @synthesize departSelectView=_departSelectView;
@property(retain, nonatomic) CTSNCardDetailBaseCell *detailContentCell; // @synthesize detailContentCell=_detailContentCell;
@property(retain, nonatomic) CTSCardDetailCacheBean *cardDetailCacheBean; // @synthesize cardDetailCacheBean=_cardDetailCacheBean;
@property(retain, nonatomic) UIView *addReusltView; // @synthesize addReusltView=_addReusltView;
@property(nonatomic) __weak UIViewController *h5ViewController; // @synthesize h5ViewController=_h5ViewController;
@property(retain, nonatomic) TravelCardInformationModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)hasOpenLocationService;
- (void)departSelectView:(id)arg1 selectDepartCoordinate:(struct CLLocationCoordinate2D)arg2 departName:(id)arg3;
- (void)sendGetCardAdditionalInfoService;
- (void)maskView:(id)arg1 willRemoveFromSuperView:(id)arg2;
- (void)ctsFloatViewMoveOutAnimationComplete;
- (id)getDepartList;
- (void)navigationToThere;
- (id)coordinateModel;
- (id)placeNameString;
- (void)locationClient:(id)arg1 locationSuccessWithGeoAddress:(id)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)showSharePlatformUI;
- (void)shareCardAction;
- (void)addToCalendarAction;
- (void)getLocationCoordinate;
- (void)initBaseData;
- (void)getCtsCardDetailCell;
- (void)sendLocationService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


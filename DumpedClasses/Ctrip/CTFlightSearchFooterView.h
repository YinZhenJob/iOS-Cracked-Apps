//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CRNViewDelegate.h"
#import "CTFlightButtonDelegate.h"
#import "CTFlightImageViewDelegate.h"
#import "CTImageViewDelegate.h"

@class CRNView, CTFlightImageView, CTFlightInquireCacheBean, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIImageView, UIScrollView, UITapGestureRecognizer;

@interface CTFlightSearchFooterView : UIView <CTImageViewDelegate, CTFlightButtonDelegate, CTFlightImageViewDelegate, CRNViewDelegate>
{
    CRNView *crnView;
    double initTime;
    double resetHeightTime;
    double errorTime;
    double viewWillAppearTime;
    NSMutableArray *logArray;
    float infoContainViewHeight;
    float footerViewHeight;
    _Bool needRefreshFlag;
    UIView *promiseView;
    UITapGestureRecognizer *promiseTapGR;
    UIScrollView *historyView;
    CDUnknownBlockType inquireTapCallback;
    UIView *impMsgView;
    UIView *commMsgView;
    UIView *userVipView;
    UIView *changeInfoView;
    _Bool hasShowedPublicNotice;
    _Bool _isLoadIconImage;
    _Bool _needDelayRun;
    NSLayoutConstraint *_searchButtonToTop;
    NSLayoutConstraint *_searchButtonHeight;
    NSLayoutConstraint *_footCornerViewHeight;
    NSLayoutConstraint *_btnSearchToRight;
    NSLayoutConstraint *_btnSearchToLeft;
    NSLayoutConstraint *_infoContainerViewTopContraint;
    UIView *_infoContainerView;
    UIImageView *_iconImage;
    double _preLabelLeft;
    double _totalLabelWidth;
    CTFlightImageView *_iconFlightImageView;
    UIImageView *_iconMedalImageView;
    double _crnEntranceHeight;
    long long _crnABTVersion;
    id <CTFlightSearchFooterViewDelegate> _footerDelegate;
    CTFlightInquireCacheBean *_inquireCache;
    UIButton *_buttonSearch;
    UIView *_tableFooterCornerView;
    NSLayoutConstraint *_infoContainerViewHeightConstant;
}

@property(nonatomic) __weak NSLayoutConstraint *infoContainerViewHeightConstant; // @synthesize infoContainerViewHeightConstant=_infoContainerViewHeightConstant;
@property(nonatomic) __weak UIView *tableFooterCornerView; // @synthesize tableFooterCornerView=_tableFooterCornerView;
@property(retain, nonatomic) UIButton *buttonSearch; // @synthesize buttonSearch=_buttonSearch;
@property(retain, nonatomic) CTFlightInquireCacheBean *inquireCache; // @synthesize inquireCache=_inquireCache;
@property(nonatomic) __weak id <CTFlightSearchFooterViewDelegate> footerDelegate; // @synthesize footerDelegate=_footerDelegate;
@property(nonatomic) long long crnABTVersion; // @synthesize crnABTVersion=_crnABTVersion;
@property(nonatomic) _Bool needDelayRun; // @synthesize needDelayRun=_needDelayRun;
@property(nonatomic) double crnEntranceHeight; // @synthesize crnEntranceHeight=_crnEntranceHeight;
@property(retain, nonatomic) UIImageView *iconMedalImageView; // @synthesize iconMedalImageView=_iconMedalImageView;
@property(nonatomic) _Bool isLoadIconImage; // @synthesize isLoadIconImage=_isLoadIconImage;
@property(retain, nonatomic) CTFlightImageView *iconFlightImageView; // @synthesize iconFlightImageView=_iconFlightImageView;
@property(nonatomic) double totalLabelWidth; // @synthesize totalLabelWidth=_totalLabelWidth;
@property(nonatomic) double preLabelLeft; // @synthesize preLabelLeft=_preLabelLeft;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIView *infoContainerView; // @synthesize infoContainerView=_infoContainerView;
@property(retain, nonatomic) NSLayoutConstraint *infoContainerViewTopContraint; // @synthesize infoContainerViewTopContraint=_infoContainerViewTopContraint;
@property(retain, nonatomic) NSLayoutConstraint *btnSearchToLeft; // @synthesize btnSearchToLeft=_btnSearchToLeft;
@property(retain, nonatomic) NSLayoutConstraint *btnSearchToRight; // @synthesize btnSearchToRight=_btnSearchToRight;
@property(retain, nonatomic) NSLayoutConstraint *footCornerViewHeight; // @synthesize footCornerViewHeight=_footCornerViewHeight;
@property(retain, nonatomic) NSLayoutConstraint *searchButtonHeight; // @synthesize searchButtonHeight=_searchButtonHeight;
@property(nonatomic) __weak NSLayoutConstraint *searchButtonToTop; // @synthesize searchButtonToTop=_searchButtonToTop;
- (void).cxx_destruct;
- (void)genCRNEntranceLog;
- (void)resizeRNEntrance:(double)arg1;
- (void)genCRNEntrance:(double)arg1;
- (void)genCRNEntranceDelay;
- (void)resetCRNEntrance;
- (_Bool)showCRNBar;
- (void)crnViewWillAppear:(id)arg1;
- (void)jsbundleExecuteError:(id)arg1 errorCode:(id)arg2;
- (void)infoBtnClickedAction:(id)arg1;
- (id)genOrderChange:(id)arg1;
- (id)genChangedInfoView;
- (float)getChangedInfoViewHeight;
- (void)removeChangedInfoFromSuperview;
- (void)appendChangedInfoView;
- (_Bool)hasChangedInfo;
- (void)doActivityPop;
- (id)genVIPbutton;
- (id)genUserVipView;
- (float)getUserVipViewHeight;
- (void)removeUserVipFromSuperview;
- (void)appendUserVipView;
- (_Bool)hasUserVip;
- (void)flightImageViewLoadSuccessToSetFrame:(id)arg1;
- (void)doMedalAction;
- (id)flightMedalButton;
- (id)genUserMedalImg;
- (id)genUserLevelImg;
- (id)appendUserInfo:(id)arg1 withSufStr:(id)arg2;
- (_Bool)hasUserMedal;
- (id)genCommonMsgView;
- (float)getCommonMsgViewHeight;
- (void)removeCommonMsgFromSuperview;
- (void)appendCommonMsgView;
- (_Bool)hasCommonMsg;
- (id)genImpMsgView:(id)arg1;
- (float)getImpMsgViewHeight;
- (void)removeImpMsgViewFromSuperView;
- (void)appendImpMsgView;
- (_Bool)hasImpMsgViewShowInLayer;
- (void)onTapClearInquireHistory:(id)arg1;
- (void)onTapInquireHistoryButton:(id)arg1;
- (void)registHistoryCallbackWithTapItemCallback:(CDUnknownBlockType)arg1;
- (_Bool)hasHistoryData;
- (id)genHistoryView;
- (float)getHistoryViewHeight;
- (void)removeHistoryViewFromSuperView;
- (void)appendHistoryView;
- (void)showFlightPromiseView;
- (void)imageViewLoadImageFailed:(id)arg1 error:(id)arg2;
- (void)imageViewLoadImageSucceed:(id)arg1;
- (id)getPromiseImageUrl;
- (float)getPromiseViewHeight;
- (id)genPromiseImageView;
- (id)genPromiseView;
- (void)removePromiseViewFromSuperView;
- (void)appendPromiseView;
- (void)showRoundCornerFooter:(_Bool)arg1;
- (void)initViewSearchButton;
- (float)getSearchButtonHeight;
- (void)resetSubviews;
- (void)removeAllCustomSubView;
- (float)getSearchFooterViewHeight;
- (void)refreshSearchFooterView;
- (id)genNormalLabel;
- (void)activityMessageImage:(id)arg1;
- (struct CGSize)getImageSize:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)initView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

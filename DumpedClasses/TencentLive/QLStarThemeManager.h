//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLImageLoadDelegate.h"
#import "QLRequestModelDelegate.h"
#import "QLTabBarConfigProtocol.h"
#import "QLTopicsPopMenuControlDataSourceProtocol.h"
#import "QLTopicsPopMenuDelegate.h"
#import "TimelineEngineDelegate.h"

@class NSMutableArray, NSString, QLAccountBindInfoModel, QLStarThemeAlertHelper, QLStarThemeHistoryModel, QLStarThemeItem;

@interface QLStarThemeManager : NSObject <QLImageLoadDelegate, QLRequestModelDelegate, QLTopicsPopMenuDelegate, QLTopicsPopMenuControlDataSourceProtocol, TimelineEngineDelegate, QLTabBarConfigProtocol>
{
    _Bool _needShowStarThemeTip;
    _Bool _notGetCurStarThemeForUsr;
    NSString *_currentStarID;
    NSMutableArray *_toDownloadList;
    NSString *_curDownloadImg;
    long long _toDownloadCount;
    long long _totalRetryTimes;
    NSString *_toSetStarID;
    QLStarThemeItem *_toSetStarItem;
    NSString *_headImgURL;
    QLStarThemeItem *_curStarThemeItem;
    QLStarThemeItem *_selectItem;
    QLAccountBindInfoModel *_accountBindInfoModel;
    QLStarThemeHistoryModel *_starThemeHistoryModel;
    NSString *_shareJumpUrl;
    QLStarThemeAlertHelper *_alertHelper;
}

+ (id)instance;
@property(retain, nonatomic) QLStarThemeAlertHelper *alertHelper; // @synthesize alertHelper=_alertHelper;
@property(copy, nonatomic) NSString *shareJumpUrl; // @synthesize shareJumpUrl=_shareJumpUrl;
@property(retain, nonatomic) QLStarThemeHistoryModel *starThemeHistoryModel; // @synthesize starThemeHistoryModel=_starThemeHistoryModel;
@property(retain, nonatomic) QLAccountBindInfoModel *accountBindInfoModel; // @synthesize accountBindInfoModel=_accountBindInfoModel;
@property(retain, nonatomic) QLStarThemeItem *selectItem; // @synthesize selectItem=_selectItem;
@property(retain, nonatomic) QLStarThemeItem *curStarThemeItem; // @synthesize curStarThemeItem=_curStarThemeItem;
@property(retain, nonatomic) NSString *headImgURL; // @synthesize headImgURL=_headImgURL;
@property(retain, nonatomic) QLStarThemeItem *toSetStarItem; // @synthesize toSetStarItem=_toSetStarItem;
@property(retain, nonatomic) NSString *toSetStarID; // @synthesize toSetStarID=_toSetStarID;
@property(nonatomic) long long totalRetryTimes; // @synthesize totalRetryTimes=_totalRetryTimes;
@property(nonatomic) long long toDownloadCount; // @synthesize toDownloadCount=_toDownloadCount;
@property(retain, nonatomic) NSString *curDownloadImg; // @synthesize curDownloadImg=_curDownloadImg;
@property(retain, nonatomic) NSMutableArray *toDownloadList; // @synthesize toDownloadList=_toDownloadList;
@property(retain, nonatomic) NSString *currentStarID; // @synthesize currentStarID=_currentStarID;
@property(nonatomic) _Bool notGetCurStarThemeForUsr; // @synthesize notGetCurStarThemeForUsr=_notGetCurStarThemeForUsr;
@property(nonatomic) _Bool needShowStarThemeTip; // @synthesize needShowStarThemeTip=_needShowStarThemeTip;
- (void).cxx_destruct;
- (id)tabbarButtonConfig:(unsigned long long)arg1;
- (void)vipStateChange:(id)arg1;
- (void)clearRecoverStarThemeInfo;
- (void)tryShowVipStarThemeAlert;
- (void)dealloc;
- (void)doStarCoverThemeAnimation:(double)arg1;
- (void)action:(id)arg1 didShareActionFinish:(_Bool)arg2 actionType:(unsigned long long)arg3;
- (unsigned long long)actionShouldSupportActionTypeMask:(id)arg1;
- (id)sharePictureList;
- (id)shareContentTail;
- (id)shareContent;
- (id)shareSingleTitle;
- (unsigned long long)shareStyle;
- (id)shareExtendInfo;
- (id)shareFromPage;
- (unsigned long long)shareDataType;
- (id)shareURL;
- (id)shareImage;
- (id)shareImageURL;
- (id)shareSubTitle;
- (id)shareTitle;
- (id)shareID;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)didTapMaskView;
- (void)clickCloseBtn:(id)arg1;
- (void)dimissFromSupper;
- (void)shareStarTheme;
- (void)clickShareStar:(id)arg1;
- (void)hideShareTipView;
- (id)topicPopMenu:(id)arg1 clickedMenuItemTag:(long long)arg2;
- (id)topicsPopMenuItemsForMenuControl:(id)arg1;
- (void)showStarThemeShareTip:(id)arg1;
- (id)getCurrentStarHeaderURL;
- (id)getDefaultStarThemeItem;
- (void)setDefaultTheme;
- (id)getAccompanyTime;
- (long long)getAccompanyDuration;
- (id)getStarLoadingView;
- (id)getStarPullFreshCover;
- (struct CGSize)getStarPullFreshCoverSize;
- (_Bool)isStarPullFreshCoverExsist;
- (_Bool)hasStarThemeCoverInTab:(id)arg1;
- (void)doShowStarThemeTabCover;
- (void)showStarThemeTabCover;
- (id)getCurrentStarThemeCoverButtonUrl;
- (_Bool)currentStartThemeExsist;
- (id)getCurrentStarThemeItemDirectly;
- (id)getCurrentStarThemeItem;
- (void)getSingleStarThemeDetail:(id)arg1;
- (void)detectNewStarTheme;
- (void)reportLastShownStarTheame;
- (void)reportUsinStarTheme:(id)arg1;
- (id)getCurrentStarThemeID;
- (_Bool)isAllImageDownload:(id)arg1;
- (void)didFinishDownloadImage:(id)arg1 withIsGif:(_Bool)arg2;
- (void)didFailLoadWithError:(id)arg1 forURL:(id)arg2;
- (int)starDownloadImage:(id)arg1;
- (int)setStarThemeWithItem:(id)arg1;
- (void)clearNewRedPoint;
- (_Bool)isShowingRedDot;
- (_Bool)isShouldOpenDIY;
- (_Bool)isShouldShowStarTheme;
- (void)engineDidFinishLoad:(id)arg1;
- (void)engineDidFailed:(id)arg1;
- (void)requestUpdate;
- (void)update;
- (void)tellStartUseStarTheme:(id)arg1;
- (void)tellEndUseStarTheme;
- (void)synLocalStarThemeToServerForOldVersion;
- (void)starThemeLogoutAction;
- (void)getCurStarThemeForUser;
- (void)starThemeLoginSuccessAction;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

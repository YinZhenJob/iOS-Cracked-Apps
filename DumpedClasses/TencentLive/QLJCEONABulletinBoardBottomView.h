//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLActionDelegate.h"
#import "QLShareDataSource.h"

@class NSArray, NSData, NSDictionary, NSMutableArray, NSString, QLHTMLFontLabel, QLJCEMiniProgramInfo, QLJCEONABulletinBoard, QLMovieItem, QLMutilCommentsView, QLRichLabel, UIButton, UIImage, UIUserInfoView, UIVideoTagView, UIViewController;

@interface QLJCEONABulletinBoardBottomView : UIView <QLActionDelegate, QLShareDataSource>
{
    NSString *mainTitle;
    NSString *subTitle;
    NSString *userIconUrl;
    NSString *userName;
    _Bool hasUserName;
    _Bool hasUserIcon;
    _Bool hasVideoTag;
    _Bool showDislikeBtn;
    NSMutableArray *videoTagItemArr;
    QLHTMLFontLabel *mainTitleLabel;
    UIButton *forwardBtn;
    QLRichLabel *subTitleLabel;
    UIUserInfoView *userInfoView;
    UIVideoTagView *videoTagView;
    UIButton *dislikeBtn;
    QLJCEONABulletinBoard *correspondJCObject;
    NSMutableArray *allItems;
    QLMutilCommentsView *_commentsView;
}

+ (double)heightForViewByJCEObject:(id)arg1;
@property(retain, nonatomic) QLMutilCommentsView *commentsView; // @synthesize commentsView=_commentsView;
@property(retain, nonatomic) NSMutableArray *allItems; // @synthesize allItems;
@property(retain, nonatomic) QLJCEONABulletinBoard *correspondJCObject; // @synthesize correspondJCObject;
@property(retain, nonatomic) UIButton *dislikeBtn; // @synthesize dislikeBtn;
@property(retain, nonatomic) UIVideoTagView *videoTagView; // @synthesize videoTagView;
@property(retain, nonatomic) UIUserInfoView *userInfoView; // @synthesize userInfoView;
@property(retain, nonatomic) QLRichLabel *subTitleLabel; // @synthesize subTitleLabel;
@property(retain, nonatomic) UIButton *forwardBtn; // @synthesize forwardBtn;
@property(retain, nonatomic) QLHTMLFontLabel *mainTitleLabel; // @synthesize mainTitleLabel;
@property(retain, nonatomic) NSMutableArray *videoTagItemArr; // @synthesize videoTagItemArr;
- (void).cxx_destruct;
- (void)action:(id)arg1 didPressMomentButton:(id)arg2;
- (unsigned long long)actionShouldSupportActionTypeMask:(id)arg1;
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) NSString *shareSubTitle;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;
- (void)updateDataByObject:(id)arg1;
- (void)didTapDislikeBtn;
- (void)didTapForwardBtn;
- (void)layoutSubviews;
- (void)refreshSubviewsFrame;
- (void)resetAllItems;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) NSString *shareActionUrl;
@property(readonly, nonatomic) NSString *shareContent;
@property(readonly, nonatomic) NSString *shareContentTail;
@property(readonly, nonatomic) UIViewController *shareController;
@property(readonly, nonatomic) NSString *shareCopyContent;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) NSData *shareGifData;
@property(readonly, nonatomic) QLJCEMiniProgramInfo *shareMiniProgramInfo;
@property(readonly, nonatomic) NSData *shareOriImgData;
@property(readonly, nonatomic) NSArray *sharePictureList;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly, nonatomic) NSString *shareSingleTitle;
@property(readonly, nonatomic) unsigned long long shareStyle;
@property(readonly, nonatomic) QLMovieItem *shareVideoInfo;
@property(readonly) Class superclass;

@end


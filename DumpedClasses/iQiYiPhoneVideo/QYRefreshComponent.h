//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber, QYReactURefreshHeader, QYRefreshAutoFooter, QYRefreshAutoGifFooter, QYRefreshAutoNormalFooter, QYRefreshFooter, QYRefreshGifFooter, QYRefreshGifHeader, QYRefreshHeader, QYRefreshNormalFooter, RCTScrollView;

@interface QYRefreshComponent : UIView
{
    QYReactURefreshHeader *_refreshDefaultHeader;
    QYRefreshHeader *_refreshHeader;
    QYRefreshGifHeader *_refreshGifHeader;
    QYRefreshFooter *_refreshFooter;
    QYRefreshGifFooter *_refreshGifFooter;
    QYRefreshNormalFooter *_refreshNormalFooter;
    QYRefreshAutoFooter *_refreshAutoFooter;
    QYRefreshAutoGifFooter *_refreshAutoGifFooter;
    QYRefreshAutoNormalFooter *_refreshAutoNormalFooter;
    RCTScrollView *_scrollView;
    NSNumber *_componentReactTag;
}

@property(retain, nonatomic) NSNumber *componentReactTag; // @synthesize componentReactTag=_componentReactTag;
@property(retain, nonatomic) RCTScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) QYRefreshAutoNormalFooter *refreshAutoNormalFooter; // @synthesize refreshAutoNormalFooter=_refreshAutoNormalFooter;
@property(retain, nonatomic) QYRefreshAutoGifFooter *refreshAutoGifFooter; // @synthesize refreshAutoGifFooter=_refreshAutoGifFooter;
@property(retain, nonatomic) QYRefreshAutoFooter *refreshAutoFooter; // @synthesize refreshAutoFooter=_refreshAutoFooter;
@property(retain, nonatomic) QYRefreshNormalFooter *refreshNormalFooter; // @synthesize refreshNormalFooter=_refreshNormalFooter;
@property(retain, nonatomic) QYRefreshGifFooter *refreshGifFooter; // @synthesize refreshGifFooter=_refreshGifFooter;
@property(retain, nonatomic) QYRefreshFooter *refreshFooter; // @synthesize refreshFooter=_refreshFooter;
@property(retain, nonatomic) QYRefreshGifHeader *refreshGifHeader; // @synthesize refreshGifHeader=_refreshGifHeader;
@property(retain, nonatomic) QYRefreshHeader *refreshHeader; // @synthesize refreshHeader=_refreshHeader;
@property(retain, nonatomic) QYReactURefreshHeader *refreshDefaultHeader; // @synthesize refreshDefaultHeader=_refreshDefaultHeader;
- (void).cxx_destruct;
- (void)addSubview:(id)arg1;
- (void)layoutSubviews;

@end


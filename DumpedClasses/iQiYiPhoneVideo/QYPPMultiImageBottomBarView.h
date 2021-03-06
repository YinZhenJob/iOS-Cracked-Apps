//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol QYPPMultiImageBottomBarViewDelegate;

@interface QYPPMultiImageBottomBarView : UIView
{
    long long _barViewStyle;
    id <QYPPMultiImageBottomBarViewDelegate> _delegate;
    UIButton *_detailButton;
    UIButton *_saveButton;
    UIButton *_commentButton;
    UIButton *_likeButton;
    UIView *_likeAndCommentContainerView;
    UIView *_seperatorOfLikeAndComment;
}

@property(retain, nonatomic) UIView *seperatorOfLikeAndComment; // @synthesize seperatorOfLikeAndComment=_seperatorOfLikeAndComment;
@property(retain, nonatomic) UIView *likeAndCommentContainerView; // @synthesize likeAndCommentContainerView=_likeAndCommentContainerView;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(nonatomic) __weak id <QYPPMultiImageBottomBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long barViewStyle; // @synthesize barViewStyle=_barViewStyle;
- (void).cxx_destruct;
- (void)clickLikeButton:(id)arg1;
- (void)clickCommentButton:(id)arg1;
- (void)clickSaveButton:(id)arg1;
- (void)clickDetailButton:(id)arg1;
- (void)updateViewWithLikeState:(_Bool)arg1 likeCount:(long long)arg2 commentCount:(long long)arg3;
- (void)layoutSubviews;
- (id)createButtonWithFrame:(struct CGRect)arg1 title:(id)arg2 fontSize:(float)arg3 backgroundColor:(id)arg4 customLayerBorder:(_Bool)arg5;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 viewStyle:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end


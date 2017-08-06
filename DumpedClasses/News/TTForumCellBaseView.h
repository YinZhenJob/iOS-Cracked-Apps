//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreCellViewBase.h"

@class SSThemedView, TTThreadActionView, TTThreadAvatarView, TTThreadCommentView, TTThreadContentView, TTThreadImageView, TTThreadLocationView, TTThreadTitleView;

@interface TTForumCellBaseView : ExploreCellViewBase
{
    _Bool _isViewHighlighted;
    id _orderedData;
    unsigned long long _refer;
    TTThreadAvatarView *_avatarView;
    TTThreadTitleView *_titleView;
    TTThreadContentView *_contentView;
    TTThreadImageView *_imagesView;
    TTThreadLocationView *_locationView;
    TTThreadCommentView *_commentView;
    TTThreadActionView *_actionView;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) TTThreadActionView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) TTThreadCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) TTThreadLocationView *locationView; // @synthesize locationView=_locationView;
@property(retain, nonatomic) TTThreadImageView *imagesView; // @synthesize imagesView=_imagesView;
@property(retain, nonatomic) TTThreadContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TTThreadTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TTThreadAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool isViewHighlighted; // @synthesize isViewHighlighted=_isViewHighlighted;
@property(nonatomic) unsigned long long refer; // @synthesize refer=_refer;
@property(retain, nonatomic) id orderedData; // @synthesize orderedData=_orderedData;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)setComponentsColor:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)cellData;
- (void)refreshWithData:(id)arg1;
- (void)layoutBottomLine;
- (void)refreshUI;
- (void)createComponent;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;

@end

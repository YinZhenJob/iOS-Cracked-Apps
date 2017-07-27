//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class QLSImageView, QLTopicsPopMenuItemInfo, UIImageView, UILabel;

@interface QLTopicsPopMenuItemView : UIControl
{
    QLTopicsPopMenuItemInfo *_correspondItem;
    unsigned long long _correspondAlignment;
    QLSImageView *_imageMark;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_bottomLine;
    UILabel *_helperLabel;
    UIImageView *_arrowImageView;
    struct CGSize _sizeOfSuperView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *helperLabel; // @synthesize helperLabel=_helperLabel;
@property(nonatomic) struct CGSize sizeOfSuperView; // @synthesize sizeOfSuperView=_sizeOfSuperView;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QLSImageView *imageMark; // @synthesize imageMark=_imageMark;
@property(nonatomic) unsigned long long correspondAlignment; // @synthesize correspondAlignment=_correspondAlignment;
@property(retain, nonatomic) QLTopicsPopMenuItemInfo *correspondItem; // @synthesize correspondItem=_correspondItem;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (struct CGSize)imageSizeWithItemInfo:(id)arg1;
- (struct CGSize)getTitleSizeFor:(unsigned long long)arg1 itemInfo:(id)arg2;
- (struct CGSize)subTitleSizeWithItemInfo:(id)arg1;
- (struct CGSize)titleSizeWithItemInfo:(id)arg1;
- (id)acquireStarImageViewWithCopy:(_Bool)arg1;
- (void)updateUIContentIfNeed;
- (long long)compare:(id)arg1;
- (void)layoutSubviews;
- (id)initWithPopMenuItemInfo:(id)arg1 alignment:(unsigned long long)arg2;
- (void)dealloc;

@end

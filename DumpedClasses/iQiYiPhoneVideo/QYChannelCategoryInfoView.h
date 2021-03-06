//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYChannelCategoryInfo, QY_Category, UIButton, UIImageView, UILabel;

@interface QYChannelCategoryInfoView : UIView
{
    int _type;
    QYChannelCategoryInfo *_categoryInfo;
    QY_Category *_category;
    CDUnknownBlockType _selectCategoryViewHandler;
    CDUnknownBlockType _selectNewCategoryHandler;
    UIButton *_categoryBtn;
    UILabel *_categoryLabel;
    UIImageView *_categoryIcon;
    UIView *_selectedView;
}

@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UIImageView *categoryIcon; // @synthesize categoryIcon=_categoryIcon;
@property(retain, nonatomic) UILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(retain, nonatomic) UIButton *categoryBtn; // @synthesize categoryBtn=_categoryBtn;
@property(copy, nonatomic) CDUnknownBlockType selectNewCategoryHandler; // @synthesize selectNewCategoryHandler=_selectNewCategoryHandler;
@property(copy, nonatomic) CDUnknownBlockType selectCategoryViewHandler; // @synthesize selectCategoryViewHandler=_selectCategoryViewHandler;
@property(retain, nonatomic) QY_Category *category; // @synthesize category=_category;
@property(retain, nonatomic) QYChannelCategoryInfo *categoryInfo; // @synthesize categoryInfo=_categoryInfo;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;
- (void)updateNewCategoryInfoView:(id)arg1;
- (void)updateCategoryInfoView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutCategoryLabel;
- (void)addCategoryLabel;
- (struct CGRect)categoryLabelFrame;
- (void)layoutCategoryIcon;
- (void)addCategoryIcon;
- (struct CGRect)categoryIconFrame;
- (void)touchCategoryBtnCancel:(id)arg1;
- (void)touchCategoryBtnDown:(id)arg1;
- (void)clickCategoryButton:(id)arg1;
- (void)addcategoryButton;

@end


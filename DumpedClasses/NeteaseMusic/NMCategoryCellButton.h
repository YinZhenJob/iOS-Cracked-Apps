//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NMCategory, UIImageView, UIView;

@interface NMCategoryCellButton : UIButton
{
    UIView *_selectedIconBgView;
    UIView *_hotIconBgView;
    _Bool _categorySelected;
    NMCategory *_category;
    UIImageView *_selectedIcon;
    UIImageView *_hotIcon;
    double _titleFontSize;
}

@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(nonatomic) _Bool categorySelected; // @synthesize categorySelected=_categorySelected;
@property(retain, nonatomic) UIImageView *hotIcon; // @synthesize hotIcon=_hotIcon;
@property(retain, nonatomic) UIImageView *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) NMCategory *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;
- (void)setCategoryHot:(_Bool)arg1;
- (void)handleHotIconImageForTheme:(id)arg1;
- (id)hotIconImageForTheme:(id)arg1;
- (id)selectedIconImageForTheme:(id)arg1;
- (void)handleSelectedIconImageForTheme:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


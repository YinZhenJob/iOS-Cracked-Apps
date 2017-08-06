//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SGridCellInfoModel, UIButton, UILabel;

@interface SGridInfoTableViewCell : UITableViewCell
{
    _Bool _currentIsOpen;
    SGridCellInfoModel *_infoModel;
    CDUnknownBlockType _openOrCloseInfoBlock;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_openButton;
}

@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool currentIsOpen; // @synthesize currentIsOpen=_currentIsOpen;
@property(copy, nonatomic) CDUnknownBlockType openOrCloseInfoBlock; // @synthesize openOrCloseInfoBlock=_openOrCloseInfoBlock;
@property(retain, nonatomic) SGridCellInfoModel *infoModel; // @synthesize infoModel=_infoModel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutCell;
- (void)layoutSubviews;
- (void)openOrCloseInfo;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

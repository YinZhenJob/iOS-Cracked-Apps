//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSCustomActionCell.h"

@class UILabel, UIView;

@interface CTSMemoCell : CTSCustomActionCell
{
    UIView *_memoContainerView;
    UILabel *_titleLabel;
    UILabel *_memoContentLabel;
}

@property(nonatomic) __weak UILabel *memoContentLabel; // @synthesize memoContentLabel=_memoContentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *memoContainerView; // @synthesize memoContainerView=_memoContainerView;
- (void).cxx_destruct;
- (id)customizedContentView;
- (void)setCellWithModel:(id)arg1 index:(id)arg2 delegate:(id)arg3;
- (void)awakeFromNib;

@end

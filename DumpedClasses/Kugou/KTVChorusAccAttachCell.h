//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeImageView, KTVButton, UIView;

@interface KTVChorusAccAttachCell : KFCommedTableViewCell
{
    _Bool _showToTop;
    id <KTVChorusAccAttachCellDelegate> _delegate;
    KTVButton *_topButton;
    KTVButton *_deleteButton;
    KGThemeImageView *_bg;
    UIView *_mask;
}

@property(nonatomic) _Bool showToTop; // @synthesize showToTop=_showToTop;
@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) KGThemeImageView *bg; // @synthesize bg=_bg;
@property(retain, nonatomic) KTVButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) KTVButton *topButton; // @synthesize topButton=_topButton;
@property(nonatomic) __weak id <KTVChorusAccAttachCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionDelete;
- (void)actionTop;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateTop:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

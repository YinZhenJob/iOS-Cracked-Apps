//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGDownloadSectionView.h"

@class KGThemeButton;

@interface MVDownLoadManageTableViewHeaderView : KGDownloadSectionView
{
    _Bool _isFooterView;
    KGThemeButton *_tipButton;
    KGThemeButton *_expandButton;
    KGThemeButton *_operationButton;
}

@property(retain, nonatomic) KGThemeButton *operationButton; // @synthesize operationButton=_operationButton;
@property(retain, nonatomic) KGThemeButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) KGThemeButton *tipButton; // @synthesize tipButton=_tipButton;
- (void).cxx_destruct;
- (void)setTitleWithCount:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isFooterView:(_Bool)arg2;

@end


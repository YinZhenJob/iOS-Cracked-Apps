//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHTweetbotAvatarDetailCell.h"

@class PTHShapeView, PTHTweetbotDirectMessageThread;

@interface PTHTweetbotDirectMessageThreadCell : PTHTweetbotAvatarDetailCell
{
    PTHShapeView *_readIndicator;
}

+ (double)textHeight;
+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)colorThemeDidChange;
- (void)setItem:(id)arg1;
- (void)_updateDirectMessageThread;
@property(readonly, nonatomic) PTHTweetbotDirectMessageThread *thread;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


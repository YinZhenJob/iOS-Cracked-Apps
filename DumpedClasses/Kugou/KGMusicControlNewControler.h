//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KGMusicTableViewControllDelegate.h"
#import "UITableViewDelegate.h"

@class KGMusicControlView, KGViewController, NSMutableArray, NSString, PlayTypeListTableViewController, UIImageView, UIView;

@interface KGMusicControlNewControler : NSObject <KGMusicTableViewControllDelegate, UITableViewDelegate>
{
    _Bool _isShowBottomMenu;
    _Bool _isFromLocalMusic;
    KGMusicControlView *_controllerView;
    KGViewController *_controllerViewWithSingerNavi;
    NSMutableArray *_musicMenuArray;
    UIView *_menuBgView;
    id <KGMusicTableViewAdapterOperateDelegate> _tableViewAdapterOperateDelegate;
    id <KGMusicControlNewControlerDelegate> _delegate;
    PlayTypeListTableViewController *_playTypeListTableVC;
    UIImageView *_playModeListBGView;
    NSString *_canelBtnTitle;
    NSString *_stringSelectTip;
}

@property(nonatomic) NSString *stringSelectTip; // @synthesize stringSelectTip=_stringSelectTip;
@property(nonatomic) NSString *canelBtnTitle; // @synthesize canelBtnTitle=_canelBtnTitle;
@property(readonly, nonatomic) _Bool isFromLocalMusic; // @synthesize isFromLocalMusic=_isFromLocalMusic;
@property(retain, nonatomic) UIImageView *playModeListBGView; // @synthesize playModeListBGView=_playModeListBGView;
@property(retain, nonatomic) PlayTypeListTableViewController *playTypeListTableVC; // @synthesize playTypeListTableVC=_playTypeListTableVC;
@property(nonatomic) __weak id <KGMusicControlNewControlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <KGMusicTableViewAdapterOperateDelegate> tableViewAdapterOperateDelegate; // @synthesize tableViewAdapterOperateDelegate=_tableViewAdapterOperateDelegate;
@property(nonatomic) _Bool isShowBottomMenu; // @synthesize isShowBottomMenu=_isShowBottomMenu;
@property(retain, nonatomic) UIView *menuBgView; // @synthesize menuBgView=_menuBgView;
@property(retain, nonatomic) NSMutableArray *musicMenuArray; // @synthesize musicMenuArray=_musicMenuArray;
@property(retain, nonatomic) KGViewController *controllerViewWithSingerNavi; // @synthesize controllerViewWithSingerNavi=_controllerViewWithSingerNavi;
@property(readonly, nonatomic) KGMusicControlView *controllerView; // @synthesize controllerView=_controllerView;
- (void).cxx_destruct;
- (void)removeAllMusicMenu;
- (id)getMusicMenuAtIndex:(unsigned long long)arg1;
- (void)addMusicMenu:(id)arg1;
- (void)menuBtnAction:(id)arg1;
- (void)changeBtnBg:(id)arg1;
- (id)createMenuBgView:(struct CGRect)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)createAnimationGroupWithFromY:(double)arg1 ToY:(double)arg2 AndFromAlpha:(double)arg3 ToAlpha:(double)arg4 ByDuration:(double)arg5;
- (id)createAnimationGroupWithFromY:(double)arg1 ToY:(double)arg2 AndFromAlpha:(double)arg3 ToAlpha:(double)arg4;
- (void)showBottomMenu;
- (void)hideBottomMenu;
- (void)hideBottomMeunByNoAnimation;
- (void)hideBottomMeunByDuration:(double)arg1;
- (void)tableViewLongPress;
- (void)monitorTableViewSelectChangeWithOldValue:(unsigned long long)arg1 AndNewValue:(unsigned long long)arg2;
- (void)unShowPlayTypeTableViewController;
- (void)playAllMusicAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)refreshPlayModeIcon;
- (void)playModeChanged:(id)arg1;
- (void)setEditMode;
- (void)editAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)allSelectAction:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withType:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

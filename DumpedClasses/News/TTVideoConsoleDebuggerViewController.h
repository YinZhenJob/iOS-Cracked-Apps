//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UIButton, UIPanGestureRecognizer, UITableView, UIView;

@interface TTVideoConsoleDebuggerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
{
    UIButton *_scaleBtn;
    UIButton *_closeBtn;
    UIButton *_filterBtn;
    UIButton *_shareBtn;
    CDUnknownBlockType _closeBtnBlock;
    CDUnknownBlockType _scaleBtnBlock;
    CDUnknownBlockType _filterBtnBlock;
    CDUnknownBlockType _shareBtnBlock;
    UIView *_topView;
    UITableView *_tableView;
    double _startY;
    UIPanGestureRecognizer *_panTopViewGes;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panTopViewGes; // @synthesize panTopViewGes=_panTopViewGes;
@property(nonatomic) double startY; // @synthesize startY=_startY;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType shareBtnBlock; // @synthesize shareBtnBlock=_shareBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType filterBtnBlock; // @synthesize filterBtnBlock=_filterBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType scaleBtnBlock; // @synthesize scaleBtnBlock=_scaleBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBtnBlock; // @synthesize closeBtnBlock=_closeBtnBlock;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *filterBtn; // @synthesize filterBtn=_filterBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *scaleBtn; // @synthesize scaleBtn=_scaleBtn;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)p_topViewDragged:(id)arg1;
- (void)p_closeBtnClicked:(id)arg1;
- (void)p_shareBtnClicked:(id)arg1;
- (void)p_filterBtnClicked:(id)arg1;
- (void)p_scaleBtnClicked:(id)arg1;
- (void)p_presentFilterVCWithViewType:(long long)arg1;
- (void)scrollToBottom;
- (void)insertNewRowToBottom;
- (void)refreshUI;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseViewController.h"

#import "P_QLDragToRefresh.h"
#import "QLJumpObjectOpenUrlDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSTimer, QLInteractInvitationViewController, QLInteractLivePromoModel, QLInteractLivePromoTableViewCell, QLInteractLiveSubscribeItem, UITableView;

@interface QLInteractLivePromoViewController : QLBaseViewController <QLJumpObjectOpenUrlDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, P_QLDragToRefresh>
{
    double _stayDuration;
    _Bool _networkFinishWorkingOnGCDQueue;
    UITableView *_tableView;
    QLInteractLivePromoTableViewCell *_helperCell;
    NSMutableArray *_resultDatas;
    QLInteractInvitationViewController *_iiViewController;
    QLInteractLivePromoModel *_model;
    QLInteractLiveSubscribeItem *_selectedItem;
    NSTimer *_centerTimer;
    NSObject<OS_dispatch_queue> *_interactLivePromoVC_Queue;
    NSString *_pageTitle;
    NSMutableArray *_liveSubscribeItemsOnQueue;
}

+ (_Bool)OpenJumpUrlWithobject;
@property(retain) NSMutableArray *liveSubscribeItemsOnQueue; // @synthesize liveSubscribeItemsOnQueue=_liveSubscribeItemsOnQueue;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(nonatomic) _Bool networkFinishWorkingOnGCDQueue; // @synthesize networkFinishWorkingOnGCDQueue=_networkFinishWorkingOnGCDQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *interactLivePromoVC_Queue; // @synthesize interactLivePromoVC_Queue=_interactLivePromoVC_Queue;
@property(retain, nonatomic) NSTimer *centerTimer; // @synthesize centerTimer=_centerTimer;
@property(nonatomic) __weak QLInteractLiveSubscribeItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) QLInteractLivePromoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) QLInteractInvitationViewController *iiViewController; // @synthesize iiViewController=_iiViewController;
@property(retain, nonatomic) NSMutableArray *resultDatas; // @synthesize resultDatas=_resultDatas;
@property(retain, nonatomic) QLInteractLivePromoTableViewCell *helperCell; // @synthesize helperCell=_helperCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)reportShowUpByVisableCell:(id)arg1;
- (void)iteratorTableViewVisibleCells:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)updateUIData;
- (void)asyncSortDataAndFreshTableViewOnMain;
- (id)imageForEmpty;
- (id)subtitleForEmpty;
- (id)titleForEmpty;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)updateAllDataSourceNotificationByNotification:(id)arg1;
- (void)onlyUpdateCellUIByNotification:(id)arg1;
- (void)removeFromCellByNotification:(id)arg1;
- (void)centerTimerLoop;
- (void)loadMoreData;
- (void)updateFreshData:(_Bool)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dragReload:(_Bool)arg1;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (id)dragRefreshView;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateTableViewFrame;
- (void)enterForground:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)hideContentController:(id)arg1;
- (void)displayContentController:(id)arg1;
- (void)removeCustomObservers;
- (void)addCustomObservers;
- (id)currentPageTableViewForReport;
- (void)retryDown:(id)arg1;
- (_Bool)hideTabBarWhenPushed;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


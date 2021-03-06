//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, PTHTweetbotAccount, PTHTweetbotTableViewStatusView, UITableView;

@interface PTHTweetbotLoadingTableViewController : PTHViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    PTHTweetbotTableViewStatusView *_statusView;
    _Bool _firstTime;
    NSString *_reuseIdentifier;
    PTHTweetbotAccount *_account;
    NSArray *_items;
}

+ (Class)cellClass;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) PTHTweetbotAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) __weak NSString *nothingFoundTitle;
- (void)configure:(id)arg1 forItem:(id)arg2;
- (void)loadDataIfNeeded:(_Bool)arg1;
- (void)startLoading;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)reloadData;
- (void)loadView;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


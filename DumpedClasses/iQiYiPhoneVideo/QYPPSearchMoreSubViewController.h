//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QYPPSubSearchManager, UITableView;

@interface QYPPSearchMoreSubViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    _Bool _isAcceptCorrection;
    unsigned long long _viewControllerType;
    NSMutableArray *_resultArray;
    NSString *_keyword;
    UITableView *_resultTableView;
    QYPPSubSearchManager *_dataManager;
}

@property(retain, nonatomic) QYPPSubSearchManager *dataManager; // @synthesize dataManager=_dataManager;
@property(copy, nonatomic) UITableView *resultTableView; // @synthesize resultTableView=_resultTableView;
@property(nonatomic) _Bool isAcceptCorrection; // @synthesize isAcceptCorrection=_isAcceptCorrection;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSMutableArray *resultArray; // @synthesize resultArray=_resultArray;
@property(nonatomic) unsigned long long viewControllerType; // @synthesize viewControllerType=_viewControllerType;
- (void).cxx_destruct;
- (void)sendSearchClickPingback:(unsigned long long)arg1 andPtype:(id)arg2;
- (void)sendSearchResultShowPingback;
- (void)enterPaopaoDetailWithData:(id)arg1;
- (void)enterCircleDetailWithData:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)searchResultUnFeedCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadAllUI;
- (void)loadMorePaopaoData;
- (void)loadMoreCiecleData;
- (void)loadMoreData;
- (void)refreshPaopaoData:(_Bool)arg1;
- (void)refreshCircleData:(_Bool)arg1;
- (void)refreshData;
- (void)initTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWDramaTheatreBaseTableViewController.h"

#import "GWDramaCellDelegate-Protocol.h"
#import "GWOperateViewDelegate-Protocol.h"

@class GWDramaTabInfo, GWDramaTheatreByDramaProvider, GWTheatre, NSMutableArray, NSString;

@interface GWTheatreSelectionDramaViewController : GWDramaTheatreBaseTableViewController <GWOperateViewDelegate, GWDramaCellDelegate>
{
    GWDramaTabInfo *_currentDramaTabInfo;
    GWTheatre *_currentTheatre;
    NSMutableArray *_dramaArray;
    NSMutableArray *_recommendDramArray;
    NSMutableArray *_advertList;
    GWDramaTheatreByDramaProvider *_theatreByDramaProvider;
}

@property(retain, nonatomic) GWDramaTheatreByDramaProvider *theatreByDramaProvider; // @synthesize theatreByDramaProvider=_theatreByDramaProvider;
@property(retain, nonatomic) NSMutableArray *advertList; // @synthesize advertList=_advertList;
@property(retain, nonatomic) NSMutableArray *recommendDramArray; // @synthesize recommendDramArray=_recommendDramArray;
@property(retain, nonatomic) NSMutableArray *dramaArray; // @synthesize dramaArray=_dramaArray;
@property(retain, nonatomic) GWTheatre *currentTheatre; // @synthesize currentTheatre=_currentTheatre;
@property(retain, nonatomic) GWDramaTabInfo *currentDramaTabInfo; // @synthesize currentDramaTabInfo=_currentDramaTabInfo;
- (void).cxx_destruct;
- (_Bool)showNoWalaView;
- (void)addNoWalaView;
- (void)handleCurrentDataState;
- (void)requestTheatreDramaList:(_Bool)arg1;
- (void)finishLoading;
- (void)beginRefreshFromFooter;
- (void)dramaCell:(id)arg1 didClickQuickbuyEventWithDrama:(id)arg2 withTicketStatus:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)startRequest;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTTrainListFilterViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTTableView, CTTrainListCacheBean, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIView;

@interface CTTrainCheCiListMultiSelectViewController : CTRootViewController <UITableViewDelegate, UITableViewDataSource, CTTrainListFilterViewDelegate>
{
    _Bool _addOnly;
    id <CTTrainCheCiListMultiSelectViewControllerDelegate> _delegate;
    CTTrainListCacheBean *_shadowCacheBean;
    NSMutableArray *_arrayOriginSelectModel;
    NSString *_selectedSeatName;
    NSString *_currentCheci;
    long long _maxCount;
    NSMutableArray *_arrayNoShowCheciModel;
    CTTableView *_tableViewCheciList;
    UIButton *_buttonConfirm;
    UIView *_viewService;
    NSMutableArray *_arrayShowData;
    NSMutableArray *_arraySelected;
    UIView *_viewTop;
    NSLayoutConstraint *_tableViewTop;
}

@property(nonatomic) __weak NSLayoutConstraint *tableViewTop; // @synthesize tableViewTop=_tableViewTop;
@property(retain, nonatomic) UIView *viewTop; // @synthesize viewTop=_viewTop;
@property(retain, nonatomic) NSMutableArray *arraySelected; // @synthesize arraySelected=_arraySelected;
@property(retain, nonatomic) NSMutableArray *arrayShowData; // @synthesize arrayShowData=_arrayShowData;
@property(retain, nonatomic) UIView *viewService; // @synthesize viewService=_viewService;
@property(retain, nonatomic) UIButton *buttonConfirm; // @synthesize buttonConfirm=_buttonConfirm;
@property(retain, nonatomic) CTTableView *tableViewCheciList; // @synthesize tableViewCheciList=_tableViewCheciList;
@property(retain, nonatomic) NSMutableArray *arrayNoShowCheciModel; // @synthesize arrayNoShowCheciModel=_arrayNoShowCheciModel;
@property(nonatomic) _Bool addOnly; // @synthesize addOnly=_addOnly;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(copy, nonatomic) NSString *currentCheci; // @synthesize currentCheci=_currentCheci;
@property(copy, nonatomic) NSString *selectedSeatName; // @synthesize selectedSeatName=_selectedSeatName;
@property(retain, nonatomic, setter=setArrayOriginSelectModel:) NSMutableArray *arrayOriginSelectModel; // @synthesize arrayOriginSelectModel=_arrayOriginSelectModel;
@property(retain, nonatomic) CTTrainListCacheBean *shadowCacheBean; // @synthesize shadowCacheBean=_shadowCacheBean;
@property(nonatomic) __weak id <CTTrainCheCiListMultiSelectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)saveNoDataTrace;
- (void)trainListFilterView:(id)arg1 didPressConfirmButtonWithFilter:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateTopView;
- (id)noDataView;
- (id)checiListCellInTableView:(id)arg1 indexPath:(id)arg2;
- (void)request12306ListData;
- (void)requestListData;
- (void)onConfirmButton:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)onFilterButton:(id)arg1;
- (void)createNavigationRightBarButtonWithPoint:(_Bool)arg1;
- (void)createServiceView;
- (void)loadContent;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSObject, NSString, UITableView;
@protocol GWUserTagsViewDelegate;

@interface GWUserTagsView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    NSObject<GWUserTagsViewDelegate> *_delgate;
    UITableView *_tableView;
    NSArray *_typeTagsArr;
    NSMutableDictionary *_selectResultDic;
}

@property(retain, nonatomic) NSMutableDictionary *selectResultDic; // @synthesize selectResultDic=_selectResultDic;
@property(retain, nonatomic) NSArray *typeTagsArr; // @synthesize typeTagsArr=_typeTagsArr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSObject<GWUserTagsViewDelegate> *delgate; // @synthesize delgate=_delgate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)selectTagAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


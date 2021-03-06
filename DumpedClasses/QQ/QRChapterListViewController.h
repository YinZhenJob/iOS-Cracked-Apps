//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QRTopTabBarEmbededViewSwitchTabDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, QRBookMarkTableView, QRChapterTitleBar, QRContentsTableView;

@interface QRChapterListViewController : QQViewController <QRTopTabBarEmbededViewSwitchTabDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isDayMode;
    long long _currentChapterIndex;
    NSArray *_chapterList;
    struct CGRect _topTabBarViewFrame;
    struct CGRect _titleBarRect;
    QRChapterTitleBar *_titleBar;
    id <QRChapterListViewControllerDelegate> _delegate;
    QRBookMarkTableView *_bookMarkTableView;
    QRContentsTableView *_contentsTableView;
}

@property(retain, nonatomic) QRContentsTableView *contentsTableView; // @synthesize contentsTableView=_contentsTableView;
@property(retain, nonatomic) QRBookMarkTableView *bookMarkTableView; // @synthesize bookMarkTableView=_bookMarkTableView;
@property(nonatomic) __weak id <QRChapterListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)topTabSwitchedToIndex:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onPswViewDismiss;
- (void)enterForeground:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)close;
- (_Bool)isSupportRightDragToGoBack;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDayMode:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQAssistCenterDelegate-Protocol.h"
#import "MQQAssistInputViewDelegate-Protocol.h"
#import "MQQAssistMessageViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MQQAssistInputView, MQQProgressHUD, NSMutableArray, NSString, UITableView;

@interface MQQAssistViewController : MQQBaseViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, MQQAssistInputViewDelegate, MQQAssistMessageViewDelegate, MQQAssistCenterDelegate>
{
    _Bool _hasMoreData;
    _Bool _isLoadingMore;
    _Bool _isRequesting;
    _Bool _showsKeyboardAfterAppearing;
    UITableView *_tableView;
    NSMutableArray *_messageArray;
    MQQAssistInputView *_inputView;
    MQQProgressHUD *_progressHUD;
}

@property(retain, nonatomic) MQQProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) MQQAssistInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) NSMutableArray *messageArray; // @synthesize messageArray=_messageArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool showsKeyboardAfterAppearing; // @synthesize showsKeyboardAfterAppearing=_showsKeyboardAfterAppearing;
- (void)assistCenter:(id)arg1 didFailToMessage:(id)arg2 errorMessage:(id)arg3;
- (void)assistCenter:(id)arg1 didReceiveMessages:(id)arg2 relatedToMessage:(id)arg3;
- (void)updateMessageViewWithUserMessage:(id)arg1;
- (void)assistMessageView:(id)arg1 userMessageShouldResend:(id)arg2;
- (void)assistMessageViewShouldReload:(id)arg1;
- (void)assistMessageView:(id)arg1 didSelectMessage:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)collapse:(id)arg1;
- (void)inputView:(id)arg1 shouldSendMessage:(id)arg2;
- (void)inputView:(id)arg1 willChangeFrame:(struct CGRect)arg2 duration:(double)arg3 curve:(long long)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showToastMessage:(id)arg1;
- (double)heightForMessage:(id)arg1;
- (void)scrollTableViewToTheLastMessage:(_Bool)arg1;
- (void)scrollTableViewToTheBottommost:(_Bool)arg1;
- (void)scrollTableViewToBottom:(_Bool)arg1 animated:(_Bool)arg2;
- (void)insertEarlierMessagesToTableView:(id)arg1;
- (void)setLoadingCellHidden:(_Bool)arg1;
- (void)removeMessageFromTableView:(id)arg1;
- (void)addMessagesToTableView:(id)arg1;
- (void)updateTableView:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


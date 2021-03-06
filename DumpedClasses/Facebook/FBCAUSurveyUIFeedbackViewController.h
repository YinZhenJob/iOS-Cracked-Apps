//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextViewDelegate-Protocol.h"

@class FBTextView, NSString, UINavigationBar, UINavigationItem;

@interface FBCAUSurveyUIFeedbackViewController : UIViewController <UITextViewDelegate>
{
    UINavigationBar *_navigationBar;
    UINavigationItem *_navigationItem;
    FBTextView *_textView;
    NSString *_questionText;
    CDUnknownBlockType _cancelButtonHandler;
    CDUnknownBlockType _sendButtonHandler;
}

@property(copy, nonatomic) CDUnknownBlockType sendButtonHandler; // @synthesize sendButtonHandler=_sendButtonHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelButtonHandler; // @synthesize cancelButtonHandler=_cancelButtonHandler;
- (void).cxx_destruct;
- (void)_sendFeedbackAction:(id)arg1;
- (void)_cancelFeedbackAction:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)updateSubmitButtonIsEnabled;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithQuestionText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


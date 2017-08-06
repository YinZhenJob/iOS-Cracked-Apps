//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KFTextField, KGThemeButton, KGThemeImageView, KGThemeLabel, UIButton;

@interface KTVSendGiftsNumView : UIView
{
    KGThemeLabel *KCoinLab;
    KGThemeButton *getKcoinBtn;
    KGThemeLabel *giftNumLab;
    UIView *numbersView;
    KGThemeButton *numBtn;
    UIButton *numSelectBg;
    UIView *moreNumbersView;
    KGThemeImageView *moreUpOrDownicon;
    _Bool isMoreNum;
    UIView *textView;
    KFTextField *textField;
    _Bool _isFree;
    _Bool _isGroup;
    id <KTVSendGiftsNumViewDelegate> _delegate;
}

@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(nonatomic) _Bool isFree; // @synthesize isFree=_isFree;
@property(nonatomic) __weak id <KTVSendGiftsNumViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)checkText;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)actionTextSure:(id)arg1;
- (void)openGiftsView;
- (void)removeNotification;
- (void)registerNotification;
- (void)setTextView;
- (void)customNum:(id)arg1;
- (void)selectNum:(id)arg1;
- (void)closeNumSelect;
- (id)createMoreNumbersView:(_Bool)arg1 array:(id)arg2;
- (void)moreNumbers:(id)arg1;
- (void)sendGift:(id)arg1;
- (void)actionGetKCoin;
- (void)updateKCoin:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

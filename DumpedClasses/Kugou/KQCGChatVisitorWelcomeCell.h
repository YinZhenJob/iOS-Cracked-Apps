//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGGChatTipBaseCell.h"

@class KGThemeButton, NSString, UILabel, UIView;

@interface KQCGChatVisitorWelcomeCell : KGGChatTipBaseCell
{
    UIView *_backView;
    id <KQGChatVisitorWelcomeCellDelegate> _welcomeDelegate;
    UILabel *_titleLabel;
    KGThemeButton *_joinGroupBtn;
    KGThemeButton *_viewIdentityBtn;
    NSString *_groupid;
}

+ (double)heightForCell:(id)arg1 nickName:(id)arg2 isHideTime:(_Bool)arg3 isGChat:(_Bool)arg4;
@property(copy, nonatomic) NSString *groupid; // @synthesize groupid=_groupid;
@property(retain, nonatomic) KGThemeButton *viewIdentityBtn; // @synthesize viewIdentityBtn=_viewIdentityBtn;
@property(retain, nonatomic) KGThemeButton *joinGroupBtn; // @synthesize joinGroupBtn=_joinGroupBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <KQGChatVisitorWelcomeCellDelegate> welcomeDelegate; // @synthesize welcomeDelegate=_welcomeDelegate;
- (void).cxx_destruct;
- (void)updateUIWithMessageInfo:(id)arg1 isHideTime:(_Bool)arg2 iconUrl:(id)arg3 nickName:(id)arg4 relationshipBean:(id)arg5;
- (void)setIsHideTime:(_Bool)arg1 addTime:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)roadWebViewWithUrl:(id)arg1 andTitle:(id)arg2;
- (void)viewIdentityBtnClicked:(id)arg1;
- (void)joinGroupBtnClicked:(id)arg1;
- (void)viewInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

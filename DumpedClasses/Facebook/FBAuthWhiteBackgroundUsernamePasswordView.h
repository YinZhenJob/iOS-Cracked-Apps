//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UIImage, UIImageView, UITextField;

@interface FBAuthWhiteBackgroundUsernamePasswordView : UIView
{
    UIImageView *_logoImageView;
    UIImageView *_headerBackgroundImageView;
    UIImage *_headerBackgroundImage;
    UIView *_inputFieldsContainer;
    UIView *_inputContainer;
    UIView *_usernameBackground;
    UIView *_passwordBackground;
    _Bool _passwordExtensionsEnabled;
    UIActivityIndicatorView *_activityIndicator;
    _Bool _isKeyboardUp;
    UIView *_headerView;
    UIImageView *_logoImage;
    UITextField *_usernameInputField;
    UITextField *_passwordInputField;
    UIButton *_loginButton;
    UIButton *_passwordExtensionButton;
    UIButton *_forgotPasswordButton;
    UIButton *_backButton;
    UIButton *_signupButton;
    struct UIEdgeInsets _minimumEdgeInsets;
}

@property(readonly, nonatomic) UIButton *signupButton; // @synthesize signupButton=_signupButton;
@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) UIButton *forgotPasswordButton; // @synthesize forgotPasswordButton=_forgotPasswordButton;
@property(readonly, nonatomic) UIButton *passwordExtensionButton; // @synthesize passwordExtensionButton=_passwordExtensionButton;
@property(readonly, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(readonly, nonatomic) UITextField *passwordInputField; // @synthesize passwordInputField=_passwordInputField;
@property(readonly, nonatomic) UITextField *usernameInputField; // @synthesize usernameInputField=_usernameInputField;
@property(readonly, nonatomic) UIImageView *logoImage; // @synthesize logoImage=_logoImage;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isKeyboardUp; // @synthesize isKeyboardUp=_isKeyboardUp;
@property(nonatomic) struct UIEdgeInsets minimumEdgeInsets; // @synthesize minimumEdgeInsets=_minimumEdgeInsets;
- (void).cxx_destruct;
- (struct CGSize)_headerLogoSize;
- (struct CGSize)_headerLogoSizeKeyboardUp;
- (double)_inputFieldsUpperPadding;
- (id)_makePasswordExtensionButtonWithConfiguration:(id)arg1;
- (id)_makeLoginButtonWithConfiguration:(id)arg1;
- (id)_makePasswordInputWithConfiguration:(id)arg1;
- (id)_makeUsernameInputWithConfiguration:(id)arg1;
- (id)_makePasswordInputBackground;
- (id)_makeUsernameInputBackground;
- (id)_makeInputContainer;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;
- (void)layoutSubviews;
- (id)initWithConfiguration:(id)arg1 showBackButton:(_Bool)arg2 showPasswordExtensionButton:(_Bool)arg3;

@end


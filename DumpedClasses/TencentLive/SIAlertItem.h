//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface SIAlertItem : NSObject
{
    NSString *_title;
    long long _type;
    CDUnknownBlockType _action;
    CDUnknownBlockType _customAction;
    UIImage *_btnImage;
}

@property(retain, nonatomic) UIImage *btnImage; // @synthesize btnImage=_btnImage;
@property(copy, nonatomic) CDUnknownBlockType customAction; // @synthesize customAction=_customAction;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end


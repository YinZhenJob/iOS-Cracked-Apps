//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QYECallback : NSObject
{
    id _target;
    SEL _selector;
}

+ (id)callbackWithTarget:(id)arg1 selector:(SEL)arg2;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;

@end


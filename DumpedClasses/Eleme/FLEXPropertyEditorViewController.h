//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLEXFieldEditorViewController.h"

#import "FLEXArgumentInputViewDelegate.h"

@class NSString;

@interface FLEXPropertyEditorViewController : FLEXFieldEditorViewController <FLEXArgumentInputViewDelegate>
{
    struct objc_property *_property;
}

+ (_Bool)canEditProperty:(struct objc_property *)arg1 currentValue:(id)arg2;
@property(nonatomic) struct objc_property *property; // @synthesize property=_property;
- (void)argumentInputViewValueDidChange:(id)arg1;
- (void)actionButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTarget:(id)arg1 property:(struct objc_property *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, SListFormCellModel, SListFormView;

@protocol SListFormViewDelegate <NSObject>
- (SListFormCellModel *)sListFormView:(SListFormView *)arg1 modelForCellAtIndexPath:(NSIndexPath *)arg2;
- (long long)sListFormView:(SListFormView *)arg1 numberOfCellsInSection:(long long)arg2;

@optional
- (long long)numberOfSectionsInListFormView:(SListFormView *)arg1;
@end


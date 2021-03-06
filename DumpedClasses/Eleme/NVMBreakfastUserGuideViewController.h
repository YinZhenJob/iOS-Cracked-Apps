//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, UICollectionView, UIPageControl;

@interface NVMBreakfastUserGuideViewController : NVMViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    double _offsetY;
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
}

@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
- (void).cxx_destruct;
- (id)getGuideButtonWithFrame:(struct CGRect)arg1 text:(id)arg2;
- (id)getGuideImageViewWithCenter:(struct CGPoint)arg1 image:(id)arg2;
- (id)getGuideLabelWithFrame:(struct CGRect)arg1 text:(id)arg2;
- (void)didKnowButtonDidTap:(id)arg1;
- (void)addViewAtSecondCell:(id)arg1;
- (void)addViewAtFristCell:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


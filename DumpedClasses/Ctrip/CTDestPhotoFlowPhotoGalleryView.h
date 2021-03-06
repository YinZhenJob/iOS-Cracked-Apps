//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTDestPhotoFlowViewControllerItem, UILabel, UIScrollView;

@interface CTDestPhotoFlowPhotoGalleryView : UIView
{
    CDUnknownBlockType _flowInfoBlock;
    UILabel *_desLb;
    UIView *_lineView;
    UILabel *_photographerLb;
    UILabel *_modelLb;
    UIView *_poiView;
    UIView *_poiTypeView;
    UIScrollView *_descSV;
    CTDestPhotoFlowViewControllerItem *_flowItem;
}

@property(retain, nonatomic) CTDestPhotoFlowViewControllerItem *flowItem; // @synthesize flowItem=_flowItem;
@property(retain, nonatomic) UIScrollView *descSV; // @synthesize descSV=_descSV;
@property(retain, nonatomic) UIView *poiTypeView; // @synthesize poiTypeView=_poiTypeView;
@property(retain, nonatomic) UIView *poiView; // @synthesize poiView=_poiView;
@property(retain, nonatomic) UILabel *modelLb; // @synthesize modelLb=_modelLb;
@property(retain, nonatomic) UILabel *photographerLb; // @synthesize photographerLb=_photographerLb;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *desLb; // @synthesize desLb=_desLb;
@property(copy, nonatomic) CDUnknownBlockType flowInfoBlock; // @synthesize flowInfoBlock=_flowInfoBlock;
- (void).cxx_destruct;
- (id)createView:(int)arg1;
- (void)tapBgView:(id)arg1;
- (void)layoutSubviews;
- (void)configWithItem:(id)arg1;
- (id)init;

@end


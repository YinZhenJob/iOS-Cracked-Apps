//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface QLImageTitleButton : UIButton
{
    long long _layoutType;
    struct CGSize _maxImageSize;
}

@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) struct CGSize maxImageSize; // @synthesize maxImageSize=_maxImageSize;
- (void)layoutSubviews;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGSize)imageSize;
- (void)resetMaxImageSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end


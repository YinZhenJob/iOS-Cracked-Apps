//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIColor, UIFont, UIImage, UIImageView;

@interface QQCampusCertificationView : UIView
{
    int _skinTextColorNormal;
    int _skinTextColorHighlighted;
    NSString *_text;
    UIImage *_image;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    long long _maxLineCount;
    NSArray *_labels;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) int skinTextColorHighlighted; // @synthesize skinTextColorHighlighted=_skinTextColorHighlighted;
@property(nonatomic) int skinTextColorNormal; // @synthesize skinTextColorNormal=_skinTextColorNormal;
@property(nonatomic) long long maxLineCount; // @synthesize maxLineCount=_maxLineCount;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)_loadLabels:(double)arg1 lineHeight:(double)arg2;
- (void)_loadImageView:(double)arg1;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end


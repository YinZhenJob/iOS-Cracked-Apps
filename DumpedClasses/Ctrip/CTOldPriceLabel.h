//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSString;

@interface CTOldPriceLabel : UILabel
{
    double _currencyFontSize;
    NSString *_currencyText;
    double _priceFontSize;
    NSString *_priceText;
    double _priceXOffset;
    double _currencyYOffset;
}

@property(nonatomic) double currencyYOffset; // @synthesize currencyYOffset=_currencyYOffset;
@property(nonatomic) double priceXOffset; // @synthesize priceXOffset=_priceXOffset;
@property(copy, nonatomic) NSString *priceText; // @synthesize priceText=_priceText;
@property(nonatomic) double priceFontSize; // @synthesize priceFontSize=_priceFontSize;
@property(copy, nonatomic) NSString *currencyText; // @synthesize currencyText=_currencyText;
@property(nonatomic) double currencyFontSize; // @synthesize currencyFontSize=_currencyFontSize;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end


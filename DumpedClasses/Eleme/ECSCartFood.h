//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray, NSNumber, NSString;

@interface ECSCartFood : NVMModel
{
    _Bool _isSoldOut;
    _Bool _isUnderStock;
    _Bool _isUnAvailable;
    _Bool _isValid;
    NSNumber *_cartFoodID;
    NSString *_cartFoodSKUID;
    NSString *_name;
    double _price;
    unsigned long long _quantity;
    NSArray *_activities;
    NSString *_categoryID;
    NSString *_groupID;
    NSString *_imageURL;
    long long _rateState;
    NSArray *_specs;
    NSArray *_attrs;
    double _total;
    double _totalDiscount;
    double _originalTotal;
    NSString *_quantityString;
    NSString *_content;
}

+ (id)activitiesJSONTransformer;
+ (id)attrsJSONTransformer;
+ (id)specsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *quantityString; // @synthesize quantityString=_quantityString;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) double originalTotal; // @synthesize originalTotal=_originalTotal;
@property(nonatomic) double totalDiscount; // @synthesize totalDiscount=_totalDiscount;
@property(nonatomic) double total; // @synthesize total=_total;
@property(copy, nonatomic) NSArray *attrs; // @synthesize attrs=_attrs;
@property(copy, nonatomic) NSArray *specs; // @synthesize specs=_specs;
@property(nonatomic) long long rateState; // @synthesize rateState=_rateState;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(nonatomic) _Bool isUnAvailable; // @synthesize isUnAvailable=_isUnAvailable;
@property(nonatomic) _Bool isUnderStock; // @synthesize isUnderStock=_isUnderStock;
@property(nonatomic) _Bool isSoldOut; // @synthesize isSoldOut=_isSoldOut;
@property(nonatomic) unsigned long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *cartFoodSKUID; // @synthesize cartFoodSKUID=_cartFoodSKUID;
@property(retain, nonatomic) NSNumber *cartFoodID; // @synthesize cartFoodID=_cartFoodID;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isInvalid;
- (id)attributedOrigianlTotalString:(_Bool)arg1;
- (id)attributedTotalString:(_Bool)arg1;

@end


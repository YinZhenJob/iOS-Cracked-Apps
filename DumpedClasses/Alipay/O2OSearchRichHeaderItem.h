//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString;

@interface O2OSearchRichHeaderItem : NSObject
{
    _Bool _needAppendBlank;
    NSAttributedString *_text;
    NSArray *_clickItems;
}

+ (id)itemWithJsonArray:(id)arg1;
@property(readonly, nonatomic) _Bool needAppendBlank; // @synthesize needAppendBlank=_needAppendBlank;
@property(readonly, copy, nonatomic) NSArray *clickItems; // @synthesize clickItems=_clickItems;
@property(readonly, copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end

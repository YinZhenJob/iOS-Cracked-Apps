//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString<Optional>, TRWanliuCommentDataModel<Optional>;

@interface TRWanliuCommentModel : TRBaseModel
{
    TRWanliuCommentDataModel<Optional> *_data;
    NSString<Optional> *_type;
}

@property(copy, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) TRWanliuCommentDataModel<Optional> *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end

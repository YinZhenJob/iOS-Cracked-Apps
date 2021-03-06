//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface ModelTableInfo : NSObject
{
    NSArray *_primaryKeys;
    NSMutableDictionary *_modelProNameDic;
    NSMutableDictionary *_tableProNameDic;
}

@property(retain, nonatomic) NSMutableDictionary *tableProNameDic; // @synthesize tableProNameDic=_tableProNameDic;
@property(retain, nonatomic) NSMutableDictionary *modelProNameDic; // @synthesize modelProNameDic=_modelProNameDic;
@property(retain, nonatomic) NSArray *primaryKeys; // @synthesize primaryKeys=_primaryKeys;
- (void).cxx_destruct;
- (id)objectWithSqlColumnName:(id)arg1;
- (id)objectWithPropertyName:(id)arg1;
- (id)objectWithIndex:(long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)addDBPropertyWithType:(id)arg1 cname:(id)arg2 ctype:(id)arg3 pname:(id)arg4 ptype:(id)arg5;
- (id)initWithTableMapping:(id)arg1 propertyNames:(id)arg2 propertyType:(id)arg3 primaryKeys:(id)arg4;

@end


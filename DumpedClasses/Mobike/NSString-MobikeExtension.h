//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@class NSData, NSDate;

@interface NSString (MobikeExtension)
+ (id)attributedString:(id)arg1 color1:(id)arg2 string2:(id)arg3 color2:(id)arg4;
+ (id)attributedString:(id)arg1 length:(long long)arg2;
+ (id)hexStringFromString:(id)arg1;
+ (_Bool)isPureInt:(id)arg1;
+ (_Bool)isAllDigit:(id)arg1;
+ (_Bool)isAllNum:(id)arg1;
+ (_Bool)stringIsNoEmpty:(id)arg1;
+ (_Bool)stringIsEmpty:(id)arg1;
+ (id)queryStringFromKeyValues:(id)arg1;
+ (id)queryStringFromArray:(id)arg1;
+ (id)queryStringFromDictionary:(id)arg1;
+ (id)dateFormattWithForm:(id)arg1 fromTimeStamp:(long long)arg2;
- (_Bool)isEmoji;
- (_Bool)containsEmoji;
- (id)truncateNumberAndEngWithAttributes:(id)arg1;
- (long long)charactersOfString;
- (_Bool)isContainSubStr:(id)arg1;
- (_Bool)match:(id)arg1;
- (struct CGSize)sizeWithFont:(id)arg1 byHeight:(double)arg2;
- (struct CGSize)sizeWithFont:(id)arg1 byWidth:(double)arg2;
- (id)getHidePhoneNumber;
- (id)unwrap;
- (id)trim;
@property(readonly, nonatomic) NSString *SHA1; // @dynamic SHA1;
@property(readonly, nonatomic) NSData *MD5Data; // @dynamic MD5Data;
@property(readonly, nonatomic) NSString *lowMD5;
@property(readonly, nonatomic) NSString *MD5; // @dynamic MD5;
- (id)URLDecoding;
- (id)URLEncoding;
- (_Bool)isValueOf:(id)arg1 caseInsens:(_Bool)arg2;
- (_Bool)isValueOf:(id)arg1;
- (_Bool)isNot:(id)arg1;
- (_Bool)is:(id)arg1;
- (_Bool)notEmpty;
- (_Bool)empty;
- (id)urlByAppendingKeyValues:(id)arg1;
- (id)urlByAppendingArray:(id)arg1;
- (id)urlByAppendingDict:(id)arg1;
- (id)allURLs;
@property(readonly, nonatomic) CDUnknownBlockType APPEND; // @dynamic APPEND;
- (id)dateFromTimeInterval;
@property(readonly, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, nonatomic) NSData *data; // @dynamic data;
@end

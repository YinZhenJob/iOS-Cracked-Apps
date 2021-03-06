//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface YXMediaMessage : NSObject
{
    NSString *_title;
    NSString *_description;
    NSData *_thumbData;
    id _mediaObject;
}

+ (id)message;
@property(retain, nonatomic) id mediaObject; // @synthesize mediaObject=_mediaObject;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData=_thumbData;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setThumbImage:(id)arg1;
- (_Bool)isValid;
- (id)stringifyToJSONString;
- (void)decodeFromNSDict:(id)arg1;
- (id)encodeToNSDict;
- (void)dealloc;
- (id)init;

@end


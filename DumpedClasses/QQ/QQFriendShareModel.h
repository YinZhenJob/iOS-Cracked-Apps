//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QQFriendShareModel : NSObject <NSCoding>
{
    NSString *originalNick;
    NSString *filteredNick;
    NSString *freindUin;
}

@property(retain, nonatomic) NSString *freindUin; // @synthesize freindUin;
@property(retain, nonatomic) NSString *filteredNick; // @synthesize filteredNick;
@property(retain, nonatomic) NSString *originalNick; // @synthesize originalNick;
- (void).cxx_destruct;
- (id)filterIllegalCharacter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUin:(id)arg1 nick:(id)arg2;

@end

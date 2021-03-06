//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSObject-Protocol.h"

@class FBAssetMetadata, FBUserSession, NSArray, NSDate, NSString, UIImage;

@protocol FBMediaAttachmentProtocol <NSObject, NSCoding>
@property(readonly, copy, nonatomic) NSString *nameOfServerAssetIDFieldOverridingFileURL;
@property(readonly, nonatomic) _Bool isLivePhoto;
@property(readonly, copy, nonatomic) NSString *existingFBID;
@property(readonly, nonatomic) _Bool selectedFromMultiPicker;
@property(readonly, nonatomic) _Bool requiresUpload;
@property(copy, nonatomic) NSArray *mentions;
@property(retain, nonatomic) NSDate *creationDate;
@property(copy, nonatomic) NSString *caption;
@property(readonly, nonatomic) FBAssetMetadata *metadata;
@property(readonly, copy, nonatomic) NSString *assetID;
@property(nonatomic) _Bool allowRemoval;
@property(nonatomic) _Bool allowEditing;
@property(retain, nonatomic) UIImage *thumbnailImage;
- (NSString *)visualDedupRepresentation;
- (unsigned long long)attachmentType;

@optional
@property(retain, nonatomic) UIImage *displayImage;
- (void)loadThumbnailImageFromSourceForUserSession:(FBUserSession *)arg1 completionHandler:(void (^)(void))arg2;
- (void)loadDisplayImageFromSourceForUserSession:(FBUserSession *)arg1 completionHandler:(void (^)(void))arg2;
@end


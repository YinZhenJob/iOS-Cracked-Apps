//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, UIImage;

@protocol QLImageLoadDelegate <NSObject>

@optional
- (_Bool)shouldAsyncLoadAnimatedImageForGif;
- (void)didFinishDownloadImage:(NSString *)arg1 withIsGif:(_Bool)arg2;
- (void)didFailLoadWithError:(NSError *)arg1 forURL:(NSString *)arg2;
- (void)didLoadImage:(UIImage *)arg1 forURL:(NSString *)arg2 imageView:(id)arg3;
- (void)didLoadImage:(UIImage *)arg1 forURL:(NSString *)arg2;
- (void)didStartLoadImageForURL:(NSString *)arg1;
@end

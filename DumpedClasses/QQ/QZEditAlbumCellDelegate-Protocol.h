//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QZJPhotoShareStructClientAttr;

@protocol QZEditAlbumCellDelegate <NSObject>

@optional
- (void)onClickThemePanelControlBtn:(_Bool)arg1;
- (void)openIntroduction;
- (void)tapAnywhereToDismissKeyboard;
- (_Bool)isAllowChangeToAlbumTypeNormal:(long long)arg1;
- (void)onClickShareUser:(QZJPhotoShareStructClientAttr *)arg1;
- (void)onClickDateChooseBtn;
- (void)onSelectAlbumType:(long long)arg1;
@end

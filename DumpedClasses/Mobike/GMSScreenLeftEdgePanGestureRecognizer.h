//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScreenEdgePanGestureRecognizer.h"

#import "GMSPanGesture.h"

@class NSString;

@interface GMSScreenLeftEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer <GMSPanGesture>
{
}

- (void)setTranslation:(struct CGPoint)arg1;
- (struct CGPoint)translation;
- (struct CGPoint)velocity;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


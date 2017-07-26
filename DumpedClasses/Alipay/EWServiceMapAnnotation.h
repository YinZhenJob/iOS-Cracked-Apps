//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMapKitAnnotation.h"

#import "EWAnnotationViewProtocal.h"

@class EWServiceViewModel, NSString;

@interface EWServiceMapAnnotation : APMapKitAnnotation <EWAnnotationViewProtocal>
{
    EWServiceViewModel *_serviceViewModel;
    struct CLLocationCoordinate2D _coordinate;
}

@property(retain, nonatomic) EWServiceViewModel *serviceViewModel; // @synthesize serviceViewModel=_serviceViewModel;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (id)headImage;
- (id)uuid;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ONESBaseMapEntrance;

@interface DGCSharedMapManager : NSObject
{
    ONESBaseMapEntrance *_lineMapEntrance;
    ONESBaseMapEntrance *_transitMapEntrance;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ONESBaseMapEntrance *transitMapEntrance; // @synthesize transitMapEntrance=_transitMapEntrance;
@property(retain, nonatomic) ONESBaseMapEntrance *lineMapEntrance; // @synthesize lineMapEntrance=_lineMapEntrance;
- (void).cxx_destruct;
- (void)releaseMapView;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VASRedPointUIBrigde.h"

@class QQDYPlugin, RPDisplayInfo;

@interface QQDYPluginRedPointUIBridge : VASRedPointUIBrigde
{
    QQDYPlugin *_plugin;
    RPDisplayInfo *_displayInfo;
}

@property(retain, nonatomic) RPDisplayInfo *displayInfo; // @synthesize displayInfo=_displayInfo;
@property(retain, nonatomic) QQDYPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)hideRedPointIfNeed;
- (id)getRedPointShowInfo;

@end


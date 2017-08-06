//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface ALBBContainer : NSObject
{
    NSObject<OS_dispatch_queue> *_contextQueue;
    NSArray *_plugins;
    NSError *_error;
    NSOperationQueue *_queue;
    NSMutableDictionary *_pluginModelByName;
    NSMutableDictionary *_serviceModelByName;
}

+ (id)sharedContainer;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *serviceModelByName; // @synthesize serviceModelByName=_serviceModelByName;
@property(retain, nonatomic) NSMutableDictionary *pluginModelByName; // @synthesize pluginModelByName=_pluginModelByName;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain) NSError *error; // @synthesize error=_error;
@property(copy) NSArray *plugins; // @synthesize plugins=_plugins;
- (void).cxx_destruct;
- (void)stop:(CDUnknownBlockType)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (void)resetContext;
- (void)loadPluginsWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportAnalysis;
- (void)analyzePluginsWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelLaunching;
- (void)loadService:(id)arg1 plugin:(Class)arg2 instance:(id)arg3;
- (void)loadPlugin:(Class)arg1 instance:(id)arg2 error:(id)arg3;
- (void)analyzePluginsIfNeeded;
- (id)init;
- (id)serviceForName:(id)arg1;
- (id)pluginForName:(id)arg1;
- (id)allPlugins;

@end

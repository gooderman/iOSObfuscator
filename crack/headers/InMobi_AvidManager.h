//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "InMobi_AvidProviderDelegate.h"
#import "InMobi_AvidStateWatcherDelegate.h"

@class NSString;

@interface InMobi_AvidManager : NSObject <InMobi_AvidProviderDelegate, InMobi_AvidStateWatcherDelegate>
{
}

+ (id)getInstance;
- (void)onSessionRegistryHasReadySessionsChanged:(id)arg1;
- (void)onSessionRegistryIsEmptyChanged:(id)arg1;
- (void)onAppStateChanged:(_Bool)arg1;
- (_Bool)shouldLoadAvid;
- (void)onAvidReady;
- (void)notifyAvidReady;
@property(readonly, nonatomic) _Bool isActive;
- (void)stop;
- (void)start;
- (id)findInternalAvidAdSessionById:(id)arg1;
- (id)findAvidAdSessionById:(id)arg1;
- (void)registerAvidAdSession:(id)arg1 withInternalAvidAdSession:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


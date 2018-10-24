//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "InMobi_AvidBridgeDelegate.h"
#import "InMobi_AvidEventDispatcherDelegate.h"

@class InMobi_AvidBridge, InMobi_AvidDeferredAdSessionListenerImpl, InMobi_AvidEventDispatcher, InMobi_AvidObstructionsWhiteList, InMobi_ExternalAvidAdSessionContext, InMobi_InternalAvidAdSessionContext, NSString, UIView;

@interface InMobi_InternalAvidAdSession : NSObject <InMobi_AvidEventDispatcherDelegate, InMobi_AvidBridgeDelegate>
{
    InMobi_InternalAvidAdSessionContext *_internalContext;
    _Bool _isActive;
    _Bool _onEndCalled;
    _Bool _isAvidJsReady;
    _Bool _isReady;
    UIView *_view;
    id <InMobi_InternalAvidAdSessionDelegate> _delegate;
    InMobi_AvidEventDispatcher *_eventDispatcher;
    InMobi_AvidObstructionsWhiteList *_obstructionsWhiteList;
    InMobi_AvidBridge *_avidBridge;
    InMobi_AvidDeferredAdSessionListenerImpl *__avidDeferredAdSessionListener;
}

+ (id)mediaType;
+ (id)sessionType;
+ (id)avidAdSessionWithId:(id)arg1 context:(id)arg2;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) InMobi_AvidDeferredAdSessionListenerImpl *_avidDeferredAdSessionListener; // @synthesize _avidDeferredAdSessionListener=__avidDeferredAdSessionListener;
@property(readonly, nonatomic) InMobi_AvidBridge *avidBridge; // @synthesize avidBridge=_avidBridge;
@property(readonly, nonatomic) InMobi_AvidObstructionsWhiteList *obstructionsWhiteList; // @synthesize obstructionsWhiteList=_obstructionsWhiteList;
@property(retain, nonatomic) InMobi_AvidEventDispatcher *eventDispatcher; // @synthesize eventDispatcher=_eventDispatcher;
@property(nonatomic) __weak id <InMobi_InternalAvidAdSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isAvidJsReady; // @synthesize isAvidJsReady=_isAvidJsReady;
@property(nonatomic) _Bool onEndCalled; // @synthesize onEndCalled=_onEndCalled;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)assertSessionIsNotClosed;
- (_Bool)eventDispatcherShouldBufferEvent:(id)arg1;
- (void)eventDispatcher:(id)arg1 didPushEvent:(id)arg2;
- (void)avidBridgeDidInjectAvid;
- (id)makeDeferredAdSessionListener;
- (void)publishReadyEvent;
- (void)updateIsActiveIfNeeded;
- (void)didNotPresentInViewState;
- (void)presentedInViewState:(id)arg1;
- (void)setAppState:(long long)arg1;
- (void)onViewUnregistered;
- (void)onViewRegistered;
- (void)cleanupViewState;
- (void)onEnd;
- (void)onStart;
- (_Bool)doesManageView:(id)arg1;
- (void)unregisterAdView:(id)arg1;
- (void)registerAdView:(id)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)throwDeferredAdSessionListenerAccessedOnNonDeferredSession;
- (void)checkAccessToDeferredAdSessionListener;
@property(readonly, nonatomic) id <InMobi_AvidDeferredAdSessionListener> avidDeferredAdSessionListener;
@property(readonly, nonatomic) InMobi_ExternalAvidAdSessionContext *avidAdSessionContext;
@property(readonly, nonatomic) NSString *avidAdSessionId;
- (id)initWithId:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


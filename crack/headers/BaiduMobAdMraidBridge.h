//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BaiduMobAdActionComposerDelegate.h"
#import "BaiduMobAdMRAIDStateDelegate.h"
#import "BaiduMobAdWebExpandComposerDelegate.h"

@class BaiduMobAdActionComposer, BaiduMobAdHTMLRenderer, BaiduMobAdVideoInterstitialRenderer, BaiduMobAdWebExpandComposer, NSString;

@interface BaiduMobAdMraidBridge : NSObject <BaiduMobAdActionComposerDelegate, BaiduMobAdMRAIDStateDelegate, BaiduMobAdWebExpandComposerDelegate>
{
    _Bool _autoResizeRootView;
    _Bool _requestedResizeAllowOffscreen;
    _Bool _mraidSupportsSMS;
    _Bool _mraidSupportsTel;
    _Bool _isInterstitialNow;
    _Bool _mraidUseCustomClose;
    _Bool _shouldPauseContentWhenStart;
    _Bool _mraidViewable;
    _Bool _shouldPauseContentWhenExpandOrClick;
    _Bool _isMraid;
    _Bool _shouldKeepInterstitial;
    _Bool _mraidExpandIsModal;
    _Bool _isStartCalledAtAppSide;
    _Bool _isMRAIDOpenedInAppView;
    _Bool _isExpendingWithURL;
    _Bool _isInterAdsReady;
    _Bool _interstitialPreloadVideo;
    int _statusBarWasHidden;
    int _requestedResizeWidth;
    int _requestedResizeHeight;
    int _requestedResizeOffsetX;
    int _requestedResizeOffsetY;
    unsigned int _requestedExpandWidth;
    unsigned int _defaultExpandWidth;
    unsigned int _mraidExpandWidth;
    unsigned int _requestedExpandHeight;
    unsigned int _defaultExpandHeight;
    unsigned int _mraidExpandHeight;
    unsigned int _anchorX;
    unsigned int _anchorY;
    int _marginWidth;
    int _marginHeight;
    BaiduMobAdHTMLRenderer *_adRenderer;
    BaiduMobAdActionComposer *_composer;
    BaiduMobAdWebExpandComposer *_expandComposer;
    NSString *_requestedResizeCustomClosePosition;
    NSString *_mraidPlacementType;
    id <BaiduMobAdMRAIDState> _state;
    NSString *_lastCreativeUrl;
    BaiduMobAdVideoInterstitialRenderer *_videoRenderer;
    struct CGRect _mraidMaxSizeRect;
    struct CGRect _mraidScreenSizeRect;
    struct CGRect _mraidDefaultSizeRect;
    struct CGRect _mraidCurrentSizeRect;
}

@property(retain, nonatomic) BaiduMobAdVideoInterstitialRenderer *videoRenderer; // @synthesize videoRenderer=_videoRenderer;
@property(nonatomic) _Bool interstitialPreloadVideo; // @synthesize interstitialPreloadVideo=_interstitialPreloadVideo;
@property(nonatomic) _Bool isInterAdsReady; // @synthesize isInterAdsReady=_isInterAdsReady;
@property(nonatomic) _Bool isExpendingWithURL; // @synthesize isExpendingWithURL=_isExpendingWithURL;
@property(nonatomic) _Bool isMRAIDOpenedInAppView; // @synthesize isMRAIDOpenedInAppView=_isMRAIDOpenedInAppView;
@property(nonatomic) _Bool isStartCalledAtAppSide; // @synthesize isStartCalledAtAppSide=_isStartCalledAtAppSide;
@property(nonatomic) int marginHeight; // @synthesize marginHeight=_marginHeight;
@property(nonatomic) int marginWidth; // @synthesize marginWidth=_marginWidth;
@property(nonatomic) unsigned int anchorY; // @synthesize anchorY=_anchorY;
@property(nonatomic) unsigned int anchorX; // @synthesize anchorX=_anchorX;
@property(nonatomic) _Bool mraidExpandIsModal; // @synthesize mraidExpandIsModal=_mraidExpandIsModal;
@property(retain, nonatomic) NSString *lastCreativeUrl; // @synthesize lastCreativeUrl=_lastCreativeUrl;
@property(nonatomic) unsigned int mraidExpandHeight; // @synthesize mraidExpandHeight=_mraidExpandHeight;
@property(nonatomic) unsigned int defaultExpandHeight; // @synthesize defaultExpandHeight=_defaultExpandHeight;
@property(nonatomic) _Bool shouldKeepInterstitial; // @synthesize shouldKeepInterstitial=_shouldKeepInterstitial;
@property(nonatomic) _Bool isMraid; // @synthesize isMraid=_isMraid;
@property(nonatomic) _Bool shouldPauseContentWhenExpandOrClick; // @synthesize shouldPauseContentWhenExpandOrClick=_shouldPauseContentWhenExpandOrClick;
@property(nonatomic) unsigned int requestedExpandHeight; // @synthesize requestedExpandHeight=_requestedExpandHeight;
@property(nonatomic) id <BaiduMobAdMRAIDState> state; // @synthesize state=_state;
@property(nonatomic) unsigned int mraidExpandWidth; // @synthesize mraidExpandWidth=_mraidExpandWidth;
@property(nonatomic) _Bool mraidViewable; // @synthesize mraidViewable=_mraidViewable;
@property(nonatomic) _Bool shouldPauseContentWhenStart; // @synthesize shouldPauseContentWhenStart=_shouldPauseContentWhenStart;
@property(nonatomic) unsigned int defaultExpandWidth; // @synthesize defaultExpandWidth=_defaultExpandWidth;
@property(nonatomic) _Bool mraidUseCustomClose; // @synthesize mraidUseCustomClose=_mraidUseCustomClose;
@property(retain, nonatomic) NSString *mraidPlacementType; // @synthesize mraidPlacementType=_mraidPlacementType;
@property(nonatomic) _Bool isInterstitialNow; // @synthesize isInterstitialNow=_isInterstitialNow;
@property(nonatomic) unsigned int requestedExpandWidth; // @synthesize requestedExpandWidth=_requestedExpandWidth;
@property(nonatomic) _Bool mraidSupportsTel; // @synthesize mraidSupportsTel=_mraidSupportsTel;
@property(nonatomic) _Bool mraidSupportsSMS; // @synthesize mraidSupportsSMS=_mraidSupportsSMS;
@property(nonatomic) struct CGRect mraidCurrentSizeRect; // @synthesize mraidCurrentSizeRect=_mraidCurrentSizeRect;
@property(nonatomic) struct CGRect mraidDefaultSizeRect; // @synthesize mraidDefaultSizeRect=_mraidDefaultSizeRect;
@property(nonatomic) struct CGRect mraidScreenSizeRect; // @synthesize mraidScreenSizeRect=_mraidScreenSizeRect;
@property(nonatomic) struct CGRect mraidMaxSizeRect; // @synthesize mraidMaxSizeRect=_mraidMaxSizeRect;
@property(nonatomic) _Bool requestedResizeAllowOffscreen; // @synthesize requestedResizeAllowOffscreen=_requestedResizeAllowOffscreen;
@property(nonatomic) int requestedResizeOffsetY; // @synthesize requestedResizeOffsetY=_requestedResizeOffsetY;
@property(nonatomic) int requestedResizeOffsetX; // @synthesize requestedResizeOffsetX=_requestedResizeOffsetX;
@property(retain, nonatomic) NSString *requestedResizeCustomClosePosition; // @synthesize requestedResizeCustomClosePosition=_requestedResizeCustomClosePosition;
@property(nonatomic) int requestedResizeHeight; // @synthesize requestedResizeHeight=_requestedResizeHeight;
@property(nonatomic) int requestedResizeWidth; // @synthesize requestedResizeWidth=_requestedResizeWidth;
@property(nonatomic) _Bool autoResizeRootView; // @synthesize autoResizeRootView=_autoResizeRootView;
@property(nonatomic) int statusBarWasHidden; // @synthesize statusBarWasHidden=_statusBarWasHidden;
@property(retain, nonatomic) BaiduMobAdWebExpandComposer *expandComposer; // @synthesize expandComposer=_expandComposer;
@property(retain, nonatomic) BaiduMobAdActionComposer *composer; // @synthesize composer=_composer;
@property(nonatomic) BaiduMobAdHTMLRenderer *adRenderer; // @synthesize adRenderer=_adRenderer;
- (void)close;
- (id)getRendererBaseView;
- (void)expand:(id)arg1;
- (void)fireErrorEventWithMessage:(id)arg1 action:(id)arg2;
- (void)onExpand;
- (void)onHide;
- (void)onCollapse;
- (void)onCompleteLoading;
- (void)presentInterstitial:(id)arg1;
- (void)presentInline:(id)arg1;
- (_Bool)isMraidOperationAllowedNow:(id)arg1;
- (void)pushSupportDataToWebView;
- (void)pushDataToWebView:(_Bool)arg1;
- (id)generateDataScript:(_Bool)arg1;
- (void)onInAppViewClosed;
- (void)onInAppViewClosedIfMRAIDOpened;
- (_Bool)getPlacementType;
- (void)setExpandPropertiesWithWidth:(int)arg1 height:(int)arg2 useCustomClose:(_Bool)arg3;
- (id)getVersion;
- (void)_onLoadExpandedAdFail:(id)arg1 requestInfo:(id)arg2;
- (void)_onLoadExpandedAdSuccess:(id)arg1 requestInfo:(id)arg2;
- (void)setIAPBuy:(id)arg1;
- (void)onReceiveFail;
- (id)isSpamViewForWeb;
- (void)setStopped:(id)arg1;
- (id)getActiveType;
- (void)setVisibility:(id)arg1;
- (void)nativeAjax:(id)arg1;
- (id)getAdViewState;
- (void)onReceiveSuccess;
- (void)onAdFailed:(id)arg1;
- (void)onAdClick;
- (void)onAdReady;
- (void)onAdSwitch;
- (void)onAdShow;
- (void)onVideoPlayEnd:(id)arg1;
- (void)playInterstitialVideo;
- (void)playVideoForVideoSdk:(id)arg1;
- (void)playVideoForInterstitial:(id)arg1;
- (void)onInited;
- (void)onInterstitialPreloadEnd:(id)arg1;
- (void)setAppTip:(id)arg1;
- (void)onAdPlayEnd;
- (id)getVisibility;
- (void)notifyReadyEvent;
- (void)setIsViewable:(_Bool)arg1;
- (void)setScreenSize;
- (void)setPlacementType:(id)arg1;
- (void)needsCheckIAPBuy;
- (void)reloadWebView;
- (void)becomeActive;
- (void)resignActive;
- (void)expandWithState:(id)arg1;
- (void)terminateAdView;
- (void)pauseAdView;
- (void)nextAdView;
- (void)resumeAdView;
- (id)getApplicationState;
- (void)didFinishWithResult:(id)arg1;
- (void)confirm:(id)arg1;
- (void)printLog:(id)arg1;
- (void)openActionComposer:(id)arg1;
- (void)setActionUrl:(id)arg1;
- (id)hasSpam;
- (id)getIds;
- (id)detectAppInstalledList:(id)arg1;
- (id)_detectNativeAppInstalled:(id)arg1;
- (id)detectOneAppInstalled:(id)arg1;
- (id)evalScript:(id)arg1 withStr:(id)arg2;
- (id)getDefaultWebView;
- (void)dealloc;
- (id)initWithAdRenderer:(id)arg1;
- (_Bool)adTypeIsInterstitial;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


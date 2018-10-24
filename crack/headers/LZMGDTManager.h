//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LZMAdBaseManager.h"

#import "GDTMobInterstitialDelegate.h"
#import "GDTNativeAdDelegate.h"
#import "GDTNativeExpressAdDelegete.h"
#import "GDTSplashAdDelegate.h"

@class GDTMobInterstitial, GDTNativeAd, GDTSplashAd, NSMutableArray, NSString;

@interface LZMGDTManager : LZMAdBaseManager <GDTSplashAdDelegate, GDTNativeExpressAdDelegete, GDTMobInterstitialDelegate, GDTNativeAdDelegate>
{
    GDTSplashAd *_splash;
    GDTMobInterstitial *_interstitial;
    long long _interstOretion;
    long long _curNaAdPlaceId;
    GDTNativeAd *_curNativeAd;
    NSMutableArray *_releaseView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *releaseView; // @synthesize releaseView=_releaseView;
@property(retain, nonatomic) GDTNativeAd *curNativeAd; // @synthesize curNativeAd=_curNativeAd;
@property(nonatomic) long long curNaAdPlaceId; // @synthesize curNaAdPlaceId=_curNaAdPlaceId;
@property(nonatomic) long long interstOretion; // @synthesize interstOretion=_interstOretion;
@property(retain, nonatomic) GDTMobInterstitial *interstitial; // @synthesize interstitial=_interstitial;
@property(retain, nonatomic) GDTSplashAd *splash; // @synthesize splash=_splash;
- (void).cxx_destruct;
- (void)interstitialAdDidDismissFullScreenModal:(id)arg1;
- (void)interstitialAdWillDismissFullScreenModal:(id)arg1;
- (void)interstitialAdDidPresentFullScreenModal:(id)arg1;
- (void)interstitialAdWillPresentFullScreenModal:(id)arg1;
- (void)interstitialClicked:(id)arg1;
- (void)interstitialWillExposure:(id)arg1;
- (void)interstitialApplicationWillEnterBackground:(id)arg1;
- (void)interstitialDidDismissScreen:(id)arg1;
- (void)becomeActive:(id)arg1;
- (void)interstitialDidPresentScreen:(id)arg1;
- (void)interstitialWillPresentScreen:(id)arg1;
- (void)interstitialFailToLoadAd:(id)arg1 error:(id)arg2;
- (void)interstitialSuccessToLoadAd:(id)arg1;
- (void)applicationDidEnterForground;
- (void)startInterstitialAd:(id)arg1 inRect:(struct CGRect)arg2;
- (void)nativeExpressAdViewApplicationWillEnterBackground:(id)arg1;
- (void)nativeExpressAdViewDidDissmissScreen:(id)arg1;
- (void)nativeExpressAdViewWillDissmissScreen:(id)arg1;
- (void)nativeExpressAdViewDidPresentScreen:(id)arg1;
- (void)nativeExpressAdViewWillPresentScreen:(id)arg1;
- (void)nativeExpressAdViewClosed:(id)arg1;
- (void)nativeExpressAdViewClicked:(id)arg1;
- (void)nativeExpressAdViewExposure:(id)arg1;
- (void)nativeExpressAdViewRenderFail:(id)arg1;
- (void)nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressAdFailToLoad:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdRenderFail:(id)arg1;
- (void)nativeExpressAdSuccessToLoad:(id)arg1 views:(id)arg2;
- (id)getPlaceIdFormCurrentNative:(id)arg1;
- (void)prollAdTimeOutAction;
- (void)backBtnClick:(id)arg1;
- (void)addBackBtnAndTimeLabel:(id)arg1;
- (void)activeProllAdBaseBiew:(id)arg1 withObject:(id)arg2 andPlaceId:(long long)arg3 andADtype:(long long)arg4;
- (void)prollBackAppNow;
- (void)tapGestureClick:(id)arg1;
- (void)activeNativeAdBaseBiew:(id)arg1 withObject:(id)arg2 andPlaceId:(long long)arg3 andADtype:(long long)arg4;
- (void)nativeAdClosed;
- (void)nativeAdApplicationWillEnterBackground;
- (void)nativeAdWillPresentScreen;
- (void)nativeAdFailToLoad:(id)arg1;
- (void)nativeAdSuccessToLoad:(id)arg1;
- (void)removeCurrentAdORStopAd:(id)arg1;
- (void)renderSelfWithPlaceId:(long long)arg1;
- (void)startNativeAd:(long long)arg1;
- (void)splashAdDidDismissFullScreenModal:(id)arg1;
- (void)splashAdWillDismissFullScreenModal:(id)arg1;
- (void)splashAdClicked:(id)arg1;
- (void)splashAdDidPresentFullScreenModal:(id)arg1;
- (void)splashAdWillPresentFullScreenModal:(id)arg1;
- (void)splashAdClosed:(id)arg1;
- (void)splashAdWillClosed:(id)arg1;
- (void)splashAdFailToPresent:(id)arg1 withError:(id)arg2;
- (void)removeSplashView;
- (void)splashAdSuccessPresentScreen:(id)arg1;
- (void)splashAdApplicationWillEnterBackground:(id)arg1;
- (void)startSplashAd;
- (id)getAppAdIdFormPlaceId:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


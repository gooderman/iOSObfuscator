//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XLinearAdSlot.h"

@class BaiduMobAdWebView, NSNumber, NSString;

@interface BaiduMobAdSplashSlot : XLinearAdSlot
{
    BaiduMobAdWebView *_prepareWebview;
    NSNumber *_splashTipStyle;
    long long _contentMode;
    double _requestPrepare;
    double _requestFinish;
    double _rendererFinish;
    NSString *_adType;
}

@property(copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property double rendererFinish; // @synthesize rendererFinish=_rendererFinish;
@property double requestFinish; // @synthesize requestFinish=_requestFinish;
@property double requestPrepare; // @synthesize requestPrepare=_requestPrepare;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) NSNumber *splashTipStyle; // @synthesize splashTipStyle=_splashTipStyle;
@property(retain, nonatomic) BaiduMobAdWebView *prepareWebview; // @synthesize prepareWebview=_prepareWebview;
- (void)preloadResource;
- (void)sendVideoLog:(id)arg1 reason:(id)arg2;
- (void)dealloc;
- (void)sendSplashLog:(id)arg1;
- (void)onAdStart:(id)arg1 withAdInstance:(id)arg2 withDictionary:(id)arg3;
- (void)errorCallback:(id)arg1 withRequestAndResponseDic:(id)arg2;
- (void)successCallback:(id)arg1 withRequestAndResponseDic:(id)arg2;
- (void)request;
- (void)start;
- (id)type;

@end


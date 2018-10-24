//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TVDGDTNativeAdViewDelegate.h"

@class NSArray, NSString, TVDGDTNativeAdView, TVDGDTNativeExtend;

@interface TVDNativeView : UIView <TVDGDTNativeAdViewDelegate>
{
    _Bool _timeoutStatus;
    long long _adType;
    NSArray *_units;
    TVDGDTNativeExtend *_gdtNativeAdExtend;
    TVDGDTNativeAdView *_gdtNativeAdView;
    long long _currentIndex;
    CDUnknownBlockType _adCompletedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType adCompletedBlock; // @synthesize adCompletedBlock=_adCompletedBlock;
@property(nonatomic) _Bool timeoutStatus; // @synthesize timeoutStatus=_timeoutStatus;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) TVDGDTNativeAdView *gdtNativeAdView; // @synthesize gdtNativeAdView=_gdtNativeAdView;
@property(retain, nonatomic) TVDGDTNativeExtend *gdtNativeAdExtend; // @synthesize gdtNativeAdExtend=_gdtNativeAdExtend;
@property(retain, nonatomic) NSArray *units; // @synthesize units=_units;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)timeout;
- (void)gdtNativeAdViewTapped;
- (void)initSplashAdWithAppkey:(id)arg1 withPlacementID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)loadAdWithAppkey:(id)arg1 withPlacementID:(id)arg2 withProvider:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)loadAdforVerity:(id)arg1 currentIndex:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


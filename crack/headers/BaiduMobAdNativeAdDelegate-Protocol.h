//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, UIView;

@protocol BaiduMobAdNativeAdDelegate <NSObject>

@optional
- (void)didDismissLandingPage:(UIView *)arg1;
- (void)nativeAdClicked:(UIView *)arg1;
- (void)nativeAdsFailLoad:(int)arg1;
- (void)nativeAdObjectsSuccessLoad:(NSArray *)arg1;
- (_Bool)enableLocation;
- (NSString *)channelId;
- (NSNumber *)baiduMobAdsWidth;
- (NSNumber *)baiduMobAdsHeight;
- (NSString *)apId;
- (NSString *)publisherId;
@end


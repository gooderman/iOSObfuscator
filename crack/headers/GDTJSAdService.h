//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDTAdService.h"

@interface GDTJSAdService : GDTAdService
{
}

+ (void)fetchJSAdWithJSRequest:(id)arg1 threadId:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)buildRequestDataFromJsRequest:(id)arg1;
+ (struct AdSize)adaptIntersitialSize;
+ (struct AdSize)adaptBannerSize:(int)arg1;
+ (void)expandAd:(id)arg1;
+ (id)interstitialRequestWithPlacementId:(id)arg1;
+ (void)resumeRollingTimer:(id)arg1;
+ (void)suspendRollingTimer:(id)arg1;
+ (id)bannerRequestWithPlacementId:(id)arg1 sizeType:(int)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IMConfig, NSDictionary, NSString;

@protocol IMRichMediaDelegate
- (_Bool)imRichMediaAdShouldExpand;
- (void)imRichMediaAdShouldSendEvent:(NSString *)arg1 withPayload:(NSDictionary *)arg2;
- (IMConfig *)imRichMediaAdGetConfigs;
- (void)imRichMediaAdDidPerformUserInteraction:(NSDictionary *)arg1;
- (void)imRichMediaAdIncentActionComplete:(NSDictionary *)arg1;
- (void)imRichMediaAdFireAdFailed;
- (void)imRichMediaAdFireAdReady;
- (void)imRichMediaAdDidDismissScreen;
- (void)imRichMediaAdWillDismissScreen;
- (void)imRichMediaAdDidPresentScreen;
- (void)imRichMediaAdWillPresentScreen;
- (void)imRichMediaAdWillLeaveApplication;
@end


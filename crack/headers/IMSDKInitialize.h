//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMSDKInitialize : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)isValidAccountID:(id)arg1;
- (_Bool)isVersion:(id)arg1 lessThanVersion:(id)arg2;
- (void)dealloc;
- (void)stopComponents;
- (void)startComponents;
- (void)appWillComeToForeground;
- (void)appWillGoToBackground;
- (void)updateGDPRConsent:(id)arg1;
- (id)init;
- (void)initializeSDKWithAccountID:(id)arg1 consentDictionary:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMOBFSmsComponent.h"

@class NSString;

@interface SMSSDK : NSObject <IMOBFSmsComponent>
{
}

+ (void)getCountryZone:(CDUnknownBlockType)arg1;
+ (void)commitVerificationCode:(id)arg1 phoneNumber:(id)arg2 zone:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (void)getVerificationCodeByMethod:(unsigned long long)arg1 phoneNumber:(id)arg2 zone:(id)arg3 template:(id)arg4 result:(CDUnknownBlockType)arg5;
+ (void)getVerificationCodeByMethod:(unsigned long long)arg1 phoneNumber:(id)arg2 zone:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (id)sdkVersion;
+ (id)version;
+ (id)name;
+ (id)componentName;
+ (id)componentVersion;
+ (void)onReg:(id)arg1;
+ (void)submitUserInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)getAllContactFriends:(CDUnknownBlockType)arg1;
+ (void)enableAppContactFriends:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol WXOMTAMainServiceDelegate <NSObject>
+ (_Bool)isEqualToMagic:(NSData *)arg1;
+ (NSData *)filterBodyData:(NSData *)arg1 configData:(NSData *)arg2;
+ (NSData *)getSendData:(NSData *)arg1;
+ (NSString *)getMTAVersion;
+ (NSString *)getNetworkType;
+ (NSString *)getAppKey;
+ (NSString *)getAppVersion;
+ (NSString *)getMTAConfigIDFA;
+ (NSString *)getIDFV;
+ (NSString *)getBundleID;
+ (NSString *)getOpenUDID;
@end


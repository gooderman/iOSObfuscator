//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAdPool, NSString;

@protocol IMAdPoolDelegate <NSObject>
- (void)adPoolAdNotAvailableforAdPool:(IMAdPool *)arg1 withError:(int)arg2 andDescription:(NSString *)arg3;
- (void)adPoolAdAvailableforAdPool:(IMAdPool *)arg1;
- (void)adPoolAdReceivedForAdPool:(IMAdPool *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAdUnit;

@interface IMAdUnitData : NSObject
{
    IMAdUnit *_adUnit;
    long long _loadTimeStamp;
    long long _expiryTime;
}

@property(nonatomic) long long expiryTime; // @synthesize expiryTime=_expiryTime;
@property(nonatomic) long long loadTimeStamp; // @synthesize loadTimeStamp=_loadTimeStamp;
@property(retain, nonatomic) IMAdUnit *adUnit; // @synthesize adUnit=_adUnit;
- (void).cxx_destruct;

@end


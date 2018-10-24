//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JPUSHReportRequest.h"

@class NSMutableDictionary;

@interface JPUSHBadgeNumberReportRequest : JPUSHReportRequest
{
    NSMutableDictionary *_badgeBody;
    _Bool _isAgainSend;
    long long _badgeCount;
}

@property(nonatomic) _Bool isAgainSend; // @synthesize isAgainSend=_isAgainSend;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
- (void).cxx_destruct;
- (_Bool)startDelaySend;
- (_Bool)cacheRequestRequired;
- (void)setIsSendRequestLock:(_Bool)arg1;
- (_Bool)isSendRequestLock;
- (id)p_generateRequestHead;
- (id)generateReportRequest;
- (void)setResponseBlock;
- (id)packetData;
- (void)setBadgeNumber:(unsigned int)arg1;
- (id)init;

@end


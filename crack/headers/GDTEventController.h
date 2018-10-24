//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface GDTEventController : NSObject
{
    _Bool _sendingCacheEvent;
    long long _logReportType;
    long long _logReportBatchCount;
    long long _logReportPeriod;
    long long _eventReportType;
    long long _eventReportBatchCount;
    long long _eventReportPeriod;
    long long _maxSendCount;
    long long _maxStoreContentLength;
    long long _lastEventTimestamp;
    long long _lastLogTimestamp;
    NSLock *_cacheEventLock;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool sendingCacheEvent; // @synthesize sendingCacheEvent=_sendingCacheEvent;
@property(retain, nonatomic) NSLock *cacheEventLock; // @synthesize cacheEventLock=_cacheEventLock;
@property(nonatomic) long long lastLogTimestamp; // @synthesize lastLogTimestamp=_lastLogTimestamp;
@property(nonatomic) long long lastEventTimestamp; // @synthesize lastEventTimestamp=_lastEventTimestamp;
@property(nonatomic) long long maxStoreContentLength; // @synthesize maxStoreContentLength=_maxStoreContentLength;
@property(nonatomic) long long maxSendCount; // @synthesize maxSendCount=_maxSendCount;
@property(nonatomic) long long eventReportPeriod; // @synthesize eventReportPeriod=_eventReportPeriod;
@property(nonatomic) long long eventReportBatchCount; // @synthesize eventReportBatchCount=_eventReportBatchCount;
@property(nonatomic) long long eventReportType; // @synthesize eventReportType=_eventReportType;
@property(nonatomic) long long logReportPeriod; // @synthesize logReportPeriod=_logReportPeriod;
@property(nonatomic) long long logReportBatchCount; // @synthesize logReportBatchCount=_logReportBatchCount;
@property(nonatomic) long long logReportType; // @synthesize logReportType=_logReportType;
- (void).cxx_destruct;
- (id)reuqestPathWithEventType:(long long)arg1;
- (long long)storedEventCountWithEventType:(long long)arg1;
- (id)timestampKeyWithEventType:(long long)arg1;
- (long long)reportTypeWithEventType:(long long)arg1;
- (long long)periodWithEventType:(long long)arg1;
- (long long)batchCountWithEventType:(long long)arg1;
- (void)sendEvent:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)sendCachedEventsWithType:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)recordEvent:(id)arg1;
- (void)updateEventSetting;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMANBaseEvent.h"

@class NSMutableArray;

@interface UMANTerminate : UMANBaseEvent
{
    double _duration;
    NSMutableArray *_pageViews;
    double _latitude;
    double _longitude;
    long long _gps_time;
}

+ (id)loadTableWithVersion:(id)arg1;
+ (id)loadTable:(id)arg1;
+ (void)insertSessionBeginTable:(id)arg1 st:(id)arg2;
+ (void)insertSessionEndTable:(id)arg1 et:(id)arg2;
+ (void)addAutoPage:(id)arg1;
+ (void)addPage:(id)arg1;
+ (void)insertAutoPageTable:(id)arg1 page:(id)arg2;
+ (void)insertPageTable:(id)arg1 page:(id)arg2;
+ (void)insertSessionTable:(id)arg1 st:(id)arg2;
+ (void)clearDataInTableWithVersion:(id)arg1;
+ (void)clearDataInTable:(id)arg1;
+ (int)rowCountInTable:(id)arg1;
@property(nonatomic) long long gps_time; // @synthesize gps_time=_gps_time;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSMutableArray *pageViews; // @synthesize pageViews=_pageViews;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)outputUMLog;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)attributes;
- (id)initWithDuration:(double)arg1;
- (_Bool)hasGPSInfo;
- (id)init;

@end


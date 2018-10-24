//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class GDTVAMonitor, GDTVAMonitorFrame, NSMutableArray;

@interface GDTVAMonitorTimeline : NSObject <NSCoding>
{
    double _exposeDuration;
    double _monitorDuration;
    GDTVAMonitor *_monitor;
    GDTVAMonitorFrame *_start;
    GDTVAMonitorFrame *_visibleStart;
    GDTVAMonitorFrame *_end;
    NSMutableArray *_frames;
}

@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) GDTVAMonitorFrame *end; // @synthesize end=_end;
@property(retain, nonatomic) GDTVAMonitorFrame *visibleStart; // @synthesize visibleStart=_visibleStart;
@property(retain, nonatomic) GDTVAMonitorFrame *start; // @synthesize start=_start;
@property(nonatomic) __weak GDTVAMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) double monitorDuration; // @synthesize monitorDuration=_monitorDuration;
@property(nonatomic) double exposeDuration; // @synthesize exposeDuration=_exposeDuration;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)generateUploadEvents;
- (long long)count;
- (id)generateOutputFrames;
- (_Bool)needRecord:(id)arg1;
- (void)enqueueFrame:(id)arg1;
- (id)initWithMonitor:(id)arg1;

@end


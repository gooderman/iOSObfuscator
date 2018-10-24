//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerItem, IMIASNativeVideoViewability, IMVastCompanion, NSArray, NSNumber, NSString;

@interface IMVideoAssetMetaData : NSObject
{
    _Bool _impressionFired;
    _Bool _startFired;
    _Bool _handoff;
    _Bool _completeFired;
    NSArray *_ads;
    AVPlayerItem *_playerItem;
    NSString *_clickThroughUrl;
    double _duration;
    IMVastCompanion *_selectedCompanion;
    NSString *_assetPath;
    NSString *_videoUrl;
    NSString *_videoCachePath;
    IMIASNativeVideoViewability *_iasViewability;
    NSNumber *_completeAfter;
    CDStruct_1b6d18a9 _currentTime;
}

@property(nonatomic) _Bool completeFired; // @synthesize completeFired=_completeFired;
@property(retain, nonatomic) NSNumber *completeAfter; // @synthesize completeAfter=_completeAfter;
@property(retain, nonatomic) IMIASNativeVideoViewability *iasViewability; // @synthesize iasViewability=_iasViewability;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property _Bool handoff; // @synthesize handoff=_handoff;
@property(retain, nonatomic) NSString *videoCachePath; // @synthesize videoCachePath=_videoCachePath;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
@property(retain, nonatomic) IMVastCompanion *selectedCompanion; // @synthesize selectedCompanion=_selectedCompanion;
@property _Bool startFired; // @synthesize startFired=_startFired;
@property _Bool impressionFired; // @synthesize impressionFired=_impressionFired;
@property double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *clickThroughUrl; // @synthesize clickThroughUrl=_clickThroughUrl;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) NSArray *ads; // @synthesize ads=_ads;
- (void).cxx_destruct;

@end


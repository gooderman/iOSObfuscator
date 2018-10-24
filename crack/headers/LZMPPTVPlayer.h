//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LZMPlayerBaseView.h"

#import "PPTVMediaPlayerDelegate.h"

@class LZMPlayerModel, NSArray, NSString, NSTimer, PPTVPlayerSdk;

@interface LZMPPTVPlayer : LZMPlayerBaseView <PPTVMediaPlayerDelegate>
{
    PPTVPlayerSdk *_player;
    unsigned long long _playType;
    LZMPlayerModel *_playerModel;
    NSTimer *_progressTimer;
    NSArray *_qualityArray;
}

@property(retain, nonatomic) NSArray *qualityArray; // @synthesize qualityArray=_qualityArray;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) LZMPlayerModel *playerModel; // @synthesize playerModel=_playerModel;
@property(nonatomic) unsigned long long playType; // @synthesize playType=_playType;
@property(retain, nonatomic) PPTVPlayerSdk *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)dealloc;
- (void)playerShowOnAirPlay:(_Bool)arg1;
- (void)playBackStateChanged:(_Bool)arg1;
- (void)playerDurationAvailable:(double)arg1;
- (void)playBackDidFinished;
- (void)playerBufferFinished;
- (void)playerBuffering;
- (void)playerLoadFinished;
- (void)playerLoadFailedWithError:(id)arg1;
- (void)playerLoadPlaylinkFailed:(id)arg1;
- (void)configVideoQuality;
- (void)stopProgressReload;
- (void)controlViewProgressReload;
- (void)creatProgressTimer;
- (void)initPlayerView;
- (void)seekToTime:(long long)arg1;
- (void)pause;
- (void)play;
- (void)destroyPlayer;
- (void)clearPlayer;
- (long long)bufferingProgress;
- (double)duration;
- (double)currentPlaybackTime;
- (void)resetNewVideoWithModel:(id)arg1;
- (void)playInfoNeedRetryNotification;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


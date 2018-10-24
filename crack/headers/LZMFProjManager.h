//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LZMDeviceControllDelegate.h"

@class LZMDeviceControll, NSString, ZM_UpnpModel;

@interface LZMFProjManager : NSObject <LZMDeviceControllDelegate>
{
    _Bool _isProjecting;
    _Bool _isforbidTransform;
    _Bool _isPlayNew;
    _Bool _isDragged;
    _Bool _newConect;
    id <LZMFProjManagerDataScource> _dataSource;
    id <LZMFProjManagerDelegate> _delegate;
    LZMDeviceControll *_projectCtrl;
    ZM_UpnpModel *_selectDeviceModel;
    NSString *_selectURL;
    long long _currentPlayTime;
    long long _totalPlayTime;
    long long _seekTime;
}

+ (id)shareInstance;
@property(nonatomic) _Bool newConect; // @synthesize newConect=_newConect;
@property(nonatomic) long long seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) long long totalPlayTime; // @synthesize totalPlayTime=_totalPlayTime;
@property(nonatomic) long long currentPlayTime; // @synthesize currentPlayTime=_currentPlayTime;
@property(nonatomic) _Bool isDragged; // @synthesize isDragged=_isDragged;
@property(copy, nonatomic) NSString *selectURL; // @synthesize selectURL=_selectURL;
@property(retain, nonatomic) ZM_UpnpModel *selectDeviceModel; // @synthesize selectDeviceModel=_selectDeviceModel;
@property(retain, nonatomic) LZMDeviceControll *projectCtrl; // @synthesize projectCtrl=_projectCtrl;
@property(nonatomic) _Bool isPlayNew; // @synthesize isPlayNew=_isPlayNew;
@property(nonatomic) _Bool isforbidTransform; // @synthesize isforbidTransform=_isforbidTransform;
@property(nonatomic) _Bool isProjecting; // @synthesize isProjecting=_isProjecting;
@property(nonatomic) id <LZMFProjManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <LZMFProjManagerDataScource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)projectBtnClickFull:(_Bool)arg1 andVideoCateString:(long long)arg2;
- (void)thePlayPageBackClick;
- (void)setMyDeviceVolumeValue:(long long)arg1;
- (void)pause;
- (void)play;
- (void)connectTheDevice;
- (id)getValueBackTargetSeekTime:(long long)arg1;
- (void)seekProjectingTime:(long long)arg1;
- (void)getPlayUrlReady:(id)arg1 andSeekTime:(long long)arg2;
- (void)getDeviceReadyToPlay:(id)arg1 andSeekTime:(long long)arg2;
- (void)getPositionInfoWithInfoTrackDuration:(float)arg1 relTime:(float)arg2;
- (void)getVolumeWithVolume:(long long)arg1;
- (void)getSearchDeviceWithArray:(id)arg1;
- (void)setDeviceResponseSuccess;
- (void)projectBtnClickDelegate:(id)arg1;
- (void)exitBTNAction:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


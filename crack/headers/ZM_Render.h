//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ZM_UpnpModel;

@interface ZM_Render : NSObject
{
    ZM_UpnpModel *_model;
    id <ZM_RenderResponseDelegate> _delegate;
}

@property(retain, nonatomic) id <ZM_RenderResponseDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ZM_UpnpModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)_GetPositionInfoResponseWith:(id)arg1;
- (void)getTransportInfoResponseWithInfo:(id)arg1;
- (void)getVolumeSuccessWithInfo:(id)arg1;
- (void)upnpUndefineWithErrorString:(id)arg1;
- (void)upnpSetVolumeResponse;
- (void)upnpPreviousResponse;
- (void)upnpNextResponse;
- (void)upnpStopResponse;
- (void)upnpPauseResponse;
- (void)upnpPlayResponse;
- (void)upnpSetNextAVTransportResponse;
- (void)_SeekResponse;
- (void)upnpSetAVTransportResponse;
- (void)respondsMethod:(id)arg1;
- (void)parseResponseData:(id)arg1;
- (void)postRequestWithAction:(id)arg1;
- (void)seekToTarget:(id)arg1 Unit:(id)arg2;
- (void)getPositionInfo;
- (void)getVolume;
- (void)setVolumeWithString:(id)arg1;
- (void)previous;
- (void)next;
- (void)stop;
- (void)pause;
- (void)play;
- (void)getTransportInfo;
- (void)setNextAVTransportWithNextURL:(id)arg1;
- (void)setAVTransportWithURL:(id)arg1;
- (id)initWithModel:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDTSplashSkipView.h"

#import "GDTGestureDelegate.h"

@class NSString, UILabel;

@interface GDTSplashDefaultSkipView : GDTSplashSkipView <GDTGestureDelegate>
{
    UILabel *_skipLabel;
    UILabel *_timeLabel;
}

@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *skipLabel; // @synthesize skipLabel=_skipLabel;
- (void).cxx_destruct;
- (void)setExposureTime:(long long)arg1;
- (void)tick;
- (void)stopTick;
- (void)startTick:(long long)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


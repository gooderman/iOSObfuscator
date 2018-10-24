//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDTSplashSkipView.h"

#import "GDTGestureDelegate.h"

@class NSString, UIView;

@interface GDTSplashCustomSkipView : GDTSplashSkipView <GDTGestureDelegate>
{
    UIView *_customSkipView;
}

@property(retain, nonatomic) UIView *customSkipView; // @synthesize customSkipView=_customSkipView;
- (void).cxx_destruct;
- (void)stopTick;
- (void)tick;
- (void)startTick:(long long)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 customSkipView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSInterstitialManager, NSString, UIViewController;

@interface CSInterstitial : NSObject
{
    _Bool _autoCloseAfterCountDown;
    _Bool _showCloseButton;
    _Bool _loadNextWhenClose;
    _Bool _closeWhenClick;
    unsigned int _countdown;
    NSString *_placementID;
    UIViewController *_rootViewController;
    id <CSInterstitialDelegate> _delegate;
    CDUnknownBlockType _didLoadAD;
    CDUnknownBlockType _loadADFailure;
    CDUnknownBlockType _didPresent;
    CDUnknownBlockType _countdownFinished;
    CDUnknownBlockType _willDismiss;
    CDUnknownBlockType _didDismiss;
    CSInterstitialManager *_adManager;
    struct CGSize _interstitialSize;
}

+ (id)sharedInterstitial;
@property(retain, nonatomic) CSInterstitialManager *adManager; // @synthesize adManager=_adManager;
@property(copy, nonatomic) CDUnknownBlockType didDismiss; // @synthesize didDismiss=_didDismiss;
@property(copy, nonatomic) CDUnknownBlockType willDismiss; // @synthesize willDismiss=_willDismiss;
@property(copy, nonatomic) CDUnknownBlockType countdownFinished; // @synthesize countdownFinished=_countdownFinished;
@property(copy, nonatomic) CDUnknownBlockType didPresent; // @synthesize didPresent=_didPresent;
@property(copy, nonatomic) CDUnknownBlockType loadADFailure; // @synthesize loadADFailure=_loadADFailure;
@property(copy, nonatomic) CDUnknownBlockType didLoadAD; // @synthesize didLoadAD=_didLoadAD;
@property(nonatomic) __weak id <CSInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) struct CGSize interstitialSize; // @synthesize interstitialSize=_interstitialSize;
@property(nonatomic) _Bool closeWhenClick; // @synthesize closeWhenClick=_closeWhenClick;
@property(nonatomic) _Bool loadNextWhenClose; // @synthesize loadNextWhenClose=_loadNextWhenClose;
@property(nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(nonatomic) _Bool autoCloseAfterCountDown; // @synthesize autoCloseAfterCountDown=_autoCloseAfterCountDown;
@property(nonatomic) unsigned int countdown; // @synthesize countdown=_countdown;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
- (void).cxx_destruct;
- (void)closeInterstitial;
- (void)fillInterstitialInView:(id)arg1;
- (void)showInterstitialOnRootView:(id)arg1;
- (void)showInterstitial:(id)arg1;
- (void)showInterstitial;
- (void)loadInterstitial;
@property(readonly, nonatomic) unsigned int status;
@property(readonly, nonatomic) _Bool isReady;
- (void)dealloc;
- (id)init;

@end


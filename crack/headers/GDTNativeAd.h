//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDTClickManagerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class GDTAdMgr, GDTClickManager, NSString, UIViewController;

@interface GDTNativeAd : NSObject <UIAlertViewDelegate, GDTClickManagerDelegate, SKStoreProductViewControllerDelegate>
{
    NSString *_placementId;
    NSString *_appId;
    GDTAdMgr *_adMgr;
    _Bool storePresented;
    GDTClickManager *_clickManager;
    NSString *_threadId;
    _Bool _shouldIngorePresentingViewController;
    UIViewController *_controller;
    id <GDTNativeAdDelegate> _delegate;
}

@property(nonatomic) _Bool shouldIngorePresentingViewController; // @synthesize shouldIngorePresentingViewController=_shouldIngorePresentingViewController;
@property(nonatomic) __weak id <GDTNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)initWithAppkey:(id)arg1 placementId:(id)arg2;
- (id)dataFromDictionary:(id)arg1;
- (void)gdt_clickManagerModalDidDismiss;
- (void)gdt_clickManagerModalWillDismiss;
- (void)gdt_clickManagerModalDidPresent;
- (void)gdt_clickManagerModalWillPresent;
- (void)gdt_clickManagerAppDidResignActive;
- (_Bool)checkParams;
- (void)initAdMgr;
- (void)clickAd:(id)arg1;
- (void)attachAd:(id)arg1 toView:(id)arg2;
- (void)showError:(unsigned long long)arg1 detailErrorCode:(long long)arg2;
- (void)showError:(unsigned long long)arg1;
- (void)loadAd:(int)arg1;
- (id)initWithAppId:(id)arg1 placementId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


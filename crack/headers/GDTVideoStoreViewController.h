//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GDTVideoViewDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"

@class GDTStoreProductController, GDTVideoView, GDTWebViewController, NSString, UIView<GDTVideoViewDelegate>;

@interface GDTVideoStoreViewController : UIViewController <SKStoreProductViewControllerDelegate, GDTVideoViewDelegate>
{
    _Bool _originVideoMuted;
    NSString *_clickId;
    NSString *_videoUrl;
    NSString *_itunesId;
    id <GDTVideoStoreViewControllerDelegate> _delegate;
    GDTVideoView *_videoView;
    NSString *_rl;
    GDTStoreProductController *_storeProductController;
    GDTWebViewController *_webViewController;
    UIView<GDTVideoViewDelegate> *_videoSuperView;
    struct CGRect _sourceFrame;
    struct CGRect _originFrame;
    struct CGRect _landscapeFrame;
}

@property(retain, nonatomic) UIView<GDTVideoViewDelegate> *videoSuperView; // @synthesize videoSuperView=_videoSuperView;
@property(nonatomic) struct CGRect landscapeFrame; // @synthesize landscapeFrame=_landscapeFrame;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(retain, nonatomic) GDTWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) GDTStoreProductController *storeProductController; // @synthesize storeProductController=_storeProductController;
@property(copy, nonatomic) NSString *rl; // @synthesize rl=_rl;
@property(retain, nonatomic) GDTVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) _Bool originVideoMuted; // @synthesize originVideoMuted=_originVideoMuted;
@property(nonatomic) __weak id <GDTVideoStoreViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *itunesId; // @synthesize itunesId=_itunesId;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *clickId; // @synthesize clickId=_clickId;
- (void).cxx_destruct;
- (float)playTime;
- (void)dismissViewController;
- (void)switchFullScreenStatus;
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (void)orientationChanged:(id)arg1;
- (void)videoView:(id)arg1 didChangeStatus:(unsigned long long)arg2 oldStatus:(unsigned long long)arg3;
- (void)videoView:(id)arg1 didClickFullscreenButton:(id)arg2;
- (void)videoView:(id)arg1 didClickCloseButton:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVideoView:(id)arg1 superView:(id)arg2 itunesId:(id)arg3 rl:(id)arg4;
- (id)initWithVideoUrl:(id)arg1 itunesId:(id)arg2 rl:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


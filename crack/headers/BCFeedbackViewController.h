//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class BCFeedbackKit, BCHybridWebView, NSDictionary, NSString, UIBarButtonItem, UIColor;

@interface BCFeedbackViewController : UIViewController <UIWebViewDelegate>
{
    _Bool _isForbiddenBroswerViewPull;
    _Bool _canGoBack;
    BCHybridWebView *_contentView;
    NSDictionary *_extInfo;
    CDUnknownBlockType _closeBlock;
    NSString *_originUrl;
    NSString *_backCallback;
    NSString *_rightButtonCallback;
    BCFeedbackKit *_feedbackKitRef;
    UIColor *_color;
    UIColor *_backgroundColor;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_closeButton;
}

+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithHexString:(id)arg1 alpha:(double)arg2;
@property(retain, nonatomic) UIBarButtonItem *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) __weak BCFeedbackKit *feedbackKitRef; // @synthesize feedbackKitRef=_feedbackKitRef;
@property(nonatomic) _Bool canGoBack; // @synthesize canGoBack=_canGoBack;
@property(copy, nonatomic) NSString *rightButtonCallback; // @synthesize rightButtonCallback=_rightButtonCallback;
@property(copy, nonatomic) NSString *backCallback; // @synthesize backCallback=_backCallback;
@property(nonatomic) _Bool isForbiddenBroswerViewPull; // @synthesize isForbiddenBroswerViewPull=_isForbiddenBroswerViewPull;
@property(retain, nonatomic) NSString *originUrl; // @synthesize originUrl=_originUrl;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) BCHybridWebView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)defaultRightBarButtonItemTitleFont;
- (id)defaultCloseButtonTitleFont;
- (void)receiveYWToolBarManagerNotification:(id)arg1;
- (void)removeNotificationObserver;
- (void)addNotificationObserver;
- (void)reloadNavbar:(id)arg1;
- (void)closeItemAction;
- (void)rightItemAction;
- (void)leftItemAction;
- (id)whiteList;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFeedbackKit:(id)arg1 extInfo:(id)arg2 configration:(id)arg3;
@property(nonatomic) long long unreadCount;
@property(retain, nonatomic) NSDictionary *configration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


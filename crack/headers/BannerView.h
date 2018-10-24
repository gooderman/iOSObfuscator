//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class CloseButton, NSMutableArray, NSString, NSTimer, UIImage, UIPageControl, UIScrollView;

@interface BannerView : UIView <UIScrollViewDelegate>
{
    _Bool _isBottom;
    _Bool _adAutoplay;
    _Bool _hideCloseButton;
    CloseButton *_closeButton;
    NSTimer *_adLoopTimer;
    UIImage *_placeImage;
    NSMutableArray *_adDataArray;
    double _adPeriodTime;
    id <BannerViewDelagate> _delegate;
    UIScrollView *_adScrollView;
    UIPageControl *_pageControl;
    double _closeBtnHeight;
    struct CGSize _adSize;
}

@property(nonatomic) double closeBtnHeight; // @synthesize closeBtnHeight=_closeBtnHeight;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *adScrollView; // @synthesize adScrollView=_adScrollView;
@property(nonatomic) __weak id <BannerViewDelagate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hideCloseButton; // @synthesize hideCloseButton=_hideCloseButton;
@property(nonatomic) _Bool adAutoplay; // @synthesize adAutoplay=_adAutoplay;
@property(nonatomic) double adPeriodTime; // @synthesize adPeriodTime=_adPeriodTime;
@property(retain, nonatomic) NSMutableArray *adDataArray; // @synthesize adDataArray=_adDataArray;
@property(retain, nonatomic) UIImage *placeImage; // @synthesize placeImage=_placeImage;
@property(retain, nonatomic) NSTimer *adLoopTimer; // @synthesize adLoopTimer=_adLoopTimer;
@property(retain, nonatomic) CloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(nonatomic) _Bool isBottom; // @synthesize isBottom=_isBottom;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onCloseButtonClicked:(id)arg1;
- (void)adImgClick;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)loopAd;
- (void)loadAdDataThenStart;
- (void)loadCloseButton;
- (id)imageByResource:(id)arg1;
- (void)loadAdTitle;
- (void)setPageControl;
- (void)setAdScrollView;
- (void)orientationDidChangeNotification:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


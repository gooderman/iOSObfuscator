//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class LZMPageScrollView, NSString;

@interface LZMPageViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _hasProcessForwardAppearance;
    LZMPageScrollView *_containerView;
    unsigned long long _currentIndex;
    id <LZMPageViewControllerDataSource> _dataSource;
    id <LZMPageViewControllerDelegate> _delegate;
    long long _numberOfControllers;
    long long _preIndex;
    long long _potentialNextIndex;
    struct CGPoint _preContentOffset;
}

@property(nonatomic) _Bool hasProcessForwardAppearance; // @synthesize hasProcessForwardAppearance=_hasProcessForwardAppearance;
@property(nonatomic) struct CGPoint preContentOffset; // @synthesize preContentOffset=_preContentOffset;
@property(nonatomic) long long potentialNextIndex; // @synthesize potentialNextIndex=_potentialNextIndex;
@property(nonatomic) long long preIndex; // @synthesize preIndex=_preIndex;
@property(nonatomic) long long numberOfControllers; // @synthesize numberOfControllers=_numberOfControllers;
@property(nonatomic) __weak id <LZMPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <LZMPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) LZMPageScrollView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)gotoPageWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (void)updateControllersAppearanceStautsWhenEndCelerating;
- (void)updateControllersAppearanceStautsWhenDraging;
- (void)replaceWithController:(id)arg1 atIndex:(long long)arg2;
- (void)relayoutNextControllerIfNeed;
- (void)relayoutNextController;
- (void)relayoutPreControllerIfNeed;
- (void)relayoutPreController;
- (void)relayoutCurrentControllerIfNeed;
- (void)relayoutCurrentViewController;
- (void)relayout;
- (void)resetSubViewSize;
- (void)removeOtherControllers;
- (void)removeChildController:(id)arg1;
- (_Bool)hasLayoutControllerAtIndex:(long long)arg1;
- (id)childViewControllerForIndex:(long long)arg1;
- (long long)caculateCurrentIndex;
- (void)controllerDidDisappearAtIndex:(long long)arg1;
- (void)controllerWillDisappearAtIndex:(long long)arg1;
- (void)controllerDidAppearAtIndex:(long long)arg1;
- (void)controllerWillAppearAtIndex:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


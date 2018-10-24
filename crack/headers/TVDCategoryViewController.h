//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVEChannelIconViewDelegate.h"
#import "TVEFocusViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSMutableArray, NSString, TVEChannelIconView, TVEFocusView, TVEMJRefreshNormalHeader, UICollectionView;

@interface TVDCategoryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TVEChannelIconViewDelegate, TVEFocusViewDelegate>
{
    NSString *_channelTitle;
    NSString *_pageID;
    id <TVDCategoryViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    NSMutableArray *_sectionArray;
    TVEMJRefreshNormalHeader *_mj_header;
    TVEFocusView *_focusView;
    TVEChannelIconView *_iconView;
}

@property(retain, nonatomic) TVEChannelIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) TVEFocusView *focusView; // @synthesize focusView=_focusView;
@property(retain, nonatomic) TVEMJRefreshNormalHeader *mj_header; // @synthesize mj_header=_mj_header;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <TVDCategoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSString *channelTitle; // @synthesize channelTitle=_channelTitle;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)iconClick:(id)arg1;
- (void)focusViewClick:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadUIWithData:(id)arg1;
- (void)getData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


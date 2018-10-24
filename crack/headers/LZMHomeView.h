//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class LZMFHomeFooterView, LZMFHomeHeaderView, LZMHomeOrder, NSString, UIButton, UICollectionView, UIImageView;

@interface LZMHomeView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _loadSuccess;
    _Bool _isExchanges;
    _Bool _moreHidden;
    LZMFHomeHeaderView *_header;
    LZMFHomeFooterView *_footView;
    UICollectionView *_collectionView;
    LZMHomeOrder *_cofigModel;
    NSString *_headTitle;
    NSString *_trailTitle;
    long long _numSubCellControll;
    long long _subAreaType;
    NSString *_URLString;
    CDUnknownBlockType _clickBlock;
    UIImageView *_failedImageView;
    UIButton *_failedReloadBtn;
    CDUnknownBlockType _failedBTNBlock;
    CDUnknownBlockType _moreBTNBlock;
    long long _loadTimes;
    long long _type;
}

+ (double)getCurrentModelBackHeight:(id)arg1;
+ (double)getCurrentTypeBackHeight:(long long)arg1;
@property(nonatomic) _Bool moreHidden; // @synthesize moreHidden=_moreHidden;
@property(nonatomic) _Bool isExchanges; // @synthesize isExchanges=_isExchanges;
@property(nonatomic) _Bool loadSuccess; // @synthesize loadSuccess=_loadSuccess;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long loadTimes; // @synthesize loadTimes=_loadTimes;
@property(copy, nonatomic) CDUnknownBlockType moreBTNBlock; // @synthesize moreBTNBlock=_moreBTNBlock;
@property(copy, nonatomic) CDUnknownBlockType failedBTNBlock; // @synthesize failedBTNBlock=_failedBTNBlock;
@property(retain, nonatomic) UIButton *failedReloadBtn; // @synthesize failedReloadBtn=_failedReloadBtn;
@property(retain, nonatomic) UIImageView *failedImageView; // @synthesize failedImageView=_failedImageView;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(nonatomic) long long subAreaType; // @synthesize subAreaType=_subAreaType;
@property(nonatomic) long long numSubCellControll; // @synthesize numSubCellControll=_numSubCellControll;
@property(copy, nonatomic) NSString *trailTitle; // @synthesize trailTitle=_trailTitle;
@property(copy, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
@property(retain, nonatomic) LZMHomeOrder *cofigModel; // @synthesize cofigModel=_cofigModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) LZMFHomeFooterView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) LZMFHomeHeaderView *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)failedReloadBtnAction:(id)arg1;
- (void)requestCurrentTypeData:(long long)arg1 andCurrentURL:(id)arg2;
- (void)footerButtonAction:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSMutableArray, NSString, UICollectionView, UIColor;

@interface LZMYSelectProgramContentBaseView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    id <LZMYSelectProgramContentBaseViewDelegate> _delegate;
    UICollectionView *_collectionView;
    long long _count;
    long long _index;
    long long _numOfPage;
    UIColor *_selectColor;
    UIColor *_normalColor;
    long long _selectIndex;
    NSMutableArray *_totalArray;
    NSMutableArray *_dataArray;
    UIColor *_programCellBackGroudColor;
}

@property(retain, nonatomic) UIColor *programCellBackGroudColor; // @synthesize programCellBackGroudColor=_programCellBackGroudColor;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *totalArray; // @synthesize totalArray=_totalArray;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) UIColor *selectColor; // @synthesize selectColor=_selectColor;
@property(nonatomic) long long numOfPage; // @synthesize numOfPage=_numOfPage;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <LZMYSelectProgramContentBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)getData;
- (void)renderCount:(long long)arg1 Index:(long long)arg2 NumOfPage:(long long)arg3 ProgramCellBackGroudColor:(id)arg4 NormalColor:(id)arg5 SelectColor:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class LZMSourceInfoModel, NSString, UIButton, UICollectionView, UIColor, YYLabel;

@interface LZMChooseSectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _hiddenHead;
    LZMSourceInfoModel *_sourceModel;
    NSString *_section;
    CDUnknownBlockType _halfChooseSection;
    CDUnknownBlockType _halfNextPageData;
    UIButton *_exitButton;
    YYLabel *_nameLabel;
    UICollectionView *_collectionView;
    long long _page;
    long long _tempPage;
    UIColor *_selectColor;
    UIColor *_normalColor;
    UIColor *_cellBackGroudColor;
}

@property(nonatomic) _Bool hiddenHead; // @synthesize hiddenHead=_hiddenHead;
@property(retain, nonatomic) UIColor *cellBackGroudColor; // @synthesize cellBackGroudColor=_cellBackGroudColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) UIColor *selectColor; // @synthesize selectColor=_selectColor;
@property(nonatomic) long long tempPage; // @synthesize tempPage=_tempPage;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) YYLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(copy, nonatomic) CDUnknownBlockType halfNextPageData; // @synthesize halfNextPageData=_halfNextPageData;
@property(copy, nonatomic) CDUnknownBlockType halfChooseSection; // @synthesize halfChooseSection=_halfChooseSection;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(retain, nonatomic) LZMSourceInfoModel *sourceModel; // @synthesize sourceModel=_sourceModel;
- (void).cxx_destruct;
- (void)appendDataList:(id)arg1;
- (void)loadNextPageWithItemIndexPath:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)exitButtonAction;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1 hiddenHead:(_Bool)arg2 cellBackGroudColor:(id)arg3 normalColor:(id)arg4 selectColor:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class LZMButton, LZMSourceInfoModel, YYLabel;

@interface LZMVideoDetailHeaderView : UICollectionReusableView
{
    long long _cellType;
    long long _cateId;
    LZMSourceInfoModel *_sourceInfo;
    CDUnknownBlockType _moreChooseNumber;
    YYLabel *_titleLabel;
    LZMButton *_updateNumber;
    LZMButton *_more;
}

@property(retain, nonatomic) LZMButton *more; // @synthesize more=_more;
@property(retain, nonatomic) LZMButton *updateNumber; // @synthesize updateNumber=_updateNumber;
@property(retain, nonatomic) YYLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType moreChooseNumber; // @synthesize moreChooseNumber=_moreChooseNumber;
@property(retain, nonatomic) LZMSourceInfoModel *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(nonatomic) long long cateId; // @synthesize cateId=_cateId;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (void)moreNumberAction;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end


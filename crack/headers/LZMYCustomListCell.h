//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGSwipeTableCell.h"

@class LZMYCustomModel, UIButton, UIImageView, UILabel;

@interface LZMYCustomListCell : MGSwipeTableCell
{
    LZMYCustomModel *_customModel;
    CDUnknownBlockType _customListCellEidtVideoBlock;
    UIImageView *_iconImageView;
    UILabel *_titleLB;
    UIButton *_eidtBtn;
}

@property(retain, nonatomic) UIButton *eidtBtn; // @synthesize eidtBtn=_eidtBtn;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType customListCellEidtVideoBlock; // @synthesize customListCellEidtVideoBlock=_customListCellEidtVideoBlock;
@property(retain, nonatomic) LZMYCustomModel *customModel; // @synthesize customModel=_customModel;
- (void).cxx_destruct;
- (void)eidtBtnAction;
- (void)createUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


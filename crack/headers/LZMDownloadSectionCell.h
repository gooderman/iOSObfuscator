//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CABasicAnimation, LZMChooseDownloadItemModel, UIColor, UIImageView, UILabel;

@interface LZMDownloadSectionCell : UICollectionViewCell
{
    LZMChooseDownloadItemModel *_model;
    UIColor *_normalColor;
    UIColor *_selectColor;
    UILabel *_titleLabel;
    UIImageView *_downloadStateImage;
    CABasicAnimation *_transformAnima;
}

@property(retain, nonatomic) CABasicAnimation *transformAnima; // @synthesize transformAnima=_transformAnima;
@property(retain, nonatomic) UIImageView *downloadStateImage; // @synthesize downloadStateImage=_downloadStateImage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *selectColor; // @synthesize selectColor=_selectColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) LZMChooseDownloadItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end


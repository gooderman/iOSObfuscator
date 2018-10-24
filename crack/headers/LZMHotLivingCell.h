//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer, LZMImageView, LZMLiveModel, MarqueeLabel, NSMutableArray, UILabel;

@interface LZMHotLivingCell : UICollectionViewCell
{
    LZMLiveModel *_livingModel;
    LZMImageView *_coverImageView;
    CALayer *_shaowLayer;
    CALayer *_bottomLayer;
    MarqueeLabel *_titleLabel;
    UILabel *_viewsCountLabel;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UILabel *viewsCountLabel; // @synthesize viewsCountLabel=_viewsCountLabel;
@property(retain, nonatomic) MarqueeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CALayer *bottomLayer; // @synthesize bottomLayer=_bottomLayer;
@property(retain, nonatomic) CALayer *shaowLayer; // @synthesize shaowLayer=_shaowLayer;
@property(retain, nonatomic) LZMImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) LZMLiveModel *livingModel; // @synthesize livingModel=_livingModel;
- (void).cxx_destruct;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


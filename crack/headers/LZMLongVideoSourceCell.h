//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class LZMImageView, LZMSourceInfoModel, UILabel;

@interface LZMLongVideoSourceCell : UICollectionViewCell
{
    LZMSourceInfoModel *_sourceInfo;
    LZMImageView *_iconImage;
    UILabel *_nameLabel;
}

@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) LZMImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) LZMSourceInfoModel *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end


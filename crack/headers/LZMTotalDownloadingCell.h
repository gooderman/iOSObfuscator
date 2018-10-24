//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class LZMDownloadModel, LZMImageView, UIImageView, UILabel, UIProgressView;

@interface LZMTotalDownloadingCell : UITableViewCell
{
    LZMDownloadModel *_downloadModel;
    long long _count;
    LZMImageView *_iconImageView;
    UIImageView *_countImage;
    UILabel *_countLabel;
    UILabel *_stateLabel;
    UILabel *_nameLabel;
    UILabel *_progressLabel;
    UILabel *_speedLabel;
    UIProgressView *_progressBar;
    UIImageView *_moreImage;
}

@property(retain, nonatomic) UIImageView *moreImage; // @synthesize moreImage=_moreImage;
@property(retain, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UILabel *speedLabel; // @synthesize speedLabel=_speedLabel;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *countImage; // @synthesize countImage=_countImage;
@property(retain, nonatomic) LZMImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) LZMDownloadModel *downloadModel; // @synthesize downloadModel=_downloadModel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)downloadStatusLabelText:(long long)arg1;
- (void)layoutSubviews;
- (void)buildUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


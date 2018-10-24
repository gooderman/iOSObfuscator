//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class LZMLiveModel, MarqueeLabel, NSMutableArray, UILabel;

@interface LZMPlaceChannelCell : UITableViewCell
{
    LZMLiveModel *_channelModel;
    UILabel *_nameLabel;
    MarqueeLabel *_contentLabel;
    NSMutableArray *_programArray;
}

@property(retain, nonatomic) NSMutableArray *programArray; // @synthesize programArray=_programArray;
@property(retain, nonatomic) MarqueeLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) LZMLiveModel *channelModel; // @synthesize channelModel=_channelModel;
- (void).cxx_destruct;
- (void)configSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


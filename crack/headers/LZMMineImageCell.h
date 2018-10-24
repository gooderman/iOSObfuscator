//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel, UIView, YYLabel;

@interface LZMMineImageCell : UITableViewCell
{
    NSString *_titleText;
    NSString *_imageStr;
    YYLabel *_titleLals;
    UIView *_bottomLine;
    UIImageView *_nextShow;
    UIImageView *_headImage;
    UILabel *_badgeLabel;
}

@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) UIImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) UIImageView *nextShow; // @synthesize nextShow=_nextShow;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) YYLabel *titleLals; // @synthesize titleLals=_titleLals;
@property(copy, nonatomic) NSString *imageStr; // @synthesize imageStr=_imageStr;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)makeConstraintSubviews;
- (void)buildUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIButton, UIView, YYLabel;

@interface LZMAllowDownloadCell : UITableViewCell
{
    NSString *_titleText;
    CDUnknownBlockType _allowDownloadBlock;
    YYLabel *_titleLals;
    UIView *_bottomLine;
    UIButton *_switchBTN;
}

@property(retain, nonatomic) UIButton *switchBTN; // @synthesize switchBTN=_switchBTN;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) YYLabel *titleLals; // @synthesize titleLals=_titleLals;
@property(copy, nonatomic) CDUnknownBlockType allowDownloadBlock; // @synthesize allowDownloadBlock=_allowDownloadBlock;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)switchBTNClick:(id)arg1;
- (void)layoutSubviews;
- (void)makeConstraintSubviews;
- (void)buildUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


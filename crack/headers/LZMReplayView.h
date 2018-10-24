//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LZMButton, LZMImageView, NSArray, UILabel;

@interface LZMReplayView : UIView
{
    NSArray *_rimage;
    CDUnknownBlockType _replayBlock;
    LZMImageView *_backgroundImage;
    UIView *_blackView;
    UILabel *_noticeLabel;
    LZMButton *_playButton;
}

@property(retain, nonatomic) LZMButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) UIView *blackView; // @synthesize blackView=_blackView;
@property(retain, nonatomic) LZMImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(copy, nonatomic) CDUnknownBlockType replayBlock; // @synthesize replayBlock=_replayBlock;
@property(retain, nonatomic) NSArray *rimage; // @synthesize rimage=_rimage;
- (void).cxx_destruct;
- (void)playButtonClick:(id)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end


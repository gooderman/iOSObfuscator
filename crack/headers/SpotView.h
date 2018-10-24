//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CloseButton, UIImageView, UILabel;

@interface SpotView : UIView
{
    UIImageView *_adImageView;
    CloseButton *_closeButton;
    CDUnknownBlockType _clickBlock;
    CDUnknownBlockType _closeBlock;
    UILabel *_label2;
}

@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) CloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onAdImageViewTap:(id)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (void)loadCloseButton;
- (void)loadAdTitle;
- (void)setImageUrl:(id)arg1 complete:(CDUnknownBlockType)arg2 click:(CDUnknownBlockType)arg3 close:(CDUnknownBlockType)arg4;
- (id)imageByResource:(id)arg1;
- (void)orientationDidChangeNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end


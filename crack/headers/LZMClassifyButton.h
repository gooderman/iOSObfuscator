//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface LZMClassifyButton : UIButton
{
    UIColor *_startColor;
    UIColor *_endColor;
}

@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(retain, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
- (void).cxx_destruct;
- (void)drawBackColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 StartColor:(id)arg2 EndColor:(id)arg3;

@end


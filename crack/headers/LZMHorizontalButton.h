//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface LZMHorizontalButton : UIButton
{
    double _imageWidth;
    double _imageHeight;
    double _titleWidth;
}

@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutTheSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


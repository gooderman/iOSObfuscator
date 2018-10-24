//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIColor.h"

@class NSString;

@interface UIColor (YYAdd)
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithRGB:(unsigned int)arg1 alpha:(double)arg2;
+ (id)colorWithRGBA:(unsigned int)arg1;
+ (id)colorWithRGB:(unsigned int)arg1;
+ (id)colorWithCyan:(double)arg1 magenta:(double)arg2 yellow:(double)arg3 black:(double)arg4 alpha:(double)arg5;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;
@property(readonly, nonatomic) NSString *colorSpaceString;
@property(readonly, nonatomic) int colorSpaceModel;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, nonatomic) double hue;
@property(readonly, nonatomic) double alpha;
@property(readonly, nonatomic) double blue;
@property(readonly, nonatomic) double green;
@property(readonly, nonatomic) double red;
- (_Bool)getCyan:(double *)arg1 magenta:(double *)arg2 yellow:(double *)arg3 black:(double *)arg4 alpha:(double *)arg5;
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 lightness:(double *)arg3 alpha:(double *)arg4;
- (id)colorByChangeHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)colorByAddColor:(id)arg1 blendMode:(int)arg2;
- (id)hexStringWithAlpha:(_Bool)arg1;
- (id)hexStringWithAlpha;
- (id)hexString;
- (unsigned int)rgbaValue;
- (unsigned int)rgbValue;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDAABaseModel.h"

@class NSDictionary, NSString;

@interface TDAADeviceHardwareConfig : TDAABaseModel
{
    int _brightness;
    NSString *_manufacture;
    NSString *_brand;
    NSString *_model;
    NSString *_pixel;
    long long _totalDiskSpace;
    NSDictionary *_support;
    NSDictionary *_cpuusage;
    NSDictionary *_memoryusage;
}

@property(retain, nonatomic) NSDictionary *memoryusage; // @synthesize memoryusage=_memoryusage;
@property(retain, nonatomic) NSDictionary *cpuusage; // @synthesize cpuusage=_cpuusage;
@property(retain, nonatomic) NSDictionary *support; // @synthesize support=_support;
@property(nonatomic) int brightness; // @synthesize brightness=_brightness;
@property(nonatomic) long long totalDiskSpace; // @synthesize totalDiskSpace=_totalDiskSpace;
@property(retain, nonatomic) NSString *pixel; // @synthesize pixel=_pixel;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *manufacture; // @synthesize manufacture=_manufacture;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end


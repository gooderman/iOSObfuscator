//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRAgentLaunchAdConfiguration.h"

@class NSString;

@interface DRAgentLaunchImageAdConfiguration : DRAgentLaunchAdConfiguration
{
    _Bool _GIFImageCycleOnce;
    NSString *_imageNameOrURLString;
    long long _contentMode;
}

+ (id)defaultConfiguration;
@property(nonatomic) _Bool GIFImageCycleOnce; // @synthesize GIFImageCycleOnce=_GIFImageCycleOnce;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(copy, nonatomic) NSString *imageNameOrURLString; // @synthesize imageNameOrURLString=_imageNameOrURLString;
- (void).cxx_destruct;

@end


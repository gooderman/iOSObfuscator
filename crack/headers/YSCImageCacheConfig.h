//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YSCImageCacheConfig : NSObject
{
    _Bool _shouldDecompressImages;
    _Bool _shouldDisableiCloud;
    _Bool _shouldCacheImagesInMemory;
    unsigned long long _diskCacheReadingOptions;
    long long _maxCacheAge;
    unsigned long long _maxCacheSize;
}

@property(nonatomic) unsigned long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(nonatomic) long long maxCacheAge; // @synthesize maxCacheAge=_maxCacheAge;
@property(nonatomic) unsigned long long diskCacheReadingOptions; // @synthesize diskCacheReadingOptions=_diskCacheReadingOptions;
@property(nonatomic) _Bool shouldCacheImagesInMemory; // @synthesize shouldCacheImagesInMemory=_shouldCacheImagesInMemory;
@property(nonatomic) _Bool shouldDisableiCloud; // @synthesize shouldDisableiCloud=_shouldDisableiCloud;
@property(nonatomic) _Bool shouldDecompressImages; // @synthesize shouldDecompressImages=_shouldDecompressImages;
- (id)init;

@end


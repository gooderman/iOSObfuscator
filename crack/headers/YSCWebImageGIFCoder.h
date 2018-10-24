//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YSCWebImageCoder.h"

@class NSString;

@interface YSCWebImageGIFCoder : NSObject <YSCWebImageCoder>
{
}

+ (id)sharedCoder;
- (id)encodedDataWithImage:(id)arg1 format:(long long)arg2;
- (_Bool)canEncodeToFormat:(long long)arg1;
- (id)decompressedImageWithImage:(id)arg1 data:(id *)arg2 options:(id)arg3;
- (float)YSC_frameDurationAtIndex:(unsigned long long)arg1 source:(struct CGImageSource *)arg2;
- (id)decodedImageWithData:(id)arg1;
- (_Bool)canDecodeFromData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


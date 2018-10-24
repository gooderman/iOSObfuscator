//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YSCHTTPResponseSerializer.h"

@interface YSCImageResponseSerializer : YSCHTTPResponseSerializer
{
    _Bool _automaticallyInflatesResponseImage;
    double _imageScale;
}

@property(nonatomic) _Bool automaticallyInflatesResponseImage; // @synthesize automaticallyInflatesResponseImage=_automaticallyInflatesResponseImage;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)init;

@end


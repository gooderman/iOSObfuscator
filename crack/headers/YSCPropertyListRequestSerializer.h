//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YSCHTTPRequestSerializer.h"

@interface YSCPropertyListRequestSerializer : YSCHTTPRequestSerializer
{
    unsigned long long _format;
    unsigned long long _writeOptions;
}

+ (id)serializerWithFormat:(unsigned long long)arg1 writeOptions:(unsigned long long)arg2;
+ (id)serializer;
@property(nonatomic) unsigned long long writeOptions; // @synthesize writeOptions=_writeOptions;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;

@end


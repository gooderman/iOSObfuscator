//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVEStreamPlayURLInfo : NSObject
{
    _Bool _vip_only;
    long long _ID;
    NSString *_title;
    long long _quality;
}

+ (id)tve_modelMapPropertyNames;
@property(nonatomic) _Bool vip_only; // @synthesize vip_only=_vip_only;
@property(nonatomic) long long quality; // @synthesize quality=_quality;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)description;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface GDTNativeAdData : NSObject
{
    _Bool _isAppAd;
    _Bool _isExposured;
    _Bool _isThreeImgsAd;
    NSDictionary *_properties;
    NSString *_rl;
    NSString *_apUrl;
    NSString *_itunesId;
    NSString *_campaignId;
    NSString *_providerId;
    NSString *_urlScheme;
    NSString *_cl;
    NSString *_appname;
    long long _productType;
    NSString *_traceId;
}

@property(nonatomic) _Bool isThreeImgsAd; // @synthesize isThreeImgsAd=_isThreeImgsAd;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) long long productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *appname; // @synthesize appname=_appname;
@property(copy, nonatomic) NSString *cl; // @synthesize cl=_cl;
@property(retain, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
@property(nonatomic) _Bool isExposured; // @synthesize isExposured=_isExposured;
@property(nonatomic) _Bool isAppAd; // @synthesize isAppAd=_isAppAd;
@property(retain, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *itunesId; // @synthesize itunesId=_itunesId;
@property(retain, nonatomic) NSString *apUrl; // @synthesize apUrl=_apUrl;
@property(retain, nonatomic) NSString *rl; // @synthesize rl=_rl;
@property(readonly, retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (_Bool)equalsAdData:(id)arg1;
- (_Bool)isAvailableAd;
- (void)setProperties:(id)arg1;

@end


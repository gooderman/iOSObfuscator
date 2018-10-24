//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAdUnit, NSDictionary, NSString;

@interface IMPreloadRequestData : NSObject
{
    long long _placementId;
    NSDictionary *_extras;
    NSString *_keywords;
    IMAdUnit *_adunit;
}

@property(retain, nonatomic) IMAdUnit *adunit; // @synthesize adunit=_adunit;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(nonatomic) long long placementId; // @synthesize placementId=_placementId;
- (void).cxx_destruct;
- (_Bool)isEqualTo:(id)arg1;

@end


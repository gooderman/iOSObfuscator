//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVEBaseModel.h"

@class NSArray, NSString;

@interface TVEAd : TVEBaseModel
{
    long long _ID;
    NSString *_name;
    NSString *_refresh_interval;
    NSArray *_units;
}

+ (id)tve_objectClassInArray;
@property(retain, nonatomic) NSArray *units; // @synthesize units=_units;
@property(copy, nonatomic) NSString *refresh_interval; // @synthesize refresh_interval=_refresh_interval;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVEConfigProvidersModel : NSObject
{
    long long _ID;
    long long _provider;
    NSString *_name;
    NSString *_app_id;
    NSString *_app_key;
}

@property(copy, nonatomic) NSString *app_key; // @synthesize app_key=_app_key;
@property(copy, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long provider; // @synthesize provider=_provider;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)arg1;

@end


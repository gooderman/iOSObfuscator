//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LZMUpdateMessageModel : NSObject
{
    NSString *_appurl;
    NSString *_msg;
    NSString *_title;
    NSString *_ver;
    long long _force;
    long long _freq;
}

@property(nonatomic) long long freq; // @synthesize freq=_freq;
@property(nonatomic) long long force; // @synthesize force=_force;
@property(copy, nonatomic) NSString *ver; // @synthesize ver=_ver;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *appurl; // @synthesize appurl=_appurl;
- (void).cxx_destruct;

@end


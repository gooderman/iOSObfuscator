//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface InMobi_AvidEvent : NSObject
{
    NSString *_name;
    NSString *_type;
    NSDictionary *_data;
}

+ (id)eventWithName:(id)arg1 type:(id)arg2 data:(id)arg3;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 type:(id)arg2 data:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface IMWebToNativeCall : NSObject
{
    NSString *_scheme;
    NSString *_command;
    NSDictionary *_params;
}

@property(readonly) NSDictionary *params; // @synthesize params=_params;
@property(readonly) NSString *command; // @synthesize command=_command;
@property(readonly) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
- (id)description;
- (id)initWithScheme:(id)arg1 command:(id)arg2 params:(id)arg3;

@end


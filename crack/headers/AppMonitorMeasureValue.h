//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface AppMonitorMeasureValue : NSObject
{
    _Bool _isFinish;
    NSNumber *_offset;
    NSNumber *_value;
}

@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool isFinish; // @synthesize isFinish=_isFinish;
- (void).cxx_destruct;
- (id)jsonDict;
- (void)merge:(id)arg1;
- (id)init;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 offset:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end


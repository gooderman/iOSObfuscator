//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface AppMonitorConfigDataValues : NSObject
{
    int _include;
    NSArray *_values;
}

@property int include; // @synthesize include=_include;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (int)getInclude;
- (id)getValues;
- (id)initWithValues:(id)arg1 Include:(int)arg2;

@end


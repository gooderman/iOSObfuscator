//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMVastNodeBaseParser.h"

@class NSMutableArray, NSString;

@interface IMCompanionTrackingEventsParser : IMVastNodeBaseParser
{
    NSMutableArray *_trackingEventsArray;
    NSString *_trackerID;
}

+ (id)parserElementName;
@property(retain, nonatomic) NSString *trackerID; // @synthesize trackerID=_trackerID;
@property(retain, nonatomic) NSMutableArray *trackingEventsArray; // @synthesize trackingEventsArray=_trackingEventsArray;
- (void).cxx_destruct;
- (void)endParser:(id)arg1;
- (id)createParserForElement:(id)arg1 attributes:(id)arg2;

@end


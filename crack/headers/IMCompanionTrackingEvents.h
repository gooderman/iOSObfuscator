//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface IMCompanionTrackingEvents : NSObject <NSCoding>
{
    NSMutableArray *_companionTrackers;
    NSString *_companionTrackerID;
}

@property(retain, nonatomic) NSString *companionTrackerID; // @synthesize companionTrackerID=_companionTrackerID;
@property(retain, nonatomic) NSMutableArray *companionTrackers; // @synthesize companionTrackers=_companionTrackers;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


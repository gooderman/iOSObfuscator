//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GDT_OfflineCache, GDT_Viewability, NSMutableDictionary;

@interface GDT_SDKConfig : NSObject
{
    GDT_OfflineCache *_offlineCache;
    GDT_Viewability *_viewability;
    NSMutableDictionary *_companies;
}

@property(retain, nonatomic) NSMutableDictionary *companies; // @synthesize companies=_companies;
@property(retain, nonatomic) GDT_Viewability *viewability; // @synthesize viewability=_viewability;
@property(retain, nonatomic) GDT_OfflineCache *offlineCache; // @synthesize offlineCache=_offlineCache;
- (void).cxx_destruct;

@end


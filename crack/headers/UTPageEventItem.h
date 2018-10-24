//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, NSURL;

@interface UTPageEventItem : NSObject
{
    _Bool _isSkip;
    _Bool _isH52001;
    _Bool _hasAppeared;
    long long _pageAppearTime;
    NSString *_pageRefer;
    NSString *_pageName;
    NSMutableDictionary *_pageProperties;
    NSURL *_pageUrl;
}

@property(retain) NSURL *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain) NSMutableDictionary *pageProperties; // @synthesize pageProperties=_pageProperties;
@property _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property _Bool isH52001; // @synthesize isH52001=_isH52001;
@property _Bool isSkip; // @synthesize isSkip=_isSkip;
@property(retain) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain) NSString *pageRefer; // @synthesize pageRefer=_pageRefer;
@property long long pageAppearTime; // @synthesize pageAppearTime=_pageAppearTime;
- (void).cxx_destruct;
- (void)refreshWhenSwitchForeGround;
- (void)refreshWhenSwitchBackGround;
- (id)init;

@end


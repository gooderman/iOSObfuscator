//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GDTVAMonitorConfig, NSString;

@interface VBOpenResult : NSObject
{
    _Bool _canOpen;
    NSString *_url;
    NSString *_redirectURL;
    GDTVAMonitorConfig *_config;
}

@property(copy, nonatomic) GDTVAMonitorConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool canOpen; // @synthesize canOpen=_canOpen;
- (void).cxx_destruct;
- (id)init;

@end


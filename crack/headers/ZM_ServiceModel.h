//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ZM_ServiceModel : NSObject
{
    NSString *_serviceType;
    NSString *_serviceId;
    NSString *_controlURL;
    NSString *_eventSubURL;
    NSString *_SCPDURL;
}

@property(copy, nonatomic) NSString *SCPDURL; // @synthesize SCPDURL=_SCPDURL;
@property(copy, nonatomic) NSString *eventSubURL; // @synthesize eventSubURL=_eventSubURL;
@property(copy, nonatomic) NSString *controlURL; // @synthesize controlURL=_controlURL;
@property(copy, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (void)setArray:(id)arg1;

@end


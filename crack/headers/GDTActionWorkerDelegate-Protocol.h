//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GDTActionWorker, NSData, NSError, NSURLResponse;

@protocol GDTActionWorkerDelegate <NSObject>
- (void)actionWorker:(GDTActionWorker *)arg1 didFinishWithError:(NSError *)arg2;
- (void)actionWorker:(GDTActionWorker *)arg1 didReceiveData:(NSData *)arg2 isLocal:(_Bool)arg3;
- (void)actionWorker:(GDTActionWorker *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
@end


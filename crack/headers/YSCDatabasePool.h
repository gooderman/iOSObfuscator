//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface YSCDatabasePool : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableArray *_databaseInPool;
    NSMutableArray *_databaseOutPool;
    int _openFlags;
    NSString *_path;
    id _delegate;
    unsigned long long _maximumNumberOfDatabasesToCreate;
    NSString *_vfsName;
}

+ (Class)databaseClass;
+ (id)databasePoolWithURL:(id)arg1 flags:(int)arg2;
+ (id)databasePoolWithPath:(id)arg1 flags:(int)arg2;
+ (id)databasePoolWithURL:(id)arg1;
+ (id)databasePoolWithPath:(id)arg1;
@property(copy) NSString *vfsName; // @synthesize vfsName=_vfsName;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property unsigned long long maximumNumberOfDatabasesToCreate; // @synthesize maximumNumberOfDatabasesToCreate=_maximumNumberOfDatabasesToCreate;
@property id delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (void)inImmediateTransaction:(CDUnknownBlockType)arg1;
- (void)inExclusiveTransaction:(CDUnknownBlockType)arg1;
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)beginTransaction:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (void)releaseAllDatabases;
@property(readonly, nonatomic) unsigned long long countOfOpenDatabases;
@property(readonly, nonatomic) unsigned long long countOfCheckedOutDatabases;
@property(readonly, nonatomic) unsigned long long countOfCheckedInDatabases;
- (id)db;
- (void)pushDatabaseBackInPool:(id)arg1;
- (void)executeLocked:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1 flags:(int)arg2;
- (id)initWithPath:(id)arg1 flags:(int)arg2;
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;

@end


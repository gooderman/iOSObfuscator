//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMAssetCacheDAO : NSObject
{
}

- (id)queryToGetAllHashValuesStored;
- (id)queryToResetExpiryOfAssetWithKey:(id)arg1;
- (id)queryToUpdateTimeStampOfAssetForKey:(id)arg1;
- (id)getExpiredAdsQuery;
- (id)deleteTuplesQueryFromTable:(id)arg1 forKeys:(id)arg2;
- (id)deleteTupleFromTable:(id)arg1 withHash:(id)arg2;
- (id)selectTuplesInAscendingOrderOfExpiry;
- (id)selectTuplesInAscendingOrderOfTimestamp;
- (id)selectTupleFromTable:(id)arg1 withHash:(id)arg2;
- (id)queryToUpdateTableNoOfTries:(long long)arg1 forKey:(id)arg2;
- (id)queryToInsertIntoTableforKey:(id)arg1;
- (id)queryToInsertIntoTableHash:(id)arg1 withName:(id)arg2 timestamp:(double)arg3 expiry:(double)arg4 staleWhileRevalidate:(double)arg5;
- (id)createRetryTableQuery;
- (id)deleteRetriesQuery;
- (id)createTableQuery;
- (void)deleteRetries;
- (void)insertQuery:(id)arg1;
- (id)tuplesForQuery:(id)arg1;
- (void)resetExpiryForKey:(id)arg1;
- (void)updateTimeStampForKey:(id)arg1;
- (id)expiredAds;
- (void)updateRetryTableWithNoOfTries:(long long)arg1 forKey:(id)arg2;
- (void)insertIntoRetryTable:(id)arg1;
- (void)insertToTableHash:(id)arg1 withName:(id)arg2 timestamp:(double)arg3 expiry:(double)arg4 staleWhileRevalidate:(double)arg5;
- (void)deleteTuplesFromTable:(id)arg1 forKeys:(id)arg2;
- (id)tuplesWithAllHashValues;
- (id)tuplesInAscendingOrderOfTimestamp;
- (id)tupleFromTable:(id)arg1 withHash:(id)arg2;
- (id)tuplesInAscendingOrderOfExpiry;
- (_Bool)createTable;
- (id)init;

@end


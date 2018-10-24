//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMUShareCommonModel.h"

@class NSDictionary, NSString;

@interface UMStatsModel : UMUShareCommonModel
{
    NSString *_name;
    NSString *_pf;
    NSString *_tag;
    NSDictionary *_paramDict;
}

@property(retain, nonatomic) NSDictionary *paramDict; // @synthesize paramDict=_paramDict;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *pf; // @synthesize pf=_pf;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)generateDeleteSQLWithSQLStringArray:(id)arg1 withSQLColumnValueArray:(id)arg2;
- (void)generateSaveSQLWithSQLStringArray:(id)arg1 withSQLColumnValueArray:(id)arg2;
- (void)parseDictionary:(id)arg1;
- (id)toSQLMappedDictionary;
- (id)toDictionary;

@end


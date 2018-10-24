//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LKDBColumnDes : NSObject
{
    _Bool _primaryKey;
    _Bool _unique;
    _Bool _notNull;
    _Bool _autoincrement;
    _Bool _useless;
    NSString *_columnName;
    NSString *_check;
    NSString *_defaultValue;
    NSString *_foreignKey;
}

@property(nonatomic, getter=isUseless) _Bool useless; // @synthesize useless=_useless;
@property(nonatomic, getter=isAutoincrement) _Bool autoincrement; // @synthesize autoincrement=_autoincrement;
@property(nonatomic, getter=isNotNull) _Bool notNull; // @synthesize notNull=_notNull;
@property(nonatomic, getter=isUnique) _Bool unique; // @synthesize unique=_unique;
@property(nonatomic, getter=isPrimaryKey) _Bool primaryKey; // @synthesize primaryKey=_primaryKey;
@property(copy, nonatomic) NSString *foreignKey; // @synthesize foreignKey=_foreignKey;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *check; // @synthesize check=_check;
@property(copy, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isCustomColumnName:(id)arg1;
- (id)checkStingNull:(id)arg1;
- (id)isNotNull:(_Bool)arg1;
- (id)isUnique:(_Bool)arg1;
- (id)isAutoincrement:(_Bool)arg1;
- (id)isPrimKey:(_Bool)arg1;
- (id)customModifyWithPK:(_Bool)arg1 autoIn:(_Bool)arg2 unique:(_Bool)arg3 isNotNull:(_Bool)arg4 check:(id)arg5 defaultV:(id)arg6 foreignKey:(id)arg7;
- (id)finishModify;
- (id)initWithFKFiekdUnique:(_Bool)arg1 isNotNull:(_Bool)arg2 check:(id)arg3 default:(id)arg4 foreignKey:(id)arg5;
- (id)initWithgeneralFieldWithAuto:(_Bool)arg1 unique:(_Bool)arg2 isNotNull:(_Bool)arg3 check:(id)arg4 defaultVa:(id)arg5;
- (id)initWithAuto:(_Bool)arg1 isNotNull:(_Bool)arg2 check:(id)arg3 defaultVa:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BCUtil : NSObject
{
}

+ (id)checkUrlScheme:(id)arg1;
+ (id)checkUrlStringScheme:(id)arg1;
+ (void)createFolderIfNotExist:(id)arg1;
+ (_Bool)checkUrlHasParam:(id)arg1 withParamKey:(id)arg2;
+ (id)urlWithremoveParams:(id)arg1;
+ (id)combineUriWithEvent:(id)arg1 path:(id)arg2 params:(id)arg3;
+ (id)parseParamsFromsString:(id)arg1;
+ (id)stringFromDictionary:(id)arg1 needURLEncoding:(_Bool)arg2;
+ (id)stringFromHandlerResult:(id)arg1 needURLEncoding:(_Bool)arg2;
+ (id)addParamToUrl:(id)arg1 paramKey:(id)arg2 paramValue:(id)arg3;
+ (id)serializeURL:(id)arg1 params:(id)arg2 needURLEncoding:(_Bool)arg3;
+ (id)serializeURL:(id)arg1 params:(id)arg2;

@end


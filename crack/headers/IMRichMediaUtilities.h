//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMRichMediaUtilities : NSObject
{
}

+ (void)fireEvent:(id)arg1 forParam:(id)arg2 forScheme:(id)arg3 onRenderView:(id)arg4;
+ (void)fireErrorEvent:(id)arg1 onCommand:(id)arg2 forScheme:(id)arg3 onRenderView:(id)arg4;
+ (id)getJSNamespace:(id)arg1;
+ (_Bool)boolFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(_Bool)arg3;
+ (int)intFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(int)arg3;
+ (id)checkForTelAndReturnTelprompt:(id)arg1;

@end


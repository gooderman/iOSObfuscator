//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BaiduMobAdWebBridgeUtils : NSObject
{
}

+ (void)evalScript:(id)arg1 onWebView:(id)arg2;
+ (void)nativeFireEvent:(id)arg1 webView:(id)arg2 result:(id)arg3 token:(id)arg4;
+ (void)internalExcuteWithRender:(id)arg1 webView:(id)arg2 target:(id)arg3 selector:(id)arg4 param:(id)arg5 token:(id)arg6;
+ (id)buildPattenStrIfHasParam:(_Bool)arg1 hasCallBack:(_Bool)arg2;
+ (_Bool)hasCallback:(id)arg1;
+ (_Bool)hasParam:(id)arg1;
+ (id)getUrlStr:(id)arg1 withResult:(id)arg2 atIndex:(unsigned long long)arg3;
+ (_Bool)excuteCommandForRender:(id)arg1 webView:(id)arg2 request:(id)arg3;
+ (id)parseObjToJSON:(id)arg1;
+ (id)parseDictionaryToJSON:(id)arg1;
+ (id)repairJSONforJS:(id)arg1;
+ (id)parseJsonStringToDic:(id)arg1;

@end


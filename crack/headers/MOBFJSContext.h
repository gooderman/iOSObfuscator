//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface MOBFJSContext : NSObject <UIWebViewDelegate>
{
    id _jsParser;
    id _webViewDelegate;
    NSMutableDictionary *_methods;
    NSMutableSet *_pluginNames;
}

+ (id)defaultContext;
@property(retain, nonatomic) NSMutableSet *pluginNames; // @synthesize pluginNames=_pluginNames;
@property(retain, nonatomic) NSMutableDictionary *methods; // @synthesize methods=_methods;
@property(nonatomic) __weak id webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
@property(retain, nonatomic) id jsParser; // @synthesize jsParser=_jsParser;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)_convertHttpStringParamValue:(id)arg1;
- (id)_convertHttpArrayParamValue:(id)arg1;
- (void)registerParseXMLMethod;
- (void)registerDownloadFileMethod;
- (void)registerIsPluginRegistedMethod;
- (void)registerIsPadMethod;
- (void)registerIsMultitaskingSupportedMethod;
- (void)registerOpenURLMethod;
- (void)registerCanOpenURLMethod;
- (void)registerGetAppConfigMethod;
- (void)registerGetCacheDataMethod;
- (void)registerSetCacheDataMethod;
- (void)registerHTTPMethod;
- (void)registerLogMethod;
- (void)registerMethods;
- (void)callback:(id)arg1 resultData:(id)arg2;
- (void)setupNewJSParser:(id)arg1;
- (void)runScript:(id)arg1;
- (void)loadPlugin:(id)arg1 forName:(id)arg2;
- (void)loadPluginWithPath:(id)arg1 forName:(id)arg2;
- (id)callJSMethod:(id)arg1 arguments:(id)arg2;
- (void)registerJSMethod:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithWebView:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


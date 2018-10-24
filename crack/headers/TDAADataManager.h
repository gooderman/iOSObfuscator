//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TDAADataManager : NSObject
{
    _Bool _isAppInitialized;
    _Bool _isAntiCheatingInitialized;
    unsigned int _activeSubmoduleTag;
    NSMutableDictionary *_sdkManagerDic;
    NSMutableDictionary *_sessionDic;
    long long _lastProecessTime;
    long long _lastAppListTime;
    long long _sdkInitializedTime;
    long long _lastSendTDIDTime_WiFi;
    long long _lastSendTDIDTime_WWAN;
}

+ (id)sharedDataManager;
@property(nonatomic) _Bool isAntiCheatingInitialized; // @synthesize isAntiCheatingInitialized=_isAntiCheatingInitialized;
@property(nonatomic) long long lastSendTDIDTime_WWAN; // @synthesize lastSendTDIDTime_WWAN=_lastSendTDIDTime_WWAN;
@property(nonatomic) long long lastSendTDIDTime_WiFi; // @synthesize lastSendTDIDTime_WiFi=_lastSendTDIDTime_WiFi;
@property(nonatomic) long long sdkInitializedTime; // @synthesize sdkInitializedTime=_sdkInitializedTime;
@property(nonatomic) long long lastAppListTime; // @synthesize lastAppListTime=_lastAppListTime;
@property(nonatomic) long long lastProecessTime; // @synthesize lastProecessTime=_lastProecessTime;
@property(retain, nonatomic) NSMutableDictionary *sessionDic; // @synthesize sessionDic=_sessionDic;
@property(nonatomic) _Bool isAppInitialized; // @synthesize isAppInitialized=_isAppInitialized;
@property(retain, nonatomic) NSMutableDictionary *sdkManagerDic; // @synthesize sdkManagerDic=_sdkManagerDic;
@property(nonatomic) unsigned int activeSubmoduleTag; // @synthesize activeSubmoduleTag=_activeSubmoduleTag;
- (void).cxx_destruct;
- (id)unArchiveDictionaryWithFileName:(id)arg1;
- (id)compatibleAdTracking;
- (void)unarchiveFromFile;
- (void)archiveToFile;
- (id)init;

@end


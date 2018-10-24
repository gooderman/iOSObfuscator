//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMBaseProcessor.h"

#import "IMContentCacheManagerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class IMDeviceVolumeManager, NSMutableDictionary, NSString;

@interface IMDeviceProcessor : IMBaseProcessor <IMContentCacheManagerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIAlertViewDelegate>
{
    _Bool _isListeningForGetDeviceVolume;
    _Bool _isListeningForVolumeChange;
    _Bool _isListeningForDeviceMuted;
    IMDeviceVolumeManager *_deviceVolumeManager;
    NSString *_isHeadPhonePluggedScheme;
    NSString *_listenDeviceVolumeScheme;
    NSString *_listenVolumeChangeScheme;
    NSString *_listenDeviceMutedScheme;
    void *_volumeChangeContext;
    NSMutableDictionary *_saveContentDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *saveContentDictionary; // @synthesize saveContentDictionary=_saveContentDictionary;
@property(nonatomic) void *volumeChangeContext; // @synthesize volumeChangeContext=_volumeChangeContext;
@property(nonatomic) _Bool isListeningForDeviceMuted; // @synthesize isListeningForDeviceMuted=_isListeningForDeviceMuted;
@property(nonatomic) _Bool isListeningForVolumeChange; // @synthesize isListeningForVolumeChange=_isListeningForVolumeChange;
@property(retain, nonatomic) NSString *listenDeviceMutedScheme; // @synthesize listenDeviceMutedScheme=_listenDeviceMutedScheme;
@property(retain, nonatomic) NSString *listenVolumeChangeScheme; // @synthesize listenVolumeChangeScheme=_listenVolumeChangeScheme;
@property(retain, nonatomic) NSString *listenDeviceVolumeScheme; // @synthesize listenDeviceVolumeScheme=_listenDeviceVolumeScheme;
@property(nonatomic) _Bool isListeningForGetDeviceVolume; // @synthesize isListeningForGetDeviceVolume=_isListeningForGetDeviceVolume;
@property(retain, nonatomic) NSString *isHeadPhonePluggedScheme; // @synthesize isHeadPhonePluggedScheme=_isHeadPhonePluggedScheme;
@property(nonatomic) __weak IMDeviceVolumeManager *deviceVolumeManager; // @synthesize deviceVolumeManager=_deviceVolumeManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)findSystemVolumeAndFire:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeListeningToDeviceVolumeListener;
- (void)stopListeningToDeviceVolume;
- (void)startListeningToDeviceVolume;
- (void)fireDeviceMuted:(_Bool)arg1 withScheme:(id)arg2;
- (void)listenDeviceMutedEventsWithParams:(id)arg1 withScheme:(id)arg2;
- (void)fireVolumeChange:(float)arg1 forScheme:(id)arg2;
- (void)listenVolumeChangeEventWithParams:(id)arg1 withScheme:(id)arg2;
- (void)fireDeviceVolume:(float)arg1 forScheme:(id)arg2;
- (void)listenDeviceVolumeChangeEventWithParams:(id)arg1 withScheme:(id)arg2;
- (void)setDeviceVolume:(id)arg1 withScheme:(id)arg2;
- (void)fireShowEndCardWithParams:(id)arg1 withScheme:(id)arg2;
- (void)fireFetchedBlob:(id)arg1 withScheme:(id)arg2 atCallBack:(id)arg3;
- (void)fetchSavedBlobWithParams:(id)arg1 withScheme:(id)arg2;
- (void)saveBlobWithParams:(id)arg1 withScheme:(id)arg2;
- (void)contentCacheManagerFailed:(id)arg1;
- (void)cancelSaveContentWithParams:(id)arg1 withScheme:(id)arg2;
- (void)saveContentWithParams:(id)arg1 withScheme:(id)arg2;
- (void)fireHeadphoneStatus:(_Bool)arg1 withScheme:(id)arg2;
- (_Bool)isHeadPhonePluggedIn;
- (void)audioRouteChangeEvent:(id)arg1;
- (void)listenHeadphoneStatusWithParams:(id)arg1 withScheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


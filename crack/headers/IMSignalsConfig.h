//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMConfig.h"

#import "IMConfig.h"

@class IMSignalIceConfig, NSString;

@interface IMSignalsConfig : IMConfig <IMConfig>
{
    IMSignalIceConfig *_ice;
}

@property(retain, nonatomic) IMSignalIceConfig *ice; // @synthesize ice=_ice;
- (void).cxx_destruct;
- (_Bool)operatorInfoCollectionEnabled;
- (_Bool)isValid;
- (id)getType;
- (id)toDictionary;
- (_Bool)updatefromDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


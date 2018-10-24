//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YYModel.h"

@class NSArray, NSString;

@interface LZMActorInfoModel : NSObject <YYModel>
{
    NSString *_name;
    NSString *_gender;
    NSString *_country;
    NSString *_birthday;
    NSString *_horoscope;
    NSString *_occupation;
    NSString *_intro;
    long long _actorId;
    NSArray *_rimage;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *rimage; // @synthesize rimage=_rimage;
@property(nonatomic) long long actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *occupation; // @synthesize occupation=_occupation;
@property(copy, nonatomic) NSString *horoscope; // @synthesize horoscope=_horoscope;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


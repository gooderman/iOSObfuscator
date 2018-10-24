//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TDAAEvoCrypto : NSObject
{
}

+ (id)salt;
+ (id)iv;
+ (id)password;
+ (id)AES128DecryptWithJSONObject:(id)arg1;
+ (id)AES128EncryptWithJSONObject:(id)arg1;
+ (id)AES128DecryptWithData:(id)arg1;
+ (id)AES128EncryptWithData:(id)arg1;
+ (id)AES128Operation:(unsigned int)arg1 data:(id)arg2 key:(id)arg3 iv:(id)arg4;
+ (id)hexStringFromData:(id)arg1;
+ (id)calculateDerivedKey:(id)arg1 salt:(id)arg2;
+ (id)derivedKey;

@end


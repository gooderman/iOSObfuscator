//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TDAAEvoCryptoUtil : NSObject
{
}

+ (id)readIV;
+ (id)readSalt;
+ (_Bool)saveSalt:(id)arg1 iv:(id)arg2;
+ (id)localSaltIVFilePath:(id)arg1;
+ (id)genRandDataLength:(unsigned long long)arg1;
+ (id)secRandomCopyBytes:(unsigned long long)arg1;
+ (int)getRandomNumber:(int)arg1 to:(int)arg2;
+ (id)rebuildPassword:(id)arg1 userdefault:(id)arg2 archive:(id)arg3;
+ (id)divide:(double)arg1;
+ (id)read;
+ (_Bool)write:(double)arg1;
+ (id)archivFilePath;
+ (id)localFilePath;
+ (id)readPassword;
+ (_Bool)savePassword:(double)arg1;

@end


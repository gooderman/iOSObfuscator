//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol IMVastNodeParser <NSObject>
+ (NSString *)parserElementName;
- (void)endParser:(id <IMVastNodeParser>)arg1;
- (void)foundCDATA:(NSString *)arg1;
- (_Bool)endParsingForElement:(NSString *)arg1 value:(NSString *)arg2;
- (id <IMVastNodeParser>)createParserForElement:(NSString *)arg1 attributes:(NSDictionary *)arg2;
@end


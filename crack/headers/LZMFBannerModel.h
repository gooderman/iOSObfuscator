//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface LZMFBannerModel : NSObject
{
    long long _this_type;
    long long _Top_ImageView_Model_id;
    NSString *_content;
    NSString *_name;
    NSArray *_rimage;
    NSString *_info;
    NSString *_cateString;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *cateString; // @synthesize cateString=_cateString;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSArray *rimage; // @synthesize rimage=_rimage;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long Top_ImageView_Model_id; // @synthesize Top_ImageView_Model_id=_Top_ImageView_Model_id;
@property(nonatomic) long long this_type; // @synthesize this_type=_this_type;
- (void).cxx_destruct;

@end


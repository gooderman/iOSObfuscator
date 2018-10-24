//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface LZMYuStream : NSObject
{
    _Bool _commentable;
    _Bool _blocked;
    _Bool _limited_free;
    _Bool _vip_only;
    long long _ID;
    NSString *_Description;
    NSString *_thumb;
    NSString *_released_at;
    NSArray *_play_urls;
    NSString *_bind_id;
    NSString *_cp;
    long long _vip_levels;
    NSString *_title;
    NSString *_icon;
    NSString *_thumb_ott;
    NSString *_expired_at;
    long long _sort;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(nonatomic) _Bool vip_only; // @synthesize vip_only=_vip_only;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *expired_at; // @synthesize expired_at=_expired_at;
@property(copy, nonatomic) NSString *thumb_ott; // @synthesize thumb_ott=_thumb_ott;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long vip_levels; // @synthesize vip_levels=_vip_levels;
@property(copy, nonatomic) NSString *cp; // @synthesize cp=_cp;
@property(copy, nonatomic) NSString *bind_id; // @synthesize bind_id=_bind_id;
@property(nonatomic) _Bool limited_free; // @synthesize limited_free=_limited_free;
@property(retain, nonatomic) NSArray *play_urls; // @synthesize play_urls=_play_urls;
@property(nonatomic) _Bool blocked; // @synthesize blocked=_blocked;
@property(copy, nonatomic) NSString *released_at; // @synthesize released_at=_released_at;
@property(nonatomic) _Bool commentable; // @synthesize commentable=_commentable;
@property(copy, nonatomic) NSString *thumb; // @synthesize thumb=_thumb;
@property(copy, nonatomic) NSString *Description; // @synthesize Description=_Description;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end


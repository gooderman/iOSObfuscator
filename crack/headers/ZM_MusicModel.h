//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ZM_MusicModel : NSObject
{
    NSString *_title;
    NSString *_album;
    NSString *_singerIcon;
    NSString *_singerImg;
    NSString *_url;
    NSString *_singer;
}

@property(copy, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *singerImg; // @synthesize singerImg=_singerImg;
@property(copy, nonatomic) NSString *singerIcon; // @synthesize singerIcon=_singerIcon;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end

